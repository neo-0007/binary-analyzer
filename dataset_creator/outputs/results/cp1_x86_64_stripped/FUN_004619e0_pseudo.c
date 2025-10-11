
bool FUN_004619e0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = thunk_FUN_0041cdd0(param_2,"encrypt-level");
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041cf60(lVar2,param_1 + 8);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

