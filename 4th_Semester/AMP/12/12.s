.section .data
output:
	.ascii "20UCS304\n"
output_end:
	.equ len,output_end-output

.section .text
.globl _start
_start:

	movl $4,%eax
	movl $1,%ebx
	movl $output,%ecx
	movl $len,%edx
	int $0x80

movl $1,%eax
movl $0,%ebx
int $0x80
