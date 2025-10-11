
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000405367 <AES_KEY_unwrap>:
  405367:	f3 0f 1e fa          	endbr64 
  40536b:	55                   	push   %rbp
  40536c:	48 89 e5             	mov    %rsp,%rbp
  40536f:	48 83 ec 70          	sub    $0x70,%rsp
  405373:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
  405377:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  40537b:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
  40537f:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
  405383:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40538a:	00 00 
  40538c:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  405390:	31 c0                	xor    %eax,%eax
  405392:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  405396:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  40539a:	48 8b 45 90          	mov    -0x70(%rbp),%rax
  40539e:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
  4053a2:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  4053a6:	48 8d 50 f8          	lea    -0x8(%rax),%rdx
  4053aa:	48 8b 45 90          	mov    -0x70(%rbp),%rax
  4053ae:	48 01 d0             	add    %rdx,%rax
  4053b1:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  4053b5:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  4053b9:	48 c1 e8 03          	shr    $0x3,%rax
  4053bd:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  4053c1:	48 83 7d c8 02       	cmpq   $0x2,-0x38(%rbp)
  4053c6:	76 0c                	jbe    4053d4 <AES_KEY_unwrap+0x6d>
  4053c8:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  4053cc:	83 e0 07             	and    $0x7,%eax
  4053cf:	48 85 c0             	test   %rax,%rax
  4053d2:	74 0a                	je     4053de <AES_KEY_unwrap+0x77>
  4053d4:	b8 01 00 00 00       	mov    $0x1,%eax
  4053d9:	e9 1e 01 00 00       	jmp    4054fc <AES_KEY_unwrap+0x195>
  4053de:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4053e2:	48 8b 00             	mov    (%rax),%rax
  4053e5:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  4053e9:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  4053ed:	48 8d 50 f8          	lea    -0x8(%rax),%rdx
  4053f1:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4053f5:	48 8d 48 08          	lea    0x8(%rax),%rcx
  4053f9:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  4053fd:	48 89 ce             	mov    %rcx,%rsi
  405400:	48 89 c7             	mov    %rax,%rdi
  405403:	e8 58 bc ff ff       	call   401060 <_init+0x60>
  405408:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  40540c:	48 89 c7             	mov    %rax,%rdi
  40540f:	e8 18 c4 ff ff       	call   40182c <KeyExpansion>
  405414:	48 83 6d c8 01       	subq   $0x1,-0x38(%rbp)
  405419:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  40541d:	48 89 d0             	mov    %rdx,%rax
  405420:	48 01 c0             	add    %rax,%rax
  405423:	48 01 d0             	add    %rdx,%rax
  405426:	48 01 c0             	add    %rax,%rax
  405429:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  40542d:	eb 74                	jmp    4054a3 <AES_KEY_unwrap+0x13c>
  40542f:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  405433:	48 3b 45 90          	cmp    -0x70(%rbp),%rax
  405437:	75 0a                	jne    405443 <AES_KEY_unwrap+0xdc>
  405439:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40543d:	48 83 e8 08          	sub    $0x8,%rax
  405441:	eb 08                	jmp    40544b <AES_KEY_unwrap+0xe4>
  405443:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  405447:	48 83 e8 08          	sub    $0x8,%rax
  40544b:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
  40544f:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
  405453:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405457:	ba 07 00 00 00       	mov    $0x7,%edx
  40545c:	48 89 ce             	mov    %rcx,%rsi
  40545f:	48 89 c7             	mov    %rax,%rdi
  405462:	e8 9a cd ff ff       	call   402201 <xorBEint>
  405467:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40546b:	48 83 c0 08          	add    $0x8,%rax
  40546f:	48 8b 55 b8          	mov    -0x48(%rbp),%rdx
  405473:	48 8b 12             	mov    (%rdx),%rdx
  405476:	48 89 10             	mov    %rdx,(%rax)
  405479:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  40547d:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405481:	48 89 d6             	mov    %rdx,%rsi
  405484:	48 89 c7             	mov    %rax,%rdi
  405487:	e8 93 cc ff ff       	call   40211f <rijndaelDecrypt>
  40548c:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405490:	48 83 c0 08          	add    $0x8,%rax
  405494:	48 8b 10             	mov    (%rax),%rdx
  405497:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  40549b:	48 89 10             	mov    %rdx,(%rax)
  40549e:	48 83 6d c0 01       	subq   $0x1,-0x40(%rbp)
  4054a3:	48 83 7d c0 00       	cmpq   $0x0,-0x40(%rbp)
  4054a8:	75 85                	jne    40542f <AES_KEY_unwrap+0xc8>
  4054aa:	48 c7 45 c8 00 00 00 	movq   $0x0,-0x38(%rbp)
  4054b1:	00 
  4054b2:	48 c7 45 c0 08 00 00 	movq   $0x8,-0x40(%rbp)
  4054b9:	00 
  4054ba:	eb 1c                	jmp    4054d8 <AES_KEY_unwrap+0x171>
  4054bc:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  4054c0:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  4054c4:	48 01 d0             	add    %rdx,%rax
  4054c7:	0f b6 00             	movzbl (%rax),%eax
  4054ca:	0f b6 c0             	movzbl %al,%eax
  4054cd:	2d a6 00 00 00       	sub    $0xa6,%eax
  4054d2:	48 98                	cltq   
  4054d4:	48 09 45 c8          	or     %rax,-0x38(%rbp)
  4054d8:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  4054dc:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  4054e0:	48 89 55 c0          	mov    %rdx,-0x40(%rbp)
  4054e4:	48 85 c0             	test   %rax,%rax
  4054e7:	75 d3                	jne    4054bc <AES_KEY_unwrap+0x155>
  4054e9:	48 83 7d c8 00       	cmpq   $0x0,-0x38(%rbp)
  4054ee:	74 07                	je     4054f7 <AES_KEY_unwrap+0x190>
  4054f0:	b8 1a 00 00 00       	mov    $0x1a,%eax
  4054f5:	eb 05                	jmp    4054fc <AES_KEY_unwrap+0x195>
  4054f7:	b8 00 00 00 00       	mov    $0x0,%eax
  4054fc:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  405500:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  405507:	00 00 
  405509:	74 05                	je     405510 <AES_KEY_unwrap+0x1a9>
  40550b:	e8 a0 93 04 00       	call   44e8b0 <__stack_chk_fail>
  405510:	c9                   	leave  
  405511:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
