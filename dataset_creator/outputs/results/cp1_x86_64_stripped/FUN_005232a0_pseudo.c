
int FUN_005232a0(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  char *pcVar6;
  
  iVar2 = FUN_00521cc0();
  if (iVar2 < 1) {
    return iVar2;
  }
  iVar2 = *(int *)(param_3 + 8);
  if (param_1 == 1) {
    if (iVar2 == 1) {
      *(undefined4 *)(param_3 + 0x1c) = 0x32;
      *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
      *(long *)(param_3 + 0x20) = param_3 + 0x40;
    }
    else if (iVar2 == 2) goto LAB_0052331a;
  }
  else if ((param_1 == 8) && (iVar2 == 1)) {
LAB_0052331a:
    iVar2 = *(int *)(param_3 + 0x1c);
    lVar5 = param_3 + 0x40;
    if (iVar2 == -1) {
      pcVar6 = "digest";
LAB_0052341f:
      thunk_FUN_00712b50(lVar5,pcVar6,0x31);
      *(undefined1 *)(param_3 + 0x71) = 0;
    }
    else {
      if (iVar2 == -3) {
        pcVar6 = "max";
        goto LAB_0052341f;
      }
      if (iVar2 == -2) {
        pcVar6 = "auto";
        goto LAB_0052341f;
      }
      FUN_004aeb30(lVar5,0x32,"%d");
    }
    *(long *)(param_3 + 0x20) = lVar5;
    uVar4 = thunk_FUN_007129d0(lVar5);
    *(undefined4 *)(param_3 + 0x1c) = uVar4;
  }
  iVar2 = FUN_00521e40(param_1,param_2,param_3);
  if (iVar2 < 1) {
    return iVar2;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 != 7) {
      return iVar2;
    }
  }
  else {
    if (*(int *)(param_3 + 8) != 1) {
      return iVar2;
    }
    if (param_1 != 2) {
      return iVar2;
    }
  }
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  iVar3 = thunk_FUN_00712780(uVar1,"digest");
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = thunk_FUN_00712780(uVar1,"max");
    if (iVar3 == 0) {
      lVar5 = 1;
    }
    else {
      iVar3 = thunk_FUN_00712780(uVar1,&DAT_007dcf1c);
      if (iVar3 != 0) {
        uVar4 = FUN_006e94d0(uVar1,0,10);
        goto LAB_005233f1;
      }
      lVar5 = 2;
    }
  }
  uVar4 = (&DAT_00904340)[lVar5 * 4];
LAB_005233f1:
  if (param_1 == 2) {
    **(undefined4 **)(param_3 + 0x38) = uVar4;
  }
  else {
    *(undefined4 *)(param_3 + 0x1c) = uVar4;
  }
  *(undefined8 *)(param_3 + 0x20) = 0;
  return iVar2;
}

