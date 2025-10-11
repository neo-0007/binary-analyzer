
void put_str(char *param_1,long *param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  size_t sVar2;
  ulong __n;
  
  sVar2 = strlen(param_1);
  *param_4 = *param_4 + sVar2;
  uVar1 = *param_3;
  if (uVar1 != 0) {
    __n = uVar1 - 1;
    if (sVar2 + 1 <= uVar1) {
      __n = sVar2;
    }
    if (__n == 0) {
      if (sVar2 == 0) {
        return;
      }
    }
    else {
      strncpy((char *)*param_2,param_1,__n);
      *param_2 = *param_2 + __n;
      *param_3 = *param_3 - __n;
      if (sVar2 <= __n) {
        return;
      }
    }
    if (*param_3 == 1) {
      *(undefined1 *)*param_2 = 0;
      *param_2 = *param_2 + 1;
      *param_3 = *param_3 - 1;
      return;
    }
  }
  return;
}

