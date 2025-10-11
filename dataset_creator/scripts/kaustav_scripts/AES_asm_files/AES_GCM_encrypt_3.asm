
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000403806 <AES_GCM_encrypt>:
  403806:	f3 0f 1e fa          	endbr64 
  40380a:	55                   	push   %rbp
  40380b:	48 89 e5             	mov    %rsp,%rbp
  40380e:	48 81 ec 90 00 00 00 	sub    $0x90,%rsp
  403815:	48 89 7d a8          	mov    %rdi,-0x58(%rbp)
  403819:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  40381d:	48 89 55 98          	mov    %rdx,-0x68(%rbp)
  403821:	48 89 4d 90          	mov    %rcx,-0x70(%rbp)
  403825:	4c 89 45 88          	mov    %r8,-0x78(%rbp)
  403829:	4c 89 4d 80          	mov    %r9,-0x80(%rbp)
  40382d:	48 8b 45 10          	mov    0x10(%rbp),%rax
  403831:	48 89 85 78 ff ff ff 	mov    %rax,-0x88(%rbp)
  403838:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40383f:	00 00 
  403841:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  403845:	31 c0                	xor    %eax,%eax
  403847:	48 8b 95 78 ff ff ff 	mov    -0x88(%rbp),%rdx
  40384e:	48 8b 45 80          	mov    -0x80(%rbp),%rax
  403852:	48 01 d0             	add    %rdx,%rax
  403855:	48 89 45 b8          	mov    %rax,-0x48(%rbp)
  403859:	48 c7 45 c0 00 00 00 	movq   $0x0,-0x40(%rbp)
  403860:	00 
  403861:	48 c7 45 c8 00 00 00 	movq   $0x0,-0x38(%rbp)
  403868:	00 
  403869:	48 c7 45 d0 00 00 00 	movq   $0x0,-0x30(%rbp)
  403870:	00 
  403871:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  403878:	00 
  403879:	48 c7 45 e0 00 00 00 	movq   $0x0,-0x20(%rbp)
  403880:	00 
  403881:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  403888:	00 
  403889:	48 8d 4d c0          	lea    -0x40(%rbp),%rcx
  40388d:	48 8d 55 d0          	lea    -0x30(%rbp),%rdx
  403891:	48 8b 75 a0          	mov    -0x60(%rbp),%rsi
  403895:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  403899:	48 89 c7             	mov    %rax,%rdi
  40389c:	e8 05 ff ff ff       	call   4037a6 <GCMsetup>
  4038a1:	48 8b b5 78 ff ff ff 	mov    -0x88(%rbp),%rsi
  4038a8:	48 8b 4d 80          	mov    -0x80(%rbp),%rcx
  4038ac:	48 8b 55 88          	mov    -0x78(%rbp),%rdx
  4038b0:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  4038b4:	49 89 f0             	mov    %rsi,%r8
  4038b7:	be 02 00 00 00       	mov    $0x2,%esi
  4038bc:	48 89 c7             	mov    %rax,%rdi
  4038bf:	e8 a6 f7 ff ff       	call   40306a <CTR_cipher>
  4038c4:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4038c8:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  4038cc:	48 89 d6             	mov    %rdx,%rsi
  4038cf:	48 89 c7             	mov    %rax,%rdi
  4038d2:	e8 e3 e4 ff ff       	call   401dba <rijndaelEncrypt>
  4038d7:	4c 8d 45 e0          	lea    -0x20(%rbp),%r8
  4038db:	48 8b 7d 80          	mov    -0x80(%rbp),%rdi
  4038df:	48 8b 4d 90          	mov    -0x70(%rbp),%rcx
  4038e3:	48 8b 95 78 ff ff ff 	mov    -0x88(%rbp),%rdx
  4038ea:	48 8b 75 98          	mov    -0x68(%rbp),%rsi
  4038ee:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  4038f2:	4d 89 c1             	mov    %r8,%r9
  4038f5:	49 89 f8             	mov    %rdi,%r8
  4038f8:	48 89 c7             	mov    %rax,%rdi
  4038fb:	e8 a5 fd ff ff       	call   4036a5 <gHash>
  403900:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  403904:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  403908:	48 89 d6             	mov    %rdx,%rsi
  40390b:	48 89 c7             	mov    %rax,%rdi
  40390e:	e8 32 de ff ff       	call   401745 <xorBlock>
  403913:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  403917:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  40391b:	48 8b 4d b8          	mov    -0x48(%rbp),%rcx
  40391f:	48 89 01             	mov    %rax,(%rcx)
  403922:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  403926:	90                   	nop
  403927:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40392b:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  403932:	00 00 
  403934:	74 05                	je     40393b <AES_GCM_encrypt+0x135>
  403936:	e8 75 af 04 00       	call   44e8b0 <__stack_chk_fail>
  40393b:	c9                   	leave  
  40393c:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
