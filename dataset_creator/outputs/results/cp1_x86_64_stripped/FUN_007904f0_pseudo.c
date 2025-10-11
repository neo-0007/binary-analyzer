
void FUN_007904f0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_007211c0(*param_1,"on",3);
  if (iVar1 == 0) {
    DAT_0094b0a0 = DAT_0094b0a0 & 0xf3 | 4;
  }
  else {
    iVar1 = FUN_007211c0(*param_1,"off",4);
    if (iVar1 == 0) {
      DAT_0094b0a0 = DAT_0094b0a0 & 0xf3 | 8;
      return;
    }
    iVar1 = FUN_007211c0(*param_1,"permissive",0xb);
    if (iVar1 == 0) {
      DAT_0094b0a0 = DAT_0094b0a0 | 0xc;
      return;
    }
  }
  return;
}

