.section .data
a:
	.float 1.0
b:
	.float -4.0
c:
	.float 3.0
val4:
	.int 4
val2:
	.int 2
val2a:
	.float 0
res1:
	.float 0.0
res2:
	.float 0.0

.section .bss

.section .text 
.globl _start
_start: nop
	finit
	flds a
	fimul val4
	flds c
	fmul %st(1),%st(0)
	flds b
	fmul %st(0),%st(0)
	fsubp %st(1),%st(0)
	fsqrt
	flds b
	fchs
	fadd %st(1),%st(0)
	flds b
	fchs
	fsub %st(2),%st(0)
	flds a
	fimul val2
	fsts val2a
	fdivr %st(2),%st(0)
	fsts res1 
	flds val2a
	fdiv %st(2),%st(0)
	fsts res2

end:movl $1,%eax
movl $0,%ebx
int $0x80
