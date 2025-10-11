
undefined8 FUN_0060f2a0(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == -1) {
    return 1;
  }
  do {
    uVar1 = FUN_0060f100(param_1);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    param_1 = param_1 + 0x1a;
  } while (*param_1 != -1);
  return 1;
}

