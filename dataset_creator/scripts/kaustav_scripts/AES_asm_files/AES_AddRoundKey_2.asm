
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402356 <AES_AddRoundKey>:
  402356:	f3 0f 1e fa          	endbr64 
  40235a:	55                   	push   %rbp
  40235b:	48 89 e5             	mov    %rsp,%rbp
  40235e:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  402362:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  402366:	48 c7 45 f0 00 00 00 	movq   $0x0,-0x10(%rbp)
  40236d:	00 
  40236e:	eb 73                	jmp    4023e3 <AES_AddRoundKey+0x8d>
  402370:	48 c7 45 f8 00 00 00 	movq   $0x0,-0x8(%rbp)
  402377:	00 
  402378:	eb 5d                	jmp    4023d7 <AES_AddRoundKey+0x81>
  40237a:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  40237e:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402385:	00 
  402386:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40238a:	48 01 c2             	add    %rax,%rdx
  40238d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402391:	48 01 d0             	add    %rdx,%rax
  402394:	0f b6 08             	movzbl (%rax),%ecx
  402397:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  40239b:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4023a2:	00 
  4023a3:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4023a7:	48 01 c2             	add    %rax,%rdx
  4023aa:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4023ae:	48 01 d0             	add    %rdx,%rax
  4023b1:	0f b6 10             	movzbl (%rax),%edx
  4023b4:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4023b8:	48 8d 34 85 00 00 00 	lea    0x0(,%rax,4),%rsi
  4023bf:	00 
  4023c0:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4023c4:	48 01 c6             	add    %rax,%rsi
  4023c7:	31 ca                	xor    %ecx,%edx
  4023c9:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4023cd:	48 01 f0             	add    %rsi,%rax
  4023d0:	88 10                	mov    %dl,(%rax)
  4023d2:	48 83 45 f8 01       	addq   $0x1,-0x8(%rbp)
  4023d7:	48 83 7d f8 03       	cmpq   $0x3,-0x8(%rbp)
  4023dc:	76 9c                	jbe    40237a <AES_AddRoundKey+0x24>
  4023de:	48 83 45 f0 01       	addq   $0x1,-0x10(%rbp)
  4023e3:	48 83 7d f0 03       	cmpq   $0x3,-0x10(%rbp)
  4023e8:	76 86                	jbe    402370 <AES_AddRoundKey+0x1a>
  4023ea:	90                   	nop
  4023eb:	90                   	nop
  4023ec:	5d                   	pop    %rbp
  4023ed:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
