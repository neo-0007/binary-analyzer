
undefined4 * FUN_0063e0c0(long *param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  if (param_3 < param_4) {
    do {
      cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,*param_3);
      if (cVar1 != '\0') {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return param_3;
}

