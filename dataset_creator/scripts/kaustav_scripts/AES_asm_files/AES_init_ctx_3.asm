
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004023fd <AES_init_ctx>:
  4023fd:	f3 0f 1e fa          	endbr64 
  402401:	55                   	push   %rbp
  402402:	48 89 e5             	mov    %rsp,%rbp
  402405:	48 83 ec 10          	sub    $0x10,%rsp
  402409:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  40240d:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  402411:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402415:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  402419:	48 89 d6             	mov    %rdx,%rsi
  40241c:	48 89 c7             	mov    %rax,%rdi
  40241f:	e8 1a fd ff ff       	call   40213e <KeyExpansion>
  402424:	90                   	nop
  402425:	c9                   	leave  
  402426:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
