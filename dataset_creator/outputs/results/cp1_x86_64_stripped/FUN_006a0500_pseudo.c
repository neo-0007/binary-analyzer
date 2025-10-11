
ulong FUN_006a0500(long *param_1,char param_2,ulong param_3)

{
  if (param_3 < (ulong)param_1[1]) {
    do {
      if (*(char *)(*param_1 + param_3) != param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_1[1]);
  }
  return 0xffffffffffffffff;
}

