
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403a91 <AES_CTR_xcrypt_buffer>:
  403a91:	f3 0f 1e fa          	endbr64 
  403a95:	55                   	push   %rbp
  403a96:	48 89 e5             	mov    %rsp,%rbp
  403a99:	48 83 ec 50          	sub    $0x50,%rsp
  403a9d:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  403aa1:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  403aa5:	89 55 bc             	mov    %edx,-0x44(%rbp)
  403aa8:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  403aaf:	00 00 
  403ab1:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  403ab5:	31 c0                	xor    %eax,%eax
  403ab7:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%rbp)
  403abe:	c7 45 dc 10 00 00 00 	movl   $0x10,-0x24(%rbp)
  403ac5:	e9 cb 00 00 00       	jmp    403b95 <AES_CTR_xcrypt_buffer+0x104>
  403aca:	83 7d dc 10          	cmpl   $0x10,-0x24(%rbp)
  403ace:	0f 85 94 00 00 00    	jne    403b68 <AES_CTR_xcrypt_buffer+0xd7>
  403ad4:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  403ad8:	48 05 b0 00 00 00    	add    $0xb0,%rax
  403ade:	48 8b 50 08          	mov    0x8(%rax),%rdx
  403ae2:	48 8b 00             	mov    (%rax),%rax
  403ae5:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  403ae9:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  403aed:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  403af1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  403af5:	48 89 d6             	mov    %rdx,%rsi
  403af8:	48 89 c7             	mov    %rax,%rdi
  403afb:	e8 0d fa ff ff       	call   40350d <Cipher>
  403b00:	c7 45 dc 0f 00 00 00 	movl   $0xf,-0x24(%rbp)
  403b07:	eb 52                	jmp    403b5b <AES_CTR_xcrypt_buffer+0xca>
  403b09:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  403b0d:	8b 45 dc             	mov    -0x24(%rbp),%eax
  403b10:	48 98                	cltq   
  403b12:	0f b6 84 02 b0 00 00 	movzbl 0xb0(%rdx,%rax,1),%eax
  403b19:	00 
  403b1a:	3c ff                	cmp    $0xff,%al
  403b1c:	75 13                	jne    403b31 <AES_CTR_xcrypt_buffer+0xa0>
  403b1e:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  403b22:	8b 45 dc             	mov    -0x24(%rbp),%eax
  403b25:	48 98                	cltq   
  403b27:	c6 84 02 b0 00 00 00 	movb   $0x0,0xb0(%rdx,%rax,1)
  403b2e:	00 
  403b2f:	eb 26                	jmp    403b57 <AES_CTR_xcrypt_buffer+0xc6>
  403b31:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  403b35:	8b 45 dc             	mov    -0x24(%rbp),%eax
  403b38:	48 98                	cltq   
  403b3a:	0f b6 84 02 b0 00 00 	movzbl 0xb0(%rdx,%rax,1),%eax
  403b41:	00 
  403b42:	8d 48 01             	lea    0x1(%rax),%ecx
  403b45:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  403b49:	8b 45 dc             	mov    -0x24(%rbp),%eax
  403b4c:	48 98                	cltq   
  403b4e:	88 8c 02 b0 00 00 00 	mov    %cl,0xb0(%rdx,%rax,1)
  403b55:	eb 0a                	jmp    403b61 <AES_CTR_xcrypt_buffer+0xd0>
  403b57:	83 6d dc 01          	subl   $0x1,-0x24(%rbp)
  403b5b:	83 7d dc 00          	cmpl   $0x0,-0x24(%rbp)
  403b5f:	79 a8                	jns    403b09 <AES_CTR_xcrypt_buffer+0x78>
  403b61:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%rbp)
  403b68:	8b 55 d8             	mov    -0x28(%rbp),%edx
  403b6b:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  403b6f:	48 01 d0             	add    %rdx,%rax
  403b72:	0f b6 08             	movzbl (%rax),%ecx
  403b75:	8b 45 dc             	mov    -0x24(%rbp),%eax
  403b78:	48 98                	cltq   
  403b7a:	0f b6 54 05 e0       	movzbl -0x20(%rbp,%rax,1),%edx
  403b7f:	8b 75 d8             	mov    -0x28(%rbp),%esi
  403b82:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  403b86:	48 01 f0             	add    %rsi,%rax
  403b89:	31 ca                	xor    %ecx,%edx
  403b8b:	88 10                	mov    %dl,(%rax)
  403b8d:	83 45 d8 01          	addl   $0x1,-0x28(%rbp)
  403b91:	83 45 dc 01          	addl   $0x1,-0x24(%rbp)
  403b95:	8b 45 d8             	mov    -0x28(%rbp),%eax
  403b98:	3b 45 bc             	cmp    -0x44(%rbp),%eax
  403b9b:	0f 82 29 ff ff ff    	jb     403aca <AES_CTR_xcrypt_buffer+0x39>
  403ba1:	90                   	nop
  403ba2:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  403ba6:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  403bad:	00 00 
  403baf:	74 05                	je     403bb6 <AES_CTR_xcrypt_buffer+0x125>
  403bb1:	e8 5a 8b 04 00       	call   44c710 <__stack_chk_fail>
  403bb6:	c9                   	leave  
  403bb7:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
