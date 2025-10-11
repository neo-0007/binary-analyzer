
bool FUN_0060faa0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  if (param_1 != 0) {
    lVar2 = FUN_0049fa70(param_1,0);
    if ((lVar2 == 0) || (iVar1 = FUN_004b7ba0(lVar2), iVar1 == 0)) {
      bVar3 = false;
    }
    FUN_004b7fa0(lVar2);
    return bVar3;
  }
  return bVar3;
}

