
long * FUN_00638630(long *param_1,long param_2,undefined8 param_3,undefined1 *param_4,long param_5)

{
  FUN_00637f00();
  if (param_5 != 0) {
    if (param_5 == 1) {
      *(undefined1 *)(param_2 + *param_1) = *param_4;
      return param_1;
    }
    thunk_FUN_00713a50((undefined1 *)(param_2 + *param_1),param_4,param_5);
  }
  return param_1;
}

