
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004031c8 <AES_CTR_encrypt>:
  4031c8:	f3 0f 1e fa          	endbr64 
  4031cc:	55                   	push   %rbp
  4031cd:	48 89 e5             	mov    %rsp,%rbp
  4031d0:	48 83 ec 50          	sub    $0x50,%rsp
  4031d4:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  4031d8:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  4031dc:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  4031e0:	48 89 4d c0          	mov    %rcx,-0x40(%rbp)
  4031e4:	4c 89 45 b8          	mov    %r8,-0x48(%rbp)
  4031e8:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4031ef:	00 00 
  4031f1:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4031f5:	31 c0                	xor    %eax,%eax
  4031f7:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
  4031fe:	00 
  4031ff:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  403206:	00 
  403207:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
  40320b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  40320f:	ba 0c 00 00 00       	mov    $0xc,%edx
  403214:	48 89 ce             	mov    %rcx,%rsi
  403217:	48 89 c7             	mov    %rax,%rdi
  40321a:	e8 41 de ff ff       	call   401060 <_init+0x60>
  40321f:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  403223:	ba 0f 00 00 00       	mov    $0xf,%edx
  403228:	be 01 00 00 00       	mov    $0x1,%esi
  40322d:	48 89 c7             	mov    %rax,%rdi
  403230:	e8 cc ef ff ff       	call   402201 <xorBEint>
  403235:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  403239:	48 89 c7             	mov    %rax,%rdi
  40323c:	e8 eb e5 ff ff       	call   40182c <KeyExpansion>
  403241:	48 8b 75 b8          	mov    -0x48(%rbp),%rsi
  403245:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
  403249:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  40324d:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  403251:	49 89 f0             	mov    %rsi,%r8
  403254:	be 00 00 00 00       	mov    $0x0,%esi
  403259:	48 89 c7             	mov    %rax,%rdi
  40325c:	e8 09 fe ff ff       	call   40306a <CTR_cipher>
  403261:	90                   	nop
  403262:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  403266:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  40326d:	00 00 
  40326f:	74 05                	je     403276 <AES_CTR_encrypt+0xae>
  403271:	e8 3a b6 04 00       	call   44e8b0 <__stack_chk_fail>
  403276:	c9                   	leave  
  403277:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
