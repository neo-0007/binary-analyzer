
bool FUN_00606840(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = FUN_0061b670();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_00435f40(lVar2,param_2);
  bVar3 = true;
  if (iVar1 < 0) {
    iVar1 = FUN_00435f80(*param_1,param_2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

