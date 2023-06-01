section .data
    hello db "Hello, Holberton", 10 ; string to be printed

section .text
    global _main

extern printf

_main:
    ; push the format string to the stack
    push hello

    ; call printf
    mov eax, 0 ; return value placeholder
    call printf

    ; clean up the stack
    add esp, 4 ; remove the format string from the stack

    ; exit the program
    mov eax, 1 ; sys_exit syscall number
    xor ebx, ebx ; exit status 0
    int 0x80 ; make the syscall
