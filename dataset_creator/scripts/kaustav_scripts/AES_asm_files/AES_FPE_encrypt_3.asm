
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000406399 <AES_FPE_encrypt>:
  406399:	f3 0f 1e fa          	endbr64 
  40639d:	55                   	push   %rbp
  40639e:	48 89 e5             	mov    %rsp,%rbp
  4063a1:	48 83 ec 40          	sub    $0x40,%rsp
  4063a5:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4063a9:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  4063ad:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  4063b1:	48 89 4d d0          	mov    %rcx,-0x30(%rbp)
  4063b5:	4c 89 45 c8          	mov    %r8,-0x38(%rbp)
  4063b9:	4c 89 4d c0          	mov    %r9,-0x40(%rbp)
  4063bd:	48 8b 7d c8          	mov    -0x38(%rbp),%rdi
  4063c1:	48 8b 75 d0          	mov    -0x30(%rbp),%rsi
  4063c5:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  4063c9:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  4063cd:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4063d1:	48 83 ec 08          	sub    $0x8,%rsp
  4063d5:	ff 75 c0             	push   -0x40(%rbp)
  4063d8:	49 89 f9             	mov    %rdi,%r9
  4063db:	49 89 f0             	mov    %rsi,%r8
  4063de:	be 01 00 00 00       	mov    $0x1,%esi
  4063e3:	48 89 c7             	mov    %rax,%rdi
  4063e6:	e8 88 fd ff ff       	call   406173 <FPE_cipher>
  4063eb:	48 83 c4 10          	add    $0x10,%rsp
  4063ef:	88 45 ff             	mov    %al,-0x1(%rbp)
  4063f2:	80 7d ff 00          	cmpb   $0x0,-0x1(%rbp)
  4063f6:	75 07                	jne    4063ff <AES_FPE_encrypt+0x66>
  4063f8:	b8 00 00 00 00       	mov    $0x0,%eax
  4063fd:	eb 05                	jmp    406404 <AES_FPE_encrypt+0x6b>
  4063ff:	b8 1e 00 00 00       	mov    $0x1e,%eax
  406404:	c9                   	leave  
  406405:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
