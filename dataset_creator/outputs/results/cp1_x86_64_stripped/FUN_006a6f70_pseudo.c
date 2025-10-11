
void FUN_006a6f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7,int *param_8)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 != 0) {
    iVar3 = (int)(param_5 - param_7 >> 2);
    lVar1 = FUN_006a6de0(param_6,param_4,param_2,param_3,param_7,param_7 + (long)iVar3 * 4);
    iVar2 = 0;
    if ((long)(*param_8 - iVar3) != 0) {
      FUN_00771ea0(lVar1,param_5,(long)(*param_8 - iVar3),0x3fffffffffffffff);
      iVar2 = *param_8 - iVar3;
    }
    *param_8 = iVar2 + (int)(lVar1 - param_6 >> 2);
    return;
  }
  lVar1 = FUN_006a6de0(param_6,param_4,param_2,param_3,param_7,param_7 + (long)*param_8 * 4);
  *param_8 = (int)(lVar1 - param_6 >> 2);
  return;
}

