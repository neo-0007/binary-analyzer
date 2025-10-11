
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401c07 <AES_InvShiftRows>:
  401c07:	f3 0f 1e fa          	endbr64 
  401c0b:	55                   	push   %rbp
  401c0c:	48 89 e5             	mov    %rsp,%rbp
  401c0f:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  401c13:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c17:	48 83 c0 0c          	add    $0xc,%rax
  401c1b:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401c1f:	88 45 fe             	mov    %al,-0x2(%rbp)
  401c22:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c26:	48 83 c0 08          	add    $0x8,%rax
  401c2a:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401c2e:	48 83 c2 0c          	add    $0xc,%rdx
  401c32:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401c36:	88 42 01             	mov    %al,0x1(%rdx)
  401c39:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c3d:	48 83 c0 04          	add    $0x4,%rax
  401c41:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401c45:	48 83 c2 08          	add    $0x8,%rdx
  401c49:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401c4d:	88 42 01             	mov    %al,0x1(%rdx)
  401c50:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c54:	48 8d 50 04          	lea    0x4(%rax),%rdx
  401c58:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c5c:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401c60:	88 42 01             	mov    %al,0x1(%rdx)
  401c63:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c67:	0f b6 55 fe          	movzbl -0x2(%rbp),%edx
  401c6b:	88 50 01             	mov    %dl,0x1(%rax)
  401c6e:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c72:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401c76:	88 45 fe             	mov    %al,-0x2(%rbp)
  401c79:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c7d:	48 83 c0 04          	add    $0x4,%rax
  401c81:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401c85:	88 45 ff             	mov    %al,-0x1(%rbp)
  401c88:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c8c:	48 83 c0 08          	add    $0x8,%rax
  401c90:	0f b6 50 02          	movzbl 0x2(%rax),%edx
  401c94:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c98:	88 50 02             	mov    %dl,0x2(%rax)
  401c9b:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401c9f:	48 83 c0 0c          	add    $0xc,%rax
  401ca3:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401ca7:	48 83 c2 04          	add    $0x4,%rdx
  401cab:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401caf:	88 42 02             	mov    %al,0x2(%rdx)
  401cb2:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401cb6:	48 8d 50 08          	lea    0x8(%rax),%rdx
  401cba:	0f b6 45 fe          	movzbl -0x2(%rbp),%eax
  401cbe:	88 42 02             	mov    %al,0x2(%rdx)
  401cc1:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401cc5:	48 8d 50 0c          	lea    0xc(%rax),%rdx
  401cc9:	0f b6 45 ff          	movzbl -0x1(%rbp),%eax
  401ccd:	88 42 02             	mov    %al,0x2(%rdx)
  401cd0:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401cd4:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401cd8:	88 45 fe             	mov    %al,-0x2(%rbp)
  401cdb:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401cdf:	48 83 c0 04          	add    $0x4,%rax
  401ce3:	0f b6 50 03          	movzbl 0x3(%rax),%edx
  401ce7:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401ceb:	88 50 03             	mov    %dl,0x3(%rax)
  401cee:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401cf2:	48 83 c0 08          	add    $0x8,%rax
  401cf6:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401cfa:	48 83 c2 04          	add    $0x4,%rdx
  401cfe:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401d02:	88 42 03             	mov    %al,0x3(%rdx)
  401d05:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401d09:	48 83 c0 0c          	add    $0xc,%rax
  401d0d:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401d11:	48 83 c2 08          	add    $0x8,%rdx
  401d15:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401d19:	88 42 03             	mov    %al,0x3(%rdx)
  401d1c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401d20:	48 8d 50 0c          	lea    0xc(%rax),%rdx
  401d24:	0f b6 45 fe          	movzbl -0x2(%rbp),%eax
  401d28:	88 42 03             	mov    %al,0x3(%rdx)
  401d2b:	90                   	nop
  401d2c:	5d                   	pop    %rbp
  401d2d:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
