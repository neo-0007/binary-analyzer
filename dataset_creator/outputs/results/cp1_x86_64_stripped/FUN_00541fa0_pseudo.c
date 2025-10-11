
void FUN_00541fa0(long *param_1,long param_2,long param_3,long param_4)

{
  if ((param_2 != 0) && (*param_1 != param_2)) {
    FUN_004b7fa0();
    *param_1 = param_2;
  }
  if ((param_3 != 0) && (param_1[1] != param_3)) {
    FUN_004b7fa0();
    param_1[1] = param_3;
  }
  if ((param_4 != 0) && (param_1[2] != param_4)) {
    FUN_004b7fa0();
    param_1[2] = param_4;
  }
  return;
}

