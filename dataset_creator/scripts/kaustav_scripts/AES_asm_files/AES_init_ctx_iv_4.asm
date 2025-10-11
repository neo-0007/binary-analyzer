
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401a2e <AES_init_ctx_iv>:
  401a2e:	f3 0f 1e fa          	endbr64 
  401a32:	55                   	push   %rbp
  401a33:	48 89 e5             	mov    %rsp,%rbp
  401a36:	48 83 ec 20          	sub    $0x20,%rsp
  401a3a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401a3e:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401a42:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401a46:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a4a:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  401a4e:	48 89 d6             	mov    %rdx,%rsi
  401a51:	48 89 c7             	mov    %rax,%rdi
  401a54:	e8 ec fc ff ff       	call   401745 <KeyExpansion>
  401a59:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a5d:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  401a64:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401a68:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401a6c:	48 8b 00             	mov    (%rax),%rax
  401a6f:	48 89 01             	mov    %rax,(%rcx)
  401a72:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  401a76:	90                   	nop
  401a77:	c9                   	leave  
  401a78:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
