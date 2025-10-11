
int FUN_005c2570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  FUN_004b2c00(param_3);
  puVar3 = (undefined8 *)FUN_004b2df0(param_3);
  puVar4 = (undefined8 *)FUN_004b2df0(param_3);
  if (((puVar4 != (undefined8 *)0x0) && (lVar5 = FUN_004b8260(puVar3,param_1), lVar5 != 0)) &&
     (lVar5 = FUN_004b8260(puVar4,param_2), lVar5 != 0)) {
    iVar1 = FUN_004b7ba0(puVar4);
    if (iVar1 != 0) {
      iVar1 = FUN_004b7b70(puVar3,1);
      FUN_004b2d50(param_3);
      return iVar1;
    }
    iVar1 = FUN_004b7d40(puVar3);
    uVar2 = 0;
    if ((iVar1 != 0) || (iVar1 = FUN_004b7d40(puVar4), iVar1 != 0)) {
      while (iVar1 = FUN_004b78f0(puVar4,uVar2), iVar1 == 0) {
        uVar2 = uVar2 + 1;
      }
      iVar1 = FUN_004bc3b0(puVar4,puVar4,uVar2);
      if (iVar1 == 0) goto LAB_005c2620;
      iVar8 = 1;
      if (((uVar2 & 1) != 0) && (iVar8 = *(int *)(puVar3 + 1), iVar8 != 0)) {
        iVar8 = *(int *)(&DAT_008145c0 + (ulong)((uint)*(undefined8 *)*puVar3 & 7) * 4);
      }
      if ((*(int *)(puVar4 + 2) != 0) &&
         (*(undefined4 *)(puVar4 + 2) = 0, *(int *)(puVar3 + 2) != 0)) {
        iVar8 = -iVar8;
      }
      while (puVar7 = puVar4, uVar2 = FUN_004b7ba0(puVar3), uVar2 == 0) {
        while (iVar1 = FUN_004b78f0(puVar3,uVar2), iVar1 == 0) {
          uVar2 = uVar2 + 1;
        }
        iVar1 = FUN_004bc3b0(puVar3,puVar3,uVar2);
        if (iVar1 == 0) goto LAB_005c2620;
        if ((uVar2 & 1) != 0) {
          if (*(int *)(puVar7 + 1) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = iVar8 * *(int *)(&DAT_008145c0 + (ulong)((uint)*(undefined8 *)*puVar7 & 7) * 4);
          }
        }
        if (*(int *)(puVar3 + 2) == 0) {
          if (*(int *)(puVar3 + 1) != 0) {
            uVar6 = *(ulong *)*puVar3;
            goto LAB_005c271d;
          }
        }
        else {
          uVar6 = 0xffffffffffffffff;
          if (*(int *)(puVar3 + 1) != 0) {
            uVar6 = ~*(ulong *)*puVar3;
          }
LAB_005c271d:
          if ((*(int *)(puVar7 + 1) != 0) && ((uVar6 & *(ulong *)*puVar7 & 2) != 0)) {
            iVar8 = -iVar8;
          }
        }
        iVar1 = FUN_004b8a20(puVar7,puVar7,puVar3,param_3);
        if (iVar1 == 0) goto LAB_005c2620;
        *(undefined4 *)(puVar3 + 2) = 0;
        puVar4 = puVar3;
        puVar3 = puVar7;
      }
      iVar1 = FUN_004b7cc0(puVar7);
      if (iVar1 != 0) {
        FUN_004b2d50(param_3);
        return iVar8;
      }
    }
    FUN_004b2d50(param_3);
    return iVar1;
  }
LAB_005c2620:
  FUN_004b2d50(param_3);
  return -2;
}

