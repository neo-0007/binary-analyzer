
char * FUN_0059c080(char *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    iVar2 = FUN_005466b0((int)cVar1,8);
    if (iVar2 == 0) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  lVar3 = thunk_FUN_007129d0(param_1);
  pcVar4 = param_1 + lVar3 + -1;
  if (pcVar4 == param_1) {
    return param_1;
  }
  do {
    iVar2 = FUN_005466b0((int)*pcVar4,8);
    if (iVar2 == 0) {
      if (pcVar4 != param_1) {
        pcVar4[1] = '\0';
      }
      break;
    }
    pcVar4 = pcVar4 + -1;
  } while (pcVar4 != param_1);
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  return param_1;
}

