
uint FUN_00489b40(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long unaff_R14;
  uint *unaff_R15;
  uint *puVar10;
  
  uVar5 = in_EAX ^ *unaff_R15;
  uVar7 = unaff_EBX ^ unaff_R15[1];
  param_4 = param_4 ^ unaff_R15[2];
  param_3 = param_3 ^ unaff_R15[3];
  iVar9 = unaff_R15[0x3c] - 1;
  do {
    puVar10 = unaff_R15;
    uVar1 = uVar5 >> 8;
    uVar8 = uVar7 >> 0x10;
    uVar6 = uVar5 >> 0x10;
    uVar2 = uVar5 >> 0x18;
    uVar3 = uVar7 >> 0x18;
    uVar4 = param_4 >> 0x18;
    uVar5 = puVar10[4] ^
            *(uint *)(unaff_R14 + (ulong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 3 + (ulong)(uVar7 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 2 + (ulong)(param_4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 1 + (ulong)(param_3 >> 0x18) * 8);
    uVar7 = puVar10[5] ^
            *(uint *)(unaff_R14 + (ulong)(uVar7 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 3 + (ulong)(param_4 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 2 + (ulong)(param_3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 1 + (ulong)uVar2 * 8);
    param_4 = puVar10[6] ^
              *(uint *)(unaff_R14 + (ulong)(param_4 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 3 + (ulong)(param_3 >> 8 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 2 + (ulong)(uVar6 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 1 + (ulong)uVar3 * 8);
    param_3 = puVar10[7] ^
              *(uint *)(unaff_R14 + (ulong)(param_3 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 3 + (ulong)(uVar1 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 2 + (ulong)(uVar8 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 1 + (ulong)uVar4 * 8);
    iVar9 = iVar9 + -1;
    unaff_R15 = puVar10 + 4;
  } while (iVar9 != 0);
  return puVar10[8] ^
         (uint)*(byte *)(unaff_R14 + 2 + (ulong)(uVar5 & 0xff) * 8) ^
         *(uint *)(unaff_R14 + (ulong)(uVar7 >> 8 & 0xff) * 8) & 0xff00 ^
         *(uint *)(unaff_R14 + (ulong)(param_4 >> 0x10 & 0xff) * 8) & 0xff0000 ^
         *(uint *)(unaff_R14 + 2 + (ulong)(param_3 >> 0x18) * 8) & 0xff000000;
}

