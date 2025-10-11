
bool FUN_004eb000(long *param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    if (param_3 != 0) {
      FUN_004b7f20(*param_1);
      FUN_004b7f20(param_1[1]);
      *param_1 = param_2;
      param_1[1] = param_3;
    }
    return param_3 != 0;
  }
  return false;
}

