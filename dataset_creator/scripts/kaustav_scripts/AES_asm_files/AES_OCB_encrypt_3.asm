
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000405042 <AES_OCB_encrypt>:
  405042:	f3 0f 1e fa          	endbr64 
  405046:	55                   	push   %rbp
  405047:	48 89 e5             	mov    %rsp,%rbp
  40504a:	48 83 ec 70          	sub    $0x70,%rsp
  40504e:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  405052:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  405056:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  40505a:	48 89 4d b0          	mov    %rcx,-0x50(%rbp)
  40505e:	4c 89 45 a8          	mov    %r8,-0x58(%rbp)
  405062:	4c 89 4d a0          	mov    %r9,-0x60(%rbp)
  405066:	48 8b 45 10          	mov    0x10(%rbp),%rax
  40506a:	48 89 45 98          	mov    %rax,-0x68(%rbp)
  40506e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  405075:	00 00 
  405077:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40507b:	31 c0                	xor    %eax,%eax
  40507d:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
  405084:	00 
  405085:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  40508c:	00 
  40508d:	48 8b 55 98          	mov    -0x68(%rbp),%rdx
  405091:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  405095:	48 01 d0             	add    %rdx,%rax
  405098:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  40509c:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
  4050a0:	48 8b 4d a8          	mov    -0x58(%rbp),%rcx
  4050a4:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  4050a8:	48 89 ce             	mov    %rcx,%rsi
  4050ab:	48 89 c7             	mov    %rax,%rdi
  4050ae:	e8 ad bf ff ff       	call   401060 <_init+0x60>
  4050b3:	4c 8b 4d a0          	mov    -0x60(%rbp),%r9
  4050b7:	4c 8b 45 b0          	mov    -0x50(%rbp),%r8
  4050bb:	48 8b 4d b8          	mov    -0x48(%rbp),%rcx
  4050bf:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
  4050c3:	48 8b 75 c0          	mov    -0x40(%rbp),%rsi
  4050c7:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4050cb:	48 8d 7d e0          	lea    -0x20(%rbp),%rdi
  4050cf:	57                   	push   %rdi
  4050d0:	ff 75 98             	push   -0x68(%rbp)
  4050d3:	48 89 c7             	mov    %rax,%rdi
  4050d6:	e8 ba f9 ff ff       	call   404a95 <OCB_cipher>
  4050db:	48 83 c4 10          	add    $0x10,%rsp
  4050df:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4050e3:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  4050e7:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  4050eb:	48 89 01             	mov    %rax,(%rcx)
  4050ee:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  4050f2:	90                   	nop
  4050f3:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4050f7:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  4050fe:	00 00 
  405100:	74 05                	je     405107 <AES_OCB_encrypt+0xc5>
  405102:	e8 a9 97 04 00       	call   44e8b0 <__stack_chk_fail>
  405107:	c9                   	leave  
  405108:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
