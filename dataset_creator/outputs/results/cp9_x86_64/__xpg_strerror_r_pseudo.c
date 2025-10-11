
undefined8 __xpg_strerror_r(int param_1,char *param_2,size_t param_3)

{
  char *__s;
  size_t sVar1;
  undefined1 *puVar2;
  ulong __n;
  
  __s = strerror_r(param_1,param_2,param_3);
  if (param_2 == __s) {
    return 0x16;
  }
  sVar1 = strlen(__s);
  if (param_3 != 0) {
    __n = param_3 - 1;
    if (sVar1 < param_3 - 1) {
      __n = sVar1;
    }
    puVar2 = (undefined1 *)mempcpy(param_2,__s,__n);
    *puVar2 = 0;
    if (sVar1 < param_3) {
      return 0;
    }
  }
  return 0x22;
}

