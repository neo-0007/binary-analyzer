
bool FUN_005afbd0(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 1) {
    return true;
  }
  lVar1 = *param_2;
  lVar2 = FUN_00436410();
  *(long *)(lVar1 + 0x30) = lVar2;
  return lVar2 != 0;
}

