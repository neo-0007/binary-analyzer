
bool FUN_005a1a80(long *param_1,long param_2)

{
  if (*param_1 != param_2) {
    param_2 = FUN_004a22a0(param_2);
    if (param_2 != 0) {
      FUN_005b7380(*param_1);
      *param_1 = param_2;
    }
  }
  return param_2 != 0;
}

