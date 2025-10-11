
undefined4 FUN_0043c330(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  
  *param_2 = 0;
  lVar2 = thunk_FUN_0041cdd0(param_1,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      return 0;
    }
    *param_2 = *(undefined8 *)(lVar2 + 0x10);
  }
  FUN_0051a270(*param_3);
  *param_3 = 0;
  lVar2 = thunk_FUN_0041cdd0(param_1,"engine");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) == 4) {
      lVar2 = FUN_0051b290(*(undefined8 *)(lVar2 + 0x10));
      *param_3 = lVar2;
      if (lVar2 != 0) {
        iVar1 = FUN_0051a180(lVar2);
        if (iVar1 == 0) {
          FUN_0051a5a0(*param_3);
          *param_3 = 0;
          return 0;
        }
        FUN_0051a5a0(*param_3);
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

