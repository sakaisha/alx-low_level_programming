section .data
    format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    mov rdi, format
    xor rax, rax
    call printf
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall
