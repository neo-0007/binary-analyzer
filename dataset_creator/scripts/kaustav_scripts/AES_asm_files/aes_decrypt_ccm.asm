
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402014 <aes_decrypt_ccm>:
  402014:	f3 0f 1e fa          	endbr64 
  402018:	55                   	push   %rbp
  402019:	48 89 e5             	mov    %rsp,%rbp
  40201c:	48 81 ec a0 01 00 00 	sub    $0x1a0,%rsp
  402023:	48 89 bd a8 fe ff ff 	mov    %rdi,-0x158(%rbp)
  40202a:	89 b5 a4 fe ff ff    	mov    %esi,-0x15c(%rbp)
  402030:	48 89 95 98 fe ff ff 	mov    %rdx,-0x168(%rbp)
  402037:	89 c8                	mov    %ecx,%eax
  402039:	4c 89 85 90 fe ff ff 	mov    %r8,-0x170(%rbp)
  402040:	44 89 ca             	mov    %r9d,%edx
  402043:	66 89 85 a0 fe ff ff 	mov    %ax,-0x160(%rbp)
  40204a:	89 d0                	mov    %edx,%eax
  40204c:	66 89 85 8c fe ff ff 	mov    %ax,-0x174(%rbp)
  402053:	48 8b 45 10          	mov    0x10(%rbp),%rax
  402057:	48 89 85 80 fe ff ff 	mov    %rax,-0x180(%rbp)
  40205e:	48 8b 45 18          	mov    0x18(%rbp),%rax
  402062:	48 89 85 78 fe ff ff 	mov    %rax,-0x188(%rbp)
  402069:	48 8b 45 28          	mov    0x28(%rbp),%rax
  40206d:	48 89 85 70 fe ff ff 	mov    %rax,-0x190(%rbp)
  402074:	48 8b 45 30          	mov    0x30(%rbp),%rax
  402078:	48 89 85 68 fe ff ff 	mov    %rax,-0x198(%rbp)
  40207f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402086:	00 00 
  402088:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40208c:	31 c0                	xor    %eax,%eax
  40208e:	8b 85 a4 fe ff ff    	mov    -0x15c(%rbp),%eax
  402094:	3b 45 20             	cmp    0x20(%rbp),%eax
  402097:	77 0a                	ja     4020a3 <aes_decrypt_ccm+0x8f>
  402099:	b8 00 00 00 00       	mov    $0x0,%eax
  40209e:	e9 e2 02 00 00       	jmp    402385 <aes_decrypt_ccm+0x371>
  4020a3:	0f b7 95 a0 fe ff ff 	movzwl -0x160(%rbp),%edx
  4020aa:	8b 85 a4 fe ff ff    	mov    -0x15c(%rbp),%eax
  4020b0:	01 d0                	add    %edx,%eax
  4020b2:	83 c0 30             	add    $0x30,%eax
  4020b5:	89 c0                	mov    %eax,%eax
  4020b7:	48 89 c7             	mov    %rax,%rdi
  4020ba:	e8 01 bb 01 00       	call   41dbc0 <__libc_malloc>
  4020bf:	48 89 85 b8 fe ff ff 	mov    %rax,-0x148(%rbp)
  4020c6:	48 83 bd b8 fe ff ff 	cmpq   $0x0,-0x148(%rbp)
  4020cd:	00 
  4020ce:	75 0a                	jne    4020da <aes_decrypt_ccm+0xc6>
  4020d0:	b8 00 00 00 00       	mov    $0x0,%eax
  4020d5:	e9 ab 02 00 00       	jmp    402385 <aes_decrypt_ccm+0x371>
  4020da:	8b 55 38             	mov    0x38(%rbp),%edx
  4020dd:	48 8d 8d c0 fe ff ff 	lea    -0x140(%rbp),%rcx
  4020e4:	48 8b 85 68 fe ff ff 	mov    -0x198(%rbp),%rax
  4020eb:	48 89 ce             	mov    %rcx,%rsi
  4020ee:	48 89 c7             	mov    %rax,%rdi
  4020f1:	e8 48 06 00 00       	call   40273e <aes_key_setup>
  4020f6:	8b 85 a4 fe ff ff    	mov    -0x15c(%rbp),%eax
  4020fc:	2b 45 20             	sub    0x20(%rbp),%eax
  4020ff:	89 c2                	mov    %eax,%edx
  402101:	48 8b 85 78 fe ff ff 	mov    -0x188(%rbp),%rax
  402108:	89 10                	mov    %edx,(%rax)
  40210a:	0f b7 95 8c fe ff ff 	movzwl -0x174(%rbp),%edx
  402111:	b8 0f 00 00 00       	mov    $0xf,%eax
  402116:	29 d0                	sub    %edx,%eax
  402118:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%rbp)
  40211e:	48 8b 85 78 fe ff ff 	mov    -0x188(%rbp),%rax
  402125:	8b 00                	mov    (%rax),%eax
  402127:	89 c2                	mov    %eax,%edx
  402129:	48 8b 8d a8 fe ff ff 	mov    -0x158(%rbp),%rcx
  402130:	48 8b 85 80 fe ff ff 	mov    -0x180(%rbp),%rax
  402137:	48 89 ce             	mov    %rcx,%rsi
  40213a:	48 89 c7             	mov    %rax,%rdi
  40213d:	e8 1e ef ff ff       	call   401060 <_init+0x60>
  402142:	8b 55 20             	mov    0x20(%rbp),%edx
  402145:	48 8b 85 78 fe ff ff 	mov    -0x188(%rbp),%rax
  40214c:	8b 00                	mov    (%rax),%eax
  40214e:	89 c1                	mov    %eax,%ecx
  402150:	48 8b 85 a8 fe ff ff 	mov    -0x158(%rbp),%rax
  402157:	48 01 c1             	add    %rax,%rcx
  40215a:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  40215e:	48 89 ce             	mov    %rcx,%rsi
  402161:	48 89 c7             	mov    %rax,%rdi
  402164:	e8 f7 ee ff ff       	call   401060 <_init+0x60>
  402169:	0f b7 95 8c fe ff ff 	movzwl -0x174(%rbp),%edx
  402170:	8b 8d b4 fe ff ff    	mov    -0x14c(%rbp),%ecx
  402176:	48 8b b5 90 fe ff ff 	mov    -0x170(%rbp),%rsi
  40217d:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  402181:	48 89 c7             	mov    %rax,%rdi
  402184:	e8 12 02 00 00       	call   40239b <ccm_prepare_first_ctr_blk>
  402189:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
  40218d:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
  402191:	48 89 45 b0          	mov    %rax,-0x50(%rbp)
  402195:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
  402199:	b8 0f 00 00 00       	mov    $0xf,%eax
  40219e:	2b 45 20             	sub    0x20(%rbp),%eax
  4021a1:	89 c2                	mov    %eax,%edx
  4021a3:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  4021a7:	89 d6                	mov    %edx,%esi
  4021a9:	48 89 c7             	mov    %rax,%rdi
  4021ac:	e8 30 f9 ff ff       	call   401ae1 <increment_iv>
  4021b1:	48 8b 85 78 fe ff ff 	mov    -0x188(%rbp),%rax
  4021b8:	8b 00                	mov    (%rax),%eax
  4021ba:	41 89 c2             	mov    %eax,%r10d
  4021bd:	48 8d 7d b0          	lea    -0x50(%rbp),%rdi
  4021c1:	8b 75 38             	mov    0x38(%rbp),%esi
  4021c4:	48 8d 8d c0 fe ff ff 	lea    -0x140(%rbp),%rcx
  4021cb:	48 8b 95 80 fe ff ff 	mov    -0x180(%rbp),%rdx
  4021d2:	48 8b 85 80 fe ff ff 	mov    -0x180(%rbp),%rax
  4021d9:	49 89 f9             	mov    %rdi,%r9
  4021dc:	41 89 f0             	mov    %esi,%r8d
  4021df:	4c 89 d6             	mov    %r10,%rsi
  4021e2:	48 89 c7             	mov    %rax,%rdi
  4021e5:	e8 8f fa ff ff       	call   401c79 <aes_decrypt_ctr>
  4021ea:	48 83 bd 70 fe ff ff 	cmpq   $0x0,-0x190(%rbp)
  4021f1:	00 
  4021f2:	0f 84 79 01 00 00    	je     402371 <aes_decrypt_ccm+0x35d>
  4021f8:	8b 75 20             	mov    0x20(%rbp),%esi
  4021fb:	4c 8d 45 c0          	lea    -0x40(%rbp),%r8
  4021ff:	8b 7d 38             	mov    0x38(%rbp),%edi
  402202:	48 8d 8d c0 fe ff ff 	lea    -0x140(%rbp),%rcx
  402209:	48 8d 55 d0          	lea    -0x30(%rbp),%rdx
  40220d:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  402211:	4d 89 c1             	mov    %r8,%r9
  402214:	41 89 f8             	mov    %edi,%r8d
  402217:	48 89 c7             	mov    %rax,%rdi
  40221a:	e8 5a fa ff ff       	call   401c79 <aes_decrypt_ctr>
  40221f:	0f b7 95 8c fe ff ff 	movzwl -0x174(%rbp),%edx
  402226:	b8 0f 00 00 00       	mov    $0xf,%eax
  40222b:	29 d0                	sub    %edx,%eax
  40222d:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%rbp)
  402233:	0f b7 8d 8c fe ff ff 	movzwl -0x174(%rbp),%ecx
  40223a:	8b 7d 20             	mov    0x20(%rbp),%edi
  40223d:	48 8b 85 78 fe ff ff 	mov    -0x188(%rbp),%rax
  402244:	8b 00                	mov    (%rax),%eax
  402246:	41 89 c2             	mov    %eax,%r10d
  402249:	0f b7 b5 a0 fe ff ff 	movzwl -0x160(%rbp),%esi
  402250:	4c 8b 85 90 fe ff ff 	mov    -0x170(%rbp),%r8
  402257:	8b 95 b4 fe ff ff    	mov    -0x14c(%rbp),%edx
  40225d:	48 8b 85 b8 fe ff ff 	mov    -0x148(%rbp),%rax
  402264:	48 83 ec 08          	sub    $0x8,%rsp
  402268:	51                   	push   %rcx
  402269:	4d 89 c1             	mov    %r8,%r9
  40226c:	41 89 f8             	mov    %edi,%r8d
  40226f:	89 d1                	mov    %edx,%ecx
  402271:	44 89 d2             	mov    %r10d,%edx
  402274:	48 89 c7             	mov    %rax,%rdi
  402277:	e8 80 01 00 00       	call   4023fc <ccm_prepare_first_format_blk>
  40227c:	48 83 c4 10          	add    $0x10,%rsp
  402280:	c7 85 b0 fe ff ff 10 	movl   $0x10,-0x150(%rbp)
  402287:	00 00 00 
  40228a:	0f b7 8d a0 fe ff ff 	movzwl -0x160(%rbp),%ecx
  402291:	48 8b 95 98 fe ff ff 	mov    -0x168(%rbp),%rdx
  402298:	48 8d b5 b0 fe ff ff 	lea    -0x150(%rbp),%rsi
  40229f:	48 8b 85 b8 fe ff ff 	mov    -0x148(%rbp),%rax
  4022a6:	48 89 c7             	mov    %rax,%rdi
  4022a9:	e8 18 02 00 00       	call   4024c6 <ccm_format_assoc_data>
  4022ae:	48 8b 85 78 fe ff ff 	mov    -0x188(%rbp),%rax
  4022b5:	8b 00                	mov    (%rax),%eax
  4022b7:	89 c1                	mov    %eax,%ecx
  4022b9:	48 8b 95 80 fe ff ff 	mov    -0x180(%rbp),%rdx
  4022c0:	48 8d b5 b0 fe ff ff 	lea    -0x150(%rbp),%rsi
  4022c7:	48 8b 85 b8 fe ff ff 	mov    -0x148(%rbp),%rax
  4022ce:	48 89 c7             	mov    %rax,%rdi
  4022d1:	e8 da 02 00 00       	call   4025b0 <ccm_format_payload_data>
  4022d6:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
  4022da:	ba 10 00 00 00       	mov    $0x10,%edx
  4022df:	be 00 00 00 00       	mov    $0x0,%esi
  4022e4:	48 89 c7             	mov    %rax,%rdi
  4022e7:	e8 24 ee ff ff       	call   401110 <_init+0x110>
  4022ec:	8b 85 b0 fe ff ff    	mov    -0x150(%rbp),%eax
  4022f2:	48 63 f0             	movslq %eax,%rsi
  4022f5:	4c 8d 45 b0          	lea    -0x50(%rbp),%r8
  4022f9:	8b 7d 38             	mov    0x38(%rbp),%edi
  4022fc:	48 8d 8d c0 fe ff ff 	lea    -0x140(%rbp),%rcx
  402303:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
  402307:	48 8b 85 b8 fe ff ff 	mov    -0x148(%rbp),%rax
  40230e:	4d 89 c1             	mov    %r8,%r9
  402311:	41 89 f8             	mov    %edi,%r8d
  402314:	48 89 c7             	mov    %rax,%rdi
  402317:	e8 a1 f5 ff ff       	call   4018bd <aes_encrypt_cbc_mac>
  40231c:	8b 55 20             	mov    0x20(%rbp),%edx
  40231f:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  402323:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
  402327:	48 89 ce             	mov    %rcx,%rsi
  40232a:	48 89 c7             	mov    %rax,%rdi
  40232d:	e8 ae ed ff ff       	call   4010e0 <_init+0xe0>
  402332:	85 c0                	test   %eax,%eax
  402334:	75 0f                	jne    402345 <aes_decrypt_ccm+0x331>
  402336:	48 8b 85 70 fe ff ff 	mov    -0x190(%rbp),%rax
  40233d:	c7 00 01 00 00 00    	movl   $0x1,(%rax)
  402343:	eb 2c                	jmp    402371 <aes_decrypt_ccm+0x35d>
  402345:	48 8b 85 70 fe ff ff 	mov    -0x190(%rbp),%rax
  40234c:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
  402352:	48 8b 85 78 fe ff ff 	mov    -0x188(%rbp),%rax
  402359:	8b 00                	mov    (%rax),%eax
  40235b:	89 c2                	mov    %eax,%edx
  40235d:	48 8b 85 80 fe ff ff 	mov    -0x180(%rbp),%rax
  402364:	be 00 00 00 00       	mov    $0x0,%esi
  402369:	48 89 c7             	mov    %rax,%rdi
  40236c:	e8 9f ed ff ff       	call   401110 <_init+0x110>
  402371:	48 8b 85 b8 fe ff ff 	mov    -0x148(%rbp),%rax
  402378:	48 89 c7             	mov    %rax,%rdi
  40237b:	e8 80 bb 01 00       	call   41df00 <__free>
  402380:	b8 01 00 00 00       	mov    $0x1,%eax
  402385:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  402389:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
  402390:	00 00 
  402392:	74 05                	je     402399 <aes_decrypt_ccm+0x385>
  402394:	e8 d7 bd 04 00       	call   44e170 <__stack_chk_fail>
  402399:	c9                   	leave  
  40239a:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
