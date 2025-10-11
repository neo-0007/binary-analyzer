
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403028 <AES_OFB_decrypt>:
  403028:	f3 0f 1e fa          	endbr64 
  40302c:	55                   	push   %rbp
  40302d:	48 89 e5             	mov    %rsp,%rbp
  403030:	48 83 ec 30          	sub    $0x30,%rsp
  403034:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  403038:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  40303c:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  403040:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  403044:	4c 89 45 d8          	mov    %r8,-0x28(%rbp)
  403048:	48 8b 7d d8          	mov    -0x28(%rbp),%rdi
  40304c:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  403050:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  403054:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
  403058:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40305c:	49 89 f8             	mov    %rdi,%r8
  40305f:	48 89 c7             	mov    %rax,%rdi
  403062:	e8 bf fe ff ff       	call   402f26 <AES_OFB_encrypt>
  403067:	90                   	nop
  403068:	c9                   	leave  
  403069:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
