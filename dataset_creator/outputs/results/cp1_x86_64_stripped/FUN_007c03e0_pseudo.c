
long FUN_007c03e0(long *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = thunk_FUN_00712880(lVar1);
    pcVar3 = (char *)(lVar2 + lVar1);
    if (*pcVar3 == '\0') {
      *param_1 = 0;
      return lVar1;
    }
    *pcVar3 = '\0';
    *param_1 = (long)(pcVar3 + 1);
  }
  return lVar1;
}

