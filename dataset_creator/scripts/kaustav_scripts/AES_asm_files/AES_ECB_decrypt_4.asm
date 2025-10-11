
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402917 <AES_ECB_decrypt>:
  402917:	f3 0f 1e fa          	endbr64 
  40291b:	55                   	push   %rbp
  40291c:	48 89 e5             	mov    %rsp,%rbp
  40291f:	48 83 ec 10          	sub    $0x10,%rsp
  402923:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  402927:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  40292b:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  40292f:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  402933:	48 89 d6             	mov    %rdx,%rsi
  402936:	48 89 c7             	mov    %rax,%rdi
  402939:	e8 34 ff ff ff       	call   402872 <InvCipher>
  40293e:	90                   	nop
  40293f:	c9                   	leave  
  402940:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
