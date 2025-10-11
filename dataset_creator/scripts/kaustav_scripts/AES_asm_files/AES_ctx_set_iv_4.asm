
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401a79 <AES_ctx_set_iv>:
  401a79:	f3 0f 1e fa          	endbr64 
  401a7d:	55                   	push   %rbp
  401a7e:	48 89 e5             	mov    %rsp,%rbp
  401a81:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401a85:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401a89:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401a8d:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  401a94:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  401a98:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401a9c:	48 8b 00             	mov    (%rax),%rax
  401a9f:	48 89 01             	mov    %rax,(%rcx)
  401aa2:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  401aa6:	90                   	nop
  401aa7:	5d                   	pop    %rbp
  401aa8:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
