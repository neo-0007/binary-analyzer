
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004051db <aes_encrypt>:
  4051db:	f3 0f 1e fa          	endbr64 
  4051df:	55                   	push   %rbp
  4051e0:	48 89 e5             	mov    %rsp,%rbp
  4051e3:	48 83 ec 40          	sub    $0x40,%rsp
  4051e7:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  4051eb:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  4051ef:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  4051f3:	89 4d c4             	mov    %ecx,-0x3c(%rbp)
  4051f6:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4051fd:	00 00 
  4051ff:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  405203:	31 c0                	xor    %eax,%eax
  405205:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405209:	0f b6 00             	movzbl (%rax),%eax
  40520c:	88 45 e0             	mov    %al,-0x20(%rbp)
  40520f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405213:	48 83 c0 01          	add    $0x1,%rax
  405217:	0f b6 00             	movzbl (%rax),%eax
  40521a:	88 45 e4             	mov    %al,-0x1c(%rbp)
  40521d:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405221:	48 83 c0 02          	add    $0x2,%rax
  405225:	0f b6 00             	movzbl (%rax),%eax
  405228:	88 45 e8             	mov    %al,-0x18(%rbp)
  40522b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40522f:	48 83 c0 03          	add    $0x3,%rax
  405233:	0f b6 00             	movzbl (%rax),%eax
  405236:	88 45 ec             	mov    %al,-0x14(%rbp)
  405239:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40523d:	48 83 c0 04          	add    $0x4,%rax
  405241:	0f b6 00             	movzbl (%rax),%eax
  405244:	88 45 e1             	mov    %al,-0x1f(%rbp)
  405247:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40524b:	48 83 c0 05          	add    $0x5,%rax
  40524f:	0f b6 00             	movzbl (%rax),%eax
  405252:	88 45 e5             	mov    %al,-0x1b(%rbp)
  405255:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405259:	48 83 c0 06          	add    $0x6,%rax
  40525d:	0f b6 00             	movzbl (%rax),%eax
  405260:	88 45 e9             	mov    %al,-0x17(%rbp)
  405263:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405267:	48 83 c0 07          	add    $0x7,%rax
  40526b:	0f b6 00             	movzbl (%rax),%eax
  40526e:	88 45 ed             	mov    %al,-0x13(%rbp)
  405271:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405275:	48 83 c0 08          	add    $0x8,%rax
  405279:	0f b6 00             	movzbl (%rax),%eax
  40527c:	88 45 e2             	mov    %al,-0x1e(%rbp)
  40527f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405283:	48 83 c0 09          	add    $0x9,%rax
  405287:	0f b6 00             	movzbl (%rax),%eax
  40528a:	88 45 e6             	mov    %al,-0x1a(%rbp)
  40528d:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  405291:	48 83 c0 0a          	add    $0xa,%rax
  405295:	0f b6 00             	movzbl (%rax),%eax
  405298:	88 45 ea             	mov    %al,-0x16(%rbp)
  40529b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40529f:	48 83 c0 0b          	add    $0xb,%rax
  4052a3:	0f b6 00             	movzbl (%rax),%eax
  4052a6:	88 45 ee             	mov    %al,-0x12(%rbp)
  4052a9:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4052ad:	48 83 c0 0c          	add    $0xc,%rax
  4052b1:	0f b6 00             	movzbl (%rax),%eax
  4052b4:	88 45 e3             	mov    %al,-0x1d(%rbp)
  4052b7:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4052bb:	48 83 c0 0d          	add    $0xd,%rax
  4052bf:	0f b6 00             	movzbl (%rax),%eax
  4052c2:	88 45 e7             	mov    %al,-0x19(%rbp)
  4052c5:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4052c9:	48 83 c0 0e          	add    $0xe,%rax
  4052cd:	0f b6 00             	movzbl (%rax),%eax
  4052d0:	88 45 eb             	mov    %al,-0x15(%rbp)
  4052d3:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4052d7:	48 83 c0 0f          	add    $0xf,%rax
  4052db:	0f b6 00             	movzbl (%rax),%eax
  4052de:	88 45 ef             	mov    %al,-0x11(%rbp)
  4052e1:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  4052e5:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4052e9:	48 89 d6             	mov    %rdx,%rsi
  4052ec:	48 89 c7             	mov    %rax,%rdi
  4052ef:	e8 cd d6 ff ff       	call   4029c1 <AddRoundKey>
  4052f4:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4052f8:	48 89 c7             	mov    %rax,%rdi
  4052fb:	e8 87 d9 ff ff       	call   402c87 <SubBytes>
  405300:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405304:	48 89 c7             	mov    %rax,%rdi
  405307:	e8 61 e2 ff ff       	call   40356d <ShiftRows>
  40530c:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405310:	48 89 c7             	mov    %rax,%rdi
  405313:	e8 d7 e4 ff ff       	call   4037ef <MixColumns>
  405318:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40531c:	48 8d 50 10          	lea    0x10(%rax),%rdx
  405320:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405324:	48 89 d6             	mov    %rdx,%rsi
  405327:	48 89 c7             	mov    %rax,%rdi
  40532a:	e8 92 d6 ff ff       	call   4029c1 <AddRoundKey>
  40532f:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405333:	48 89 c7             	mov    %rax,%rdi
  405336:	e8 4c d9 ff ff       	call   402c87 <SubBytes>
  40533b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40533f:	48 89 c7             	mov    %rax,%rdi
  405342:	e8 26 e2 ff ff       	call   40356d <ShiftRows>
  405347:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40534b:	48 89 c7             	mov    %rax,%rdi
  40534e:	e8 9c e4 ff ff       	call   4037ef <MixColumns>
  405353:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405357:	48 8d 50 20          	lea    0x20(%rax),%rdx
  40535b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40535f:	48 89 d6             	mov    %rdx,%rsi
  405362:	48 89 c7             	mov    %rax,%rdi
  405365:	e8 57 d6 ff ff       	call   4029c1 <AddRoundKey>
  40536a:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40536e:	48 89 c7             	mov    %rax,%rdi
  405371:	e8 11 d9 ff ff       	call   402c87 <SubBytes>
  405376:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40537a:	48 89 c7             	mov    %rax,%rdi
  40537d:	e8 eb e1 ff ff       	call   40356d <ShiftRows>
  405382:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405386:	48 89 c7             	mov    %rax,%rdi
  405389:	e8 61 e4 ff ff       	call   4037ef <MixColumns>
  40538e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405392:	48 8d 50 30          	lea    0x30(%rax),%rdx
  405396:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40539a:	48 89 d6             	mov    %rdx,%rsi
  40539d:	48 89 c7             	mov    %rax,%rdi
  4053a0:	e8 1c d6 ff ff       	call   4029c1 <AddRoundKey>
  4053a5:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4053a9:	48 89 c7             	mov    %rax,%rdi
  4053ac:	e8 d6 d8 ff ff       	call   402c87 <SubBytes>
  4053b1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4053b5:	48 89 c7             	mov    %rax,%rdi
  4053b8:	e8 b0 e1 ff ff       	call   40356d <ShiftRows>
  4053bd:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4053c1:	48 89 c7             	mov    %rax,%rdi
  4053c4:	e8 26 e4 ff ff       	call   4037ef <MixColumns>
  4053c9:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4053cd:	48 8d 50 40          	lea    0x40(%rax),%rdx
  4053d1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4053d5:	48 89 d6             	mov    %rdx,%rsi
  4053d8:	48 89 c7             	mov    %rax,%rdi
  4053db:	e8 e1 d5 ff ff       	call   4029c1 <AddRoundKey>
  4053e0:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4053e4:	48 89 c7             	mov    %rax,%rdi
  4053e7:	e8 9b d8 ff ff       	call   402c87 <SubBytes>
  4053ec:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4053f0:	48 89 c7             	mov    %rax,%rdi
  4053f3:	e8 75 e1 ff ff       	call   40356d <ShiftRows>
  4053f8:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4053fc:	48 89 c7             	mov    %rax,%rdi
  4053ff:	e8 eb e3 ff ff       	call   4037ef <MixColumns>
  405404:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405408:	48 8d 50 50          	lea    0x50(%rax),%rdx
  40540c:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405410:	48 89 d6             	mov    %rdx,%rsi
  405413:	48 89 c7             	mov    %rax,%rdi
  405416:	e8 a6 d5 ff ff       	call   4029c1 <AddRoundKey>
  40541b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40541f:	48 89 c7             	mov    %rax,%rdi
  405422:	e8 60 d8 ff ff       	call   402c87 <SubBytes>
  405427:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40542b:	48 89 c7             	mov    %rax,%rdi
  40542e:	e8 3a e1 ff ff       	call   40356d <ShiftRows>
  405433:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405437:	48 89 c7             	mov    %rax,%rdi
  40543a:	e8 b0 e3 ff ff       	call   4037ef <MixColumns>
  40543f:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405443:	48 8d 50 60          	lea    0x60(%rax),%rdx
  405447:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40544b:	48 89 d6             	mov    %rdx,%rsi
  40544e:	48 89 c7             	mov    %rax,%rdi
  405451:	e8 6b d5 ff ff       	call   4029c1 <AddRoundKey>
  405456:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40545a:	48 89 c7             	mov    %rax,%rdi
  40545d:	e8 25 d8 ff ff       	call   402c87 <SubBytes>
  405462:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405466:	48 89 c7             	mov    %rax,%rdi
  405469:	e8 ff e0 ff ff       	call   40356d <ShiftRows>
  40546e:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405472:	48 89 c7             	mov    %rax,%rdi
  405475:	e8 75 e3 ff ff       	call   4037ef <MixColumns>
  40547a:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40547e:	48 8d 50 70          	lea    0x70(%rax),%rdx
  405482:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405486:	48 89 d6             	mov    %rdx,%rsi
  405489:	48 89 c7             	mov    %rax,%rdi
  40548c:	e8 30 d5 ff ff       	call   4029c1 <AddRoundKey>
  405491:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405495:	48 89 c7             	mov    %rax,%rdi
  405498:	e8 ea d7 ff ff       	call   402c87 <SubBytes>
  40549d:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4054a1:	48 89 c7             	mov    %rax,%rdi
  4054a4:	e8 c4 e0 ff ff       	call   40356d <ShiftRows>
  4054a9:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4054ad:	48 89 c7             	mov    %rax,%rdi
  4054b0:	e8 3a e3 ff ff       	call   4037ef <MixColumns>
  4054b5:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4054b9:	48 8d 90 80 00 00 00 	lea    0x80(%rax),%rdx
  4054c0:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4054c4:	48 89 d6             	mov    %rdx,%rsi
  4054c7:	48 89 c7             	mov    %rax,%rdi
  4054ca:	e8 f2 d4 ff ff       	call   4029c1 <AddRoundKey>
  4054cf:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4054d3:	48 89 c7             	mov    %rax,%rdi
  4054d6:	e8 ac d7 ff ff       	call   402c87 <SubBytes>
  4054db:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4054df:	48 89 c7             	mov    %rax,%rdi
  4054e2:	e8 86 e0 ff ff       	call   40356d <ShiftRows>
  4054e7:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4054eb:	48 89 c7             	mov    %rax,%rdi
  4054ee:	e8 fc e2 ff ff       	call   4037ef <MixColumns>
  4054f3:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4054f7:	48 8d 90 90 00 00 00 	lea    0x90(%rax),%rdx
  4054fe:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405502:	48 89 d6             	mov    %rdx,%rsi
  405505:	48 89 c7             	mov    %rax,%rdi
  405508:	e8 b4 d4 ff ff       	call   4029c1 <AddRoundKey>
  40550d:	81 7d c4 80 00 00 00 	cmpl   $0x80,-0x3c(%rbp)
  405514:	0f 84 6d 01 00 00    	je     405687 <aes_encrypt+0x4ac>
  40551a:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40551e:	48 89 c7             	mov    %rax,%rdi
  405521:	e8 61 d7 ff ff       	call   402c87 <SubBytes>
  405526:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40552a:	48 89 c7             	mov    %rax,%rdi
  40552d:	e8 3b e0 ff ff       	call   40356d <ShiftRows>
  405532:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405536:	48 89 c7             	mov    %rax,%rdi
  405539:	e8 b1 e2 ff ff       	call   4037ef <MixColumns>
  40553e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405542:	48 8d 90 a0 00 00 00 	lea    0xa0(%rax),%rdx
  405549:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40554d:	48 89 d6             	mov    %rdx,%rsi
  405550:	48 89 c7             	mov    %rax,%rdi
  405553:	e8 69 d4 ff ff       	call   4029c1 <AddRoundKey>
  405558:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40555c:	48 89 c7             	mov    %rax,%rdi
  40555f:	e8 23 d7 ff ff       	call   402c87 <SubBytes>
  405564:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405568:	48 89 c7             	mov    %rax,%rdi
  40556b:	e8 fd df ff ff       	call   40356d <ShiftRows>
  405570:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405574:	48 89 c7             	mov    %rax,%rdi
  405577:	e8 73 e2 ff ff       	call   4037ef <MixColumns>
  40557c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405580:	48 8d 90 b0 00 00 00 	lea    0xb0(%rax),%rdx
  405587:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40558b:	48 89 d6             	mov    %rdx,%rsi
  40558e:	48 89 c7             	mov    %rax,%rdi
  405591:	e8 2b d4 ff ff       	call   4029c1 <AddRoundKey>
  405596:	81 7d c4 c0 00 00 00 	cmpl   $0xc0,-0x3c(%rbp)
  40559d:	0f 84 b0 00 00 00    	je     405653 <aes_encrypt+0x478>
  4055a3:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4055a7:	48 89 c7             	mov    %rax,%rdi
  4055aa:	e8 d8 d6 ff ff       	call   402c87 <SubBytes>
  4055af:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4055b3:	48 89 c7             	mov    %rax,%rdi
  4055b6:	e8 b2 df ff ff       	call   40356d <ShiftRows>
  4055bb:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4055bf:	48 89 c7             	mov    %rax,%rdi
  4055c2:	e8 28 e2 ff ff       	call   4037ef <MixColumns>
  4055c7:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4055cb:	48 8d 90 c0 00 00 00 	lea    0xc0(%rax),%rdx
  4055d2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4055d6:	48 89 d6             	mov    %rdx,%rsi
  4055d9:	48 89 c7             	mov    %rax,%rdi
  4055dc:	e8 e0 d3 ff ff       	call   4029c1 <AddRoundKey>
  4055e1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4055e5:	48 89 c7             	mov    %rax,%rdi
  4055e8:	e8 9a d6 ff ff       	call   402c87 <SubBytes>
  4055ed:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4055f1:	48 89 c7             	mov    %rax,%rdi
  4055f4:	e8 74 df ff ff       	call   40356d <ShiftRows>
  4055f9:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4055fd:	48 89 c7             	mov    %rax,%rdi
  405600:	e8 ea e1 ff ff       	call   4037ef <MixColumns>
  405605:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  405609:	48 8d 90 d0 00 00 00 	lea    0xd0(%rax),%rdx
  405610:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405614:	48 89 d6             	mov    %rdx,%rsi
  405617:	48 89 c7             	mov    %rax,%rdi
  40561a:	e8 a2 d3 ff ff       	call   4029c1 <AddRoundKey>
  40561f:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405623:	48 89 c7             	mov    %rax,%rdi
  405626:	e8 5c d6 ff ff       	call   402c87 <SubBytes>
  40562b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40562f:	48 89 c7             	mov    %rax,%rdi
  405632:	e8 36 df ff ff       	call   40356d <ShiftRows>
  405637:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40563b:	48 8d 90 e0 00 00 00 	lea    0xe0(%rax),%rdx
  405642:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405646:	48 89 d6             	mov    %rdx,%rsi
  405649:	48 89 c7             	mov    %rax,%rdi
  40564c:	e8 70 d3 ff ff       	call   4029c1 <AddRoundKey>
  405651:	eb 66                	jmp    4056b9 <aes_encrypt+0x4de>
  405653:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405657:	48 89 c7             	mov    %rax,%rdi
  40565a:	e8 28 d6 ff ff       	call   402c87 <SubBytes>
  40565f:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405663:	48 89 c7             	mov    %rax,%rdi
  405666:	e8 02 df ff ff       	call   40356d <ShiftRows>
  40566b:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40566f:	48 8d 90 c0 00 00 00 	lea    0xc0(%rax),%rdx
  405676:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40567a:	48 89 d6             	mov    %rdx,%rsi
  40567d:	48 89 c7             	mov    %rax,%rdi
  405680:	e8 3c d3 ff ff       	call   4029c1 <AddRoundKey>
  405685:	eb 32                	jmp    4056b9 <aes_encrypt+0x4de>
  405687:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40568b:	48 89 c7             	mov    %rax,%rdi
  40568e:	e8 f4 d5 ff ff       	call   402c87 <SubBytes>
  405693:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405697:	48 89 c7             	mov    %rax,%rdi
  40569a:	e8 ce de ff ff       	call   40356d <ShiftRows>
  40569f:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4056a3:	48 8d 90 a0 00 00 00 	lea    0xa0(%rax),%rdx
  4056aa:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4056ae:	48 89 d6             	mov    %rdx,%rsi
  4056b1:	48 89 c7             	mov    %rax,%rdi
  4056b4:	e8 08 d3 ff ff       	call   4029c1 <AddRoundKey>
  4056b9:	0f b6 55 e0          	movzbl -0x20(%rbp),%edx
  4056bd:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4056c1:	88 10                	mov    %dl,(%rax)
  4056c3:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4056c7:	48 8d 50 01          	lea    0x1(%rax),%rdx
  4056cb:	0f b6 45 e4          	movzbl -0x1c(%rbp),%eax
  4056cf:	88 02                	mov    %al,(%rdx)
  4056d1:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4056d5:	48 8d 50 02          	lea    0x2(%rax),%rdx
  4056d9:	0f b6 45 e8          	movzbl -0x18(%rbp),%eax
  4056dd:	88 02                	mov    %al,(%rdx)
  4056df:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4056e3:	48 8d 50 03          	lea    0x3(%rax),%rdx
  4056e7:	0f b6 45 ec          	movzbl -0x14(%rbp),%eax
  4056eb:	88 02                	mov    %al,(%rdx)
  4056ed:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4056f1:	48 8d 50 04          	lea    0x4(%rax),%rdx
  4056f5:	0f b6 45 e1          	movzbl -0x1f(%rbp),%eax
  4056f9:	88 02                	mov    %al,(%rdx)
  4056fb:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4056ff:	48 8d 50 05          	lea    0x5(%rax),%rdx
  405703:	0f b6 45 e5          	movzbl -0x1b(%rbp),%eax
  405707:	88 02                	mov    %al,(%rdx)
  405709:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40570d:	48 8d 50 06          	lea    0x6(%rax),%rdx
  405711:	0f b6 45 e9          	movzbl -0x17(%rbp),%eax
  405715:	88 02                	mov    %al,(%rdx)
  405717:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40571b:	48 8d 50 07          	lea    0x7(%rax),%rdx
  40571f:	0f b6 45 ed          	movzbl -0x13(%rbp),%eax
  405723:	88 02                	mov    %al,(%rdx)
  405725:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405729:	48 8d 50 08          	lea    0x8(%rax),%rdx
  40572d:	0f b6 45 e2          	movzbl -0x1e(%rbp),%eax
  405731:	88 02                	mov    %al,(%rdx)
  405733:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405737:	48 8d 50 09          	lea    0x9(%rax),%rdx
  40573b:	0f b6 45 e6          	movzbl -0x1a(%rbp),%eax
  40573f:	88 02                	mov    %al,(%rdx)
  405741:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405745:	48 8d 50 0a          	lea    0xa(%rax),%rdx
  405749:	0f b6 45 ea          	movzbl -0x16(%rbp),%eax
  40574d:	88 02                	mov    %al,(%rdx)
  40574f:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405753:	48 8d 50 0b          	lea    0xb(%rax),%rdx
  405757:	0f b6 45 ee          	movzbl -0x12(%rbp),%eax
  40575b:	88 02                	mov    %al,(%rdx)
  40575d:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  405761:	48 8d 50 0c          	lea    0xc(%rax),%rdx
  405765:	0f b6 45 e3          	movzbl -0x1d(%rbp),%eax
  405769:	88 02                	mov    %al,(%rdx)
  40576b:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40576f:	48 8d 50 0d          	lea    0xd(%rax),%rdx
  405773:	0f b6 45 e7          	movzbl -0x19(%rbp),%eax
  405777:	88 02                	mov    %al,(%rdx)
  405779:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40577d:	48 8d 50 0e          	lea    0xe(%rax),%rdx
  405781:	0f b6 45 eb          	movzbl -0x15(%rbp),%eax
  405785:	88 02                	mov    %al,(%rdx)
  405787:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40578b:	48 8d 50 0f          	lea    0xf(%rax),%rdx
  40578f:	0f b6 45 ef          	movzbl -0x11(%rbp),%eax
  405793:	88 02                	mov    %al,(%rdx)
  405795:	90                   	nop
  405796:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40579a:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  4057a1:	00 00 
  4057a3:	74 05                	je     4057aa <aes_encrypt+0x5cf>
  4057a5:	e8 c6 89 04 00       	call   44e170 <__stack_chk_fail>
  4057aa:	c9                   	leave  
  4057ab:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
