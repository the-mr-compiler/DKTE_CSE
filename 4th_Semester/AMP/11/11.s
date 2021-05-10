.section .data
	
	value1: .float 43.65
	value2: .int 22
	value3: .float 76.34
	value4: .float 3.1
	value5: .float 12.43
	value6: .int 6
	value7: .float 140.2
	value8: .float 94.21
	ans: .float 0

.section .text
	
.globl _start
_start:
	finit
	flds value1
	fidiv value2
	flds value3
	flds value4
	fmul %st(1), %st(0)
	fadd %st(2), %st(0)
	flds value5
	fimul value6
	flds value7
	flds value8
	fdivrp
	fsubr %st(1), %st(0)
	fdivr %st(2), %st(0)
	fsts ans
movl $1,%eax
movl $0,%ebx
int $0x80
