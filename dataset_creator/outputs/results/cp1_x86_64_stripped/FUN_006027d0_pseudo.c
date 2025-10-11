
char * FUN_006027d0(char *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    if (param_4 == 0) {
      param_1 = (char *)FUN_006e8e30("http_proxy");
      if (param_1 != (char *)0x0) goto LAB_006027f0;
      pcVar3 = "HTTPS_PROXY";
    }
    else {
      param_1 = (char *)FUN_006e8e30("https_proxy");
      if (param_1 != (char *)0x0) goto LAB_006027f0;
      pcVar3 = "HTTP_PROXY";
    }
    param_1 = (char *)FUN_006e8e30(pcVar3);
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
LAB_006027f0:
  if ((*param_1 == '\0') || (param_3 == 0)) {
    return (char *)0x0;
  }
  lVar1 = thunk_FUN_007129d0(param_3);
  if ((param_2 != 0) ||
     ((param_2 = FUN_006e8e30("no_proxy"), param_2 != 0 ||
      (param_2 = FUN_006e8e30("NO_PROXY"), param_2 != 0)))) {
    for (lVar2 = FUN_004011e0(param_2,param_3); lVar2 != 0; lVar2 = FUN_004011e0(lVar2 + 1,param_3))
    {
      if (((lVar2 == param_2) || (*(char *)(lVar2 + -1) == ' ')) || (*(char *)(lVar2 + -1) == ','))
      {
        if ((*(byte *)(lVar2 + lVar1) & 0xdf) == 0) {
          return (char *)0x0;
        }
        if (*(byte *)(lVar2 + lVar1) == 0x2c) {
          return (char *)0x0;
        }
      }
    }
  }
  return param_1;
}

