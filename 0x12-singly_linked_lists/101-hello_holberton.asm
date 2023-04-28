section .dataText
msg:	db "Hello, Holberton", 0
frt:	db "%s", 10, 0

extern printf

section .text

global main

main:
	push	rbp
	mov	rdi,frt
	mov	rsi,msg
	mov	rax,0
	call	printf
	pop	rbp
	mov	rax,0
	ret
