
void FUN_00778150(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  uVar1 = thunk_FUN_007129d0();
  uVar2 = DAT_0094ac20;
  iVar3 = DAT_0094ac18;
  if (0 < DAT_0094ac18) {
    uVar5 = thunk_FUN_007129d0(DAT_0094ac20);
    if (uVar5 < uVar1) {
      puVar6 = (undefined1 *)((uVar1 - uVar5) + param_1);
      iVar4 = thunk_FUN_007a30f0(puVar6,uVar2);
      if (iVar4 == 0) goto LAB_0077821c;
    }
    uVar2 = DAT_0094ac28;
    if (iVar3 == 1) {
      return;
    }
    uVar5 = thunk_FUN_007129d0(DAT_0094ac28);
    if (uVar5 < uVar1) {
      puVar6 = (undefined1 *)((uVar1 - uVar5) + param_1);
      iVar4 = thunk_FUN_007a30f0(puVar6,uVar2);
      if (iVar4 == 0) goto LAB_0077821c;
    }
    uVar2 = DAT_0094ac30;
    if (iVar3 == 2) {
      return;
    }
    uVar5 = thunk_FUN_007129d0(DAT_0094ac30);
    if (uVar5 < uVar1) {
      puVar6 = (undefined1 *)((uVar1 - uVar5) + param_1);
      iVar4 = thunk_FUN_007a30f0(puVar6,uVar2);
      if (iVar4 == 0) goto LAB_0077821c;
    }
    uVar2 = DAT_0094ac38;
    if ((iVar3 != 3) && (uVar5 = thunk_FUN_007129d0(DAT_0094ac38), uVar5 < uVar1)) {
      puVar6 = (undefined1 *)(param_1 + (uVar1 - uVar5));
      iVar3 = thunk_FUN_007a30f0(puVar6,uVar2);
      if (iVar3 == 0) {
LAB_0077821c:
        *puVar6 = 0;
        return;
      }
    }
  }
  return;
}

