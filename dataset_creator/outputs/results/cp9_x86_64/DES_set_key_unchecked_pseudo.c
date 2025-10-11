
void DES_set_key_unchecked(const_DES_cblock *key,DES_key_schedule *schedule)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = (int *)(shifts2_0 + 4);
  uVar1 = (*(uint *)(*key + 4) >> 4 ^ *(uint *)*key) & 0xf0f0f0f;
  uVar4 = *(uint *)*key ^ uVar1;
  uVar1 = uVar1 << 4 ^ *(uint *)(*key + 4);
  uVar3 = (uVar4 << 0x12 ^ uVar4) & 0xcccc0000;
  uVar4 = uVar3 >> 0x12 ^ uVar4 ^ uVar3;
  uVar3 = (uVar1 << 0x12 ^ uVar1) & 0xcccc0000;
  uVar3 = uVar3 >> 0x12 ^ uVar1 ^ uVar3;
  uVar1 = (uVar3 >> 1 ^ uVar4) & 0x55555555;
  uVar4 = uVar4 ^ uVar1;
  uVar3 = uVar1 * 2 ^ uVar3;
  uVar1 = (uVar4 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar4 = uVar1 << 8 ^ uVar4;
  uVar1 = (uVar3 >> 1 ^ uVar4) & 0x55555555;
  uVar4 = uVar4 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 * 2;
  uVar1 = uVar4 & 0xfffffff;
  iVar2 = 0;
  uVar3 = uVar4 >> 4 & 0xf000000 | uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff;
  while( true ) {
    if (iVar2 == 0) {
      uVar6 = uVar1 >> 1 | uVar1 << 0x1b;
      uVar4 = uVar3 >> 1 | uVar3 << 0x1b;
    }
    else {
      uVar6 = uVar1 >> 2 | uVar1 << 0x1a;
      uVar4 = uVar3 >> 2 | uVar3 << 0x1a;
    }
    uVar1 = uVar6 & 0xfffffff;
    uVar3 = uVar4 & 0xfffffff;
    uVar6 = *(uint *)(des_skb + (ulong)(uVar1 >> 6 & 3 | uVar1 >> 7 & 0x3c) * 4 + 0x100) |
            *(uint *)(des_skb + (ulong)(uVar1 >> 0xd & 0xf | uVar1 >> 0xe & 0x30) * 4 + 0x200) |
            *(uint *)(des_skb + (ulong)(uVar6 & 0x3f) * 4) |
            *(uint *)(des_skb +
                     (ulong)(uVar1 >> 0x14 & 1 | uVar1 >> 0x15 & 6 | uVar1 >> 0x16 & 0x38) * 4 +
                     0x300);
    uVar4 = *(uint *)(des_skb + (ulong)(uVar3 >> 0xf & 0x3f) * 4 + 0x600) |
            *(uint *)(des_skb + (ulong)(uVar4 & 0x3f) * 4 + 0x400) |
            *(uint *)((ulong)(uVar3 >> 7 & 3 | uVar3 >> 8 & 0x3c) * 4 + 0x7e0000) |
            *(uint *)(des_skb + (ulong)(uVar3 >> 0x15 & 0xf | uVar3 >> 0x16 & 0x30) * 4 + 0x700);
    *(uint *)schedule = (uVar4 << 0x10) >> 0x1e | (uVar6 & 0xffff | uVar4 << 0x10) << 2;
    *(uint *)((long)schedule + 4) = uVar4 >> 0x1a | (uVar4 & 0xffff0000 | uVar6 >> 0x10) << 6;
    if (piVar5 == (int *)des_skb) break;
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    schedule = (DES_key_schedule *)((long)schedule + 8);
  }
  return;
}

