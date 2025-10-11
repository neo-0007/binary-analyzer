
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402f26 <AES_OFB_encrypt>:
  402f26:	f3 0f 1e fa          	endbr64 
  402f2a:	55                   	push   %rbp
  402f2b:	48 89 e5             	mov    %rsp,%rbp
  402f2e:	48 83 ec 60          	sub    $0x60,%rsp
  402f32:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  402f36:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  402f3a:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  402f3e:	48 89 4d b0          	mov    %rcx,-0x50(%rbp)
  402f42:	4c 89 45 a8          	mov    %r8,-0x58(%rbp)
  402f46:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402f4d:	00 00 
  402f4f:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  402f53:	31 c0                	xor    %eax,%eax
  402f55:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  402f59:	48 c1 e8 04          	shr    $0x4,%rax
  402f5d:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
  402f61:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  402f65:	48 8b 50 08          	mov    0x8(%rax),%rdx
  402f69:	48 8b 00             	mov    (%rax),%rax
  402f6c:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  402f70:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
  402f74:	48 8b 55 b0          	mov    -0x50(%rbp),%rdx
  402f78:	48 8b 4d b8          	mov    -0x48(%rbp),%rcx
  402f7c:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  402f80:	48 89 ce             	mov    %rcx,%rsi
  402f83:	48 89 c7             	mov    %rax,%rdi
  402f86:	e8 d5 e0 ff ff       	call   401060 <_init+0x60>
  402f8b:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402f8f:	48 89 c7             	mov    %rax,%rdi
  402f92:	e8 95 e8 ff ff       	call   40182c <KeyExpansion>
  402f97:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  402f9b:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  402f9f:	eb 2b                	jmp    402fcc <AES_OFB_encrypt+0xa6>
  402fa1:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  402fa5:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  402fa9:	48 89 d6             	mov    %rdx,%rsi
  402fac:	48 89 c7             	mov    %rax,%rdi
  402faf:	e8 06 ee ff ff       	call   401dba <rijndaelEncrypt>
  402fb4:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  402fb8:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  402fbc:	48 89 d6             	mov    %rdx,%rsi
  402fbf:	48 89 c7             	mov    %rax,%rdi
  402fc2:	e8 7e e7 ff ff       	call   401745 <xorBlock>
  402fc7:	48 83 45 d8 10       	addq   $0x10,-0x28(%rbp)
  402fcc:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  402fd0:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  402fd4:	48 89 55 d0          	mov    %rdx,-0x30(%rbp)
  402fd8:	48 85 c0             	test   %rax,%rax
  402fdb:	75 c4                	jne    402fa1 <AES_OFB_encrypt+0x7b>
  402fdd:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
  402fe1:	0f b6 c0             	movzbl %al,%eax
  402fe4:	83 e0 0f             	and    $0xf,%eax
  402fe7:	89 c7                	mov    %eax,%edi
  402fe9:	48 8b 75 d8          	mov    -0x28(%rbp),%rsi
  402fed:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  402ff1:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  402ff5:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  402ff9:	49 89 f1             	mov    %rsi,%r9
  402ffc:	41 89 f8             	mov    %edi,%r8d
  402fff:	48 89 c6             	mov    %rax,%rsi
  403002:	48 8d 05 b1 ed ff ff 	lea    -0x124f(%rip),%rax        # 401dba <rijndaelEncrypt>
  403009:	48 89 c7             	mov    %rax,%rdi
  40300c:	e8 da f5 ff ff       	call   4025eb <mixThenXor>
  403011:	90                   	nop
  403012:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  403016:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  40301d:	00 00 
  40301f:	74 05                	je     403026 <AES_OFB_encrypt+0x100>
  403021:	e8 8a b8 04 00       	call   44e8b0 <__stack_chk_fail>
  403026:	c9                   	leave  
  403027:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
