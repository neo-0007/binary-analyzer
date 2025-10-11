
ulong FUN_00548c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    uVar2 = FUN_00548430(param_1,param_3,param_4);
    return uVar2;
  }
  lVar3 = FUN_0041cdd0(param_2,param_3);
  uVar2 = 1;
  if (lVar3 != 0) {
    iVar1 = FUN_0041dc70(lVar3,param_4);
    uVar2 = (ulong)(0 < iVar1);
  }
  return uVar2;
}

