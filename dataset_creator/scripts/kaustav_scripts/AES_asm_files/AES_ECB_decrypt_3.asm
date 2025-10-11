
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004038d4 <AES_ECB_decrypt>:
  4038d4:	f3 0f 1e fa          	endbr64 
  4038d8:	55                   	push   %rbp
  4038d9:	48 89 e5             	mov    %rsp,%rbp
  4038dc:	48 83 ec 10          	sub    $0x10,%rsp
  4038e0:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  4038e4:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  4038e8:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4038ec:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4038f0:	48 89 d6             	mov    %rdx,%rsi
  4038f3:	48 89 c7             	mov    %rax,%rdi
  4038f6:	e8 34 ff ff ff       	call   40382f <InvCipher>
  4038fb:	90                   	nop
  4038fc:	c9                   	leave  
  4038fd:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:

./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402a05 <AES_ECB_decrypt>:
  402a05:	f3 0f 1e fa          	endbr64 
  402a09:	55                   	push   %rbp
  402a0a:	48 89 e5             	mov    %rsp,%rbp
  402a0d:	48 83 ec 30          	sub    $0x30,%rsp
  402a11:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  402a15:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  402a19:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  402a1d:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
  402a21:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402a25:	48 c1 e8 04          	shr    $0x4,%rax
  402a29:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  402a2d:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  402a31:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  402a35:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402a39:	48 89 ce             	mov    %rcx,%rsi
  402a3c:	48 89 c7             	mov    %rax,%rdi
  402a3f:	e8 1c e6 ff ff       	call   401060 <_init+0x60>
  402a44:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402a48:	48 89 c7             	mov    %rax,%rdi
  402a4b:	e8 dc ed ff ff       	call   40182c <KeyExpansion>
  402a50:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402a54:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  402a58:	eb 18                	jmp    402a72 <AES_ECB_decrypt+0x6d>
  402a5a:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  402a5e:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  402a62:	48 89 d6             	mov    %rdx,%rsi
  402a65:	48 89 c7             	mov    %rax,%rdi
  402a68:	e8 b2 f6 ff ff       	call   40211f <rijndaelDecrypt>
  402a6d:	48 83 45 f0 10       	addq   $0x10,-0x10(%rbp)
  402a72:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402a76:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  402a7a:	48 89 55 f8          	mov    %rdx,-0x8(%rbp)
  402a7e:	48 85 c0             	test   %rax,%rax
  402a81:	75 d7                	jne    402a5a <AES_ECB_decrypt+0x55>
  402a83:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402a87:	83 e0 0f             	and    $0xf,%eax
  402a8a:	48 85 c0             	test   %rax,%rax
  402a8d:	74 07                	je     402a96 <AES_ECB_decrypt+0x91>
  402a8f:	b8 1d 00 00 00       	mov    $0x1d,%eax
  402a94:	eb 05                	jmp    402a9b <AES_ECB_decrypt+0x96>
  402a96:	b8 00 00 00 00       	mov    $0x0,%eax
  402a9b:	c9                   	leave  
  402a9c:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
