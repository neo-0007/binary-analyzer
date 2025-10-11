
long * ASYNC_WAIT_CTX_clear_fd(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *ptr;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = (long *)0x0;
  ptr = plVar1;
  while ((*(int *)((long)ptr + 0x24) == 1 || (*ptr != param_2))) {
    plVar2 = (long *)ptr[5];
    plVar3 = ptr;
    ptr = plVar2;
    if (plVar2 == (long *)0x0) {
      return plVar2;
    }
  }
  if ((int)ptr[4] == 1) {
    if (plVar1 == ptr) {
      *param_1 = ptr[5];
    }
    else {
      plVar3[5] = ptr[5];
    }
    CRYPTO_free(ptr);
    param_1[1] = param_1[1] + -1;
    return (long *)0x1;
  }
  *(undefined4 *)((long)ptr + 0x24) = 1;
  param_1[2] = param_1[2] + 1;
  return (long *)0x1;
}

