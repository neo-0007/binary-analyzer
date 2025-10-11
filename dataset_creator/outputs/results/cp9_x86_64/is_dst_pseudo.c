
size_t is_dst(char *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  size_t __n;
  size_t sVar3;
  
  __n = strlen(param_2);
  if (*param_1 == '{') {
    iVar2 = strncmp(param_1 + 1,param_2,__n);
    sVar3 = 0;
    if ((iVar2 == 0) && (param_1[__n + 1] == '}')) {
      return __n + 2;
    }
  }
  else {
    iVar2 = strncmp(param_1,param_2,__n);
    if ((((iVar2 != 0) || (bVar1 = param_1[__n], (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) ||
        ((byte)(bVar1 - 0x30) < 10)) || (sVar3 = __n, bVar1 == 0x5f)) {
      sVar3 = 0;
    }
  }
  return sVar3;
}

