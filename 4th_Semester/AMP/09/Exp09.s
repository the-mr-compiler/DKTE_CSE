.section .data
	value1: .ascii "20UCS304"

.section .bss
	.lcomm output, 8

.section .text
.globl _start
_start:
	leal value1,%esi
	leal output,%edi
	movl $8, %ecx
	rep movsb

movl $1,%eax
movl $0,%ebx
int $0x80
