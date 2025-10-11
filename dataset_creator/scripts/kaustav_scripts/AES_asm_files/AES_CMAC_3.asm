
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004035f8 <AES_CMAC>:
  4035f8:	f3 0f 1e fa          	endbr64 
  4035fc:	55                   	push   %rbp
  4035fd:	48 89 e5             	mov    %rsp,%rbp
  403600:	48 83 ec 50          	sub    $0x50,%rsp
  403604:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  403608:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  40360c:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  403610:	48 89 4d b0          	mov    %rcx,-0x50(%rbp)
  403614:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40361b:	00 00 
  40361d:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  403621:	31 c0                	xor    %eax,%eax
  403623:	48 c7 45 d0 00 00 00 	movq   $0x0,-0x30(%rbp)
  40362a:	00 
  40362b:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  403632:	00 
  403633:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  403637:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  40363b:	48 8b 4d b0          	mov    -0x50(%rbp),%rcx
  40363f:	48 89 01             	mov    %rax,(%rcx)
  403642:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  403646:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  40364a:	48 8d 55 d0          	lea    -0x30(%rbp),%rdx
  40364e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  403652:	49 89 c8             	mov    %rcx,%r8
  403655:	48 89 d1             	mov    %rdx,%rcx
  403658:	48 89 c2             	mov    %rax,%rdx
  40365b:	be 01 00 00 00       	mov    $0x1,%esi
  403660:	48 8d 05 35 ec ff ff 	lea    -0x13cb(%rip),%rax        # 40229c <doubleBblock>
  403667:	48 89 c7             	mov    %rax,%rdi
  40366a:	e8 18 f2 ff ff       	call   402887 <getSubkeys>
  40366f:	48 8b 7d b0          	mov    -0x50(%rbp),%rdi
  403673:	48 8b 4d b8          	mov    -0x48(%rbp),%rcx
  403677:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
  40367b:	48 8d 75 e0          	lea    -0x20(%rbp),%rsi
  40367f:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403683:	49 89 f8             	mov    %rdi,%r8
  403686:	48 89 c7             	mov    %rax,%rdi
  403689:	e8 b7 f0 ff ff       	call   402745 <cMac>
  40368e:	90                   	nop
  40368f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  403693:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  40369a:	00 00 
  40369c:	74 05                	je     4036a3 <AES_CMAC+0xab>
  40369e:	e8 0d b2 04 00       	call   44e8b0 <__stack_chk_fail>
  4036a3:	c9                   	leave  
  4036a4:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
