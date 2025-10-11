
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402a22 <AES_CBC_decrypt_buffer>:
  402a22:	f3 0f 1e fa          	endbr64 
  402a26:	55                   	push   %rbp
  402a27:	48 89 e5             	mov    %rsp,%rbp
  402a2a:	48 83 ec 50          	sub    $0x50,%rsp
  402a2e:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  402a32:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  402a36:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  402a3a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402a41:	00 00 
  402a43:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  402a47:	31 c0                	xor    %eax,%eax
  402a49:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  402a50:	00 
  402a51:	eb 64                	jmp    402ab7 <AES_CBC_decrypt_buffer+0x95>
  402a53:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  402a57:	48 8b 50 08          	mov    0x8(%rax),%rdx
  402a5b:	48 8b 00             	mov    (%rax),%rax
  402a5e:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  402a62:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  402a66:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  402a6a:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  402a6e:	48 89 d6             	mov    %rdx,%rsi
  402a71:	48 89 c7             	mov    %rax,%rdi
  402a74:	e8 f9 fd ff ff       	call   402872 <InvCipher>
  402a79:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402a7d:	48 8d 90 b0 00 00 00 	lea    0xb0(%rax),%rdx
  402a84:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  402a88:	48 89 d6             	mov    %rdx,%rsi
  402a8b:	48 89 c7             	mov    %rax,%rdi
  402a8e:	e8 ae fe ff ff       	call   402941 <XorWithIv>
  402a93:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402a97:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  402a9e:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  402aa2:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402aa6:	48 89 01             	mov    %rax,(%rcx)
  402aa9:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  402aad:	48 83 45 c0 10       	addq   $0x10,-0x40(%rbp)
  402ab2:	48 83 45 d8 10       	addq   $0x10,-0x28(%rbp)
  402ab7:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402abb:	48 3b 45 b8          	cmp    -0x48(%rbp),%rax
  402abf:	72 92                	jb     402a53 <AES_CBC_decrypt_buffer+0x31>
  402ac1:	90                   	nop
  402ac2:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402ac6:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  402acd:	00 00 
  402acf:	74 05                	je     402ad6 <AES_CBC_decrypt_buffer+0xb4>
  402ad1:	e8 5a 85 04 00       	call   44b030 <__stack_chk_fail>
  402ad6:	c9                   	leave  
  402ad7:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
