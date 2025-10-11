
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401ae0 <AES_ShiftRows>:
  401ae0:	f3 0f 1e fa          	endbr64 
  401ae4:	55                   	push   %rbp
  401ae5:	48 89 e5             	mov    %rsp,%rbp
  401ae8:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  401aec:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401af0:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401af4:	88 45 fe             	mov    %al,-0x2(%rbp)
  401af7:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401afb:	48 83 c0 04          	add    $0x4,%rax
  401aff:	0f b6 50 01          	movzbl 0x1(%rax),%edx
  401b03:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b07:	88 50 01             	mov    %dl,0x1(%rax)
  401b0a:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b0e:	48 83 c0 08          	add    $0x8,%rax
  401b12:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401b16:	48 83 c2 04          	add    $0x4,%rdx
  401b1a:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401b1e:	88 42 01             	mov    %al,0x1(%rdx)
  401b21:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b25:	48 83 c0 0c          	add    $0xc,%rax
  401b29:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401b2d:	48 83 c2 08          	add    $0x8,%rdx
  401b31:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401b35:	88 42 01             	mov    %al,0x1(%rdx)
  401b38:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b3c:	48 8d 50 0c          	lea    0xc(%rax),%rdx
  401b40:	0f b6 45 fe          	movzbl -0x2(%rbp),%eax
  401b44:	88 42 01             	mov    %al,0x1(%rdx)
  401b47:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b4b:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401b4f:	88 45 fe             	mov    %al,-0x2(%rbp)
  401b52:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b56:	48 83 c0 04          	add    $0x4,%rax
  401b5a:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401b5e:	88 45 ff             	mov    %al,-0x1(%rbp)
  401b61:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b65:	48 83 c0 08          	add    $0x8,%rax
  401b69:	0f b6 50 02          	movzbl 0x2(%rax),%edx
  401b6d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b71:	88 50 02             	mov    %dl,0x2(%rax)
  401b74:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b78:	48 83 c0 0c          	add    $0xc,%rax
  401b7c:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401b80:	48 83 c2 04          	add    $0x4,%rdx
  401b84:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401b88:	88 42 02             	mov    %al,0x2(%rdx)
  401b8b:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b8f:	48 8d 50 08          	lea    0x8(%rax),%rdx
  401b93:	0f b6 45 fe          	movzbl -0x2(%rbp),%eax
  401b97:	88 42 02             	mov    %al,0x2(%rdx)
  401b9a:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401b9e:	48 8d 50 0c          	lea    0xc(%rax),%rdx
  401ba2:	0f b6 45 ff          	movzbl -0x1(%rbp),%eax
  401ba6:	88 42 02             	mov    %al,0x2(%rdx)
  401ba9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bad:	48 83 c0 0c          	add    $0xc,%rax
  401bb1:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401bb5:	88 45 fe             	mov    %al,-0x2(%rbp)
  401bb8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bbc:	48 83 c0 08          	add    $0x8,%rax
  401bc0:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401bc4:	48 83 c2 0c          	add    $0xc,%rdx
  401bc8:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401bcc:	88 42 03             	mov    %al,0x3(%rdx)
  401bcf:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bd3:	48 83 c0 04          	add    $0x4,%rax
  401bd7:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401bdb:	48 83 c2 08          	add    $0x8,%rdx
  401bdf:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401be3:	88 42 03             	mov    %al,0x3(%rdx)
  401be6:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bea:	48 8d 50 04          	lea    0x4(%rax),%rdx
  401bee:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bf2:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401bf6:	88 42 03             	mov    %al,0x3(%rdx)
  401bf9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401bfd:	0f b6 55 fe          	movzbl -0x2(%rbp),%edx
  401c01:	88 50 03             	mov    %dl,0x3(%rax)
  401c04:	90                   	nop
  401c05:	5d                   	pop    %rbp
  401c06:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
