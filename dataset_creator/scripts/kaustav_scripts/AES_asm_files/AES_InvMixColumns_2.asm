
./aes:     file format elf64-x86-64


Disassembly of section .init:

Disassembly of section .plt:

Disassembly of section .text:

0000000000402008 <AES_InvMixColumns>:
  402008:	f3 0f 1e fa          	endbr64 
  40200c:	55                   	push   %rbp
  40200d:	48 89 e5             	mov    %rsp,%rbp
  402010:	53                   	push   %rbx
  402011:	48 83 ec 38          	sub    $0x38,%rsp
  402015:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
  402019:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402020:	00 00 
  402022:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
  402026:	31 c0                	xor    %eax,%eax
  402028:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
  40202f:	48 c7 45 d8 00 00 00 	movq   $0x0,-0x28(%rbp)
  402036:	00 
  402037:	e9 f4 02 00 00       	jmp    402330 <AES_InvMixColumns+0x328>
  40203c:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402040:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402047:	00 
  402048:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40204c:	48 01 d0             	add    %rdx,%rax
  40204f:	0f b6 00             	movzbl (%rax),%eax
  402052:	0f b6 c0             	movzbl %al,%eax
  402055:	89 c6                	mov    %eax,%esi
  402057:	bf 0e 00 00 00       	mov    $0xe,%edi
  40205c:	e8 e4 f6 ff ff       	call   401745 <GF_Mult>
  402061:	89 c3                	mov    %eax,%ebx
  402063:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402067:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  40206e:	00 
  40206f:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402073:	48 01 d0             	add    %rdx,%rax
  402076:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  40207a:	0f b6 c0             	movzbl %al,%eax
  40207d:	89 c6                	mov    %eax,%esi
  40207f:	bf 0b 00 00 00       	mov    $0xb,%edi
  402084:	e8 bc f6 ff ff       	call   401745 <GF_Mult>
  402089:	31 c3                	xor    %eax,%ebx
  40208b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40208f:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402096:	00 
  402097:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40209b:	48 01 d0             	add    %rdx,%rax
  40209e:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  4020a2:	0f b6 c0             	movzbl %al,%eax
  4020a5:	89 c6                	mov    %eax,%esi
  4020a7:	bf 0d 00 00 00       	mov    $0xd,%edi
  4020ac:	e8 94 f6 ff ff       	call   401745 <GF_Mult>
  4020b1:	31 c3                	xor    %eax,%ebx
  4020b3:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4020b7:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4020be:	00 
  4020bf:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4020c3:	48 01 d0             	add    %rdx,%rax
  4020c6:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  4020ca:	0f b6 c0             	movzbl %al,%eax
  4020cd:	89 c6                	mov    %eax,%esi
  4020cf:	bf 09 00 00 00       	mov    $0x9,%edi
  4020d4:	e8 6c f6 ff ff       	call   401745 <GF_Mult>
  4020d9:	31 d8                	xor    %ebx,%eax
  4020db:	88 45 e4             	mov    %al,-0x1c(%rbp)
  4020de:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4020e2:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4020e9:	00 
  4020ea:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4020ee:	48 01 d0             	add    %rdx,%rax
  4020f1:	0f b6 00             	movzbl (%rax),%eax
  4020f4:	0f b6 c0             	movzbl %al,%eax
  4020f7:	89 c6                	mov    %eax,%esi
  4020f9:	bf 09 00 00 00       	mov    $0x9,%edi
  4020fe:	e8 42 f6 ff ff       	call   401745 <GF_Mult>
  402103:	89 c3                	mov    %eax,%ebx
  402105:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402109:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402110:	00 
  402111:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402115:	48 01 d0             	add    %rdx,%rax
  402118:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  40211c:	0f b6 c0             	movzbl %al,%eax
  40211f:	89 c6                	mov    %eax,%esi
  402121:	bf 0e 00 00 00       	mov    $0xe,%edi
  402126:	e8 1a f6 ff ff       	call   401745 <GF_Mult>
  40212b:	31 c3                	xor    %eax,%ebx
  40212d:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402131:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402138:	00 
  402139:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  40213d:	48 01 d0             	add    %rdx,%rax
  402140:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  402144:	0f b6 c0             	movzbl %al,%eax
  402147:	89 c6                	mov    %eax,%esi
  402149:	bf 0b 00 00 00       	mov    $0xb,%edi
  40214e:	e8 f2 f5 ff ff       	call   401745 <GF_Mult>
  402153:	31 c3                	xor    %eax,%ebx
  402155:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402159:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402160:	00 
  402161:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402165:	48 01 d0             	add    %rdx,%rax
  402168:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  40216c:	0f b6 c0             	movzbl %al,%eax
  40216f:	89 c6                	mov    %eax,%esi
  402171:	bf 0d 00 00 00       	mov    $0xd,%edi
  402176:	e8 ca f5 ff ff       	call   401745 <GF_Mult>
  40217b:	31 d8                	xor    %ebx,%eax
  40217d:	88 45 e5             	mov    %al,-0x1b(%rbp)
  402180:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402184:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  40218b:	00 
  40218c:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402190:	48 01 d0             	add    %rdx,%rax
  402193:	0f b6 00             	movzbl (%rax),%eax
  402196:	0f b6 c0             	movzbl %al,%eax
  402199:	89 c6                	mov    %eax,%esi
  40219b:	bf 0d 00 00 00       	mov    $0xd,%edi
  4021a0:	e8 a0 f5 ff ff       	call   401745 <GF_Mult>
  4021a5:	89 c3                	mov    %eax,%ebx
  4021a7:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4021ab:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4021b2:	00 
  4021b3:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4021b7:	48 01 d0             	add    %rdx,%rax
  4021ba:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  4021be:	0f b6 c0             	movzbl %al,%eax
  4021c1:	89 c6                	mov    %eax,%esi
  4021c3:	bf 09 00 00 00       	mov    $0x9,%edi
  4021c8:	e8 78 f5 ff ff       	call   401745 <GF_Mult>
  4021cd:	31 c3                	xor    %eax,%ebx
  4021cf:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4021d3:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4021da:	00 
  4021db:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4021df:	48 01 d0             	add    %rdx,%rax
  4021e2:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  4021e6:	0f b6 c0             	movzbl %al,%eax
  4021e9:	89 c6                	mov    %eax,%esi
  4021eb:	bf 0e 00 00 00       	mov    $0xe,%edi
  4021f0:	e8 50 f5 ff ff       	call   401745 <GF_Mult>
  4021f5:	31 c3                	xor    %eax,%ebx
  4021f7:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4021fb:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402202:	00 
  402203:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402207:	48 01 d0             	add    %rdx,%rax
  40220a:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  40220e:	0f b6 c0             	movzbl %al,%eax
  402211:	89 c6                	mov    %eax,%esi
  402213:	bf 0b 00 00 00       	mov    $0xb,%edi
  402218:	e8 28 f5 ff ff       	call   401745 <GF_Mult>
  40221d:	31 d8                	xor    %ebx,%eax
  40221f:	88 45 e6             	mov    %al,-0x1a(%rbp)
  402222:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402226:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  40222d:	00 
  40222e:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402232:	48 01 d0             	add    %rdx,%rax
  402235:	0f b6 00             	movzbl (%rax),%eax
  402238:	0f b6 c0             	movzbl %al,%eax
  40223b:	89 c6                	mov    %eax,%esi
  40223d:	bf 0b 00 00 00       	mov    $0xb,%edi
  402242:	e8 fe f4 ff ff       	call   401745 <GF_Mult>
  402247:	89 c3                	mov    %eax,%ebx
  402249:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40224d:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402254:	00 
  402255:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402259:	48 01 d0             	add    %rdx,%rax
  40225c:	0f b6 40 01          	movzbl 0x1(%rax),%eax
  402260:	0f b6 c0             	movzbl %al,%eax
  402263:	89 c6                	mov    %eax,%esi
  402265:	bf 0d 00 00 00       	mov    $0xd,%edi
  40226a:	e8 d6 f4 ff ff       	call   401745 <GF_Mult>
  40226f:	31 c3                	xor    %eax,%ebx
  402271:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402275:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  40227c:	00 
  40227d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402281:	48 01 d0             	add    %rdx,%rax
  402284:	0f b6 40 02          	movzbl 0x2(%rax),%eax
  402288:	0f b6 c0             	movzbl %al,%eax
  40228b:	89 c6                	mov    %eax,%esi
  40228d:	bf 09 00 00 00       	mov    $0x9,%edi
  402292:	e8 ae f4 ff ff       	call   401745 <GF_Mult>
  402297:	31 c3                	xor    %eax,%ebx
  402299:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  40229d:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4022a4:	00 
  4022a5:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4022a9:	48 01 d0             	add    %rdx,%rax
  4022ac:	0f b6 40 03          	movzbl 0x3(%rax),%eax
  4022b0:	0f b6 c0             	movzbl %al,%eax
  4022b3:	89 c6                	mov    %eax,%esi
  4022b5:	bf 0e 00 00 00       	mov    $0xe,%edi
  4022ba:	e8 86 f4 ff ff       	call   401745 <GF_Mult>
  4022bf:	31 d8                	xor    %ebx,%eax
  4022c1:	88 45 e7             	mov    %al,-0x19(%rbp)
  4022c4:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4022c8:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4022cf:	00 
  4022d0:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4022d4:	48 01 c2             	add    %rax,%rdx
  4022d7:	0f b6 45 e4          	movzbl -0x1c(%rbp),%eax
  4022db:	88 02                	mov    %al,(%rdx)
  4022dd:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4022e1:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4022e8:	00 
  4022e9:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  4022ed:	48 01 c2             	add    %rax,%rdx
  4022f0:	0f b6 45 e5          	movzbl -0x1b(%rbp),%eax
  4022f4:	88 42 01             	mov    %al,0x1(%rdx)
  4022f7:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  4022fb:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  402302:	00 
  402303:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402307:	48 01 c2             	add    %rax,%rdx
  40230a:	0f b6 45 e6          	movzbl -0x1a(%rbp),%eax
  40230e:	88 42 02             	mov    %al,0x2(%rdx)
  402311:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  402315:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  40231c:	00 
  40231d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
  402321:	48 01 c2             	add    %rax,%rdx
  402324:	0f b6 45 e7          	movzbl -0x19(%rbp),%eax
  402328:	88 42 03             	mov    %al,0x3(%rdx)
  40232b:	48 83 45 d8 01       	addq   $0x1,-0x28(%rbp)
  402330:	48 83 7d d8 03       	cmpq   $0x3,-0x28(%rbp)
  402335:	0f 86 01 fd ff ff    	jbe    40203c <AES_InvMixColumns+0x34>
  40233b:	90                   	nop
  40233c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  402340:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
  402347:	00 00 
  402349:	74 05                	je     402350 <AES_InvMixColumns+0x348>
  40234b:	e8 20 86 04 00       	call   44a970 <__stack_chk_fail>
  402350:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
  402354:	c9                   	leave  
  402355:	c3                   	ret    

Disassembly of section __libc_freeres_fn:

Disassembly of section .fini:
