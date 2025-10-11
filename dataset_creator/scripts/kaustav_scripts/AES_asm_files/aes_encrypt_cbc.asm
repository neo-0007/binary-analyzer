
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004017a1 <aes_encrypt_cbc>:
  4017a1:	f3 0f 1e fa          	endbr64 
  4017a5:	55                   	push   %rbp
  4017a6:	48 89 e5             	mov    %rsp,%rbp
  4017a9:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
  4017ad:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
  4017b1:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  4017b5:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
  4017b9:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
  4017bd:	44 89 45 8c          	mov    %r8d,-0x74(%rbp)
  4017c1:	4c 89 4d 80          	mov    %r9,-0x80(%rbp)
  4017c5:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4017cc:	00 00 
  4017ce:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4017d2:	31 c0                	xor    %eax,%eax
  4017d4:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  4017d8:	83 e0 0f             	and    $0xf,%eax
  4017db:	48 85 c0             	test   %rax,%rax
  4017de:	74 0a                	je     4017ea <aes_encrypt_cbc+0x49>
  4017e0:	b8 00 00 00 00       	mov    $0x0,%eax
  4017e5:	e9 bd 00 00 00       	jmp    4018a7 <aes_encrypt_cbc+0x106>
  4017ea:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  4017ee:	48 c1 e8 04          	shr    $0x4,%rax
  4017f2:	89 45 bc             	mov    %eax,-0x44(%rbp)
  4017f5:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  4017f9:	48 8b 50 08          	mov    0x8(%rax),%rdx
  4017fd:	48 8b 00             	mov    (%rax),%rax
  401800:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401804:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401808:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%rbp)
  40180f:	e9 82 00 00 00       	jmp    401896 <aes_encrypt_cbc+0xf5>
  401814:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401817:	c1 e0 04             	shl    $0x4,%eax
  40181a:	48 63 d0             	movslq %eax,%rdx
  40181d:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  401821:	48 01 d0             	add    %rdx,%rax
  401824:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401828:	48 8b 00             	mov    (%rax),%rax
  40182b:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  40182f:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  401833:	48 8d 4d c0          	lea    -0x40(%rbp),%rcx
  401837:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40183b:	ba 10 00 00 00       	mov    $0x10,%edx
  401840:	48 89 ce             	mov    %rcx,%rsi
  401843:	48 89 c7             	mov    %rax,%rdi
  401846:	e8 fa fe ff ff       	call   401745 <xor_buf>
  40184b:	8b 4d 8c             	mov    -0x74(%rbp),%ecx
  40184e:	48 8b 55 90          	mov    -0x70(%rbp),%rdx
  401852:	48 8d 75 d0          	lea    -0x30(%rbp),%rsi
  401856:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  40185a:	48 89 c7             	mov    %rax,%rdi
  40185d:	e8 79 39 00 00       	call   4051db <aes_encrypt>
  401862:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401865:	c1 e0 04             	shl    $0x4,%eax
  401868:	48 63 d0             	movslq %eax,%rdx
  40186b:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  40186f:	48 8d 0c 02          	lea    (%rdx,%rax,1),%rcx
  401873:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  401877:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  40187b:	48 89 01             	mov    %rax,(%rcx)
  40187e:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  401882:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  401886:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  40188a:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  40188e:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401892:	83 45 b8 01          	addl   $0x1,-0x48(%rbp)
  401896:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401899:	3b 45 bc             	cmp    -0x44(%rbp),%eax
  40189c:	0f 8c 72 ff ff ff    	jl     401814 <aes_encrypt_cbc+0x73>
  4018a2:	b8 01 00 00 00       	mov    $0x1,%eax
  4018a7:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4018ab:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  4018b2:	00 00 
  4018b4:	74 05                	je     4018bb <aes_encrypt_cbc+0x11a>
  4018b6:	e8 b5 c8 04 00       	call   44e170 <__stack_chk_fail>
  4018bb:	c9                   	leave  
  4018bc:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
