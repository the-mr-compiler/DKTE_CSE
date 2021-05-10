.section .data

output: .asciz "This is section %d\n"

.section .text

.globl _start
_start: nop

	pushl $1
	pushl $output
	call printf
	addl $8,%esp

	call f1
	
	pushl $3
	pushl $output
	call printf
	addl $8,%esp


movl $1,%eax
movl $0,%ebx
int $0x80

f1:
	pushl %ebp
	movl %esp,%ebp
	pushl $2
	pushl $output
	call printf
	addl $8,%esp
	movl %ebp,%esp
	popl %ebp
	ret	



