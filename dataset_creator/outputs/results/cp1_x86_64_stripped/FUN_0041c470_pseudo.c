
long FUN_0041c470(char *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_0041c4ae;
    param_3 = 0;
  }
  else {
    uVar1 = param_3 - 1;
    param_3 = 0;
    pcVar3 = param_1;
    do {
      cVar2 = *param_2;
      param_1 = pcVar3;
      if (cVar2 == '\0') break;
      param_3 = param_3 + 1;
      param_1 = pcVar3 + 1;
      param_2 = param_2 + 1;
      *pcVar3 = cVar2;
      pcVar3 = param_1;
    } while (uVar1 != param_3);
  }
  *param_1 = '\0';
LAB_0041c4ae:
  lVar4 = thunk_FUN_007129d0();
  return lVar4 + param_3;
}

