
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004038aa <AES_ECB_encrypt>:
  4038aa:	f3 0f 1e fa          	endbr64 
  4038ae:	55                   	push   %rbp
  4038af:	48 89 e5             	mov    %rsp,%rbp
  4038b2:	48 83 ec 10          	sub    $0x10,%rsp
  4038b6:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  4038ba:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  4038be:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4038c2:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4038c6:	48 89 d6             	mov    %rdx,%rsi
  4038c9:	48 89 c7             	mov    %rax,%rdi
  4038cc:	e8 3c fc ff ff       	call   40350d <Cipher>
  4038d1:	90                   	nop
  4038d2:	c9                   	leave  
  4038d3:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:

./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402953 <AES_ECB_encrypt>:
  402953:	f3 0f 1e fa          	endbr64 
  402957:	55                   	push   %rbp
  402958:	48 89 e5             	mov    %rsp,%rbp
  40295b:	48 83 ec 30          	sub    $0x30,%rsp
  40295f:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  402963:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  402967:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  40296b:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
  40296f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402973:	48 c1 e8 04          	shr    $0x4,%rax
  402977:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40297b:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  40297f:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  402983:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402987:	48 89 ce             	mov    %rcx,%rsi
  40298a:	48 89 c7             	mov    %rax,%rdi
  40298d:	e8 ce e6 ff ff       	call   401060 <_init+0x60>
  402992:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402996:	48 89 c7             	mov    %rax,%rdi
  402999:	e8 8e ee ff ff       	call   40182c <KeyExpansion>
  40299e:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4029a2:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  4029a6:	eb 18                	jmp    4029c0 <AES_ECB_encrypt+0x6d>
  4029a8:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  4029ac:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4029b0:	48 89 d6             	mov    %rdx,%rsi
  4029b3:	48 89 c7             	mov    %rax,%rdi
  4029b6:	e8 ff f3 ff ff       	call   401dba <rijndaelEncrypt>
  4029bb:	48 83 45 f0 10       	addq   $0x10,-0x10(%rbp)
  4029c0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4029c4:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  4029c8:	48 89 55 f8          	mov    %rdx,-0x8(%rbp)
  4029cc:	48 85 c0             	test   %rax,%rax
  4029cf:	75 d7                	jne    4029a8 <AES_ECB_encrypt+0x55>
  4029d1:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4029d5:	0f b6 c0             	movzbl %al,%eax
  4029d8:	83 e0 0f             	and    $0xf,%eax
  4029db:	89 c2                	mov    %eax,%edx
  4029dd:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4029e1:	48 89 c6             	mov    %rax,%rsi
  4029e4:	89 d7                	mov    %edx,%edi
  4029e6:	e8 15 ff ff ff       	call   402900 <padBlock>
  4029eb:	84 c0                	test   %al,%al
  4029ed:	74 13                	je     402a02 <AES_ECB_encrypt+0xaf>
  4029ef:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  4029f3:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4029f7:	48 89 d6             	mov    %rdx,%rsi
  4029fa:	48 89 c7             	mov    %rax,%rdi
  4029fd:	e8 b8 f3 ff ff       	call   401dba <rijndaelEncrypt>
  402a02:	90                   	nop
  402a03:	c9                   	leave  
  402a04:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
