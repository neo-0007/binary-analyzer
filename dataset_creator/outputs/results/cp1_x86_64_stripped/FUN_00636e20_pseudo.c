
void FUN_00636e20(char *param_1,long param_2,char param_3)

{
  if (param_2 == 1) {
    *param_1 = param_3;
    return;
  }
  if (param_2 == 0) {
    return;
  }
  thunk_FUN_00713720(param_1,(int)param_3,param_2);
  return;
}

