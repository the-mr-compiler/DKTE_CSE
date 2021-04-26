.section .data
value:
    .int 0xfe

.section .text
.globl _start

_start: nop

    movl value, %ebx
    movl $22, %ecx
    xor %edx , %edx

back: 
    bsf %ebx, %ecx
    jz end
    btr %ecx, %ebx
    inc %edx
    jmp back

end: 
    movl $1, %eax
    movl $0,%ebx
    int $0x80
