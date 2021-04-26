.section .data
value:
	.int 10,30,5,90,80

.section .text
.globl _start

_start: nop	
	movl value,%eax
	movl $1,%edi

loop:
		movl value(,%edi,4),%ebx
		cmpl %eax,%ebx	
		cmovbe %ebx,%eax
		inc %edi
		cmp $5,%edi
		jne loop
	
movl $1,%eax
movl $0,%ebx
int $0x80
