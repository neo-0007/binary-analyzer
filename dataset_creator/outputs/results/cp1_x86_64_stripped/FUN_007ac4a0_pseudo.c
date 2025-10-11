
undefined4 FUN_007ac4a0(undefined8 param_1,long param_2,long param_3,long param_4,long *param_5)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *in_FS_OFFSET;
  
  pcVar1 = (char *)(param_3 + -1 + param_4);
  *pcVar1 = '\0';
  uVar3 = thunk_FUN_00712b50(param_3,param_1,param_4);
  if (*pcVar1 != '\0') {
    return 0x22;
  }
  iVar2 = FUN_007ac080(uVar3,param_2,0,0,*in_FS_OFFSET + -0x58);
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

