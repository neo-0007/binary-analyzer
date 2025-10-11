
uint FUN_0048a060(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_EAX;
  uint uVar6;
  uint uVar7;
  uint unaff_EBX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long unaff_R14;
  uint *unaff_R15;
  uint *puVar11;
  
  uVar6 = in_EAX ^ *unaff_R15;
  uVar8 = unaff_EBX ^ unaff_R15[1];
  param_4 = param_4 ^ unaff_R15[2];
  param_3 = param_3 ^ unaff_R15[3];
  iVar10 = unaff_R15[0x3c] - 1;
  do {
    puVar11 = unaff_R15;
    uVar2 = uVar6 >> 8;
    uVar7 = uVar6 >> 0x10;
    uVar3 = param_4 >> 8;
    uVar9 = uVar8 >> 0x10;
    uVar4 = param_4 >> 0x18;
    uVar5 = uVar6 >> 0x18;
    uVar6 = puVar11[4] ^
            *(uint *)(unaff_R14 + (ulong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 3 + (ulong)(param_3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 2 + (ulong)(param_4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 1 + (ulong)(uVar8 >> 0x18) * 8);
    param_4 = puVar11[6] ^
              *(uint *)(unaff_R14 + (ulong)(param_4 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 3 + (ulong)(uVar8 >> 8 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 2 + (ulong)(uVar7 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 1 + (ulong)(param_3 >> 0x18) * 8);
    uVar8 = puVar11[5] ^
            *(uint *)(unaff_R14 + (ulong)(uVar8 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 3 + (ulong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 2 + (ulong)(param_3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_R14 + 1 + (ulong)uVar4 * 8);
    param_3 = puVar11[7] ^
              *(uint *)(unaff_R14 + (ulong)(param_3 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 3 + (ulong)(uVar3 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 2 + (ulong)(uVar9 & 0xff) * 8) ^
              *(uint *)(unaff_R14 + 1 + (ulong)uVar5 * 8);
    iVar10 = iVar10 + -1;
    unaff_R15 = puVar11 + 4;
  } while (iVar10 != 0);
  lVar1 = unaff_R14 + 0x800;
  return puVar11[8] ^
         CONCAT13(*(undefined1 *)(lVar1 + (ulong)(uVar8 >> 0x18)),
                  CONCAT12(*(undefined1 *)(lVar1 + (ulong)(param_4 >> 0x10 & 0xff)),
                           CONCAT11(*(undefined1 *)(lVar1 + (ulong)(param_3 >> 8 & 0xff)),
                                    *(undefined1 *)(lVar1 + (ulong)(uVar6 & 0xff)))));
}

