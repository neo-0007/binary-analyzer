
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000406406 <AES_FPE_decrypt>:
  406406:	f3 0f 1e fa          	endbr64 
  40640a:	55                   	push   %rbp
  40640b:	48 89 e5             	mov    %rsp,%rbp
  40640e:	48 83 ec 40          	sub    $0x40,%rsp
  406412:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  406416:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  40641a:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  40641e:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
  406422:	4c 89 45 c8          	mov    %r8,-0x38(%rbp)
  406426:	4c 89 4d c0          	mov    %r9,-0x40(%rbp)
  40642a:	48 8b 7d c8          	mov    -0x38(%rbp),%rdi
  40642e:	48 8b 75 d0          	mov    -0x30(%rbp),%rsi
  406432:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  406436:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  40643a:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40643e:	48 83 ec 08          	sub    $0x8,%rsp
  406442:	ff 75 c0             	push   -0x40(%rbp)
  406445:	49 89 f9             	mov    %rdi,%r9
  406448:	49 89 f0             	mov    %rsi,%r8
  40644b:	be 00 00 00 00       	mov    $0x0,%esi
  406450:	48 89 c7             	mov    %rax,%rdi
  406453:	e8 1b fd ff ff       	call   406173 <FPE_cipher>
  406458:	48 83 c4 10          	add    $0x10,%rsp
  40645c:	88 45 ff             	mov    %al,-0x1(%rbp)
  40645f:	80 7d ff 00          	cmpb   $0x0,-0x1(%rbp)
  406463:	75 07                	jne    40646c <AES_FPE_decrypt+0x66>
  406465:	b8 00 00 00 00       	mov    $0x0,%eax
  40646a:	eb 05                	jmp    406471 <AES_FPE_decrypt+0x6b>
  40646c:	b8 1d 00 00 00       	mov    $0x1d,%eax
  406471:	c9                   	leave  
  406472:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
