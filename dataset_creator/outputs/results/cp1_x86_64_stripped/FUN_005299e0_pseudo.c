
undefined8 FUN_005299e0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  
  lVar3 = FUN_004098f0();
  if (param_3 != 0 || param_2 != 0) {
    if (param_2 == 0) {
      if (*(int *)(lVar3 + 0x1f0) == 0) {
        thunk_FUN_00713a50(*(undefined8 *)(lVar3 + 0x2a8),param_3,(long)*(int *)(lVar3 + 0x2e8));
      }
      else {
        FUN_00551ad0(lVar3 + 0x1f8,param_3,(long)*(int *)(lVar3 + 0x2e8),
                     (long)*(int *)(lVar3 + 0x2ec));
      }
      *(undefined4 *)(lVar3 + 500) = 1;
      return 1;
    }
    lVar1 = lVar3 + 0xf8;
    if ((DAT_0094b59c._1_1_ & 2) == 0) {
      iVar2 = FUN_0040a180(param_1);
      FUN_0048a5f0(param_2,iVar2 * 8,lVar3);
      iVar2 = FUN_0040a180(param_1);
      FUN_0048a8b0(param_2,iVar2 * 8,lVar1);
      pcVar5 = FUN_0048a530;
      pcVar4 = FUN_00489fa0;
    }
    else {
      iVar2 = FUN_0040a180(param_1);
      FUN_0049c630(param_2,iVar2 * 8,lVar3);
      iVar2 = FUN_0040a180(param_1);
      FUN_0049c660(param_2,iVar2 * 8,lVar1);
      pcVar5 = FUN_0049c6c0;
      pcVar4 = FUN_0049c6a0;
    }
    iVar2 = FUN_005516a0(lVar3 + 0x1f8,lVar3,lVar1,pcVar4,pcVar5,0);
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_3 != 0) ||
       ((*(int *)(lVar3 + 500) != 0 && (param_3 = *(long *)(lVar3 + 0x2a8), param_3 != 0)))) {
      iVar2 = FUN_00551ad0(lVar3 + 0x1f8,param_3,(long)*(int *)(lVar3 + 0x2e8),
                           (long)*(int *)(lVar3 + 0x2ec));
      if (iVar2 != 1) {
        return 0;
      }
      *(undefined4 *)(lVar3 + 500) = 1;
    }
    *(undefined4 *)(lVar3 + 0x1f0) = 1;
  }
  return 1;
}

