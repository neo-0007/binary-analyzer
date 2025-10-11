
int FUN_0056e150(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_0056dca0(param_2,0xffffffff);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_00429680(*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_004b2a70(*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = param_3;
  if (param_3 == 0) {
    lVar3 = FUN_004b7690();
    if (lVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004b8190(lVar3,0x10001);
      if (iVar1 != 0) goto LAB_0056e1d6;
    }
  }
  else {
LAB_0056e1d6:
    do {
      iVar1 = FUN_0056d9f0(param_1,0,param_2,lVar3,lVar2,param_4);
      if (iVar1 == 0) {
LAB_0056e1ef:
        iVar1 = 0;
        goto LAB_0056e1f1;
      }
      iVar1 = FUN_0056dd00(param_1,param_2,lVar3,lVar2);
      if (iVar1 < 0) goto LAB_0056e1ef;
    } while (iVar1 == 0);
    iVar1 = FUN_0056e060(param_1,lVar2);
LAB_0056e1f1:
    if (param_3 != 0) goto LAB_0056e1f6;
  }
  FUN_004b7fa0(lVar3);
LAB_0056e1f6:
  FUN_004b2b50(lVar2);
  return iVar1;
}

