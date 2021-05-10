.section .data
	degree1:.float 45.0
	val180:.int 180

.section .bss
	.lcomm radian1, 4
	.lcomm result1, 4
	.lcomm result2, 4
	.lcomm result3, 4

.section .text
.globl _start
_start:
	finit
	flds degree1
	fidivs val180
	fldpi
	fmul %st(1), %st(0)
	fsts radian1
	fsin
	fsts result1
	flds radian1
	fcos
	fsts result2
	flds result2
	flds result1
	fdiv %st(1),%st(0)
	fsts result3
movl $1, %eax
movl $0, %ebx
int $0x80
