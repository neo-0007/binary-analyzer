
void __poly1305_init_avx(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint in_R11D;
  uint in_register_0000009c;
  ulong unaff_R12;
  
  uVar1 = CONCAT44(in_register_0000009c,in_R11D);
  piVar5 = (int *)(param_1 + 0x70);
  uVar3 = in_R11D;
  uVar4 = in_register_0000009c;
  __poly1305_block();
  piVar5[-0x10] = in_R11D & 0x3ffffff;
  piVar5[-0xf] = uVar3 & 0x3ffffff;
  uVar2 = (uint)(uVar1 >> 0x1a) & 0x3ffffff;
  uVar3 = (uint)(CONCAT44(uVar4,uVar3) >> 0x1a) & 0x3ffffff;
  piVar5[-0xc] = uVar2;
  piVar5[-0xb] = uVar3;
  piVar5[-8] = uVar2 * 5;
  piVar5[-7] = uVar3 * 5;
  uVar3 = (uint)(unaff_R12 << 0xc) & 0x3ffffff | in_register_0000009c >> 0x14;
  uVar4 = (uint)(unaff_R12 << 0xc) & 0x3ffffff | uVar4 >> 0x14;
  piVar5[-4] = uVar3;
  piVar5[-3] = uVar4;
  *piVar5 = uVar3 * 5;
  piVar5[1] = uVar4 * 5;
  uVar3 = (uint)(unaff_R12 >> 0xe) & 0x3ffffff;
  uVar4 = (uint)(unaff_R12 >> 0xe) & 0x3ffffff;
  piVar5[4] = uVar3;
  piVar5[5] = uVar4;
  piVar5[8] = uVar3 * 5;
  piVar5[9] = uVar4 * 5;
  uVar3 = (uint)(unaff_R12 >> 0x20);
  piVar5[0xc] = uVar3 >> 8;
  piVar5[0xd] = uVar3 >> 8;
  piVar5[0x10] = (uVar3 >> 8) * 5;
  piVar5[0x11] = (uVar3 >> 8) * 5;
  __poly1305_block();
  piVar5[-0xd] = in_R11D & 0x3ffffff;
  uVar4 = (uint)(uVar1 >> 0x1a) & 0x3ffffff;
  piVar5[-9] = uVar4;
  piVar5[-5] = uVar4 * 5;
  uVar4 = (uint)(unaff_R12 << 0xc) & 0x3ffffff | in_register_0000009c >> 0x14;
  piVar5[-1] = uVar4;
  piVar5[3] = uVar4 * 5;
  uVar4 = (uint)(unaff_R12 >> 0xe) & 0x3ffffff;
  piVar5[7] = uVar4;
  piVar5[0xb] = uVar4 * 5;
  piVar5[0xf] = uVar3 >> 8;
  piVar5[0x13] = (uVar3 >> 8) * 5;
  __poly1305_block();
  piVar5[-0xe] = in_R11D & 0x3ffffff;
  uVar4 = (uint)(uVar1 >> 0x1a) & 0x3ffffff;
  piVar5[-10] = uVar4;
  piVar5[-6] = uVar4 * 5;
  uVar4 = (uint)(unaff_R12 << 0xc) & 0x3ffffff | in_register_0000009c >> 0x14;
  piVar5[-2] = uVar4;
  piVar5[2] = uVar4 * 5;
  uVar4 = (uint)(unaff_R12 >> 0xe) & 0x3ffffff;
  piVar5[6] = uVar4;
  piVar5[10] = uVar4 * 5;
  piVar5[0xe] = uVar3 >> 8;
  piVar5[0x12] = (uVar3 >> 8) * 5;
  return;
}

