
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402a9d <AES_CBC_encrypt>:
  402a9d:	f3 0f 1e fa          	endbr64 
  402aa1:	55                   	push   %rbp
  402aa2:	48 89 e5             	mov    %rsp,%rbp
  402aa5:	48 83 ec 70          	sub    $0x70,%rsp
  402aa9:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
  402aad:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
  402ab1:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
  402ab5:	48 89 4d a0          	mov    %rcx,-0x60(%rbp)
  402ab9:	4c 89 45 98          	mov    %r8,-0x68(%rbp)
  402abd:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402ac4:	00 00 
  402ac6:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  402aca:	31 c0                	xor    %eax,%eax
  402acc:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  402ad0:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  402ad4:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  402ad8:	83 e0 0f             	and    $0xf,%eax
  402adb:	88 45 c7             	mov    %al,-0x39(%rbp)
  402ade:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  402ae2:	48 c1 e8 04          	shr    $0x4,%rax
  402ae6:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  402aea:	48 83 7d d8 01       	cmpq   $0x1,-0x28(%rbp)
  402aef:	76 16                	jbe    402b07 <AES_CBC_encrypt+0x6a>
  402af1:	80 7d c7 00          	cmpb   $0x0,-0x39(%rbp)
  402af5:	75 10                	jne    402b07 <AES_CBC_encrypt+0x6a>
  402af7:	48 83 6d d8 01       	subq   $0x1,-0x28(%rbp)
  402afc:	48 83 7d d8 00       	cmpq   $0x0,-0x28(%rbp)
  402b01:	74 04                	je     402b07 <AES_CBC_encrypt+0x6a>
  402b03:	c6 45 c7 10          	movb   $0x10,-0x39(%rbp)
  402b07:	48 83 7d d8 00       	cmpq   $0x0,-0x28(%rbp)
  402b0c:	75 0a                	jne    402b18 <AES_CBC_encrypt+0x7b>
  402b0e:	b8 01 00 00 00       	mov    $0x1,%eax
  402b13:	e9 f1 00 00 00       	jmp    402c09 <AES_CBC_encrypt+0x16c>
  402b18:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
  402b1c:	48 8b 4d a8          	mov    -0x58(%rbp),%rcx
  402b20:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  402b24:	48 89 ce             	mov    %rcx,%rsi
  402b27:	48 89 c7             	mov    %rax,%rdi
  402b2a:	e8 31 e5 ff ff       	call   401060 <_init+0x60>
  402b2f:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  402b33:	48 89 c7             	mov    %rax,%rdi
  402b36:	e8 f1 ec ff ff       	call   40182c <KeyExpansion>
  402b3b:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  402b3f:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  402b43:	eb 33                	jmp    402b78 <AES_CBC_encrypt+0xdb>
  402b45:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
  402b49:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402b4d:	48 89 d6             	mov    %rdx,%rsi
  402b50:	48 89 c7             	mov    %rax,%rdi
  402b53:	e8 ed eb ff ff       	call   401745 <xorBlock>
  402b58:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
  402b5c:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402b60:	48 89 d6             	mov    %rdx,%rsi
  402b63:	48 89 c7             	mov    %rax,%rdi
  402b66:	e8 4f f2 ff ff       	call   401dba <rijndaelEncrypt>
  402b6b:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402b6f:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  402b73:	48 83 45 d0 10       	addq   $0x10,-0x30(%rbp)
  402b78:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402b7c:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  402b80:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  402b84:	48 85 c0             	test   %rax,%rax
  402b87:	75 bc                	jne    402b45 <AES_CBC_encrypt+0xa8>
  402b89:	80 7d c7 00          	cmpb   $0x0,-0x39(%rbp)
  402b8d:	74 75                	je     402c04 <AES_CBC_encrypt+0x167>
  402b8f:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
  402b96:	00 
  402b97:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  402b9e:	00 
  402b9f:	0f b6 55 c7          	movzbl -0x39(%rbp),%edx
  402ba3:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
  402ba7:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  402bab:	48 89 ce             	mov    %rcx,%rsi
  402bae:	48 89 c7             	mov    %rax,%rdi
  402bb1:	e8 aa e4 ff ff       	call   401060 <_init+0x60>
  402bb6:	0f b6 55 c7          	movzbl -0x39(%rbp),%edx
  402bba:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402bbe:	48 8d 48 f0          	lea    -0x10(%rax),%rcx
  402bc2:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402bc6:	48 89 ce             	mov    %rcx,%rsi
  402bc9:	48 89 c7             	mov    %rax,%rdi
  402bcc:	e8 8f e4 ff ff       	call   401060 <_init+0x60>
  402bd1:	48 83 6d d0 10       	subq   $0x10,-0x30(%rbp)
  402bd6:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  402bda:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  402bde:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
  402be2:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402be6:	48 89 d6             	mov    %rdx,%rsi
  402be9:	48 89 c7             	mov    %rax,%rdi
  402bec:	e8 54 eb ff ff       	call   401745 <xorBlock>
  402bf1:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
  402bf5:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402bf9:	48 89 d6             	mov    %rdx,%rsi
  402bfc:	48 89 c7             	mov    %rax,%rdi
  402bff:	e8 b6 f1 ff ff       	call   401dba <rijndaelEncrypt>
  402c04:	b8 00 00 00 00       	mov    $0x0,%eax
  402c09:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  402c0d:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  402c14:	00 00 
  402c16:	74 05                	je     402c1d <AES_CBC_encrypt+0x180>
  402c18:	e8 93 bc 04 00       	call   44e8b0 <__stack_chk_fail>
  402c1d:	c9                   	leave  
  402c1e:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
