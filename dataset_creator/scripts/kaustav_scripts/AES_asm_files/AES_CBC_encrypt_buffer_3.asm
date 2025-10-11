
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

000000000040394d <AES_CBC_encrypt_buffer>:
  40394d:	f3 0f 1e fa          	endbr64 
  403951:	55                   	push   %rbp
  403952:	48 89 e5             	mov    %rsp,%rbp
  403955:	48 83 ec 28          	sub    $0x28,%rsp
  403959:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  40395d:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  403961:	89 55 dc             	mov    %edx,-0x24(%rbp)
  403964:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  403968:	48 05 b0 00 00 00    	add    $0xb0,%rax
  40396e:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  403972:	48 c7 45 f0 00 00 00 	movq   $0x0,-0x10(%rbp)
  403979:	00 
  40397a:	eb 38                	jmp    4039b4 <AES_CBC_encrypt_buffer+0x67>
  40397c:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  403980:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  403984:	48 89 d6             	mov    %rdx,%rsi
  403987:	48 89 c7             	mov    %rax,%rdi
  40398a:	e8 6f ff ff ff       	call   4038fe <XorWithIv>
  40398f:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
  403993:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  403997:	48 89 d6             	mov    %rdx,%rsi
  40399a:	48 89 c7             	mov    %rax,%rdi
  40399d:	e8 6b fb ff ff       	call   40350d <Cipher>
  4039a2:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4039a6:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  4039aa:	48 83 45 e0 10       	addq   $0x10,-0x20(%rbp)
  4039af:	48 83 45 f0 10       	addq   $0x10,-0x10(%rbp)
  4039b4:	8b 45 dc             	mov    -0x24(%rbp),%eax
  4039b7:	48 39 45 f0          	cmp    %rax,-0x10(%rbp)
  4039bb:	72 bf                	jb     40397c <AES_CBC_encrypt_buffer+0x2f>
  4039bd:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4039c1:	48 8d 88 b0 00 00 00 	lea    0xb0(%rax),%rcx
  4039c8:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4039cc:	48 8b 50 08          	mov    0x8(%rax),%rdx
  4039d0:	48 8b 00             	mov    (%rax),%rax
  4039d3:	48 89 01             	mov    %rax,(%rcx)
  4039d6:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  4039da:	90                   	nop
  4039db:	c9                   	leave  
  4039dc:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
