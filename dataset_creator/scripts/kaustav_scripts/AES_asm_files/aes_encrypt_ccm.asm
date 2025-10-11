
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000401cc5 <aes_encrypt_ccm>:
  401cc5:	f3 0f 1e fa          	endbr64 
  401cc9:	55                   	push   %rbp
  401cca:	48 89 e5             	mov    %rsp,%rbp
  401ccd:	48 81 ec 80 01 00 00 	sub    $0x180,%rsp
  401cd4:	48 89 bd b8 fe ff ff 	mov    %rdi,-0x148(%rbp)
  401cdb:	89 b5 b4 fe ff ff    	mov    %esi,-0x14c(%rbp)
  401ce1:	48 89 95 a8 fe ff ff 	mov    %rdx,-0x158(%rbp)
  401ce8:	89 c8                	mov    %ecx,%eax
  401cea:	4c 89 85 a0 fe ff ff 	mov    %r8,-0x160(%rbp)
  401cf1:	44 89 ca             	mov    %r9d,%edx
  401cf4:	66 89 85 b0 fe ff ff 	mov    %ax,-0x150(%rbp)
  401cfb:	89 d0                	mov    %edx,%eax
  401cfd:	66 89 85 9c fe ff ff 	mov    %ax,-0x164(%rbp)
  401d04:	48 8b 45 10          	mov    0x10(%rbp),%rax
  401d08:	48 89 85 90 fe ff ff 	mov    %rax,-0x170(%rbp)
  401d0f:	48 8b 45 18          	mov    0x18(%rbp),%rax
  401d13:	48 89 85 88 fe ff ff 	mov    %rax,-0x178(%rbp)
  401d1a:	48 8b 45 28          	mov    0x28(%rbp),%rax
  401d1e:	48 89 85 80 fe ff ff 	mov    %rax,-0x180(%rbp)
  401d25:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401d2c:	00 00 
  401d2e:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  401d32:	31 c0                	xor    %eax,%eax
  401d34:	83 7d 20 04          	cmpl   $0x4,0x20(%rbp)
  401d38:	74 2e                	je     401d68 <aes_encrypt_ccm+0xa3>
  401d3a:	83 7d 20 06          	cmpl   $0x6,0x20(%rbp)
  401d3e:	74 28                	je     401d68 <aes_encrypt_ccm+0xa3>
  401d40:	83 7d 20 08          	cmpl   $0x8,0x20(%rbp)
  401d44:	74 22                	je     401d68 <aes_encrypt_ccm+0xa3>
  401d46:	83 7d 20 0a          	cmpl   $0xa,0x20(%rbp)
  401d4a:	74 1c                	je     401d68 <aes_encrypt_ccm+0xa3>
  401d4c:	83 7d 20 0c          	cmpl   $0xc,0x20(%rbp)
  401d50:	74 16                	je     401d68 <aes_encrypt_ccm+0xa3>
  401d52:	83 7d 20 0e          	cmpl   $0xe,0x20(%rbp)
  401d56:	74 10                	je     401d68 <aes_encrypt_ccm+0xa3>
  401d58:	83 7d 20 10          	cmpl   $0x10,0x20(%rbp)
  401d5c:	74 0a                	je     401d68 <aes_encrypt_ccm+0xa3>
  401d5e:	b8 00 00 00 00       	mov    $0x0,%eax
  401d63:	e9 96 02 00 00       	jmp    401ffe <aes_encrypt_ccm+0x339>
  401d68:	66 83 bd 9c fe ff ff 	cmpw   $0x6,-0x164(%rbp)
  401d6f:	06 
  401d70:	76 0a                	jbe    401d7c <aes_encrypt_ccm+0xb7>
  401d72:	66 83 bd 9c fe ff ff 	cmpw   $0xd,-0x164(%rbp)
  401d79:	0d 
  401d7a:	76 0a                	jbe    401d86 <aes_encrypt_ccm+0xc1>
  401d7c:	b8 00 00 00 00       	mov    $0x0,%eax
  401d81:	e9 78 02 00 00       	jmp    401ffe <aes_encrypt_ccm+0x339>
  401d86:	66 81 bd b0 fe ff ff 	cmpw   $0x8000,-0x150(%rbp)
  401d8d:	00 80 
  401d8f:	76 0a                	jbe    401d9b <aes_encrypt_ccm+0xd6>
  401d91:	b8 00 00 00 00       	mov    $0x0,%eax
  401d96:	e9 63 02 00 00       	jmp    401ffe <aes_encrypt_ccm+0x339>
  401d9b:	0f b7 95 b0 fe ff ff 	movzwl -0x150(%rbp),%edx
  401da2:	8b 85 b4 fe ff ff    	mov    -0x14c(%rbp),%eax
  401da8:	01 d0                	add    %edx,%eax
  401daa:	83 c0 30             	add    $0x30,%eax
  401dad:	89 c0                	mov    %eax,%eax
  401daf:	48 89 c7             	mov    %rax,%rdi
  401db2:	e8 09 be 01 00       	call   41dbc0 <__libc_malloc>
  401db7:	48 89 85 c8 fe ff ff 	mov    %rax,-0x138(%rbp)
  401dbe:	48 83 bd c8 fe ff ff 	cmpq   $0x0,-0x138(%rbp)
  401dc5:	00 
  401dc6:	75 0a                	jne    401dd2 <aes_encrypt_ccm+0x10d>
  401dc8:	b8 00 00 00 00       	mov    $0x0,%eax
  401dcd:	e9 2c 02 00 00       	jmp    401ffe <aes_encrypt_ccm+0x339>
  401dd2:	8b 55 30             	mov    0x30(%rbp),%edx
  401dd5:	48 8d 8d d0 fe ff ff 	lea    -0x130(%rbp),%rcx
  401ddc:	48 8b 85 80 fe ff ff 	mov    -0x180(%rbp),%rax
  401de3:	48 89 ce             	mov    %rcx,%rsi
  401de6:	48 89 c7             	mov    %rax,%rdi
  401de9:	e8 50 09 00 00       	call   40273e <aes_key_setup>
  401dee:	0f b7 95 9c fe ff ff 	movzwl -0x164(%rbp),%edx
  401df5:	b8 0f 00 00 00       	mov    $0xf,%eax
  401dfa:	29 d0                	sub    %edx,%eax
  401dfc:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%rbp)
  401e02:	0f b7 bd 9c fe ff ff 	movzwl -0x164(%rbp),%edi
  401e09:	44 8b 45 20          	mov    0x20(%rbp),%r8d
  401e0d:	8b 95 b4 fe ff ff    	mov    -0x14c(%rbp),%edx
  401e13:	0f b7 b5 b0 fe ff ff 	movzwl -0x150(%rbp),%esi
  401e1a:	4c 8b 8d a0 fe ff ff 	mov    -0x160(%rbp),%r9
  401e21:	8b 8d c4 fe ff ff    	mov    -0x13c(%rbp),%ecx
  401e27:	48 8b 85 c8 fe ff ff 	mov    -0x138(%rbp),%rax
  401e2e:	48 83 ec 08          	sub    $0x8,%rsp
  401e32:	57                   	push   %rdi
  401e33:	48 89 c7             	mov    %rax,%rdi
  401e36:	e8 c1 05 00 00       	call   4023fc <ccm_prepare_first_format_blk>
  401e3b:	48 83 c4 10          	add    $0x10,%rsp
  401e3f:	c7 85 c0 fe ff ff 10 	movl   $0x10,-0x140(%rbp)
  401e46:	00 00 00 
  401e49:	0f b7 8d b0 fe ff ff 	movzwl -0x150(%rbp),%ecx
  401e50:	48 8b 95 a8 fe ff ff 	mov    -0x158(%rbp),%rdx
  401e57:	48 8d b5 c0 fe ff ff 	lea    -0x140(%rbp),%rsi
  401e5e:	48 8b 85 c8 fe ff ff 	mov    -0x138(%rbp),%rax
  401e65:	48 89 c7             	mov    %rax,%rdi
  401e68:	e8 59 06 00 00       	call   4024c6 <ccm_format_assoc_data>
  401e6d:	8b 8d b4 fe ff ff    	mov    -0x14c(%rbp),%ecx
  401e73:	48 8b 95 b8 fe ff ff 	mov    -0x148(%rbp),%rdx
  401e7a:	48 8d b5 c0 fe ff ff 	lea    -0x140(%rbp),%rsi
  401e81:	48 8b 85 c8 fe ff ff 	mov    -0x138(%rbp),%rax
  401e88:	48 89 c7             	mov    %rax,%rdi
  401e8b:	e8 20 07 00 00       	call   4025b0 <ccm_format_payload_data>
  401e90:	0f b7 95 9c fe ff ff 	movzwl -0x164(%rbp),%edx
  401e97:	8b 8d c4 fe ff ff    	mov    -0x13c(%rbp),%ecx
  401e9d:	48 8b b5 a0 fe ff ff 	mov    -0x160(%rbp),%rsi
  401ea4:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  401ea8:	48 89 c7             	mov    %rax,%rdi
  401eab:	e8 eb 04 00 00       	call   40239b <ccm_prepare_first_ctr_blk>
  401eb0:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  401eb4:	ba 10 00 00 00       	mov    $0x10,%edx
  401eb9:	be 00 00 00 00       	mov    $0x0,%esi
  401ebe:	48 89 c7             	mov    %rax,%rdi
  401ec1:	e8 4a f2 ff ff       	call   401110 <_init+0x110>
  401ec6:	8b 85 c0 fe ff ff    	mov    -0x140(%rbp),%eax
  401ecc:	48 63 f0             	movslq %eax,%rsi
  401ecf:	4c 8d 45 c0          	lea    -0x40(%rbp),%r8
  401ed3:	8b 7d 30             	mov    0x30(%rbp),%edi
  401ed6:	48 8d 8d d0 fe ff ff 	lea    -0x130(%rbp),%rcx
  401edd:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  401ee1:	48 8b 85 c8 fe ff ff 	mov    -0x138(%rbp),%rax
  401ee8:	4d 89 c1             	mov    %r8,%r9
  401eeb:	41 89 f8             	mov    %edi,%r8d
  401eee:	48 89 c7             	mov    %rax,%rdi
  401ef1:	e8 c7 f9 ff ff       	call   4018bd <aes_encrypt_cbc_mac>
  401ef6:	8b 95 b4 fe ff ff    	mov    -0x14c(%rbp),%edx
  401efc:	48 8b 8d b8 fe ff ff 	mov    -0x148(%rbp),%rcx
  401f03:	48 8b 85 90 fe ff ff 	mov    -0x170(%rbp),%rax
  401f0a:	48 89 ce             	mov    %rcx,%rsi
  401f0d:	48 89 c7             	mov    %rax,%rdi
  401f10:	e8 4b f1 ff ff       	call   401060 <_init+0x60>
  401f15:	8b 55 20             	mov    0x20(%rbp),%edx
  401f18:	8b 8d b4 fe ff ff    	mov    -0x14c(%rbp),%ecx
  401f1e:	48 8b 85 90 fe ff ff 	mov    -0x170(%rbp),%rax
  401f25:	48 01 c1             	add    %rax,%rcx
  401f28:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  401f2c:	48 89 c6             	mov    %rax,%rsi
  401f2f:	48 89 cf             	mov    %rcx,%rdi
  401f32:	e8 29 f1 ff ff       	call   401060 <_init+0x60>
  401f37:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
  401f3b:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  401f3f:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
  401f43:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
  401f47:	b8 0f 00 00 00       	mov    $0xf,%eax
  401f4c:	2b 45 20             	sub    0x20(%rbp),%eax
  401f4f:	89 c2                	mov    %eax,%edx
  401f51:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  401f55:	89 d6                	mov    %edx,%esi
  401f57:	48 89 c7             	mov    %rax,%rdi
  401f5a:	e8 82 fb ff ff       	call   401ae1 <increment_iv>
  401f5f:	8b b5 b4 fe ff ff    	mov    -0x14c(%rbp),%esi
  401f65:	4c 8d 45 c0          	lea    -0x40(%rbp),%r8
  401f69:	8b 7d 30             	mov    0x30(%rbp),%edi
  401f6c:	48 8d 8d d0 fe ff ff 	lea    -0x130(%rbp),%rcx
  401f73:	48 8b 95 90 fe ff ff 	mov    -0x170(%rbp),%rdx
  401f7a:	48 8b 85 90 fe ff ff 	mov    -0x170(%rbp),%rax
  401f81:	4d 89 c1             	mov    %r8,%r9
  401f84:	41 89 f8             	mov    %edi,%r8d
  401f87:	48 89 c7             	mov    %rax,%rdi
  401f8a:	e8 b4 fb ff ff       	call   401b43 <aes_encrypt_ctr>
  401f8f:	8b 95 b4 fe ff ff    	mov    -0x14c(%rbp),%edx
  401f95:	48 8b 85 90 fe ff ff 	mov    -0x170(%rbp),%rax
  401f9c:	48 8d 34 02          	lea    (%rdx,%rax,1),%rsi
  401fa0:	8b 45 20             	mov    0x20(%rbp),%eax
  401fa3:	8b 8d b4 fe ff ff    	mov    -0x14c(%rbp),%ecx
  401fa9:	48 8b 95 90 fe ff ff 	mov    -0x170(%rbp),%rdx
  401fb0:	48 8d 3c 11          	lea    (%rcx,%rdx,1),%rdi
  401fb4:	4c 8d 45 d0          	lea    -0x30(%rbp),%r8
  401fb8:	8b 4d 30             	mov    0x30(%rbp),%ecx
  401fbb:	48 8d 95 d0 fe ff ff 	lea    -0x130(%rbp),%rdx
  401fc2:	4d 89 c1             	mov    %r8,%r9
  401fc5:	41 89 c8             	mov    %ecx,%r8d
  401fc8:	48 89 d1             	mov    %rdx,%rcx
  401fcb:	48 89 f2             	mov    %rsi,%rdx
  401fce:	48 89 c6             	mov    %rax,%rsi
  401fd1:	e8 6d fb ff ff       	call   401b43 <aes_encrypt_ctr>
  401fd6:	48 8b 85 c8 fe ff ff 	mov    -0x138(%rbp),%rax
  401fdd:	48 89 c7             	mov    %rax,%rdi
  401fe0:	e8 1b bf 01 00       	call   41df00 <__free>
  401fe5:	8b 95 b4 fe ff ff    	mov    -0x14c(%rbp),%edx
  401feb:	8b 45 20             	mov    0x20(%rbp),%eax
  401fee:	01 c2                	add    %eax,%edx
  401ff0:	48 8b 85 88 fe ff ff 	mov    -0x178(%rbp),%rax
  401ff7:	89 10                	mov    %edx,(%rax)
  401ff9:	b8 01 00 00 00       	mov    $0x1,%eax
  401ffe:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  402002:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  402009:	00 00 
  40200b:	74 05                	je     402012 <aes_encrypt_ccm+0x34d>
  40200d:	e8 5e c1 04 00       	call   44e170 <__stack_chk_fail>
  402012:	c9                   	leave  
  402013:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
