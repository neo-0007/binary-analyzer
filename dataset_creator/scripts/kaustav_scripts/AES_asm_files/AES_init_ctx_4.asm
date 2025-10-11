
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401a04 <AES_init_ctx>:
  401a04:	f3 0f 1e fa          	endbr64 
  401a08:	55                   	push   %rbp
  401a09:	48 89 e5             	mov    %rsp,%rbp
  401a0c:	48 83 ec 10          	sub    $0x10,%rsp
  401a10:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401a14:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401a18:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a1c:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  401a20:	48 89 d6             	mov    %rdx,%rsi
  401a23:	48 89 c7             	mov    %rax,%rdi
  401a26:	e8 1a fd ff ff       	call   401745 <KeyExpansion>
  401a2b:	90                   	nop
  401a2c:	c9                   	leave  
  401a2d:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
