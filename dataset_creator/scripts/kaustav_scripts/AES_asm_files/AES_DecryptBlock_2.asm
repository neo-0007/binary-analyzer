
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

000000000040248f <AES_DecryptBlock>:
  40248f:	f3 0f 1e fa          	endbr64 
  402493:	55                   	push   %rbp
  402494:	48 89 e5             	mov    %rsp,%rbp
  402497:	48 83 ec 20          	sub    $0x20,%rsp
  40249b:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  40249f:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  4024a3:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4024a7:	48 05 a0 00 00 00    	add    $0xa0,%rax
  4024ad:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  4024b1:	48 c7 45 f8 01 00 00 	movq   $0x1,-0x8(%rbp)
  4024b8:	00 
  4024b9:	eb 55                	jmp    402510 <AES_DecryptBlock+0x81>
  4024bb:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4024bf:	48 8d 50 f0          	lea    -0x10(%rax),%rdx
  4024c3:	48 89 55 f0          	mov    %rdx,-0x10(%rbp)
  4024c7:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4024cb:	48 89 c6             	mov    %rax,%rsi
  4024ce:	48 89 d7             	mov    %rdx,%rdi
  4024d1:	e8 80 fe ff ff       	call   402356 <AES_AddRoundKey>
  4024d6:	48 83 7d f8 01       	cmpq   $0x1,-0x8(%rbp)
  4024db:	74 0c                	je     4024e9 <AES_DecryptBlock+0x5a>
  4024dd:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4024e1:	48 89 c7             	mov    %rax,%rdi
  4024e4:	e8 1f fb ff ff       	call   402008 <AES_InvMixColumns>
  4024e9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4024ed:	48 89 c7             	mov    %rax,%rdi
  4024f0:	e8 12 f7 ff ff       	call   401c07 <AES_InvShiftRows>
  4024f5:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4024f9:	48 8d 15 20 6c 09 00 	lea    0x96c20(%rip),%rdx        # 499120 <sbox_decrypt>
  402500:	48 89 d6             	mov    %rdx,%rsi
  402503:	48 89 c7             	mov    %rax,%rdi
  402506:	e8 f5 f4 ff ff       	call   401a00 <AES_SubBytes>
  40250b:	48 83 45 f8 01       	addq   $0x1,-0x8(%rbp)
  402510:	48 83 7d f8 0a       	cmpq   $0xa,-0x8(%rbp)
  402515:	76 a4                	jbe    4024bb <AES_DecryptBlock+0x2c>
  402517:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  40251b:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40251f:	48 89 d6             	mov    %rdx,%rsi
  402522:	48 89 c7             	mov    %rax,%rdi
  402525:	e8 2c fe ff ff       	call   402356 <AES_AddRoundKey>
  40252a:	90                   	nop
  40252b:	c9                   	leave  
  40252c:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
