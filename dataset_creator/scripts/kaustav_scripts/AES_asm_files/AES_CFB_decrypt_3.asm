
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402ed9 <AES_CFB_decrypt>:
  402ed9:	f3 0f 1e fa          	endbr64 
  402edd:	55                   	push   %rbp
  402ede:	48 89 e5             	mov    %rsp,%rbp
  402ee1:	48 83 ec 30          	sub    $0x30,%rsp
  402ee5:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  402ee9:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  402eed:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  402ef1:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  402ef5:	4c 89 45 d8          	mov    %r8,-0x28(%rbp)
  402ef9:	48 8b 7d d8          	mov    -0x28(%rbp),%rdi
  402efd:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  402f01:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402f05:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
  402f09:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402f0d:	49 89 f9             	mov    %rdi,%r9
  402f10:	49 89 c8             	mov    %rcx,%r8
  402f13:	48 89 d1             	mov    %rdx,%rcx
  402f16:	ba 00 00 00 00       	mov    $0x0,%edx
  402f1b:	48 89 c7             	mov    %rax,%rdi
  402f1e:	e8 63 fe ff ff       	call   402d86 <CFB_cipher>
  402f23:	90                   	nop
  402f24:	c9                   	leave  
  402f25:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
