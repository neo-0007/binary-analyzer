
void FUN_006943b0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  *(long *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  if (0x7fffffff < param_4) {
    lVar1 = param_2 + 0x7fffffff + param_4;
    do {
      param_2 = lVar1 - param_4;
      param_4 = param_4 + -0x7fffffff;
    } while (0x7fffffff < param_4);
  }
  *(long *)(param_1 + 0x28) = param_2 + (int)param_4;
  return;
}

