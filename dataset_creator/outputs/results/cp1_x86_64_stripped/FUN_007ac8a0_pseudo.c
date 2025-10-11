
undefined4 FUN_007ac8a0(ulong param_1,long param_2,ulong param_3,long param_4,long *param_5)

{
  char *pcVar1;
  int iVar2;
  long *in_FS_OFFSET;
  
  if ((param_1 < param_3) || (param_3 + param_4 <= param_1)) {
    pcVar1 = (char *)((param_3 - 1) + param_4);
    *pcVar1 = '\0';
    param_1 = thunk_FUN_00712b50(param_3,param_1,param_4);
    param_3 = param_1;
    if (*pcVar1 != '\0') {
      return 0x22;
    }
  }
  iVar2 = FUN_007ac530(param_1,param_2,param_3,param_4,*in_FS_OFFSET + -0x58);
  if (iVar2 < 1) {
    *param_5 = 0;
  }
  else {
    *param_5 = param_2;
    if (param_2 != 0) {
      return 0;
    }
  }
  return (int)in_FS_OFFSET[-0xb];
}

