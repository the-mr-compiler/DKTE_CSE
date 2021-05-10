.section .data 

value1:
	.byte 0x8
value2: 
	.byte 0x7

.section .text
.globl _start
_start:nop

	movb value1,%al
	movb value2,%bl
	mulb %bl
	aam
	movl $1,%eax
	movl $0,%ebx
	int $0x80
