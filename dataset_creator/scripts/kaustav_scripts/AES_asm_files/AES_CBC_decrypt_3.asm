
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402c1f <AES_CBC_decrypt>:
  402c1f:	f3 0f 1e fa          	endbr64 
  402c23:	55                   	push   %rbp
  402c24:	48 89 e5             	mov    %rsp,%rbp
  402c27:	48 83 ec 60          	sub    $0x60,%rsp
  402c2b:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  402c2f:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  402c33:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  402c37:	48 89 4d b0          	mov    %rcx,-0x50(%rbp)
  402c3b:	4c 89 45 a8          	mov    %r8,-0x58(%rbp)
  402c3f:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  402c43:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  402c47:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  402c4b:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  402c4f:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  402c53:	83 e0 0f             	and    $0xf,%eax
  402c56:	88 45 d7             	mov    %al,-0x29(%rbp)
  402c59:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  402c5d:	48 c1 e8 04          	shr    $0x4,%rax
  402c61:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  402c65:	48 83 7d f0 01       	cmpq   $0x1,-0x10(%rbp)
  402c6a:	76 16                	jbe    402c82 <AES_CBC_decrypt+0x63>
  402c6c:	80 7d d7 00          	cmpb   $0x0,-0x29(%rbp)
  402c70:	75 10                	jne    402c82 <AES_CBC_decrypt+0x63>
  402c72:	48 83 6d f0 01       	subq   $0x1,-0x10(%rbp)
  402c77:	48 83 7d f0 00       	cmpq   $0x0,-0x10(%rbp)
  402c7c:	74 04                	je     402c82 <AES_CBC_decrypt+0x63>
  402c7e:	c6 45 d7 10          	movb   $0x10,-0x29(%rbp)
  402c82:	48 83 7d f0 00       	cmpq   $0x0,-0x10(%rbp)
  402c87:	75 0a                	jne    402c93 <AES_CBC_decrypt+0x74>
  402c89:	b8 01 00 00 00       	mov    $0x1,%eax
  402c8e:	e9 f1 00 00 00       	jmp    402d84 <AES_CBC_decrypt+0x165>
  402c93:	80 7d d7 00          	cmpb   $0x0,-0x29(%rbp)
  402c97:	0f 95 c0             	setne  %al
  402c9a:	0f b6 c0             	movzbl %al,%eax
  402c9d:	48 29 45 f0          	sub    %rax,-0x10(%rbp)
  402ca1:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402ca5:	48 89 c7             	mov    %rax,%rdi
  402ca8:	e8 7f eb ff ff       	call   40182c <KeyExpansion>
  402cad:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  402cb1:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  402cb5:	eb 38                	jmp    402cef <AES_CBC_decrypt+0xd0>
  402cb7:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402cbb:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402cbf:	48 89 d6             	mov    %rdx,%rsi
  402cc2:	48 89 c7             	mov    %rax,%rdi
  402cc5:	e8 55 f4 ff ff       	call   40211f <rijndaelDecrypt>
  402cca:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402cce:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  402cd2:	48 89 d6             	mov    %rdx,%rsi
  402cd5:	48 89 c7             	mov    %rax,%rdi
  402cd8:	e8 68 ea ff ff       	call   401745 <xorBlock>
  402cdd:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402ce1:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  402ce5:	48 83 45 d8 10       	addq   $0x10,-0x28(%rbp)
  402cea:	48 83 45 e8 10       	addq   $0x10,-0x18(%rbp)
  402cef:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  402cf3:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  402cf7:	48 89 55 f0          	mov    %rdx,-0x10(%rbp)
  402cfb:	48 85 c0             	test   %rax,%rax
  402cfe:	75 b7                	jne    402cb7 <AES_CBC_decrypt+0x98>
  402d00:	80 7d d7 00          	cmpb   $0x0,-0x29(%rbp)
  402d04:	74 79                	je     402d7f <AES_CBC_decrypt+0x160>
  402d06:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402d0a:	48 83 c0 10          	add    $0x10,%rax
  402d0e:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  402d12:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402d16:	48 8d 78 10          	lea    0x10(%rax),%rdi
  402d1a:	0f b6 75 d7          	movzbl -0x29(%rbp),%esi
  402d1e:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
  402d22:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402d26:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402d2a:	49 89 f9             	mov    %rdi,%r9
  402d2d:	41 89 f0             	mov    %esi,%r8d
  402d30:	48 89 c6             	mov    %rax,%rsi
  402d33:	48 8d 05 e5 f3 ff ff 	lea    -0xc1b(%rip),%rax        # 40211f <rijndaelDecrypt>
  402d3a:	48 89 c7             	mov    %rax,%rdi
  402d3d:	e8 a9 f8 ff ff       	call   4025eb <mixThenXor>
  402d42:	0f b6 55 d7          	movzbl -0x29(%rbp),%edx
  402d46:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
  402d4a:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402d4e:	48 89 ce             	mov    %rcx,%rsi
  402d51:	48 89 c7             	mov    %rax,%rdi
  402d54:	e8 07 e3 ff ff       	call   401060 <_init+0x60>
  402d59:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402d5d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402d61:	48 89 d6             	mov    %rdx,%rsi
  402d64:	48 89 c7             	mov    %rax,%rdi
  402d67:	e8 b3 f3 ff ff       	call   40211f <rijndaelDecrypt>
  402d6c:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402d70:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  402d74:	48 89 d6             	mov    %rdx,%rsi
  402d77:	48 89 c7             	mov    %rax,%rdi
  402d7a:	e8 c6 e9 ff ff       	call   401745 <xorBlock>
  402d7f:	b8 00 00 00 00       	mov    $0x0,%eax
  402d84:	c9                   	leave  
  402d85:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
