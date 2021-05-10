.section .data
value1:
	.quad 0x1122334455
value2: 
	.quad 0x99887766
	.section .bss
	.lcomm output,23


.section .text
.globl _start
_start: nop

	movl value1,%ebx
	movl value1+4,%eax
	movl value2,%edx
	movl value2+4,%ecx
	addl %ebx,%edx
	addl %eax,%ecx
	end: movl $1,%eax
	movl $0,%ebx
	int $0x80
