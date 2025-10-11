
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403d57 <AES_CCM_decrypt>:
  403d57:	f3 0f 1e fa          	endbr64 
  403d5b:	55                   	push   %rbp
  403d5c:	48 89 e5             	mov    %rsp,%rbp
  403d5f:	48 83 c4 80          	add    $0xffffffffffffff80,%rsp
  403d63:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
  403d67:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
  403d6b:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
  403d6f:	48 89 4d a0          	mov    %rcx,-0x60(%rbp)
  403d73:	4c 89 45 98          	mov    %r8,-0x68(%rbp)
  403d77:	4c 89 4d 90          	mov    %r9,-0x70(%rbp)
  403d7b:	48 8b 45 10          	mov    0x10(%rbp),%rax
  403d7f:	48 89 45 88          	mov    %rax,-0x78(%rbp)
  403d83:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  403d8a:	00 00 
  403d8c:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  403d90:	31 c0                	xor    %eax,%eax
  403d92:	48 8b 55 98          	mov    -0x68(%rbp),%rdx
  403d96:	48 8b 45 90          	mov    -0x70(%rbp),%rax
  403d9a:	48 01 d0             	add    %rdx,%rax
  403d9d:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
  403da1:	48 c7 45 d0 03 00 00 	movq   $0x3,-0x30(%rbp)
  403da8:	00 
  403da9:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  403db0:	00 
  403db1:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403db5:	48 83 c0 01          	add    $0x1,%rax
  403db9:	48 8b 4d b0          	mov    -0x50(%rbp),%rcx
  403dbd:	ba 0b 00 00 00       	mov    $0xb,%edx
  403dc2:	48 89 ce             	mov    %rcx,%rsi
  403dc5:	48 89 c7             	mov    %rax,%rdi
  403dc8:	e8 93 d2 ff ff       	call   401060 <_init+0x60>
  403dcd:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  403dd1:	48 89 c7             	mov    %rax,%rdi
  403dd4:	e8 53 da ff ff       	call   40182c <KeyExpansion>
  403dd9:	48 8b 75 88          	mov    -0x78(%rbp),%rsi
  403ddd:	48 8b 4d 90          	mov    -0x70(%rbp),%rcx
  403de1:	48 8b 55 98          	mov    -0x68(%rbp),%rdx
  403de5:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403de9:	49 89 f0             	mov    %rsi,%r8
  403dec:	be 02 00 00 00       	mov    $0x2,%esi
  403df1:	48 89 c7             	mov    %rax,%rdi
  403df4:	e8 71 f2 ff ff       	call   40306a <CTR_cipher>
  403df9:	4c 8d 45 e0          	lea    -0x20(%rbp),%r8
  403dfd:	48 8b 7d 90          	mov    -0x70(%rbp),%rdi
  403e01:	48 8b 4d a0          	mov    -0x60(%rbp),%rcx
  403e05:	48 8b 55 88          	mov    -0x78(%rbp),%rdx
  403e09:	48 8b 75 a8          	mov    -0x58(%rbp),%rsi
  403e0d:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403e11:	4d 89 c1             	mov    %r8,%r9
  403e14:	49 89 f8             	mov    %rdi,%r8
  403e17:	48 89 c7             	mov    %rax,%rdi
  403e1a:	e8 63 fc ff ff       	call   403a82 <CCMtag>
  403e1f:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  403e23:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  403e27:	ba 10 00 00 00       	mov    $0x10,%edx
  403e2c:	48 89 ce             	mov    %rcx,%rsi
  403e2f:	48 89 c7             	mov    %rax,%rdi
  403e32:	e8 a9 d2 ff ff       	call   4010e0 <_init+0xe0>
  403e37:	85 c0                	test   %eax,%eax
  403e39:	74 07                	je     403e42 <AES_CCM_decrypt+0xeb>
  403e3b:	b8 1a 00 00 00       	mov    $0x1a,%eax
  403e40:	eb 05                	jmp    403e47 <AES_CCM_decrypt+0xf0>
  403e42:	b8 00 00 00 00       	mov    $0x0,%eax
  403e47:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  403e4b:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  403e52:	00 00 
  403e54:	74 05                	je     403e5b <AES_CCM_decrypt+0x104>
  403e56:	e8 55 aa 04 00       	call   44e8b0 <__stack_chk_fail>
  403e5b:	c9                   	leave  
  403e5c:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
