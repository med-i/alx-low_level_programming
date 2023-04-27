global main
extern printf

section .data
    hello db 'Hello, Holberton',0Ah, 0

section .text
main:
    push rbp
    mov rbp, rsp
    lea rdi, [rel hello]
    xor rax, rax
    call printf
    mov rsp, rbp
    pop rbp
    xor rax, rax
    ret
