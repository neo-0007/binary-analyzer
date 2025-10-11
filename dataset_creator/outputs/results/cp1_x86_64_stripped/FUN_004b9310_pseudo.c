
undefined8 FUN_004b9310(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  
  iVar1 = *(int *)(param_3 + 0x28);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  iVar4 = iVar1 * 2;
  lVar5 = FUN_004b8240(param_2,iVar4);
  if (lVar5 != 0) {
    *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
    lVar5 = param_2[1];
    puVar15 = (ulong *)*param_2;
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    puVar12 = puVar15;
    uVar10 = -(int)lVar5;
    if (0 < iVar4) {
      do {
        uVar11 = uVar10 + 1;
        *puVar12 = *puVar12 & -(ulong)(uVar10 >> 0x1f);
        puVar12 = puVar12 + 1;
        uVar10 = uVar11;
      } while (iVar4 - (int)lVar5 != uVar11);
    }
    *(int *)(param_2 + 1) = iVar4;
    lVar5 = *(long *)(param_3 + 0x50);
    if (iVar1 < 1) {
      lVar5 = FUN_004b8240(param_1,iVar1);
      if (lVar5 != 0) {
        lVar5 = param_2[2];
        *(int *)(param_1 + 1) = iVar1;
        *(int *)(param_1 + 2) = (int)lVar5;
        FUN_005c1070(*param_1,*param_2 + (long)iVar1 * 8,uVar2,iVar1);
        return 1;
      }
    }
    else {
      lVar6 = (long)iVar1;
      uVar13 = 0;
      puVar12 = puVar15 + lVar6;
      do {
        lVar7 = FUN_005c0d70(puVar15,uVar2,iVar1,*puVar15 * lVar5);
        uVar3 = puVar15[lVar6];
        uVar8 = lVar7 + uVar13 + uVar3;
        puVar15[lVar6] = uVar8;
        puVar15 = puVar15 + 1;
        uVar13 = (ulong)(uVar8 <= uVar3) & (uVar3 != uVar8 | uVar13);
      } while (puVar15 != puVar12);
      lVar5 = FUN_004b8240(param_1,iVar1);
      if (lVar5 != 0) {
        lVar7 = param_2[2];
        lVar14 = lVar6 * 8 + *param_2;
        *(int *)(param_1 + 1) = iVar1;
        lVar5 = *param_1;
        *(int *)(param_1 + 2) = (int)lVar7;
        lVar7 = FUN_005c1070(lVar5,lVar14,uVar2,iVar1);
        lVar9 = 0;
        do {
          uVar3 = *(ulong *)(lVar5 + lVar9 * 8);
          *(ulong *)(lVar5 + lVar9 * 8) =
               (*(ulong *)(lVar14 + lVar9 * 8) ^ uVar3) & uVar13 - lVar7 ^ uVar3;
          *(undefined8 *)(lVar14 + lVar9 * 8) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar6);
        return 1;
      }
    }
  }
  return 0;
}

