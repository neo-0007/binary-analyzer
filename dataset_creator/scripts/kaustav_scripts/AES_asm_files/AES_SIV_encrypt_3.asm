
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

000000000040403e <AES_SIV_encrypt>:
  40403e:	f3 0f 1e fa          	endbr64 
  404042:	55                   	push   %rbp
  404043:	48 89 e5             	mov    %rsp,%rbp
  404046:	48 83 ec 30          	sub    $0x30,%rsp
  40404a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  40404e:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  404052:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  404056:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  40405a:	4c 89 45 d8          	mov    %r8,-0x28(%rbp)
  40405e:	4c 89 4d d0          	mov    %r9,-0x30(%rbp)
  404062:	4c 8b 45 d0          	mov    -0x30(%rbp),%r8
  404066:	48 8b 7d d8          	mov    -0x28(%rbp),%rdi
  40406a:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  40406e:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  404072:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
  404076:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40407a:	4d 89 c1             	mov    %r8,%r9
  40407d:	49 89 f8             	mov    %rdi,%r8
  404080:	48 89 c7             	mov    %rax,%rdi
  404083:	e8 d5 fd ff ff       	call   403e5d <S2V>
  404088:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40408c:	48 83 c0 10          	add    $0x10,%rax
  404090:	48 89 c7             	mov    %rax,%rdi
  404093:	e8 94 d7 ff ff       	call   40182c <KeyExpansion>
  404098:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  40409c:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  4040a0:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  4040a4:	4c 8b 45 10          	mov    0x10(%rbp),%r8
  4040a8:	be 05 00 00 00       	mov    $0x5,%esi
  4040ad:	48 89 c7             	mov    %rax,%rdi
  4040b0:	e8 b5 ef ff ff       	call   40306a <CTR_cipher>
  4040b5:	90                   	nop
  4040b6:	c9                   	leave  
  4040b7:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
