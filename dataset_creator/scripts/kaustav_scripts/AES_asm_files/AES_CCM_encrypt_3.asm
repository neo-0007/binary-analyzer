
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403c65 <AES_CCM_encrypt>:
  403c65:	f3 0f 1e fa          	endbr64 
  403c69:	55                   	push   %rbp
  403c6a:	48 89 e5             	mov    %rsp,%rbp
  403c6d:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
  403c71:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
  403c75:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
  403c79:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
  403c7d:	48 89 4d a0          	mov    %rcx,-0x60(%rbp)
  403c81:	4c 89 45 98          	mov    %r8,-0x68(%rbp)
  403c85:	4c 89 4d 90          	mov    %r9,-0x70(%rbp)
  403c89:	48 8b 45 10          	mov    0x10(%rbp),%rax
  403c8d:	48 89 45 88          	mov    %rax,-0x78(%rbp)
  403c91:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  403c98:	00 00 
  403c9a:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  403c9e:	31 c0                	xor    %eax,%eax
  403ca0:	48 8b 55 88          	mov    -0x78(%rbp),%rdx
  403ca4:	48 8b 45 90          	mov    -0x70(%rbp),%rax
  403ca8:	48 01 d0             	add    %rdx,%rax
  403cab:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  403caf:	48 c7 45 d0 03 00 00 	movq   $0x3,-0x30(%rbp)
  403cb6:	00 
  403cb7:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  403cbe:	00 
  403cbf:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403cc3:	48 83 c0 01          	add    $0x1,%rax
  403cc7:	48 8b 4d b0          	mov    -0x50(%rbp),%rcx
  403ccb:	ba 0b 00 00 00       	mov    $0xb,%edx
  403cd0:	48 89 ce             	mov    %rcx,%rsi
  403cd3:	48 89 c7             	mov    %rax,%rdi
  403cd6:	e8 85 d3 ff ff       	call   401060 <_init+0x60>
  403cdb:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  403cdf:	48 89 c7             	mov    %rax,%rdi
  403ce2:	e8 45 db ff ff       	call   40182c <KeyExpansion>
  403ce7:	4c 8d 45 e0          	lea    -0x20(%rbp),%r8
  403ceb:	48 8b 7d 90          	mov    -0x70(%rbp),%rdi
  403cef:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
  403cf3:	48 8b 55 98          	mov    -0x68(%rbp),%rdx
  403cf7:	48 8b 75 a8          	mov    -0x58(%rbp),%rsi
  403cfb:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403cff:	4d 89 c1             	mov    %r8,%r9
  403d02:	49 89 f8             	mov    %rdi,%r8
  403d05:	48 89 c7             	mov    %rax,%rdi
  403d08:	e8 75 fd ff ff       	call   403a82 <CCMtag>
  403d0d:	48 8b 75 88          	mov    -0x78(%rbp),%rsi
  403d11:	48 8b 4d 90          	mov    -0x70(%rbp),%rcx
  403d15:	48 8b 55 98          	mov    -0x68(%rbp),%rdx
  403d19:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403d1d:	49 89 f0             	mov    %rsi,%r8
  403d20:	be 02 00 00 00       	mov    $0x2,%esi
  403d25:	48 89 c7             	mov    %rax,%rdi
  403d28:	e8 3d f3 ff ff       	call   40306a <CTR_cipher>
  403d2d:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  403d31:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  403d35:	48 8b 4d c8          	mov    -0x38(%rbp),%rcx
  403d39:	48 89 01             	mov    %rax,(%rcx)
  403d3c:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  403d40:	90                   	nop
  403d41:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  403d45:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  403d4c:	00 00 
  403d4e:	74 05                	je     403d55 <AES_CCM_encrypt+0xf0>
  403d50:	e8 5b ab 04 00       	call   44e8b0 <__stack_chk_fail>
  403d55:	c9                   	leave  
  403d56:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
