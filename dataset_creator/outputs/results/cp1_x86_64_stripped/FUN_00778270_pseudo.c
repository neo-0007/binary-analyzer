
void FUN_00778270(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long *local_50;
  
  iVar3 = DAT_0094ac18;
  if (DAT_0094ac18 == 0) {
    return;
  }
  lVar6 = *param_1;
  uVar4 = thunk_FUN_007129d0(lVar6);
  uVar1 = DAT_0094ac20;
  if (iVar3 < 1) goto LAB_00778355;
  uVar5 = thunk_FUN_007129d0(DAT_0094ac20);
  if (uVar5 < uVar4) {
    puVar7 = (undefined1 *)((uVar4 - uVar5) + lVar6);
    iVar2 = thunk_FUN_007a30f0(puVar7,uVar1);
    if (iVar2 != 0) goto LAB_007782e6;
  }
  else {
LAB_007782e6:
    uVar1 = DAT_0094ac28;
    if (iVar3 == 1) goto LAB_00778355;
    uVar5 = thunk_FUN_007129d0(DAT_0094ac28);
    if (uVar5 < uVar4) {
      puVar7 = (undefined1 *)((uVar4 - uVar5) + lVar6);
      iVar2 = thunk_FUN_007a30f0(puVar7,uVar1);
      if (iVar2 == 0) goto LAB_007784ca;
    }
    uVar1 = DAT_0094ac30;
    if (iVar3 == 2) goto LAB_00778355;
    uVar5 = thunk_FUN_007129d0(DAT_0094ac30);
    if (uVar5 < uVar4) {
      puVar7 = (undefined1 *)((uVar4 - uVar5) + lVar6);
      iVar2 = thunk_FUN_007a30f0(puVar7,uVar1);
      if (iVar2 == 0) goto LAB_007784ca;
    }
    uVar1 = DAT_0094ac38;
    if ((iVar3 == 3) || (uVar5 = thunk_FUN_007129d0(DAT_0094ac38), uVar4 <= uVar5))
    goto LAB_00778355;
    puVar7 = (undefined1 *)(lVar6 + (uVar4 - uVar5));
    iVar3 = thunk_FUN_007a30f0(puVar7,uVar1);
    if (iVar3 != 0) goto LAB_00778355;
  }
LAB_007784ca:
  *puVar7 = 0;
LAB_00778355:
  local_50 = (long *)param_1[1];
  lVar6 = *local_50;
  if (lVar6 != 0) {
    lVar8 = 8;
    while (uVar4 = thunk_FUN_007129d0(lVar6), uVar1 = DAT_0094ac20, iVar3 = DAT_0094ac18,
          0 < DAT_0094ac18) {
      uVar5 = thunk_FUN_007129d0(DAT_0094ac20);
      if (uVar5 < uVar4) {
        puVar7 = (undefined1 *)(lVar6 + (uVar4 - uVar5));
        iVar2 = thunk_FUN_007a30f0(puVar7,uVar1);
        if (iVar2 != 0) goto LAB_00778380;
LAB_0077849a:
        *puVar7 = 0;
        local_50 = (long *)param_1[1];
      }
      else {
LAB_00778380:
        uVar1 = DAT_0094ac28;
        if (iVar3 != 1) {
          uVar5 = thunk_FUN_007129d0(DAT_0094ac28);
          if (uVar5 < uVar4) {
            puVar7 = (undefined1 *)(lVar6 + (uVar4 - uVar5));
            iVar2 = thunk_FUN_007a30f0(puVar7,uVar1);
            if (iVar2 == 0) goto LAB_0077849a;
          }
          uVar1 = DAT_0094ac30;
          if (iVar3 != 2) {
            uVar5 = thunk_FUN_007129d0(DAT_0094ac30);
            if (uVar5 < uVar4) {
              puVar7 = (undefined1 *)(lVar6 + (uVar4 - uVar5));
              iVar2 = thunk_FUN_007a30f0(puVar7,uVar1);
              if (iVar2 == 0) goto LAB_0077849a;
            }
            uVar1 = DAT_0094ac38;
            if ((iVar3 != 3) && (uVar5 = thunk_FUN_007129d0(DAT_0094ac38), uVar5 < uVar4)) {
              puVar7 = (undefined1 *)(lVar6 + (uVar4 - uVar5));
              iVar3 = thunk_FUN_007a30f0(puVar7,uVar1);
              if (iVar3 == 0) goto LAB_0077849a;
            }
          }
        }
      }
      lVar6 = *(long *)((long)local_50 + lVar8);
      if (lVar6 == 0) {
        return;
      }
      lVar8 = lVar8 + 8;
    }
  }
  return;
}

