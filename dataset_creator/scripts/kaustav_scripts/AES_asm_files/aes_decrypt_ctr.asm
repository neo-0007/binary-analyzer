
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401c79 <aes_decrypt_ctr>:
  401c79:	f3 0f 1e fa          	endbr64 
  401c7d:	55                   	push   %rbp
  401c7e:	48 89 e5             	mov    %rsp,%rbp
  401c81:	48 83 ec 30          	sub    $0x30,%rsp
  401c85:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401c89:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401c8d:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  401c91:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  401c95:	44 89 45 dc          	mov    %r8d,-0x24(%rbp)
  401c99:	4c 89 4d d0          	mov    %r9,-0x30(%rbp)
  401c9d:	4c 8b 45 d0          	mov    -0x30(%rbp),%r8
  401ca1:	8b 7d dc             	mov    -0x24(%rbp),%edi
  401ca4:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  401ca8:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401cac:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
  401cb0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401cb4:	4d 89 c1             	mov    %r8,%r9
  401cb7:	41 89 f8             	mov    %edi,%r8d
  401cba:	48 89 c7             	mov    %rax,%rdi
  401cbd:	e8 81 fe ff ff       	call   401b43 <aes_encrypt_ctr>
  401cc2:	90                   	nop
  401cc3:	c9                   	leave  
  401cc4:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
