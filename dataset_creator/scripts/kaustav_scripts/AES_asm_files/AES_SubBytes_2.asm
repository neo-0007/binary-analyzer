
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401a00 <AES_SubBytes>:
  401a00:	f3 0f 1e fa          	endbr64 
  401a04:	55                   	push   %rbp
  401a05:	48 89 e5             	mov    %rsp,%rbp
  401a08:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  401a0c:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  401a10:	48 c7 45 f0 00 00 00 	movq   $0x0,-0x10(%rbp)
  401a17:	00 
  401a18:	eb 65                	jmp    401a7f <AES_SubBytes+0x7f>
  401a1a:	48 c7 45 f8 00 00 00 	movq   $0x0,-0x8(%rbp)
  401a21:	00 
  401a22:	eb 4f                	jmp    401a73 <AES_SubBytes+0x73>
  401a24:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401a28:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401a2f:	00 
  401a30:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401a34:	48 01 c2             	add    %rax,%rdx
  401a37:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a3b:	48 01 d0             	add    %rdx,%rax
  401a3e:	0f b6 00             	movzbl (%rax),%eax
  401a41:	88 45 ef             	mov    %al,-0x11(%rbp)
  401a44:	0f b6 55 ef          	movzbl -0x11(%rbp),%edx
  401a48:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  401a4c:	48 01 d0             	add    %rdx,%rax
  401a4f:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  401a53:	48 8d 0c 95 00 00 00 	lea    0x0(,%rdx,4),%rcx
  401a5a:	00 
  401a5b:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  401a5f:	48 01 d1             	add    %rdx,%rcx
  401a62:	0f b6 00             	movzbl (%rax),%eax
  401a65:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  401a69:	48 01 ca             	add    %rcx,%rdx
  401a6c:	88 02                	mov    %al,(%rdx)
  401a6e:	48 83 45 f8 01       	addq   $0x1,-0x8(%rbp)
  401a73:	48 83 7d f8 03       	cmpq   $0x3,-0x8(%rbp)
  401a78:	76 aa                	jbe    401a24 <AES_SubBytes+0x24>
  401a7a:	48 83 45 f0 01       	addq   $0x1,-0x10(%rbp)
  401a7f:	48 83 7d f0 03       	cmpq   $0x3,-0x10(%rbp)
  401a84:	76 94                	jbe    401a1a <AES_SubBytes+0x1a>
  401a86:	90                   	nop
  401a87:	90                   	nop
  401a88:	5d                   	pop    %rbp
  401a89:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
