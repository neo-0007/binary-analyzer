
long * ASYNC_WAIT_CTX_get_fd(long *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  while ((*(int *)((long)param_1 + 0x24) != 0 || (*param_1 != param_2))) {
    param_1 = (long *)param_1[5];
    if (param_1 == (long *)0x0) {
      return param_1;
    }
  }
  lVar1 = param_1[2];
  *param_3 = (int)param_1[1];
  *param_4 = lVar1;
  return (long *)0x1;
}

