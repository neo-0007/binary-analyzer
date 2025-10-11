
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004028ed <AES_ECB_encrypt>:
  4028ed:	f3 0f 1e fa          	endbr64 
  4028f1:	55                   	push   %rbp
  4028f2:	48 89 e5             	mov    %rsp,%rbp
  4028f5:	48 83 ec 10          	sub    $0x10,%rsp
  4028f9:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  4028fd:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  402901:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  402905:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  402909:	48 89 d6             	mov    %rdx,%rsi
  40290c:	48 89 c7             	mov    %rax,%rdi
  40290f:	e8 ce fe ff ff       	call   4027e2 <Cipher>
  402914:	90                   	nop
  402915:	c9                   	leave  
  402916:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
