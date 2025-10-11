
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004046a1 <AES_EAX_encrypt>:
  4046a1:	f3 0f 1e fa          	endbr64 
  4046a5:	55                   	push   %rbp
  4046a6:	48 89 e5             	mov    %rsp,%rbp
  4046a9:	48 81 ec a0 00 00 00 	sub    $0xa0,%rsp
  4046b0:	48 89 7d 98          	mov    %rdi,-0x68(%rbp)
  4046b4:	48 89 75 90          	mov    %rsi,-0x70(%rbp)
  4046b8:	48 89 55 88          	mov    %rdx,-0x78(%rbp)
  4046bc:	48 89 4d 80          	mov    %rcx,-0x80(%rbp)
  4046c0:	4c 89 85 78 ff ff ff 	mov    %r8,-0x88(%rbp)
  4046c7:	4c 89 8d 70 ff ff ff 	mov    %r9,-0x90(%rbp)
  4046ce:	48 8b 45 10          	mov    0x10(%rbp),%rax
  4046d2:	48 89 85 68 ff ff ff 	mov    %rax,-0x98(%rbp)
  4046d9:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4046e0:	00 00 
  4046e2:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4046e6:	31 c0                	xor    %eax,%eax
  4046e8:	48 c7 45 b0 00 00 00 	movq   $0x0,-0x50(%rbp)
  4046ef:	00 
  4046f0:	48 c7 45 b8 00 00 00 	movq   $0x0,-0x48(%rbp)
  4046f7:	00 
  4046f8:	48 8b 95 68 ff ff ff 	mov    -0x98(%rbp),%rdx
  4046ff:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
  404706:	48 01 d0             	add    %rdx,%rax
  404709:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
  40470d:	48 8d 4d c0          	lea    -0x40(%rbp),%rcx
  404711:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
  404715:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  404719:	49 89 c8             	mov    %rcx,%r8
  40471c:	48 89 d1             	mov    %rdx,%rcx
  40471f:	48 89 c2             	mov    %rax,%rdx
  404722:	be 01 00 00 00       	mov    $0x1,%esi
  404727:	48 8d 05 6e db ff ff 	lea    -0x2492(%rip),%rax        # 40229c <doubleBblock>
  40472e:	48 89 c7             	mov    %rax,%rdi
  404731:	e8 51 e1 ff ff       	call   402887 <getSubkeys>
  404736:	48 8d 75 d0          	lea    -0x30(%rbp),%rsi
  40473a:	48 8b 4d 90          	mov    -0x70(%rbp),%rcx
  40473e:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  404742:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  404746:	49 89 f1             	mov    %rsi,%r9
  404749:	41 b8 10 00 00 00    	mov    $0x10,%r8d
  40474f:	48 89 c6             	mov    %rax,%rsi
  404752:	bf 00 00 00 00       	mov    $0x0,%edi
  404757:	e8 95 fe ff ff       	call   4045f1 <oMac>
  40475c:	48 8b b5 68 ff ff ff 	mov    -0x98(%rbp),%rsi
  404763:	48 8b 8d 70 ff ff ff 	mov    -0x90(%rbp),%rcx
  40476a:	48 8b 95 78 ff ff ff 	mov    -0x88(%rbp),%rdx
  404771:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  404775:	49 89 f0             	mov    %rsi,%r8
  404778:	be 00 00 00 00       	mov    $0x0,%esi
  40477d:	48 89 c7             	mov    %rax,%rdi
  404780:	e8 e5 e8 ff ff       	call   40306a <CTR_cipher>
  404785:	48 8d 7d e0          	lea    -0x20(%rbp),%rdi
  404789:	48 8b 75 80          	mov    -0x80(%rbp),%rsi
  40478d:	48 8b 4d 88          	mov    -0x78(%rbp),%rcx
  404791:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  404795:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  404799:	49 89 f9             	mov    %rdi,%r9
  40479c:	49 89 f0             	mov    %rsi,%r8
  40479f:	48 89 c6             	mov    %rax,%rsi
  4047a2:	bf 01 00 00 00       	mov    $0x1,%edi
  4047a7:	e8 45 fe ff ff       	call   4045f1 <oMac>
  4047ac:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  4047b0:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  4047b4:	48 89 d6             	mov    %rdx,%rsi
  4047b7:	48 89 c7             	mov    %rax,%rdi
  4047ba:	e8 86 cf ff ff       	call   401745 <xorBlock>
  4047bf:	48 8d 7d d0          	lea    -0x30(%rbp),%rdi
  4047c3:	48 8b b5 70 ff ff ff 	mov    -0x90(%rbp),%rsi
  4047ca:	48 8b 8d 68 ff ff ff 	mov    -0x98(%rbp),%rcx
  4047d1:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4047d5:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  4047d9:	49 89 f9             	mov    %rdi,%r9
  4047dc:	49 89 f0             	mov    %rsi,%r8
  4047df:	48 89 c6             	mov    %rax,%rsi
  4047e2:	bf 02 00 00 00       	mov    $0x2,%edi
  4047e7:	e8 05 fe ff ff       	call   4045f1 <oMac>
  4047ec:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  4047f0:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  4047f4:	48 89 d6             	mov    %rdx,%rsi
  4047f7:	48 89 c7             	mov    %rax,%rdi
  4047fa:	e8 46 cf ff ff       	call   401745 <xorBlock>
  4047ff:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  404803:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  404807:	48 8b 4d a8          	mov    -0x58(%rbp),%rcx
  40480b:	48 89 01             	mov    %rax,(%rcx)
  40480e:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  404812:	90                   	nop
  404813:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  404817:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  40481e:	00 00 
  404820:	74 05                	je     404827 <AES_EAX_encrypt+0x186>
  404822:	e8 89 a0 04 00       	call   44e8b0 <__stack_chk_fail>
  404827:	c9                   	leave  
  404828:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
