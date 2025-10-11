
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000405109 <AES_OCB_decrypt>:
  405109:	f3 0f 1e fa          	endbr64 
  40510d:	55                   	push   %rbp
  40510e:	48 89 e5             	mov    %rsp,%rbp
  405111:	48 83 ec 70          	sub    $0x70,%rsp
  405115:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  405119:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  40511d:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  405121:	48 89 4d b0          	mov    %rcx,-0x50(%rbp)
  405125:	4c 89 45 a8          	mov    %r8,-0x58(%rbp)
  405129:	4c 89 4d a0          	mov    %r9,-0x60(%rbp)
  40512d:	48 8b 45 10          	mov    0x10(%rbp),%rax
  405131:	48 89 45 98          	mov    %rax,-0x68(%rbp)
  405135:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40513c:	00 00 
  40513e:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  405142:	31 c0                	xor    %eax,%eax
  405144:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
  40514b:	00 
  40514c:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  405153:	00 
  405154:	48 8b 55 a8          	mov    -0x58(%rbp),%rdx
  405158:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  40515c:	48 01 d0             	add    %rdx,%rax
  40515f:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  405163:	48 8b 55 a0          	mov    -0x60(%rbp),%rdx
  405167:	48 8b 4d a8          	mov    -0x58(%rbp),%rcx
  40516b:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  40516f:	48 89 ce             	mov    %rcx,%rsi
  405172:	48 89 c7             	mov    %rax,%rdi
  405175:	e8 e6 be ff ff       	call   401060 <_init+0x60>
  40517a:	4c 8b 45 a0          	mov    -0x60(%rbp),%r8
  40517e:	48 8b 7d b0          	mov    -0x50(%rbp),%rdi
  405182:	48 8b 55 b8          	mov    -0x48(%rbp),%rdx
  405186:	48 8b 75 c0          	mov    -0x40(%rbp),%rsi
  40518a:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40518e:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  405192:	51                   	push   %rcx
  405193:	ff 75 98             	push   -0x68(%rbp)
  405196:	4d 89 c1             	mov    %r8,%r9
  405199:	49 89 f8             	mov    %rdi,%r8
  40519c:	48 89 d1             	mov    %rdx,%rcx
  40519f:	ba 00 00 00 00       	mov    $0x0,%edx
  4051a4:	48 89 c7             	mov    %rax,%rdi
  4051a7:	e8 e9 f8 ff ff       	call   404a95 <OCB_cipher>
  4051ac:	48 83 c4 10          	add    $0x10,%rsp
  4051b0:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  4051b4:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4051b8:	ba 10 00 00 00       	mov    $0x10,%edx
  4051bd:	48 89 ce             	mov    %rcx,%rsi
  4051c0:	48 89 c7             	mov    %rax,%rdi
  4051c3:	e8 18 bf ff ff       	call   4010e0 <_init+0xe0>
  4051c8:	85 c0                	test   %eax,%eax
  4051ca:	74 07                	je     4051d3 <AES_OCB_decrypt+0xca>
  4051cc:	b8 1a 00 00 00       	mov    $0x1a,%eax
  4051d1:	eb 05                	jmp    4051d8 <AES_OCB_decrypt+0xcf>
  4051d3:	b8 00 00 00 00       	mov    $0x0,%eax
  4051d8:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4051dc:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  4051e3:	00 00 
  4051e5:	74 05                	je     4051ec <AES_OCB_decrypt+0xe3>
  4051e7:	e8 c4 96 04 00       	call   44e8b0 <__stack_chk_fail>
  4051ec:	c9                   	leave  
  4051ed:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
