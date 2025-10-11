
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403278 <AES_CTR_decrypt>:
  403278:	f3 0f 1e fa          	endbr64 
  40327c:	55                   	push   %rbp
  40327d:	48 89 e5             	mov    %rsp,%rbp
  403280:	48 83 ec 30          	sub    $0x30,%rsp
  403284:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  403288:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  40328c:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  403290:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  403294:	4c 89 45 d8          	mov    %r8,-0x28(%rbp)
  403298:	48 8b 7d d8          	mov    -0x28(%rbp),%rdi
  40329c:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  4032a0:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4032a4:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
  4032a8:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4032ac:	49 89 f8             	mov    %rdi,%r8
  4032af:	48 89 c7             	mov    %rax,%rdi
  4032b2:	e8 11 ff ff ff       	call   4031c8 <AES_CTR_encrypt>
  4032b7:	90                   	nop
  4032b8:	c9                   	leave  
  4032b9:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
