
int FUN_00597cc0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (0 < param_3) {
    lVar3 = FUN_00595e60();
    iVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = FUN_00595e70(lVar3,param_4,0,param_1,0);
      if (-1 < iVar1) {
        if (param_5 != 0) {
          iVar1 = FUN_00595fe0(lVar3,param_4,0,param_2,0,param_3 + -1,param_1);
        }
        if (-1 < iVar1) {
          iVar1 = FUN_005968f0(lVar3);
        }
      }
      FUN_00595cd0(lVar3);
      iVar2 = 0;
      if (iVar1 < 1) {
        iVar2 = iVar1;
      }
    }
    return iVar2;
  }
  return -1;
}

