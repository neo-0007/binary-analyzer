
ulong FUN_006b7c20(long *param_1,int param_2,ulong param_3)

{
  if (param_3 < (ulong)param_1[1]) {
    do {
      if (*(int *)(*param_1 + param_3 * 4) != param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_1[1]);
  }
  return 0xffffffffffffffff;
}

