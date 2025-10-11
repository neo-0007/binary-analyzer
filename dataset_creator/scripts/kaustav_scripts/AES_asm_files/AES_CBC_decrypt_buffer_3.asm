
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004039dd <AES_CBC_decrypt_buffer>:
  4039dd:	f3 0f 1e fa          	endbr64 
  4039e1:	55                   	push   %rbp
  4039e2:	48 89 e5             	mov    %rsp,%rbp
  4039e5:	48 83 ec 50          	sub    $0x50,%rsp
  4039e9:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  4039ed:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  4039f1:	89 55 bc             	mov    %edx,-0x44(%rbp)
  4039f4:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4039fb:	00 00 
  4039fd:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  403a01:	31 c0                	xor    %eax,%eax
  403a03:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  403a0a:	00 
  403a0b:	eb 64                	jmp    403a71 <AES_CBC_decrypt_buffer+0x94>
  403a0d:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  403a11:	48 8b 50 08          	mov    0x8(%rax),%rdx
  403a15:	48 8b 00             	mov    (%rax),%rax
  403a18:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  403a1c:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  403a20:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  403a24:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  403a28:	48 89 d6             	mov    %rdx,%rsi
  403a2b:	48 89 c7             	mov    %rax,%rdi
  403a2e:	e8 fc fd ff ff       	call   40382f <InvCipher>
  403a33:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  403a37:	48 8d 90 b0 00 00 00 	lea    0xb0(%rax),%rdx
  403a3e:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  403a42:	48 89 d6             	mov    %rdx,%rsi
  403a45:	48 89 c7             	mov    %rax,%rdi
  403a48:	e8 b1 fe ff ff       	call   4038fe <XorWithIv>
  403a4d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  403a51:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  403a58:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  403a5c:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  403a60:	48 89 01             	mov    %rax,(%rcx)
  403a63:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  403a67:	48 83 45 c0 10       	addq   $0x10,-0x40(%rbp)
  403a6c:	48 83 45 d8 10       	addq   $0x10,-0x28(%rbp)
  403a71:	8b 45 bc             	mov    -0x44(%rbp),%eax
  403a74:	48 39 45 d8          	cmp    %rax,-0x28(%rbp)
  403a78:	72 93                	jb     403a0d <AES_CBC_decrypt_buffer+0x30>
  403a7a:	90                   	nop
  403a7b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  403a7f:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  403a86:	00 00 
  403a88:	74 05                	je     403a8f <AES_CBC_decrypt_buffer+0xb2>
  403a8a:	e8 81 8c 04 00       	call   44c710 <__stack_chk_fail>
  403a8f:	c9                   	leave  
  403a90:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
