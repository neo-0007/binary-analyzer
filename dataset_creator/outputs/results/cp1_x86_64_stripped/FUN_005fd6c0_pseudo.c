
undefined8 FUN_005fd6c0(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  if (*param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_005fcfb0(param_1,param_2,param_1 + 2);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    *param_1 = 0;
    uVar2 = 1;
    *param_3 = iVar1;
  }
  return uVar2;
}

