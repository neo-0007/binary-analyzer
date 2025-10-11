
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402990 <AES_CBC_encrypt_buffer>:
  402990:	f3 0f 1e fa          	endbr64 
  402994:	55                   	push   %rbp
  402995:	48 89 e5             	mov    %rsp,%rbp
  402998:	48 83 ec 28          	sub    $0x28,%rsp
  40299c:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4029a0:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  4029a4:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  4029a8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4029ac:	48 05 b0 00 00 00    	add    $0xb0,%rax
  4029b2:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4029b6:	48 c7 45 f0 00 00 00 	movq   $0x0,-0x10(%rbp)
  4029bd:	00 
  4029be:	eb 38                	jmp    4029f8 <AES_CBC_encrypt_buffer+0x68>
  4029c0:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4029c4:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4029c8:	48 89 d6             	mov    %rdx,%rsi
  4029cb:	48 89 c7             	mov    %rax,%rdi
  4029ce:	e8 6e ff ff ff       	call   402941 <XorWithIv>
  4029d3:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4029d7:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4029db:	48 89 d6             	mov    %rdx,%rsi
  4029de:	48 89 c7             	mov    %rax,%rdi
  4029e1:	e8 fc fd ff ff       	call   4027e2 <Cipher>
  4029e6:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4029ea:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4029ee:	48 83 45 e0 10       	addq   $0x10,-0x20(%rbp)
  4029f3:	48 83 45 f0 10       	addq   $0x10,-0x10(%rbp)
  4029f8:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4029fc:	48 3b 45 d8          	cmp    -0x28(%rbp),%rax
  402a00:	72 be                	jb     4029c0 <AES_CBC_encrypt_buffer+0x30>
  402a02:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402a06:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  402a0d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402a11:	48 8b 50 08          	mov    0x8(%rax),%rdx
  402a15:	48 8b 00             	mov    (%rax),%rax
  402a18:	48 89 01             	mov    %rax,(%rcx)
  402a1b:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  402a1f:	90                   	nop
  402a20:	c9                   	leave  
  402a21:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
