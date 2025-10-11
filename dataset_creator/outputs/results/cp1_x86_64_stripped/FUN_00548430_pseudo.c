
void FUN_00548430(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_3 != 0) {
    iVar1 = FUN_004b7bb0(param_3,param_2,param_3,0);
    iVar2 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar2 = iVar1 + 7;
    }
    lVar3 = (long)(iVar2 >> 3);
  }
  FUN_005482a0(param_1,param_2,param_3,lVar3);
  return;
}

