
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402427 <AES_init_ctx_iv>:
  402427:	f3 0f 1e fa          	endbr64 
  40242b:	55                   	push   %rbp
  40242c:	48 89 e5             	mov    %rsp,%rbp
  40242f:	48 83 ec 20          	sub    $0x20,%rsp
  402433:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  402437:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  40243b:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  40243f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402443:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  402447:	48 89 d6             	mov    %rdx,%rsi
  40244a:	48 89 c7             	mov    %rax,%rdi
  40244d:	e8 ec fc ff ff       	call   40213e <KeyExpansion>
  402452:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402456:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  40245d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402461:	48 8b 50 08          	mov    0x8(%rax),%rdx
  402465:	48 8b 00             	mov    (%rax),%rax
  402468:	48 89 01             	mov    %rax,(%rcx)
  40246b:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  40246f:	90                   	nop
  402470:	c9                   	leave  
  402471:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
