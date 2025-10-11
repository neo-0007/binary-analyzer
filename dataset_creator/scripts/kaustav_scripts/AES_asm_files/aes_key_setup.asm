
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

000000000040273e <aes_key_setup>:
  40273e:	f3 0f 1e fa          	endbr64 
  402742:	55                   	push   %rbp
  402743:	48 89 e5             	mov    %rsp,%rbp
  402746:	48 81 ec 90 00 00 00 	sub    $0x90,%rsp
  40274d:	48 89 7d 88          	mov    %rdi,-0x78(%rbp)
  402751:	48 89 75 80          	mov    %rsi,-0x80(%rbp)
  402755:	89 95 7c ff ff ff    	mov    %edx,-0x84(%rbp)
  40275b:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402762:	00 00 
  402764:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  402768:	31 c0                	xor    %eax,%eax
  40276a:	c7 45 ac 04 00 00 00 	movl   $0x4,-0x54(%rbp)
  402771:	c7 45 b0 00 00 00 01 	movl   $0x1000000,-0x50(%rbp)
  402778:	c7 45 b4 00 00 00 02 	movl   $0x2000000,-0x4c(%rbp)
  40277f:	c7 45 b8 00 00 00 04 	movl   $0x4000000,-0x48(%rbp)
  402786:	c7 45 bc 00 00 00 08 	movl   $0x8000000,-0x44(%rbp)
  40278d:	c7 45 c0 00 00 00 10 	movl   $0x10000000,-0x40(%rbp)
  402794:	c7 45 c4 00 00 00 20 	movl   $0x20000000,-0x3c(%rbp)
  40279b:	c7 45 c8 00 00 00 40 	movl   $0x40000000,-0x38(%rbp)
  4027a2:	c7 45 cc 00 00 00 80 	movl   $0x80000000,-0x34(%rbp)
  4027a9:	c7 45 d0 00 00 00 1b 	movl   $0x1b000000,-0x30(%rbp)
  4027b0:	c7 45 d4 00 00 00 36 	movl   $0x36000000,-0x2c(%rbp)
  4027b7:	c7 45 d8 00 00 00 6c 	movl   $0x6c000000,-0x28(%rbp)
  4027be:	c7 45 dc 00 00 00 d8 	movl   $0xd8000000,-0x24(%rbp)
  4027c5:	c7 45 e0 00 00 00 ab 	movl   $0xab000000,-0x20(%rbp)
  4027cc:	c7 45 e4 00 00 00 4d 	movl   $0x4d000000,-0x1c(%rbp)
  4027d3:	c7 45 e8 00 00 00 9a 	movl   $0x9a000000,-0x18(%rbp)
  4027da:	81 bd 7c ff ff ff 00 	cmpl   $0x100,-0x84(%rbp)
  4027e1:	01 00 00 
  4027e4:	74 4d                	je     402833 <aes_key_setup+0xf5>
  4027e6:	81 bd 7c ff ff ff 00 	cmpl   $0x100,-0x84(%rbp)
  4027ed:	01 00 00 
  4027f0:	0f 8f b4 01 00 00    	jg     4029aa <aes_key_setup+0x26c>
  4027f6:	81 bd 7c ff ff ff 80 	cmpl   $0x80,-0x84(%rbp)
  4027fd:	00 00 00 
  402800:	74 11                	je     402813 <aes_key_setup+0xd5>
  402802:	81 bd 7c ff ff ff c0 	cmpl   $0xc0,-0x84(%rbp)
  402809:	00 00 00 
  40280c:	74 15                	je     402823 <aes_key_setup+0xe5>
  40280e:	e9 97 01 00 00       	jmp    4029aa <aes_key_setup+0x26c>
  402813:	c7 45 9c 0a 00 00 00 	movl   $0xa,-0x64(%rbp)
  40281a:	c7 45 a0 04 00 00 00 	movl   $0x4,-0x60(%rbp)
  402821:	eb 1f                	jmp    402842 <aes_key_setup+0x104>
  402823:	c7 45 9c 0c 00 00 00 	movl   $0xc,-0x64(%rbp)
  40282a:	c7 45 a0 06 00 00 00 	movl   $0x6,-0x60(%rbp)
  402831:	eb 0f                	jmp    402842 <aes_key_setup+0x104>
  402833:	c7 45 9c 0e 00 00 00 	movl   $0xe,-0x64(%rbp)
  40283a:	c7 45 a0 08 00 00 00 	movl   $0x8,-0x60(%rbp)
  402841:	90                   	nop
  402842:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%rbp)
  402849:	e9 8c 00 00 00       	jmp    4028da <aes_key_setup+0x19c>
  40284e:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  402851:	c1 e0 02             	shl    $0x2,%eax
  402854:	48 63 d0             	movslq %eax,%rdx
  402857:	48 8b 45 88          	mov    -0x78(%rbp),%rax
  40285b:	48 01 d0             	add    %rdx,%rax
  40285e:	0f b6 00             	movzbl (%rax),%eax
  402861:	0f b6 c0             	movzbl %al,%eax
  402864:	c1 e0 18             	shl    $0x18,%eax
  402867:	89 c2                	mov    %eax,%edx
  402869:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  40286c:	c1 e0 02             	shl    $0x2,%eax
  40286f:	48 98                	cltq   
  402871:	48 8d 48 01          	lea    0x1(%rax),%rcx
  402875:	48 8b 45 88          	mov    -0x78(%rbp),%rax
  402879:	48 01 c8             	add    %rcx,%rax
  40287c:	0f b6 00             	movzbl (%rax),%eax
  40287f:	0f b6 c0             	movzbl %al,%eax
  402882:	c1 e0 10             	shl    $0x10,%eax
  402885:	09 c2                	or     %eax,%edx
  402887:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  40288a:	c1 e0 02             	shl    $0x2,%eax
  40288d:	48 98                	cltq   
  40288f:	48 8d 48 02          	lea    0x2(%rax),%rcx
  402893:	48 8b 45 88          	mov    -0x78(%rbp),%rax
  402897:	48 01 c8             	add    %rcx,%rax
  40289a:	0f b6 00             	movzbl (%rax),%eax
  40289d:	0f b6 c0             	movzbl %al,%eax
  4028a0:	c1 e0 08             	shl    $0x8,%eax
  4028a3:	09 c2                	or     %eax,%edx
  4028a5:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  4028a8:	c1 e0 02             	shl    $0x2,%eax
  4028ab:	48 98                	cltq   
  4028ad:	48 8d 48 03          	lea    0x3(%rax),%rcx
  4028b1:	48 8b 45 88          	mov    -0x78(%rbp),%rax
  4028b5:	48 01 c8             	add    %rcx,%rax
  4028b8:	0f b6 00             	movzbl (%rax),%eax
  4028bb:	0f b6 c0             	movzbl %al,%eax
  4028be:	09 c2                	or     %eax,%edx
  4028c0:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  4028c3:	48 98                	cltq   
  4028c5:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  4028cc:	00 
  4028cd:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  4028d1:	48 01 c8             	add    %rcx,%rax
  4028d4:	89 10                	mov    %edx,(%rax)
  4028d6:	83 45 a4 01          	addl   $0x1,-0x5c(%rbp)
  4028da:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  4028dd:	3b 45 a0             	cmp    -0x60(%rbp),%eax
  4028e0:	0f 8c 68 ff ff ff    	jl     40284e <aes_key_setup+0x110>
  4028e6:	8b 45 a0             	mov    -0x60(%rbp),%eax
  4028e9:	89 45 a4             	mov    %eax,-0x5c(%rbp)
  4028ec:	e9 a4 00 00 00       	jmp    402995 <aes_key_setup+0x257>
  4028f1:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  4028f4:	48 98                	cltq   
  4028f6:	48 c1 e0 02          	shl    $0x2,%rax
  4028fa:	48 8d 50 fc          	lea    -0x4(%rax),%rdx
  4028fe:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  402902:	48 01 d0             	add    %rdx,%rax
  402905:	8b 00                	mov    (%rax),%eax
  402907:	89 45 a8             	mov    %eax,-0x58(%rbp)
  40290a:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  40290d:	99                   	cltd   
  40290e:	f7 7d a0             	idivl  -0x60(%rbp)
  402911:	89 d0                	mov    %edx,%eax
  402913:	85 c0                	test   %eax,%eax
  402915:	75 26                	jne    40293d <aes_key_setup+0x1ff>
  402917:	8b 45 a8             	mov    -0x58(%rbp),%eax
  40291a:	c1 c0 08             	rol    $0x8,%eax
  40291d:	89 c7                	mov    %eax,%edi
  40291f:	e8 3b fd ff ff       	call   40265f <SubWord>
  402924:	89 c1                	mov    %eax,%ecx
  402926:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  402929:	83 e8 01             	sub    $0x1,%eax
  40292c:	99                   	cltd   
  40292d:	f7 7d a0             	idivl  -0x60(%rbp)
  402930:	48 98                	cltq   
  402932:	8b 44 85 b0          	mov    -0x50(%rbp,%rax,4),%eax
  402936:	31 c8                	xor    %ecx,%eax
  402938:	89 45 a8             	mov    %eax,-0x58(%rbp)
  40293b:	eb 21                	jmp    40295e <aes_key_setup+0x220>
  40293d:	83 7d a0 06          	cmpl   $0x6,-0x60(%rbp)
  402941:	7e 1b                	jle    40295e <aes_key_setup+0x220>
  402943:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  402946:	99                   	cltd   
  402947:	f7 7d a0             	idivl  -0x60(%rbp)
  40294a:	89 d0                	mov    %edx,%eax
  40294c:	83 f8 04             	cmp    $0x4,%eax
  40294f:	75 0d                	jne    40295e <aes_key_setup+0x220>
  402951:	8b 45 a8             	mov    -0x58(%rbp),%eax
  402954:	89 c7                	mov    %eax,%edi
  402956:	e8 04 fd ff ff       	call   40265f <SubWord>
  40295b:	89 45 a8             	mov    %eax,-0x58(%rbp)
  40295e:	8b 45 a4             	mov    -0x5c(%rbp),%eax
  402961:	2b 45 a0             	sub    -0x60(%rbp),%eax
  402964:	48 98                	cltq   
  402966:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  40296d:	00 
  40296e:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  402972:	48 01 d0             	add    %rdx,%rax
  402975:	8b 00                	mov    (%rax),%eax
  402977:	8b 55 a4             	mov    -0x5c(%rbp),%edx
  40297a:	48 63 d2             	movslq %edx,%rdx
  40297d:	48 8d 0c 95 00 00 00 	lea    0x0(,%rdx,4),%rcx
  402984:	00 
  402985:	48 8b 55 80          	mov    -0x80(%rbp),%rdx
  402989:	48 01 ca             	add    %rcx,%rdx
  40298c:	33 45 a8             	xor    -0x58(%rbp),%eax
  40298f:	89 02                	mov    %eax,(%rdx)
  402991:	83 45 a4 01          	addl   $0x1,-0x5c(%rbp)
  402995:	8b 45 9c             	mov    -0x64(%rbp),%eax
  402998:	83 c0 01             	add    $0x1,%eax
  40299b:	0f af 45 ac          	imul   -0x54(%rbp),%eax
  40299f:	39 45 a4             	cmp    %eax,-0x5c(%rbp)
  4029a2:	0f 8c 49 ff ff ff    	jl     4028f1 <aes_key_setup+0x1b3>
  4029a8:	eb 01                	jmp    4029ab <aes_key_setup+0x26d>
  4029aa:	90                   	nop
  4029ab:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4029af:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  4029b6:	00 00 
  4029b8:	74 05                	je     4029bf <aes_key_setup+0x281>
  4029ba:	e8 b1 b7 04 00       	call   44e170 <__stack_chk_fail>
  4029bf:	c9                   	leave  
  4029c0:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
