
bool FUN_005ad820(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 != param_2) {
    lVar1 = FUN_005ad800(param_2);
    if (lVar1 != 0) {
      FUN_005ad580(*param_1);
      *param_1 = lVar1;
    }
    return lVar1 != 0;
  }
  return param_2 != 0;
}

