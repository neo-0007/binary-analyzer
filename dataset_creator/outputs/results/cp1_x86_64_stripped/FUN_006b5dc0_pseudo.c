
long FUN_006b5dc0(long *param_1)

{
  if ((long *)*param_1 != param_1 + 2) {
    return param_1[2];
  }
  return 3;
}

