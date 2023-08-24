section .data
  helllo db "Hello, Holberton", ; Null-terminated string

section .text
global main

extern printf ; Declare the external printf function

main:
; Prepare arguments for printf
mov rdi, hello  ; Format string (1st argument)
call printf     ; Call the printf function

; Exit the program
mov rax, 60    ; syscall number for exit
xor rdi, rdi   ; Exit status 
syscall
