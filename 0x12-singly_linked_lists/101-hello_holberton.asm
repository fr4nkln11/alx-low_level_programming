global main
extern printf

section .text
	main:
		sub rsp, 8
		mov rdi, string
		call printf
		add rsp, 8
		ret

section .data
	string:
		db "Hello, Holberton", 0x0a, 0x00
