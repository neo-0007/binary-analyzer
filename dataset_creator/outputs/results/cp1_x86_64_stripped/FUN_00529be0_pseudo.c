
undefined8 FUN_00529be0(undefined8 param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = FUN_004098f0();
  if (param_3 != 0 || param_2 != 0) {
    if (param_2 == 0) {
      if (*(int *)(lVar2 + 0x1f0) == 0) {
        thunk_FUN_00713a50(*(undefined8 *)(lVar2 + 0x2a8),param_3);
      }
      else {
        FUN_00551ad0(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                     (long)*(int *)(lVar2 + 0x2ec));
      }
      *(undefined4 *)(lVar2 + 500) = 1;
      return 1;
    }
    iVar1 = FUN_0040a180(param_1);
    FUN_00498c50(param_2,iVar1 * 8,lVar2);
    iVar1 = FUN_0040a180(param_1);
    FUN_00498be0(param_2,iVar1 * 8,lVar2 + 0xf8);
    if (param_4 == 0) {
      pcVar3 = FUN_00497c40;
    }
    else {
      pcVar3 = FUN_00497660;
    }
    iVar1 = FUN_005516a0(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,FUN_00494ec0,FUN_00494f10,pcVar3);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_3 != 0) ||
       ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(long *)(lVar2 + 0x2a8), param_3 != 0)))) {
      iVar1 = FUN_00551ad0(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                           (long)*(int *)(lVar2 + 0x2ec));
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(lVar2 + 500) = 1;
    }
    *(undefined4 *)(lVar2 + 0x1f0) = 1;
  }
  return 1;
}

