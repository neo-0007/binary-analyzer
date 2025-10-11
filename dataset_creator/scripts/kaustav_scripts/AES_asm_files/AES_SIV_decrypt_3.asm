
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004040b8 <AES_SIV_decrypt>:
  4040b8:	f3 0f 1e fa          	endbr64 
  4040bc:	55                   	push   %rbp
  4040bd:	48 89 e5             	mov    %rsp,%rbp
  4040c0:	48 83 ec 60          	sub    $0x60,%rsp
  4040c4:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
  4040c8:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
  4040cc:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  4040d0:	48 89 4d c0          	mov    %rcx,-0x40(%rbp)
  4040d4:	4c 89 45 b8          	mov    %r8,-0x48(%rbp)
  4040d8:	4c 89 4d b0          	mov    %r9,-0x50(%rbp)
  4040dc:	48 8b 45 10          	mov    0x10(%rbp),%rax
  4040e0:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
  4040e4:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4040eb:	00 00 
  4040ed:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4040f1:	31 c0                	xor    %eax,%eax
  4040f3:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4040f7:	48 83 c0 10          	add    $0x10,%rax
  4040fb:	48 89 c7             	mov    %rax,%rdi
  4040fe:	e8 29 d7 ff ff       	call   40182c <KeyExpansion>
  404103:	48 8b 75 a8          	mov    -0x58(%rbp),%rsi
  404107:	48 8b 4d b0          	mov    -0x50(%rbp),%rcx
  40410b:	48 8b 55 b8          	mov    -0x48(%rbp),%rdx
  40410f:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  404113:	49 89 f0             	mov    %rsi,%r8
  404116:	be 05 00 00 00       	mov    $0x5,%esi
  40411b:	48 89 c7             	mov    %rax,%rdi
  40411e:	e8 47 ef ff ff       	call   40306a <CTR_cipher>
  404123:	4c 8d 45 e0          	lea    -0x20(%rbp),%r8
  404127:	48 8b 7d b0          	mov    -0x50(%rbp),%rdi
  40412b:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
  40412f:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
  404133:	48 8b 75 c8          	mov    -0x38(%rbp),%rsi
  404137:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40413b:	4d 89 c1             	mov    %r8,%r9
  40413e:	49 89 f8             	mov    %rdi,%r8
  404141:	48 89 c7             	mov    %rax,%rdi
  404144:	e8 14 fd ff ff       	call   403e5d <S2V>
  404149:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
  40414d:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  404151:	ba 10 00 00 00       	mov    $0x10,%edx
  404156:	48 89 ce             	mov    %rcx,%rsi
  404159:	48 89 c7             	mov    %rax,%rdi
  40415c:	e8 7f cf ff ff       	call   4010e0 <_init+0xe0>
  404161:	85 c0                	test   %eax,%eax
  404163:	74 07                	je     40416c <AES_SIV_decrypt+0xb4>
  404165:	b8 1a 00 00 00       	mov    $0x1a,%eax
  40416a:	eb 05                	jmp    404171 <AES_SIV_decrypt+0xb9>
  40416c:	b8 00 00 00 00       	mov    $0x0,%eax
  404171:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  404175:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  40417c:	00 00 
  40417e:	74 05                	je     404185 <AES_SIV_decrypt+0xcd>
  404180:	e8 2b a7 04 00       	call   44e8b0 <__stack_chk_fail>
  404185:	c9                   	leave  
  404186:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
