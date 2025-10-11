
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004051ee <AES_KEY_wrap>:
  4051ee:	f3 0f 1e fa          	endbr64 
  4051f2:	55                   	push   %rbp
  4051f3:	48 89 e5             	mov    %rsp,%rbp
  4051f6:	48 83 ec 70          	sub    $0x70,%rsp
  4051fa:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
  4051fe:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  405202:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
  405206:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
  40520a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  405211:	00 00 
  405213:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  405217:	31 c0                	xor    %eax,%eax
  405219:	48 8b 45 90          	mov    -0x70(%rbp),%rax
  40521d:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  405221:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405225:	48 83 c0 08          	add    $0x8,%rax
  405229:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
  40522d:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  405231:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  405235:	48 01 d0             	add    %rdx,%rax
  405238:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  40523c:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  405240:	48 c1 e8 03          	shr    $0x3,%rax
  405244:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  405248:	48 83 7d d8 01       	cmpq   $0x1,-0x28(%rbp)
  40524d:	76 0c                	jbe    40525b <AES_KEY_wrap+0x6d>
  40524f:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  405253:	83 e0 07             	and    $0x7,%eax
  405256:	48 85 c0             	test   %rax,%rax
  405259:	74 0a                	je     405265 <AES_KEY_wrap+0x77>
  40525b:	b8 01 00 00 00       	mov    $0x1,%eax
  405260:	e9 ec 00 00 00       	jmp    405351 <AES_KEY_wrap+0x163>
  405265:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405269:	ba 08 00 00 00       	mov    $0x8,%edx
  40526e:	be a6 00 00 00       	mov    $0xa6,%esi
  405273:	48 89 c7             	mov    %rax,%rdi
  405276:	e8 95 be ff ff       	call   401110 <_init+0x110>
  40527b:	48 8b 55 98          	mov    -0x68(%rbp),%rdx
  40527f:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
  405283:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  405287:	48 89 ce             	mov    %rcx,%rsi
  40528a:	48 89 c7             	mov    %rax,%rdi
  40528d:	e8 ce bd ff ff       	call   401060 <_init+0x60>
  405292:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  405296:	48 89 c7             	mov    %rax,%rdi
  405299:	e8 8e c5 ff ff       	call   40182c <KeyExpansion>
  40529e:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
  4052a5:	00 
  4052a6:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  4052aa:	48 89 d0             	mov    %rdx,%rax
  4052ad:	48 01 c0             	add    %rax,%rax
  4052b0:	48 01 d0             	add    %rdx,%rax
  4052b3:	48 01 c0             	add    %rax,%rax
  4052b6:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  4052ba:	eb 6f                	jmp    40532b <AES_KEY_wrap+0x13d>
  4052bc:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4052c0:	48 83 c0 08          	add    $0x8,%rax
  4052c4:	48 8b 55 b8          	mov    -0x48(%rbp),%rdx
  4052c8:	48 8b 12             	mov    (%rdx),%rdx
  4052cb:	48 89 10             	mov    %rdx,(%rax)
  4052ce:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  4052d2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4052d6:	48 89 d6             	mov    %rdx,%rsi
  4052d9:	48 89 c7             	mov    %rax,%rdi
  4052dc:	e8 d9 ca ff ff       	call   401dba <rijndaelEncrypt>
  4052e1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4052e5:	48 83 c0 08          	add    $0x8,%rax
  4052e9:	48 8b 10             	mov    (%rax),%rdx
  4052ec:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  4052f0:	48 89 10             	mov    %rdx,(%rax)
  4052f3:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
  4052f7:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4052fb:	ba 07 00 00 00       	mov    $0x7,%edx
  405300:	48 89 ce             	mov    %rcx,%rsi
  405303:	48 89 c7             	mov    %rax,%rdi
  405306:	e8 f6 ce ff ff       	call   402201 <xorBEint>
  40530b:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  40530f:	48 3b 45 d0          	cmp    -0x30(%rbp),%rax
  405313:	75 0a                	jne    40531f <AES_KEY_wrap+0x131>
  405315:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405319:	48 83 c0 08          	add    $0x8,%rax
  40531d:	eb 08                	jmp    405327 <AES_KEY_wrap+0x139>
  40531f:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  405323:	48 83 c0 08          	add    $0x8,%rax
  405327:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
  40532b:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  40532f:	48 8d 50 01          	lea    0x1(%rax),%rdx
  405333:	48 89 55 c0          	mov    %rdx,-0x40(%rbp)
  405337:	48 39 45 d8          	cmp    %rax,-0x28(%rbp)
  40533b:	0f 87 7b ff ff ff    	ja     4052bc <AES_KEY_wrap+0xce>
  405341:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  405345:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405349:	48 89 10             	mov    %rdx,(%rax)
  40534c:	b8 00 00 00 00       	mov    $0x0,%eax
  405351:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  405355:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  40535c:	00 00 
  40535e:	74 05                	je     405365 <AES_KEY_wrap+0x177>
  405360:	e8 4b 95 04 00       	call   44e8b0 <__stack_chk_fail>
  405365:	c9                   	leave  
  405366:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
