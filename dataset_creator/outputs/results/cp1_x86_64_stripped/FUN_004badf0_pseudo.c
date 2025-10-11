
void FUN_004badf0(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = param_4 / 2;
  lVar2 = (long)iVar3 * 8;
  param_1 = param_1 + lVar2;
  FUN_004b9f50();
  if (param_4 < 0x40) {
    lVar1 = param_5 + lVar2;
    FUN_004bad20(param_5,param_2,param_3 + lVar2,iVar3);
    FUN_004bad20(lVar1,param_2 + lVar2,param_3,iVar3);
    FUN_005c1040(param_1,param_1,param_5,iVar3);
  }
  else {
    lVar1 = param_5 + (long)param_4 * 8;
    FUN_004badf0(param_5,param_2,param_3 + lVar2,iVar3,lVar1);
    FUN_005c1040(param_1,param_1,param_5,iVar3);
    FUN_004badf0(param_5,param_2 + lVar2,param_3,iVar3,lVar1);
    lVar1 = param_5;
  }
  FUN_005c1040(param_1,param_1,lVar1,iVar3);
  return;
}

