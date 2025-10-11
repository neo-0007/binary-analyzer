
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403584 <AES_XTS_decrypt>:
  403584:	f3 0f 1e fa          	endbr64 
  403588:	55                   	push   %rbp
  403589:	48 89 e5             	mov    %rsp,%rbp
  40358c:	48 83 ec 30          	sub    $0x30,%rsp
  403590:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  403594:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  403598:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  40359c:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  4035a0:	4c 89 45 d8          	mov    %r8,-0x28(%rbp)
  4035a4:	48 83 7d e0 0f       	cmpq   $0xf,-0x20(%rbp)
  4035a9:	77 07                	ja     4035b2 <AES_XTS_decrypt+0x2e>
  4035ab:	b8 01 00 00 00       	mov    $0x1,%eax
  4035b0:	eb 44                	jmp    4035f6 <AES_XTS_decrypt+0x72>
  4035b2:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  4035b6:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  4035ba:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4035be:	48 89 ce             	mov    %rcx,%rsi
  4035c1:	48 89 c7             	mov    %rax,%rdi
  4035c4:	e8 97 da ff ff       	call   401060 <_init+0x60>
  4035c9:	48 8b 75 d8          	mov    -0x28(%rbp),%rsi
  4035cd:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  4035d1:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  4035d5:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4035d9:	49 89 f1             	mov    %rsi,%r9
  4035dc:	49 89 c8             	mov    %rcx,%r8
  4035df:	b9 00 00 00 00       	mov    $0x0,%ecx
  4035e4:	be 00 00 00 00       	mov    $0x0,%esi
  4035e9:	48 89 c7             	mov    %rax,%rdi
  4035ec:	e8 c9 fc ff ff       	call   4032ba <XTS_cipher>
  4035f1:	b8 00 00 00 00       	mov    $0x0,%eax
  4035f6:	c9                   	leave  
  4035f7:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
