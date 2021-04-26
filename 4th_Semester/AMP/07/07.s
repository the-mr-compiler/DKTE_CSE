.section .data
value:
    .int 0xfe07e

.section .text
.globl _start

_start: nop
	movl value,%ebx
	jz end
	xor %edx, %edx
	movl %ebx, %ecx
back:
    addl %ebx, %ebx
	and %ecx, %ebx
	jz next

	inc %edx
	jmp back
next:
    addl $1,%edx

end:
    movl $1, %eax
	movl $0, %ebx
	.int 0x80