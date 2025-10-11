
long FUN_00663300(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_3 == 0) {
LAB_00663349:
    lVar3 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    do {
      iVar1 = FUN_006feaa0(*(undefined8 *)(param_1 + 0x40));
      if (iVar1 == -1) {
        if (lVar3 == 0) goto LAB_00663349;
        break;
      }
      *(int *)(param_2 + lVar3 * 4) = iVar1;
      lVar3 = lVar3 + 1;
    } while (param_3 != lVar3);
    uVar2 = *(undefined4 *)(param_2 + -4 + lVar3 * 4);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  return lVar3;
}

