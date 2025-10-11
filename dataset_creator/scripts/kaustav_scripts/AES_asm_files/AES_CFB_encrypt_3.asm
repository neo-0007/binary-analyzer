
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402e8c <AES_CFB_encrypt>:
  402e8c:	f3 0f 1e fa          	endbr64 
  402e90:	55                   	push   %rbp
  402e91:	48 89 e5             	mov    %rsp,%rbp
  402e94:	48 83 ec 30          	sub    $0x30,%rsp
  402e98:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  402e9c:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  402ea0:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  402ea4:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  402ea8:	4c 89 45 d8          	mov    %r8,-0x28(%rbp)
  402eac:	48 8b 7d d8          	mov    -0x28(%rbp),%rdi
  402eb0:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  402eb4:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  402eb8:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
  402ebc:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  402ec0:	49 89 f9             	mov    %rdi,%r9
  402ec3:	49 89 c8             	mov    %rcx,%r8
  402ec6:	48 89 d1             	mov    %rdx,%rcx
  402ec9:	ba 01 00 00 00       	mov    $0x1,%edx
  402ece:	48 89 c7             	mov    %rax,%rdi
  402ed1:	e8 b0 fe ff ff       	call   402d86 <CFB_cipher>
  402ed6:	90                   	nop
  402ed7:	c9                   	leave  
  402ed8:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
