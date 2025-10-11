
uint FUN_004c5420(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long unaff_RBP;
  uint in_R8D;
  uint in_R9D;
  uint in_R10D;
  uint uVar4;
  uint in_R11D;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_R14;
  uint *unaff_R15;
  
  in_R9D = in_R9D ^ *unaff_R14;
  in_R8D = in_R8D ^ unaff_R14[1];
  uVar5 = in_R11D ^ unaff_R14[2];
  uVar4 = in_R10D ^ unaff_R14[3];
  while( true ) {
    uVar1 = unaff_R14[5] ^ in_R8D;
    uVar3 = unaff_R14[4] ^ in_R9D;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar1 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar1 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar1 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar1 >> 0x10 & 0xff) * 8);
    uVar1 = *(uint *)(unaff_RBP + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar4 = uVar4 ^ uVar1;
    uVar6 = uVar5 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar5 = unaff_R14[7] ^ uVar4;
    uVar2 = unaff_R14[6] ^ uVar6;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar2 >> 0x18) * 8) ^ uVar1;
    in_R8D = in_R8D ^ uVar5;
    uVar3 = in_R9D ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar5 = unaff_R14[9] ^ in_R8D;
    uVar2 = unaff_R14[8] ^ uVar3;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar2 >> 0x18) * 8) ^ uVar1;
    uVar4 = uVar4 ^ uVar5;
    uVar7 = uVar6 ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar5 = unaff_R14[0xb] ^ uVar4;
    uVar2 = unaff_R14[10] ^ uVar7;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar2 >> 0x18) * 8) ^ uVar1;
    in_R8D = in_R8D ^ uVar5;
    uVar6 = uVar3 ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar5 = unaff_R14[0xd] ^ in_R8D;
    uVar2 = unaff_R14[0xc] ^ uVar6;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar2 >> 0x18) * 8) ^ uVar1;
    uVar4 = uVar4 ^ uVar5;
    uVar5 = uVar7 ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar1 = unaff_R14[0xf] ^ uVar4;
    uVar3 = unaff_R14[0xe] ^ uVar5;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar1 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar1 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar1 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar1 >> 0x10 & 0xff) * 8);
    uVar1 = *(uint *)(unaff_RBP + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar3 >> 0x18) * 8) ^ uVar2;
    in_R8D = in_R8D ^ uVar1;
    if (unaff_R14 + 0x10 == unaff_R15) break;
    uVar3 = unaff_R14[0x11] & in_R8D;
    uVar4 = uVar4 ^ (unaff_R14[0x12] | uVar5);
    in_R9D = uVar6 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18) ^ (uVar3 << 1 | (uint)((int)uVar3 < 0));
    in_R8D = in_R8D ^ (unaff_R14[0x10] | in_R9D);
    uVar5 = uVar5 ^ ((unaff_R14[0x13] & uVar4) << 1 | (uint)((int)(unaff_R14[0x13] & uVar4) < 0));
    unaff_R14 = unaff_R14 + 0x10;
  }
  return unaff_R14[0x11] ^ uVar4;
}

