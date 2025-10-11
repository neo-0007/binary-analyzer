
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401b43 <aes_encrypt_ctr>:
  401b43:	f3 0f 1e fa          	endbr64 
  401b47:	55                   	push   %rbp
  401b48:	48 89 e5             	mov    %rsp,%rbp
  401b4b:	48 83 ec 70          	sub    $0x70,%rsp
  401b4f:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
  401b53:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
  401b57:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
  401b5b:	48 89 4d a0          	mov    %rcx,-0x60(%rbp)
  401b5f:	44 89 45 9c          	mov    %r8d,-0x64(%rbp)
  401b63:	4c 89 4d 90          	mov    %r9,-0x70(%rbp)
  401b67:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401b6e:	00 00 
  401b70:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  401b74:	31 c0                	xor    %eax,%eax
  401b76:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
  401b7d:	00 
  401b7e:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  401b82:	48 3b 45 a8          	cmp    -0x58(%rbp),%rax
  401b86:	74 17                	je     401b9f <aes_encrypt_ctr+0x5c>
  401b88:	48 8b 55 b0          	mov    -0x50(%rbp),%rdx
  401b8c:	48 8b 4d b8          	mov    -0x48(%rbp),%rcx
  401b90:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  401b94:	48 89 ce             	mov    %rcx,%rsi
  401b97:	48 89 c7             	mov    %rax,%rdi
  401b9a:	e8 c1 f4 ff ff       	call   401060 <_init+0x60>
  401b9f:	48 8b 45 90          	mov    -0x70(%rbp),%rax
  401ba3:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401ba7:	48 8b 00             	mov    (%rax),%rax
  401baa:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  401bae:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  401bb2:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  401bb6:	48 83 e8 10          	sub    $0x10,%rax
  401bba:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  401bbe:	48 83 7d b0 10       	cmpq   $0x10,-0x50(%rbp)
  401bc3:	76 61                	jbe    401c26 <aes_encrypt_ctr+0xe3>
  401bc5:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
  401bcc:	00 
  401bcd:	eb 4d                	jmp    401c1c <aes_encrypt_ctr+0xd9>
  401bcf:	8b 4d 9c             	mov    -0x64(%rbp),%ecx
  401bd2:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
  401bd6:	48 8d 75 e0          	lea    -0x20(%rbp),%rsi
  401bda:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  401bde:	48 89 c7             	mov    %rax,%rdi
  401be1:	e8 f5 35 00 00       	call   4051db <aes_encrypt>
  401be6:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
  401bea:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  401bee:	48 8d 0c 02          	lea    (%rdx,%rax,1),%rcx
  401bf2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  401bf6:	ba 10 00 00 00       	mov    $0x10,%edx
  401bfb:	48 89 ce             	mov    %rcx,%rsi
  401bfe:	48 89 c7             	mov    %rax,%rdi
  401c01:	e8 3f fb ff ff       	call   401745 <xor_buf>
  401c06:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  401c0a:	be 10 00 00 00       	mov    $0x10,%esi
  401c0f:	48 89 c7             	mov    %rax,%rdi
  401c12:	e8 ca fe ff ff       	call   401ae1 <increment_iv>
  401c17:	48 83 45 c0 10       	addq   $0x10,-0x40(%rbp)
  401c1c:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  401c20:	48 3b 45 c8          	cmp    -0x38(%rbp),%rax
  401c24:	72 a9                	jb     401bcf <aes_encrypt_ctr+0x8c>
  401c26:	8b 4d 9c             	mov    -0x64(%rbp),%ecx
  401c29:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
  401c2d:	48 8d 75 e0          	lea    -0x20(%rbp),%rsi
  401c31:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  401c35:	48 89 c7             	mov    %rax,%rdi
  401c38:	e8 9e 35 00 00       	call   4051db <aes_encrypt>
  401c3d:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  401c41:	48 2b 45 c0          	sub    -0x40(%rbp),%rax
  401c45:	48 89 c2             	mov    %rax,%rdx
  401c48:	48 8b 4d a8          	mov    -0x58(%rbp),%rcx
  401c4c:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  401c50:	48 01 c1             	add    %rax,%rcx
  401c53:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  401c57:	48 89 ce             	mov    %rcx,%rsi
  401c5a:	48 89 c7             	mov    %rax,%rdi
  401c5d:	e8 e3 fa ff ff       	call   401745 <xor_buf>
  401c62:	90                   	nop
  401c63:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401c67:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  401c6e:	00 00 
  401c70:	74 05                	je     401c77 <aes_encrypt_ctr+0x134>
  401c72:	e8 f9 c4 04 00       	call   44e170 <__stack_chk_fail>
  401c77:	c9                   	leave  
  401c78:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
