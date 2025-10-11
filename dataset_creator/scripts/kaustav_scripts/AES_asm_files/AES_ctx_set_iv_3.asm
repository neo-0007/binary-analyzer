
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402472 <AES_ctx_set_iv>:
  402472:	f3 0f 1e fa          	endbr64 
  402476:	55                   	push   %rbp
  402477:	48 89 e5             	mov    %rsp,%rbp
  40247a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  40247e:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  402482:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402486:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  40248d:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  402491:	48 8b 50 08          	mov    0x8(%rax),%rdx
  402495:	48 8b 00             	mov    (%rax),%rax
  402498:	48 89 01             	mov    %rax,(%rcx)
  40249b:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  40249f:	90                   	nop
  4024a0:	5d                   	pop    %rbp
  4024a1:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
