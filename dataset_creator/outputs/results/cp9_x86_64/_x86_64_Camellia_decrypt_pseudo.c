
uint _x86_64_Camellia_decrypt(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long unaff_RBP;
  uint in_R8D;
  uint in_R9D;
  uint in_R10D;
  uint uVar5;
  uint in_R11D;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_R14;
  uint *unaff_R15;
  
  in_R9D = in_R9D ^ *unaff_R14;
  in_R8D = in_R8D ^ unaff_R14[1];
  uVar6 = in_R11D ^ unaff_R14[2];
  uVar5 = in_R10D ^ unaff_R14[3];
  while( true ) {
    uVar2 = unaff_R14[-1] ^ in_R8D;
    uVar4 = unaff_R14[-2] ^ in_R9D;
    uVar3 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar2 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar2 = *(uint *)(unaff_RBP + (ulong)(uVar4 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar4 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar4 >> 0x18) * 8) ^ uVar3;
    uVar5 = uVar5 ^ uVar2;
    uVar7 = uVar6 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18);
    uVar6 = unaff_R14[-3] ^ uVar5;
    uVar3 = unaff_R14[-4] ^ uVar7;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar3 >> 0x18) * 8) ^ uVar2;
    in_R8D = in_R8D ^ uVar6;
    uVar4 = in_R9D ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-5] ^ in_R8D;
    uVar3 = unaff_R14[-6] ^ uVar4;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar5 = uVar5 ^ uVar6;
    uVar8 = uVar7 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-7] ^ uVar5;
    uVar3 = unaff_R14[-8] ^ uVar8;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar3 >> 0x18) * 8) ^ uVar2;
    in_R8D = in_R8D ^ uVar6;
    uVar7 = uVar4 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-9] ^ in_R8D;
    uVar3 = unaff_R14[-10] ^ uVar7;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar5 = uVar5 ^ uVar6;
    uVar6 = uVar8 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar2 = unaff_R14[-0xb] ^ uVar5;
    uVar4 = unaff_R14[-0xc] ^ uVar6;
    uVar3 = *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulong)(uVar2 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar2 = *(uint *)(unaff_RBP + (ulong)(uVar4 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulong)(uVar4 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulong)(uVar4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulong)(uVar4 >> 0x18) * 8) ^ uVar3;
    in_R8D = in_R8D ^ uVar2;
    puVar1 = unaff_R14 + -0x10;
    if (puVar1 == unaff_R15) break;
    uVar4 = unaff_R14[-0xd] & in_R8D;
    uVar5 = uVar5 ^ (*puVar1 | uVar6);
    in_R9D = uVar7 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ (uVar4 << 1 | (uint)((int)uVar4 < 0));
    in_R8D = in_R8D ^ (unaff_R14[-0xe] | in_R9D);
    uVar6 = uVar6 ^ ((unaff_R14[-0xf] & uVar5) << 1 | (uint)((int)(unaff_R14[-0xf] & uVar5) < 0));
    unaff_R14 = puVar1;
  }
  return unaff_R14[-0xd] ^ in_R8D;
}

