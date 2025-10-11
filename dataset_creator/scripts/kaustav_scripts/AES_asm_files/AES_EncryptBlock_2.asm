
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004023ee <AES_EncryptBlock>:
  4023ee:	f3 0f 1e fa          	endbr64 
  4023f2:	55                   	push   %rbp
  4023f3:	48 89 e5             	mov    %rsp,%rbp
  4023f6:	48 83 ec 20          	sub    $0x20,%rsp
  4023fa:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4023fe:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  402402:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  402406:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  40240a:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  40240e:	48 8d 50 10          	lea    0x10(%rax),%rdx
  402412:	48 89 55 f0          	mov    %rdx,-0x10(%rbp)
  402416:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  40241a:	48 89 c6             	mov    %rax,%rsi
  40241d:	48 89 d7             	mov    %rdx,%rdi
  402420:	e8 31 ff ff ff       	call   402356 <AES_AddRoundKey>
  402425:	48 c7 45 f8 01 00 00 	movq   $0x1,-0x8(%rbp)
  40242c:	00 
  40242d:	eb 55                	jmp    402484 <AES_EncryptBlock+0x96>
  40242f:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402433:	48 8d 15 e6 6b 09 00 	lea    0x96be6(%rip),%rdx        # 499020 <sbox_encrypt>
  40243a:	48 89 d6             	mov    %rdx,%rsi
  40243d:	48 89 c7             	mov    %rax,%rdi
  402440:	e8 bb f5 ff ff       	call   401a00 <AES_SubBytes>
  402445:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402449:	48 89 c7             	mov    %rax,%rdi
  40244c:	e8 8f f6 ff ff       	call   401ae0 <AES_ShiftRows>
  402451:	48 83 7d f8 09       	cmpq   $0x9,-0x8(%rbp)
  402456:	77 0c                	ja     402464 <AES_EncryptBlock+0x76>
  402458:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40245c:	48 89 c7             	mov    %rax,%rdi
  40245f:	e8 ca f8 ff ff       	call   401d2e <AES_MixColumns>
  402464:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  402468:	48 8d 50 10          	lea    0x10(%rax),%rdx
  40246c:	48 89 55 f0          	mov    %rdx,-0x10(%rbp)
  402470:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402474:	48 89 c6             	mov    %rax,%rsi
  402477:	48 89 d7             	mov    %rdx,%rdi
  40247a:	e8 d7 fe ff ff       	call   402356 <AES_AddRoundKey>
  40247f:	48 83 45 f8 01       	addq   $0x1,-0x8(%rbp)
  402484:	48 83 7d f8 0a       	cmpq   $0xa,-0x8(%rbp)
  402489:	76 a4                	jbe    40242f <AES_EncryptBlock+0x41>
  40248b:	90                   	nop
  40248c:	90                   	nop
  40248d:	c9                   	leave  
  40248e:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
