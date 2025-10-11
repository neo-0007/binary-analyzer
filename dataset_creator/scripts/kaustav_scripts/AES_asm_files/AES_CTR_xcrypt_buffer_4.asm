
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402ad8 <AES_CTR_xcrypt_buffer>:
  402ad8:	f3 0f 1e fa          	endbr64 
  402adc:	55                   	push   %rbp
  402add:	48 89 e5             	mov    %rsp,%rbp
  402ae0:	48 83 ec 50          	sub    $0x50,%rsp
  402ae4:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  402ae8:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  402aec:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  402af0:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402af7:	00 00 
  402af9:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  402afd:	31 c0                	xor    %eax,%eax
  402aff:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  402b06:	00 
  402b07:	c7 45 d4 10 00 00 00 	movl   $0x10,-0x2c(%rbp)
  402b0e:	e9 ce 00 00 00       	jmp    402be1 <AES_CTR_xcrypt_buffer+0x109>
  402b13:	83 7d d4 10          	cmpl   $0x10,-0x2c(%rbp)
  402b17:	0f 85 94 00 00 00    	jne    402bb1 <AES_CTR_xcrypt_buffer+0xd9>
  402b1d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402b21:	48 05 b0 00 00 00    	add    $0xb0,%rax
  402b27:	48 8b 50 08          	mov    0x8(%rax),%rdx
  402b2b:	48 8b 00             	mov    (%rax),%rax
  402b2e:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  402b32:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  402b36:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  402b3a:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  402b3e:	48 89 d6             	mov    %rdx,%rsi
  402b41:	48 89 c7             	mov    %rax,%rdi
  402b44:	e8 99 fc ff ff       	call   4027e2 <Cipher>
  402b49:	c7 45 d4 0f 00 00 00 	movl   $0xf,-0x2c(%rbp)
  402b50:	eb 52                	jmp    402ba4 <AES_CTR_xcrypt_buffer+0xcc>
  402b52:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  402b56:	8b 45 d4             	mov    -0x2c(%rbp),%eax
  402b59:	48 98                	cltq   
  402b5b:	0f b6 84 02 b0 00 00 	movzbl 0xb0(%rdx,%rax,1),%eax
  402b62:	00 
  402b63:	3c ff                	cmp    $0xff,%al
  402b65:	75 13                	jne    402b7a <AES_CTR_xcrypt_buffer+0xa2>
  402b67:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  402b6b:	8b 45 d4             	mov    -0x2c(%rbp),%eax
  402b6e:	48 98                	cltq   
  402b70:	c6 84 02 b0 00 00 00 	movb   $0x0,0xb0(%rdx,%rax,1)
  402b77:	00 
  402b78:	eb 26                	jmp    402ba0 <AES_CTR_xcrypt_buffer+0xc8>
  402b7a:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  402b7e:	8b 45 d4             	mov    -0x2c(%rbp),%eax
  402b81:	48 98                	cltq   
  402b83:	0f b6 84 02 b0 00 00 	movzbl 0xb0(%rdx,%rax,1),%eax
  402b8a:	00 
  402b8b:	8d 48 01             	lea    0x1(%rax),%ecx
  402b8e:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  402b92:	8b 45 d4             	mov    -0x2c(%rbp),%eax
  402b95:	48 98                	cltq   
  402b97:	88 8c 02 b0 00 00 00 	mov    %cl,0xb0(%rdx,%rax,1)
  402b9e:	eb 0a                	jmp    402baa <AES_CTR_xcrypt_buffer+0xd2>
  402ba0:	83 6d d4 01          	subl   $0x1,-0x2c(%rbp)
  402ba4:	83 7d d4 00          	cmpl   $0x0,-0x2c(%rbp)
  402ba8:	79 a8                	jns    402b52 <AES_CTR_xcrypt_buffer+0x7a>
  402baa:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%rbp)
  402bb1:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
  402bb5:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402bb9:	48 01 d0             	add    %rdx,%rax
  402bbc:	0f b6 08             	movzbl (%rax),%ecx
  402bbf:	8b 45 d4             	mov    -0x2c(%rbp),%eax
  402bc2:	48 98                	cltq   
  402bc4:	0f b6 54 05 e0       	movzbl -0x20(%rbp,%rax,1),%edx
  402bc9:	48 8b 75 c0          	mov    -0x40(%rbp),%rsi
  402bcd:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402bd1:	48 01 f0             	add    %rsi,%rax
  402bd4:	31 ca                	xor    %ecx,%edx
  402bd6:	88 10                	mov    %dl,(%rax)
  402bd8:	48 83 45 d8 01       	addq   $0x1,-0x28(%rbp)
  402bdd:	83 45 d4 01          	addl   $0x1,-0x2c(%rbp)
  402be1:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402be5:	48 3b 45 b8          	cmp    -0x48(%rbp),%rax
  402be9:	0f 82 24 ff ff ff    	jb     402b13 <AES_CTR_xcrypt_buffer+0x3b>
  402bef:	90                   	nop
  402bf0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402bf4:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  402bfb:	00 00 
  402bfd:	74 05                	je     402c04 <AES_CTR_xcrypt_buffer+0x12c>
  402bff:	e8 2c 84 04 00       	call   44b030 <__stack_chk_fail>
  402c04:	c9                   	leave  
  402c05:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
