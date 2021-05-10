.section .data 
value1: 
	.quad 0xef
value2: 
	.quad 0x29
result:
	.quad 0



.section .text
.globl _start
_start: nop


	movl value1,%eax
	mull value2 
	movl %eax,result
	movl %edx,result+4

end: movl $1,%eax
movl $0,%ebx
int $0x80
