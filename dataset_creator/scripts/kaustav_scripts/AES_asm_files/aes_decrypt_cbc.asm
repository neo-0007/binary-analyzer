
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004019c5 <aes_decrypt_cbc>:
  4019c5:	f3 0f 1e fa          	endbr64 
  4019c9:	55                   	push   %rbp
  4019ca:	48 89 e5             	mov    %rsp,%rbp
  4019cd:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
  4019d1:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
  4019d5:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  4019d9:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
  4019dd:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
  4019e1:	44 89 45 8c          	mov    %r8d,-0x74(%rbp)
  4019e5:	4c 89 4d 80          	mov    %r9,-0x80(%rbp)
  4019e9:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4019f0:	00 00 
  4019f2:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4019f6:	31 c0                	xor    %eax,%eax
  4019f8:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  4019fc:	83 e0 0f             	and    $0xf,%eax
  4019ff:	48 85 c0             	test   %rax,%rax
  401a02:	74 0a                	je     401a0e <aes_decrypt_cbc+0x49>
  401a04:	b8 00 00 00 00       	mov    $0x0,%eax
  401a09:	e9 bd 00 00 00       	jmp    401acb <aes_decrypt_cbc+0x106>
  401a0e:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  401a12:	48 c1 e8 04          	shr    $0x4,%rax
  401a16:	89 45 bc             	mov    %eax,-0x44(%rbp)
  401a19:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  401a1d:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401a21:	48 8b 00             	mov    (%rax),%rax
  401a24:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401a28:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401a2c:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%rbp)
  401a33:	e9 82 00 00 00       	jmp    401aba <aes_decrypt_cbc+0xf5>
  401a38:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401a3b:	c1 e0 04             	shl    $0x4,%eax
  401a3e:	48 63 d0             	movslq %eax,%rdx
  401a41:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  401a45:	48 01 d0             	add    %rdx,%rax
  401a48:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401a4c:	48 8b 00             	mov    (%rax),%rax
  401a4f:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  401a53:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  401a57:	8b 4d 8c             	mov    -0x74(%rbp),%ecx
  401a5a:	48 8b 55 90          	mov    -0x70(%rbp),%rdx
  401a5e:	48 8d 75 d0          	lea    -0x30(%rbp),%rsi
  401a62:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  401a66:	48 89 c7             	mov    %rax,%rdi
  401a69:	e8 3e 3d 00 00       	call   4057ac <aes_decrypt>
  401a6e:	48 8d 4d d0          	lea    -0x30(%rbp),%rcx
  401a72:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  401a76:	ba 10 00 00 00       	mov    $0x10,%edx
  401a7b:	48 89 ce             	mov    %rcx,%rsi
  401a7e:	48 89 c7             	mov    %rax,%rdi
  401a81:	e8 bf fc ff ff       	call   401745 <xor_buf>
  401a86:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401a89:	c1 e0 04             	shl    $0x4,%eax
  401a8c:	48 63 d0             	movslq %eax,%rdx
  401a8f:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  401a93:	48 8d 0c 02          	lea    (%rdx,%rax,1),%rcx
  401a97:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  401a9b:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  401a9f:	48 89 01             	mov    %rax,(%rcx)
  401aa2:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  401aa6:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  401aaa:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  401aae:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401ab2:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401ab6:	83 45 b8 01          	addl   $0x1,-0x48(%rbp)
  401aba:	8b 45 b8             	mov    -0x48(%rbp),%eax
  401abd:	3b 45 bc             	cmp    -0x44(%rbp),%eax
  401ac0:	0f 8c 72 ff ff ff    	jl     401a38 <aes_decrypt_cbc+0x73>
  401ac6:	b8 01 00 00 00       	mov    $0x1,%eax
  401acb:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  401acf:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  401ad6:	00 00 
  401ad8:	74 05                	je     401adf <aes_decrypt_cbc+0x11a>
  401ada:	e8 91 c6 04 00       	call   44e170 <__stack_chk_fail>
  401adf:	c9                   	leave  
  401ae0:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
