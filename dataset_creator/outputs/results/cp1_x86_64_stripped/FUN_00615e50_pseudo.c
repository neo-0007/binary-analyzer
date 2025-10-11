
undefined8 FUN_00615e50(char *param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((((param_2 == 3) && (*param_1 == 'D')) && (param_1[1] == 'I')) && (param_1[2] == 'R')) {
    *param_3 = *param_3 | 0x2906;
    return 1;
  }
  uVar1 = FUN_00614b70();
  if ((uVar1 != 0) && ((uVar1 & 0x10000) == 0)) {
    uVar2 = FUN_004a3ed0(uVar1);
    if (uVar2 != 0) {
      *param_3 = *param_3 | uVar2;
      return 1;
    }
  }
  return 0;
}

