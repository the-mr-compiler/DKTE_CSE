.section .data
	value:.int 0x11224499

.section .text
.globl _start

_start: 
	movl $0xffddeecc,%eax
	movl $0xaabbccdd,%ebx
	movl value, %ecx
	pushl %ebx
	pushw %cx
	inc %esp
	popw %bx
	popl %edx
	
movl $1,%eax
movl $0,%ebx
int $0x80

