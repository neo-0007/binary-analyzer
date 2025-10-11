
undefined8 FUN_00607fa0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  
  puVar3 = (undefined4 *)FUN_00607e60();
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar3 = 1;
  plVar4 = (long *)FUN_00607dc0();
  *(long **)(puVar3 + 2) = plVar4;
  if (plVar4 == (long *)0x0) goto LAB_0060815b;
  if (*plVar4 == 0) {
    lVar6 = FUN_004a7820();
    *plVar4 = lVar6;
    if (lVar6 == 0) goto LAB_0060815b;
    plVar4 = *(long **)(puVar3 + 2);
  }
  if (plVar4[1] == 0) {
    lVar6 = FUN_004a7820();
    plVar4[1] = lVar6;
    if (lVar6 == 0) goto LAB_0060815b;
    plVar4 = *(long **)(puVar3 + 2);
  }
  if (param_4 != 0) {
    pbVar7 = (byte *)(param_2 + -1 + (long)param_4);
    iVar1 = param_4;
LAB_00608025:
    if (*pbVar7 == 0) goto LAB_00608018;
    iVar1 = thunk_FUN_004a1fa0(*plVar4,param_2);
    if (iVar1 != 0) {
      plVar4 = *(long **)(puVar3 + 2);
      iVar1 = 1;
      lVar6 = *plVar4;
      uVar8 = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffff8 | 8;
      *(ulong *)(lVar6 + 0x10) = uVar8;
      if ((*pbVar7 & 0x7f) == 0) {
        uVar5 = 7;
      }
      else {
        do {
          iVar1 = iVar1 + 1;
        } while ((0xffU >> ((byte)iVar1 & 0x1f) & (uint)*pbVar7) != 0);
        uVar5 = (ulong)(8 - iVar1);
      }
      *(ulong *)(lVar6 + 0x10) = uVar5 | uVar8;
      goto LAB_00608093;
    }
    goto LAB_0060815b;
  }
  iVar1 = thunk_FUN_004a1fa0(*plVar4,param_2,0);
  if (iVar1 == 0) goto LAB_0060815b;
  plVar4 = *(long **)(puVar3 + 2);
  *(ulong *)(*plVar4 + 0x10) = *(ulong *)(*plVar4 + 0x10) & 0xfffffffffffffff8 | 8;
LAB_00608210:
  iVar1 = thunk_FUN_004a1fa0(plVar4[1],param_3,0);
  if (iVar1 != 0) {
    *(ulong *)(*(long *)(*(long *)(puVar3 + 2) + 8) + 0x10) =
         *(ulong *)(*(long *)(*(long *)(puVar3 + 2) + 8) + 0x10) & 0xfffffffffffffff8 | 8;
LAB_0060811f:
    *param_1 = puVar3;
    return 1;
  }
LAB_0060815b:
  FUN_00607e80(puVar3);
  return 0;
LAB_00608018:
  pbVar7 = pbVar7 + -1;
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_00608140;
  goto LAB_00608025;
LAB_00608140:
  iVar1 = thunk_FUN_004a1fa0(*plVar4,param_2,0);
  if (iVar1 == 0) goto LAB_0060815b;
  plVar4 = *(long **)(puVar3 + 2);
  *(ulong *)(*plVar4 + 0x10) = *(ulong *)(*plVar4 + 0x10) & 0xfffffffffffffff8 | 8;
LAB_00608093:
  pbVar7 = (byte *)(param_3 + -1 + (long)param_4);
  do {
    if (*pbVar7 != 0xff) {
      iVar1 = thunk_FUN_004a1fa0(plVar4[1],param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = 1;
        lVar6 = *(long *)(*(long *)(puVar3 + 2) + 8);
        uVar8 = *(ulong *)(lVar6 + 0x10) & 0xfffffffffffffff8 | 8;
        *(ulong *)(lVar6 + 0x10) = uVar8;
        if ((*pbVar7 & 0x7f) == 0x7f) {
          uVar5 = 7;
        }
        else {
          do {
            iVar1 = iVar1 + 1;
            uVar2 = 0xff >> ((byte)iVar1 & 0x1f);
          } while (uVar2 != (uVar2 & *pbVar7));
          uVar5 = (ulong)(8 - iVar1);
        }
        *(ulong *)(lVar6 + 0x10) = uVar5 | uVar8;
        goto LAB_0060811f;
      }
      goto LAB_0060815b;
    }
    pbVar7 = pbVar7 + -1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  goto LAB_00608210;
}

