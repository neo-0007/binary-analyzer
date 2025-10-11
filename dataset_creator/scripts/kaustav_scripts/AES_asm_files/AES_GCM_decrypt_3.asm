
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

000000000040393d <AES_GCM_decrypt>:
  40393d:	f3 0f 1e fa          	endbr64 
  403941:	55                   	push   %rbp
  403942:	48 89 e5             	mov    %rsp,%rbp
  403945:	48 81 ec 90 00 00 00 	sub    $0x90,%rsp
  40394c:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
  403950:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  403954:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
  403958:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
  40395c:	4c 89 45 88          	mov    %r8,-0x78(%rbp)
  403960:	4c 89 4d 80          	mov    %r9,-0x80(%rbp)
  403964:	48 8b 45 10          	mov    0x10(%rbp),%rax
  403968:	48 89 85 78 ff ff ff 	mov    %rax,-0x88(%rbp)
  40396f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  403976:	00 00 
  403978:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40397c:	31 c0                	xor    %eax,%eax
  40397e:	48 8b 55 88          	mov    -0x78(%rbp),%rdx
  403982:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  403986:	48 01 d0             	add    %rdx,%rax
  403989:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
  40398d:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
  403994:	00 
  403995:	48 c7 45 c8 00 00 00 	movq   $0x0,-0x38(%rbp)
  40399c:	00 
  40399d:	48 c7 45 d0 00 00 00 	movq   $0x0,-0x30(%rbp)
  4039a4:	00 
  4039a5:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  4039ac:	00 
  4039ad:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
  4039b4:	00 
  4039b5:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  4039bc:	00 
  4039bd:	48 8d 4d d0          	lea    -0x30(%rbp),%rcx
  4039c1:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4039c5:	48 8b 75 a0          	mov    -0x60(%rbp),%rsi
  4039c9:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  4039cd:	48 89 c7             	mov    %rax,%rdi
  4039d0:	e8 d1 fd ff ff       	call   4037a6 <GCMsetup>
  4039d5:	4c 8d 45 e0          	lea    -0x20(%rbp),%r8
  4039d9:	48 8b 7d 80          	mov    -0x80(%rbp),%rdi
  4039dd:	48 8b 4d 90          	mov    -0x70(%rbp),%rcx
  4039e1:	48 8b 55 88          	mov    -0x78(%rbp),%rdx
  4039e5:	48 8b 75 98          	mov    -0x68(%rbp),%rsi
  4039e9:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  4039ed:	4d 89 c1             	mov    %r8,%r9
  4039f0:	49 89 f8             	mov    %rdi,%r8
  4039f3:	48 89 c7             	mov    %rax,%rdi
  4039f6:	e8 aa fc ff ff       	call   4036a5 <gHash>
  4039fb:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4039ff:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403a03:	48 89 d6             	mov    %rdx,%rsi
  403a06:	48 89 c7             	mov    %rax,%rdi
  403a09:	e8 ac e3 ff ff       	call   401dba <rijndaelEncrypt>
  403a0e:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  403a12:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  403a16:	48 89 d6             	mov    %rdx,%rsi
  403a19:	48 89 c7             	mov    %rax,%rdi
  403a1c:	e8 24 dd ff ff       	call   401745 <xorBlock>
  403a21:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  403a25:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
  403a29:	ba 10 00 00 00       	mov    $0x10,%edx
  403a2e:	48 89 ce             	mov    %rcx,%rsi
  403a31:	48 89 c7             	mov    %rax,%rdi
  403a34:	e8 a7 d6 ff ff       	call   4010e0 <_init+0xe0>
  403a39:	85 c0                	test   %eax,%eax
  403a3b:	74 07                	je     403a44 <AES_GCM_decrypt+0x107>
  403a3d:	b8 1a 00 00 00       	mov    $0x1a,%eax
  403a42:	eb 28                	jmp    403a6c <AES_GCM_decrypt+0x12f>
  403a44:	48 8b b5 78 ff ff ff 	mov    -0x88(%rbp),%rsi
  403a4b:	48 8b 4d 80          	mov    -0x80(%rbp),%rcx
  403a4f:	48 8b 55 88          	mov    -0x78(%rbp),%rdx
  403a53:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  403a57:	49 89 f0             	mov    %rsi,%r8
  403a5a:	be 02 00 00 00       	mov    $0x2,%esi
  403a5f:	48 89 c7             	mov    %rax,%rdi
  403a62:	e8 03 f6 ff ff       	call   40306a <CTR_cipher>
  403a67:	b8 00 00 00 00       	mov    $0x0,%eax
  403a6c:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  403a70:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  403a77:	00 00 
  403a79:	74 05                	je     403a80 <AES_GCM_decrypt+0x143>
  403a7b:	e8 30 ae 04 00       	call   44e8b0 <__stack_chk_fail>
  403a80:	c9                   	leave  
  403a81:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
