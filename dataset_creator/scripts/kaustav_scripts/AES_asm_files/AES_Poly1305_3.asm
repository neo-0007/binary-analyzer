
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000405711 <AES_Poly1305>:
  405711:	f3 0f 1e fa          	endbr64 
  405715:	55                   	push   %rbp
  405716:	48 89 e5             	mov    %rsp,%rbp
  405719:	48 81 ec d0 00 00 00 	sub    $0xd0,%rsp
  405720:	48 89 bd 58 ff ff ff 	mov    %rdi,-0xa8(%rbp)
  405727:	48 89 b5 50 ff ff ff 	mov    %rsi,-0xb0(%rbp)
  40572e:	48 89 95 48 ff ff ff 	mov    %rdx,-0xb8(%rbp)
  405735:	48 89 8d 40 ff ff ff 	mov    %rcx,-0xc0(%rbp)
  40573c:	4c 89 85 38 ff ff ff 	mov    %r8,-0xc8(%rbp)
  405743:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40574a:	00 00 
  40574c:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  405750:	31 c0                	xor    %eax,%eax
  405752:	48 c7 45 a0 01 00 00 	movq   $0x1,-0x60(%rbp)
  405759:	00 
  40575a:	48 c7 45 a8 00 00 00 	movq   $0x0,-0x58(%rbp)
  405761:	00 
  405762:	c6 45 b0 00          	movb   $0x0,-0x50(%rbp)
  405766:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
  40576d:	00 
  40576e:	48 c7 45 c8 00 00 00 	movq   $0x0,-0x38(%rbp)
  405775:	00 
  405776:	c6 45 d0 00          	movb   $0x0,-0x30(%rbp)
  40577a:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
  405781:	00 
  405782:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  405789:	00 
  40578a:	c6 45 f0 00          	movb   $0x0,-0x10(%rbp)
  40578e:	c6 85 6f ff ff ff 10 	movb   $0x10,-0x91(%rbp)
  405795:	48 8b 85 40 ff ff ff 	mov    -0xc0(%rbp),%rax
  40579c:	48 83 e8 01          	sub    $0x1,%rax
  4057a0:	48 c1 e8 04          	shr    $0x4,%rax
  4057a4:	48 89 85 70 ff ff ff 	mov    %rax,-0x90(%rbp)
  4057ab:	48 8b 95 48 ff ff ff 	mov    -0xb8(%rbp),%rdx
  4057b2:	48 8b 85 40 ff ff ff 	mov    -0xc0(%rbp),%rax
  4057b9:	48 01 d0             	add    %rdx,%rax
  4057bc:	48 89 85 78 ff ff ff 	mov    %rax,-0x88(%rbp)
  4057c3:	48 8b 85 58 ff ff ff 	mov    -0xa8(%rbp),%rax
  4057ca:	48 89 c7             	mov    %rax,%rdi
  4057cd:	e8 5a c0 ff ff       	call   40182c <KeyExpansion>
  4057d2:	48 8b 95 38 ff ff ff 	mov    -0xc8(%rbp),%rdx
  4057d9:	48 8b 85 50 ff ff ff 	mov    -0xb0(%rbp),%rax
  4057e0:	48 89 d6             	mov    %rdx,%rsi
  4057e3:	48 89 c7             	mov    %rax,%rdi
  4057e6:	e8 cf c5 ff ff       	call   401dba <rijndaelEncrypt>
  4057eb:	48 83 bd 40 ff ff ff 	cmpq   $0x0,-0xc0(%rbp)
  4057f2:	00 
  4057f3:	0f 84 eb 01 00 00    	je     4059e4 <AES_Poly1305+0x2d3>
  4057f9:	0f b6 95 6f ff ff ff 	movzbl -0x91(%rbp),%edx
  405800:	48 8b 85 58 ff ff ff 	mov    -0xa8(%rbp),%rax
  405807:	48 8d 48 10          	lea    0x10(%rax),%rcx
  40580b:	48 8d 45 80          	lea    -0x80(%rbp),%rax
  40580f:	48 89 ce             	mov    %rcx,%rsi
  405812:	48 89 c7             	mov    %rax,%rdi
  405815:	e8 46 b8 ff ff       	call   401060 <_init+0x60>
  40581a:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  405821:	48 98                	cltq   
  405823:	c6 44 05 80 00       	movb   $0x0,-0x80(%rbp,%rax,1)
  405828:	eb 4c                	jmp    405876 <AES_Poly1305+0x165>
  40582a:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  405831:	8d 50 ff             	lea    -0x1(%rax),%edx
  405834:	88 95 6f ff ff ff    	mov    %dl,-0x91(%rbp)
  40583a:	0f b6 d0             	movzbl %al,%edx
  40583d:	48 63 d2             	movslq %edx,%rdx
  405840:	0f b6 54 15 80       	movzbl -0x80(%rbp,%rdx,1),%edx
  405845:	0f b6 c0             	movzbl %al,%eax
  405848:	83 e2 fc             	and    $0xfffffffc,%edx
  40584b:	48 98                	cltq   
  40584d:	88 54 05 80          	mov    %dl,-0x80(%rbp,%rax,1)
  405851:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  405858:	48 98                	cltq   
  40585a:	0f b6 54 05 80       	movzbl -0x80(%rbp,%rax,1),%edx
  40585f:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  405866:	83 e2 0f             	and    $0xf,%edx
  405869:	48 98                	cltq   
  40586b:	88 54 05 80          	mov    %dl,-0x80(%rbp,%rax,1)
  40586f:	80 ad 6f ff ff ff 03 	subb   $0x3,-0x91(%rbp)
  405876:	80 bd 6f ff ff ff 03 	cmpb   $0x3,-0x91(%rbp)
  40587d:	77 ab                	ja     40582a <AES_Poly1305+0x119>
  40587f:	48 8b 85 40 ff ff ff 	mov    -0xc0(%rbp),%rax
  405886:	89 c1                	mov    %eax,%ecx
  405888:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
  40588f:	c1 e0 04             	shl    $0x4,%eax
  405892:	89 c2                	mov    %eax,%edx
  405894:	89 c8                	mov    %ecx,%eax
  405896:	29 d0                	sub    %edx,%eax
  405898:	88 85 6f ff ff ff    	mov    %al,-0x91(%rbp)
  40589e:	0f b6 95 6f ff ff ff 	movzbl -0x91(%rbp),%edx
  4058a5:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  4058ac:	48 f7 d8             	neg    %rax
  4058af:	48 01 85 78 ff ff ff 	add    %rax,-0x88(%rbp)
  4058b6:	48 8b 8d 78 ff ff ff 	mov    -0x88(%rbp),%rcx
  4058bd:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  4058c1:	48 89 ce             	mov    %rcx,%rsi
  4058c4:	48 89 c7             	mov    %rax,%rdi
  4058c7:	e8 94 b7 ff ff       	call   401060 <_init+0x60>
  4058cc:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  4058d3:	48 98                	cltq   
  4058d5:	c6 44 05 c0 01       	movb   $0x1,-0x40(%rbp,%rax,1)
  4058da:	c6 85 6f ff ff ff 10 	movb   $0x10,-0x91(%rbp)
  4058e1:	48 8d 55 a0          	lea    -0x60(%rbp),%rdx
  4058e5:	48 8d 45 80          	lea    -0x80(%rbp),%rax
  4058e9:	48 89 d6             	mov    %rdx,%rsi
  4058ec:	48 89 c7             	mov    %rax,%rdi
  4058ef:	e8 04 fd ff ff       	call   4055f8 <mulLblocks>
  4058f4:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4058f8:	48 8d 45 a0          	lea    -0x60(%rbp),%rax
  4058fc:	48 89 d6             	mov    %rdx,%rsi
  4058ff:	48 89 c7             	mov    %rax,%rdi
  405902:	e8 f1 fc ff ff       	call   4055f8 <mulLblocks>
  405907:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  40590b:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  40590f:	be 11 00 00 00       	mov    $0x11,%esi
  405914:	48 89 c7             	mov    %rax,%rdi
  405917:	e8 f6 fb ff ff       	call   405512 <addLblocks>
  40591c:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  405923:	48 98                	cltq   
  405925:	0f b6 44 05 e0       	movzbl -0x20(%rbp,%rax,1),%eax
  40592a:	0f b6 d0             	movzbl %al,%edx
  40592d:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  405931:	89 d6                	mov    %edx,%esi
  405933:	48 89 c7             	mov    %rax,%rdi
  405936:	e8 4f fc ff ff       	call   40558a <modP1305>
  40593b:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
  405942:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  405946:	48 89 95 70 ff ff ff 	mov    %rdx,-0x90(%rbp)
  40594d:	48 85 c0             	test   %rax,%rax
  405950:	0f 85 48 ff ff ff    	jne    40589e <AES_Poly1305+0x18d>
  405956:	0f b6 85 6f ff ff ff 	movzbl -0x91(%rbp),%eax
  40595d:	48 98                	cltq   
  40595f:	0f b6 44 05 e0       	movzbl -0x20(%rbp,%rax,1),%eax
  405964:	0f b6 c0             	movzbl %al,%eax
  405967:	c1 e0 02             	shl    $0x2,%eax
  40596a:	48 98                	cltq   
  40596c:	48 89 85 70 ff ff ff 	mov    %rax,-0x90(%rbp)
  405973:	0f b6 45 e0          	movzbl -0x20(%rbp),%eax
  405977:	3c fa                	cmp    $0xfa,%al
  405979:	76 34                	jbe    4059af <AES_Poly1305+0x29e>
  40597b:	48 83 bd 70 ff ff ff 	cmpq   $0xc,-0x90(%rbp)
  405982:	0c 
  405983:	75 2a                	jne    4059af <AES_Poly1305+0x29e>
  405985:	48 c7 85 70 ff ff ff 	movq   $0x1,-0x90(%rbp)
  40598c:	01 00 00 00 
  405990:	eb 08                	jmp    40599a <AES_Poly1305+0x289>
  405992:	48 83 85 70 ff ff ff 	addq   $0x1,-0x90(%rbp)
  405999:	01 
  40599a:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  40599e:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
  4059a5:	48 01 d0             	add    %rdx,%rax
  4059a8:	0f b6 00             	movzbl (%rax),%eax
  4059ab:	3c ff                	cmp    $0xff,%al
  4059ad:	74 e3                	je     405992 <AES_Poly1305+0x281>
  4059af:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
  4059b6:	48 c1 e8 02          	shr    $0x2,%rax
  4059ba:	89 c2                	mov    %eax,%edx
  4059bc:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059c0:	89 d6                	mov    %edx,%esi
  4059c2:	48 89 c7             	mov    %rax,%rdi
  4059c5:	e8 c0 fb ff ff       	call   40558a <modP1305>
  4059ca:	48 8b 95 38 ff ff ff 	mov    -0xc8(%rbp),%rdx
  4059d1:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  4059d5:	be 10 00 00 00       	mov    $0x10,%esi
  4059da:	48 89 c7             	mov    %rax,%rdi
  4059dd:	e8 30 fb ff ff       	call   405512 <addLblocks>
  4059e2:	eb 01                	jmp    4059e5 <AES_Poly1305+0x2d4>
  4059e4:	90                   	nop
  4059e5:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4059e9:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  4059f0:	00 00 
  4059f2:	74 05                	je     4059f9 <AES_Poly1305+0x2e8>
  4059f4:	e8 b7 8e 04 00       	call   44e8b0 <__stack_chk_fail>
  4059f9:	c9                   	leave  
  4059fa:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
