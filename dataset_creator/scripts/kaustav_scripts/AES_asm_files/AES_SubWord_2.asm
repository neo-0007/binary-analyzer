
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401a8a <AES_SubWord>:
  401a8a:	f3 0f 1e fa          	endbr64 
  401a8e:	55                   	push   %rbp
  401a8f:	48 89 e5             	mov    %rsp,%rbp
  401a92:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  401a96:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  401a9a:	48 c7 45 f8 00 00 00 	movq   $0x0,-0x8(%rbp)
  401aa1:	00 
  401aa2:	eb 31                	jmp    401ad5 <AES_SubWord+0x4b>
  401aa4:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  401aa8:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401aac:	48 01 d0             	add    %rdx,%rax
  401aaf:	0f b6 00             	movzbl (%rax),%eax
  401ab2:	88 45 f7             	mov    %al,-0x9(%rbp)
  401ab5:	0f b6 55 f7          	movzbl -0x9(%rbp),%edx
  401ab9:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  401abd:	48 01 d0             	add    %rdx,%rax
  401ac0:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
  401ac4:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  401ac8:	48 01 ca             	add    %rcx,%rdx
  401acb:	0f b6 00             	movzbl (%rax),%eax
  401ace:	88 02                	mov    %al,(%rdx)
  401ad0:	48 83 45 f8 01       	addq   $0x1,-0x8(%rbp)
  401ad5:	48 83 7d f8 03       	cmpq   $0x3,-0x8(%rbp)
  401ada:	76 c8                	jbe    401aa4 <AES_SubWord+0x1a>
  401adc:	90                   	nop
  401add:	90                   	nop
  401ade:	5d                   	pop    %rbp
  401adf:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
