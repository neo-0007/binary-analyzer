
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

000000000040183a <AES_KeySchedule128>:
  40183a:	f3 0f 1e fa          	endbr64 
  40183e:	55                   	push   %rbp
  40183f:	48 89 e5             	mov    %rsp,%rbp
  401842:	48 83 ec 40          	sub    $0x40,%rsp
  401846:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  40184a:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
  40184e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401855:	00 00 
  401857:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40185b:	31 c0                	xor    %eax,%eax
  40185d:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  401861:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
  401865:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401869:	48 8b 50 08          	mov    0x8(%rax),%rdx
  40186d:	48 8b 00             	mov    (%rax),%rax
  401870:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  401874:	48 89 01             	mov    %rax,(%rcx)
  401877:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  40187b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40187f:	48 83 c0 10          	add    $0x10,%rax
  401883:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
  401887:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40188b:	48 83 c0 0c          	add    $0xc,%rax
  40188f:	8b 00                	mov    (%rax),%eax
  401891:	89 45 f4             	mov    %eax,-0xc(%rbp)
  401894:	48 c7 45 e8 00 00 00 	movq   $0x0,-0x18(%rbp)
  40189b:	00 
  40189c:	e9 e4 00 00 00       	jmp    401985 <AES_KeySchedule128+0x14b>
  4018a1:	48 8d 45 f4          	lea    -0xc(%rbp),%rax
  4018a5:	48 89 c7             	mov    %rax,%rdi
  4018a8:	e8 fa 00 00 00       	call   4019a7 <AES_RotWord>
  4018ad:	48 8d 45 f4          	lea    -0xc(%rbp),%rax
  4018b1:	48 8d 15 68 77 09 00 	lea    0x97768(%rip),%rdx        # 499020 <sbox_encrypt>
  4018b8:	48 89 d6             	mov    %rdx,%rsi
  4018bb:	48 89 c7             	mov    %rax,%rdi
  4018be:	e8 c7 01 00 00       	call   401a8a <AES_SubWord>
  4018c3:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4018c7:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4018ce:	00 
  4018cf:	48 8d 05 2a 58 0c 00 	lea    0xc582a(%rip),%rax        # 4c7100 <Rcon>
  4018d6:	48 8d 0c 02          	lea    (%rdx,%rax,1),%rcx
  4018da:	48 8d 55 f4          	lea    -0xc(%rbp),%rdx
  4018de:	48 8d 45 f4          	lea    -0xc(%rbp),%rax
  4018e2:	48 89 ce             	mov    %rcx,%rsi
  4018e5:	48 89 c7             	mov    %rax,%rdi
  4018e8:	e8 ba fe ff ff       	call   4017a7 <GF_WordAdd>
  4018ed:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  4018f1:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
  4018f5:	48 8d 45 f4          	lea    -0xc(%rbp),%rax
  4018f9:	48 89 ce             	mov    %rcx,%rsi
  4018fc:	48 89 c7             	mov    %rax,%rdi
  4018ff:	e8 a3 fe ff ff       	call   4017a7 <GF_WordAdd>
  401904:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401908:	48 8d 50 04          	lea    0x4(%rax),%rdx
  40190c:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401910:	48 8d 48 04          	lea    0x4(%rax),%rcx
  401914:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401918:	48 89 ce             	mov    %rcx,%rsi
  40191b:	48 89 c7             	mov    %rax,%rdi
  40191e:	e8 84 fe ff ff       	call   4017a7 <GF_WordAdd>
  401923:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401927:	48 8d 50 08          	lea    0x8(%rax),%rdx
  40192b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40192f:	48 8d 48 08          	lea    0x8(%rax),%rcx
  401933:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401937:	48 83 c0 04          	add    $0x4,%rax
  40193b:	48 89 ce             	mov    %rcx,%rsi
  40193e:	48 89 c7             	mov    %rax,%rdi
  401941:	e8 61 fe ff ff       	call   4017a7 <GF_WordAdd>
  401946:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40194a:	48 8d 50 0c          	lea    0xc(%rax),%rdx
  40194e:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401952:	48 8d 48 0c          	lea    0xc(%rax),%rcx
  401956:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40195a:	48 83 c0 08          	add    $0x8,%rax
  40195e:	48 89 ce             	mov    %rcx,%rsi
  401961:	48 89 c7             	mov    %rax,%rdi
  401964:	e8 3e fe ff ff       	call   4017a7 <GF_WordAdd>
  401969:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40196d:	48 83 c0 0c          	add    $0xc,%rax
  401971:	8b 00                	mov    (%rax),%eax
  401973:	89 45 f4             	mov    %eax,-0xc(%rbp)
  401976:	48 83 45 d8 10       	addq   $0x10,-0x28(%rbp)
  40197b:	48 83 45 e0 10       	addq   $0x10,-0x20(%rbp)
  401980:	48 83 45 e8 01       	addq   $0x1,-0x18(%rbp)
  401985:	48 83 7d e8 09       	cmpq   $0x9,-0x18(%rbp)
  40198a:	0f 86 11 ff ff ff    	jbe    4018a1 <AES_KeySchedule128+0x67>
  401990:	90                   	nop
  401991:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401995:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  40199c:	00 00 
  40199e:	74 05                	je     4019a5 <AES_KeySchedule128+0x16b>
  4019a0:	e8 cb 8f 04 00       	call   44a970 <__stack_chk_fail>
  4019a5:	c9                   	leave  
  4019a6:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
