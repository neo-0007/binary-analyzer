
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401d2e <AES_MixColumns>:
  401d2e:	f3 0f 1e fa          	endbr64 
  401d32:	55                   	push   %rbp
  401d33:	48 89 e5             	mov    %rsp,%rbp
  401d36:	53                   	push   %rbx
  401d37:	48 83 ec 38          	sub    $0x38,%rsp
  401d3b:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  401d3f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401d46:	00 00 
  401d48:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  401d4c:	31 c0                	xor    %eax,%eax
  401d4e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
  401d55:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  401d5c:	00 
  401d5d:	e9 80 02 00 00       	jmp    401fe2 <AES_MixColumns+0x2b4>
  401d62:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401d66:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401d6d:	00 
  401d6e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401d72:	48 01 d0             	add    %rdx,%rax
  401d75:	0f b6 00             	movzbl (%rax),%eax
  401d78:	0f b6 c0             	movzbl %al,%eax
  401d7b:	89 c6                	mov    %eax,%esi
  401d7d:	bf 02 00 00 00       	mov    $0x2,%edi
  401d82:	e8 be f9 ff ff       	call   401745 <GF_Mult>
  401d87:	89 c3                	mov    %eax,%ebx
  401d89:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401d8d:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401d94:	00 
  401d95:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401d99:	48 01 d0             	add    %rdx,%rax
  401d9c:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401da0:	0f b6 c0             	movzbl %al,%eax
  401da3:	89 c6                	mov    %eax,%esi
  401da5:	bf 03 00 00 00       	mov    $0x3,%edi
  401daa:	e8 96 f9 ff ff       	call   401745 <GF_Mult>
  401daf:	31 c3                	xor    %eax,%ebx
  401db1:	89 da                	mov    %ebx,%edx
  401db3:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401db7:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  401dbe:	00 
  401dbf:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401dc3:	48 01 c8             	add    %rcx,%rax
  401dc6:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401dca:	31 c2                	xor    %eax,%edx
  401dcc:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401dd0:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  401dd7:	00 
  401dd8:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401ddc:	48 01 c8             	add    %rcx,%rax
  401ddf:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401de3:	31 d0                	xor    %edx,%eax
  401de5:	88 45 e4             	mov    %al,-0x1c(%rbp)
  401de8:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401dec:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401df3:	00 
  401df4:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401df8:	48 01 d0             	add    %rdx,%rax
  401dfb:	0f b6 18             	movzbl (%rax),%ebx
  401dfe:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401e02:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401e09:	00 
  401e0a:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e0e:	48 01 d0             	add    %rdx,%rax
  401e11:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401e15:	0f b6 c0             	movzbl %al,%eax
  401e18:	89 c6                	mov    %eax,%esi
  401e1a:	bf 02 00 00 00       	mov    $0x2,%edi
  401e1f:	e8 21 f9 ff ff       	call   401745 <GF_Mult>
  401e24:	31 c3                	xor    %eax,%ebx
  401e26:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401e2a:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401e31:	00 
  401e32:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e36:	48 01 d0             	add    %rdx,%rax
  401e39:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401e3d:	0f b6 c0             	movzbl %al,%eax
  401e40:	89 c6                	mov    %eax,%esi
  401e42:	bf 03 00 00 00       	mov    $0x3,%edi
  401e47:	e8 f9 f8 ff ff       	call   401745 <GF_Mult>
  401e4c:	31 c3                	xor    %eax,%ebx
  401e4e:	89 da                	mov    %ebx,%edx
  401e50:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401e54:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  401e5b:	00 
  401e5c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e60:	48 01 c8             	add    %rcx,%rax
  401e63:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401e67:	31 d0                	xor    %edx,%eax
  401e69:	88 45 e5             	mov    %al,-0x1b(%rbp)
  401e6c:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401e70:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401e77:	00 
  401e78:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e7c:	48 01 d0             	add    %rdx,%rax
  401e7f:	0f b6 10             	movzbl (%rax),%edx
  401e82:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401e86:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  401e8d:	00 
  401e8e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401e92:	48 01 c8             	add    %rcx,%rax
  401e95:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401e99:	89 d3                	mov    %edx,%ebx
  401e9b:	31 c3                	xor    %eax,%ebx
  401e9d:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401ea1:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401ea8:	00 
  401ea9:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401ead:	48 01 d0             	add    %rdx,%rax
  401eb0:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401eb4:	0f b6 c0             	movzbl %al,%eax
  401eb7:	89 c6                	mov    %eax,%esi
  401eb9:	bf 02 00 00 00       	mov    $0x2,%edi
  401ebe:	e8 82 f8 ff ff       	call   401745 <GF_Mult>
  401ec3:	31 c3                	xor    %eax,%ebx
  401ec5:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401ec9:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401ed0:	00 
  401ed1:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401ed5:	48 01 d0             	add    %rdx,%rax
  401ed8:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401edc:	0f b6 c0             	movzbl %al,%eax
  401edf:	89 c6                	mov    %eax,%esi
  401ee1:	bf 03 00 00 00       	mov    $0x3,%edi
  401ee6:	e8 5a f8 ff ff       	call   401745 <GF_Mult>
  401eeb:	31 d8                	xor    %ebx,%eax
  401eed:	88 45 e6             	mov    %al,-0x1a(%rbp)
  401ef0:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401ef4:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401efb:	00 
  401efc:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f00:	48 01 d0             	add    %rdx,%rax
  401f03:	0f b6 00             	movzbl (%rax),%eax
  401f06:	0f b6 c0             	movzbl %al,%eax
  401f09:	89 c6                	mov    %eax,%esi
  401f0b:	bf 03 00 00 00       	mov    $0x3,%edi
  401f10:	e8 30 f8 ff ff       	call   401745 <GF_Mult>
  401f15:	89 c2                	mov    %eax,%edx
  401f17:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401f1b:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  401f22:	00 
  401f23:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f27:	48 01 c8             	add    %rcx,%rax
  401f2a:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  401f2e:	31 c2                	xor    %eax,%edx
  401f30:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401f34:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  401f3b:	00 
  401f3c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f40:	48 01 c8             	add    %rcx,%rax
  401f43:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  401f47:	89 d3                	mov    %edx,%ebx
  401f49:	31 c3                	xor    %eax,%ebx
  401f4b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401f4f:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401f56:	00 
  401f57:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f5b:	48 01 d0             	add    %rdx,%rax
  401f5e:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  401f62:	0f b6 c0             	movzbl %al,%eax
  401f65:	89 c6                	mov    %eax,%esi
  401f67:	bf 02 00 00 00       	mov    $0x2,%edi
  401f6c:	e8 d4 f7 ff ff       	call   401745 <GF_Mult>
  401f71:	31 d8                	xor    %ebx,%eax
  401f73:	88 45 e7             	mov    %al,-0x19(%rbp)
  401f76:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401f7a:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401f81:	00 
  401f82:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f86:	48 01 c2             	add    %rax,%rdx
  401f89:	0f b6 45 e4          	movzbl -0x1c(%rbp),%eax
  401f8d:	88 02                	mov    %al,(%rdx)
  401f8f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401f93:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401f9a:	00 
  401f9b:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401f9f:	48 01 c2             	add    %rax,%rdx
  401fa2:	0f b6 45 e5          	movzbl -0x1b(%rbp),%eax
  401fa6:	88 42 01             	mov    %al,0x1(%rdx)
  401fa9:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401fad:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401fb4:	00 
  401fb5:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401fb9:	48 01 c2             	add    %rax,%rdx
  401fbc:	0f b6 45 e6          	movzbl -0x1a(%rbp),%eax
  401fc0:	88 42 02             	mov    %al,0x2(%rdx)
  401fc3:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  401fc7:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  401fce:	00 
  401fcf:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  401fd3:	48 01 c2             	add    %rax,%rdx
  401fd6:	0f b6 45 e7          	movzbl -0x19(%rbp),%eax
  401fda:	88 42 03             	mov    %al,0x3(%rdx)
  401fdd:	48 83 45 d8 01       	addq   $0x1,-0x28(%rbp)
  401fe2:	48 83 7d d8 03       	cmpq   $0x3,-0x28(%rbp)
  401fe7:	0f 86 75 fd ff ff    	jbe    401d62 <AES_MixColumns+0x34>
  401fed:	90                   	nop
  401fee:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  401ff2:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  401ff9:	00 00 
  401ffb:	74 05                	je     402002 <AES_MixColumns+0x2d4>
  401ffd:	e8 6e 89 04 00       	call   44a970 <__stack_chk_fail>
  402002:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
  402006:	c9                   	leave  
  402007:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
