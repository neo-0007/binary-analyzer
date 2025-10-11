
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403510 <AES_XTS_encrypt>:
  403510:	f3 0f 1e fa          	endbr64 
  403514:	55                   	push   %rbp
  403515:	48 89 e5             	mov    %rsp,%rbp
  403518:	48 83 ec 30          	sub    $0x30,%rsp
  40351c:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  403520:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  403524:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  403528:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
  40352c:	4c 89 45 d8          	mov    %r8,-0x28(%rbp)
  403530:	48 83 7d e0 0f       	cmpq   $0xf,-0x20(%rbp)
  403535:	77 07                	ja     40353e <AES_XTS_encrypt+0x2e>
  403537:	b8 01 00 00 00       	mov    $0x1,%eax
  40353c:	eb 44                	jmp    403582 <AES_XTS_encrypt+0x72>
  40353e:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  403542:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  403546:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40354a:	48 89 ce             	mov    %rcx,%rsi
  40354d:	48 89 c7             	mov    %rax,%rdi
  403550:	e8 0b db ff ff       	call   401060 <_init+0x60>
  403555:	48 8b 75 d8          	mov    -0x28(%rbp),%rsi
  403559:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
  40355d:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
  403561:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  403565:	49 89 f1             	mov    %rsi,%r9
  403568:	49 89 c8             	mov    %rcx,%r8
  40356b:	b9 00 00 00 00       	mov    $0x0,%ecx
  403570:	be 01 00 00 00       	mov    $0x1,%esi
  403575:	48 89 c7             	mov    %rax,%rdi
  403578:	e8 3d fd ff ff       	call   4032ba <XTS_cipher>
  40357d:	b8 00 00 00 00       	mov    $0x0,%eax
  403582:	c9                   	leave  
  403583:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
