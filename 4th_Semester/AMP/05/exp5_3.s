.section .data 
dividend: 
	.quad 9572
divisor: 
	.int 50
quotient:
	.int 0
remainder:
	.int 0



.section .text
.globl _start
_start: nop


	movl dividend,%eax
	movl dividend+4,%edx
	movl divisor,%ecx
	divl %ecx
	movl %eax,quotient
	movl %edx,remainder

end: movl $1,%eax
movl $0,%ebx
int $0x80
