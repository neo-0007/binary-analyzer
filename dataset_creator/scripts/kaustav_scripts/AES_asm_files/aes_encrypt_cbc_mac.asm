
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004018bd <aes_encrypt_cbc_mac>:
  4018bd:	f3 0f 1e fa          	endbr64 
  4018c1:	55                   	push   %rbp
  4018c2:	48 89 e5             	mov    %rsp,%rbp
  4018c5:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
  4018c9:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
  4018cd:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  4018d1:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
  4018d5:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
  4018d9:	44 89 45 8c          	mov    %r8d,-0x74(%rbp)
  4018dd:	4c 89 4d 80          	mov    %r9,-0x80(%rbp)
  4018e1:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4018e8:	00 00 
  4018ea:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4018ee:	31 c0                	xor    %eax,%eax
  4018f0:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  4018f4:	83 e0 0f             	and    $0xf,%eax
  4018f7:	48 85 c0             	test   %rax,%rax
  4018fa:	74 0a                	je     401906 <aes_encrypt_cbc_mac+0x49>
  4018fc:	b8 00 00 00 00       	mov    $0x0,%eax
  401901:	e9 a9 00 00 00       	jmp    4019af <aes_encrypt_cbc_mac+0xf2>
  401906:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  40190a:	48 c1 e8 04          	shr    $0x4,%rax
  40190e:	89 45 bc             	mov    %eax,-0x44(%rbp)
  401911:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  401915:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401919:	48 8b 00             	mov    (%rax),%rax
  40191c:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401920:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401924:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%rbp)
  40192b:	eb 62                	jmp    40198f <aes_encrypt_cbc_mac+0xd2>
  40192d:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401930:	c1 e0 04             	shl    $0x4,%eax
  401933:	48 63 d0             	movslq %eax,%rdx
  401936:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  40193a:	48 01 d0             	add    %rdx,%rax
  40193d:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401941:	48 8b 00             	mov    (%rax),%rax
  401944:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  401948:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  40194c:	48 8d 4d c0          	lea    -0x40(%rbp),%rcx
  401950:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  401954:	ba 10 00 00 00       	mov    $0x10,%edx
  401959:	48 89 ce             	mov    %rcx,%rsi
  40195c:	48 89 c7             	mov    %rax,%rdi
  40195f:	e8 e1 fd ff ff       	call   401745 <xor_buf>
  401964:	8b 4d 8c             	mov    -0x74(%rbp),%ecx
  401967:	48 8b 55 90          	mov    -0x70(%rbp),%rdx
  40196b:	48 8d 75 d0          	lea    -0x30(%rbp),%rsi
  40196f:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  401973:	48 89 c7             	mov    %rax,%rdi
  401976:	e8 60 38 00 00       	call   4051db <aes_encrypt>
  40197b:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40197f:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  401983:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401987:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  40198b:	83 45 b8 01          	addl   $0x1,-0x48(%rbp)
  40198f:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401992:	3b 45 bc             	cmp    -0x44(%rbp),%eax
  401995:	7c 96                	jl     40192d <aes_encrypt_cbc_mac+0x70>
  401997:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  40199b:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  40199f:	48 8b 4d 98          	mov    -0x68(%rbp),%rcx
  4019a3:	48 89 01             	mov    %rax,(%rcx)
  4019a6:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  4019aa:	b8 01 00 00 00       	mov    $0x1,%eax
  4019af:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4019b3:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  4019ba:	00 00 
  4019bc:	74 05                	je     4019c3 <aes_encrypt_cbc_mac+0x106>
  4019be:	e8 ad c7 04 00       	call   44e170 <__stack_chk_fail>
  4019c3:	c9                   	leave  
  4019c4:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
