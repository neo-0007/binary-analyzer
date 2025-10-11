
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

00000000004019a7 <AES_RotWord>:
  4019a7:	f3 0f 1e fa          	endbr64 
  4019ab:	55                   	push   %rbp
  4019ac:	48 89 e5             	mov    %rsp,%rbp
  4019af:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4019b3:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019b7:	0f b6 00             	movzbl (%rax),%eax
  4019ba:	88 45 ff             	mov    %al,-0x1(%rbp)
  4019bd:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019c1:	0f b6 50 01          	movzbl 0x1(%rax),%edx
  4019c5:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019c9:	88 10                	mov    %dl,(%rax)
  4019cb:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019cf:	48 8d 50 01          	lea    0x1(%rax),%rdx
  4019d3:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019d7:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  4019db:	88 02                	mov    %al,(%rdx)
  4019dd:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019e1:	48 8d 50 02          	lea    0x2(%rax),%rdx
  4019e5:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019e9:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  4019ed:	88 02                	mov    %al,(%rdx)
  4019ef:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4019f3:	48 8d 50 03          	lea    0x3(%rax),%rdx
  4019f7:	0f b6 45 ff          	movzbl -0x1(%rbp),%eax
  4019fb:	88 02                	mov    %al,(%rdx)
  4019fd:	90                   	nop
  4019fe:	5d                   	pop    %rbp
  4019ff:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
