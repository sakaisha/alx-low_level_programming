section .data
    format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8               ; Align stack
    mov rdi, format         ; Set format string
    call printf             ; Call printf
    add rsp, 8               ; Restore stack
    ret
