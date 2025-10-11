
./micro_aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000404829 <AES_EAX_decrypt>:
  404829:	f3 0f 1e fa          	endbr64 
  40482d:	55                   	push   %rbp
  40482e:	48 89 e5             	mov    %rsp,%rbp
  404831:	48 81 ec a0 00 00 00 	sub    $0xa0,%rsp
  404838:	48 89 7d 98          	mov    %rdi,-0x68(%rbp)
  40483c:	48 89 75 90          	mov    %rsi,-0x70(%rbp)
  404840:	48 89 55 88          	mov    %rdx,-0x78(%rbp)
  404844:	48 89 4d 80          	mov    %rcx,-0x80(%rbp)
  404848:	4c 89 85 78 ff ff ff 	mov    %r8,-0x88(%rbp)
  40484f:	4c 89 8d 70 ff ff ff 	mov    %r9,-0x90(%rbp)
  404856:	48 8b 45 10          	mov    0x10(%rbp),%rax
  40485a:	48 89 85 68 ff ff ff 	mov    %rax,-0x98(%rbp)
  404861:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  404868:	00 00 
  40486a:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40486e:	31 c0                	xor    %eax,%eax
  404870:	48 c7 45 b0 00 00 00 	movq   $0x0,-0x50(%rbp)
  404877:	00 
  404878:	48 c7 45 b8 00 00 00 	movq   $0x0,-0x48(%rbp)
  40487f:	00 
  404880:	48 8b 95 78 ff ff ff 	mov    -0x88(%rbp),%rdx
  404887:	48 8b 85 70 ff ff ff 	mov    -0x90(%rbp),%rax
  40488e:	48 01 d0             	add    %rdx,%rax
  404891:	48 89 45 a8          	mov    %rax,-0x58(%rbp)
  404895:	48 8d 4d c0          	lea    -0x40(%rbp),%rcx
  404899:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
  40489d:	48 8b 45 98          	mov    -0x68(%rbp),%rax
  4048a1:	49 89 c8             	mov    %rcx,%r8
  4048a4:	48 89 d1             	mov    %rdx,%rcx
  4048a7:	48 89 c2             	mov    %rax,%rdx
  4048aa:	be 01 00 00 00       	mov    $0x1,%esi
  4048af:	48 8d 05 e6 d9 ff ff 	lea    -0x261a(%rip),%rax        # 40229c <doubleBblock>
  4048b6:	48 89 c7             	mov    %rax,%rdi
  4048b9:	e8 c9 df ff ff       	call   402887 <getSubkeys>
  4048be:	48 8d 7d e0          	lea    -0x20(%rbp),%rdi
  4048c2:	48 8b b5 70 ff ff ff 	mov    -0x90(%rbp),%rsi
  4048c9:	48 8b 8d 78 ff ff ff 	mov    -0x88(%rbp),%rcx
  4048d0:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4048d4:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  4048d8:	49 89 f9             	mov    %rdi,%r9
  4048db:	49 89 f0             	mov    %rsi,%r8
  4048de:	48 89 c6             	mov    %rax,%rsi
  4048e1:	bf 02 00 00 00       	mov    $0x2,%edi
  4048e6:	e8 06 fd ff ff       	call   4045f1 <oMac>
  4048eb:	48 8d 7d d0          	lea    -0x30(%rbp),%rdi
  4048ef:	48 8b 75 80          	mov    -0x80(%rbp),%rsi
  4048f3:	48 8b 4d 88          	mov    -0x78(%rbp),%rcx
  4048f7:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  4048fb:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  4048ff:	49 89 f9             	mov    %rdi,%r9
  404902:	49 89 f0             	mov    %rsi,%r8
  404905:	48 89 c6             	mov    %rax,%rsi
  404908:	bf 01 00 00 00       	mov    $0x1,%edi
  40490d:	e8 df fc ff ff       	call   4045f1 <oMac>
  404912:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  404916:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  40491a:	48 89 d6             	mov    %rdx,%rsi
  40491d:	48 89 c7             	mov    %rax,%rdi
  404920:	e8 20 ce ff ff       	call   401745 <xorBlock>
  404925:	48 8d 75 d0          	lea    -0x30(%rbp),%rsi
  404929:	48 8b 4d 90          	mov    -0x70(%rbp),%rcx
  40492d:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  404931:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  404935:	49 89 f1             	mov    %rsi,%r9
  404938:	41 b8 10 00 00 00    	mov    $0x10,%r8d
  40493e:	48 89 c6             	mov    %rax,%rsi
  404941:	bf 00 00 00 00       	mov    $0x0,%edi
  404946:	e8 a6 fc ff ff       	call   4045f1 <oMac>
  40494b:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  40494f:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  404953:	48 89 d6             	mov    %rdx,%rsi
  404956:	48 89 c7             	mov    %rax,%rdi
  404959:	e8 e7 cd ff ff       	call   401745 <xorBlock>
  40495e:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  404962:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
  404966:	ba 10 00 00 00       	mov    $0x10,%edx
  40496b:	48 89 ce             	mov    %rcx,%rsi
  40496e:	48 89 c7             	mov    %rax,%rdi
  404971:	e8 6a c7 ff ff       	call   4010e0 <_init+0xe0>
  404976:	85 c0                	test   %eax,%eax
  404978:	74 07                	je     404981 <AES_EAX_decrypt+0x158>
  40497a:	b8 1a 00 00 00       	mov    $0x1a,%eax
  40497f:	eb 2e                	jmp    4049af <AES_EAX_decrypt+0x186>
  404981:	48 8b b5 68 ff ff ff 	mov    -0x98(%rbp),%rsi
  404988:	48 8b 8d 70 ff ff ff 	mov    -0x90(%rbp),%rcx
  40498f:	48 8b 95 78 ff ff ff 	mov    -0x88(%rbp),%rdx
  404996:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  40499a:	49 89 f0             	mov    %rsi,%r8
  40499d:	be 00 00 00 00       	mov    $0x0,%esi
  4049a2:	48 89 c7             	mov    %rax,%rdi
  4049a5:	e8 c0 e6 ff ff       	call   40306a <CTR_cipher>
  4049aa:	b8 00 00 00 00       	mov    $0x0,%eax
  4049af:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  4049b3:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  4049ba:	00 00 
  4049bc:	74 05                	je     4049c3 <AES_EAX_decrypt+0x19a>
  4049be:	e8 ed 9e 04 00       	call   44e8b0 <__stack_chk_fail>
  4049c3:	c9                   	leave  
  4049c4:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
