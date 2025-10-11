
bool FUN_00473dc0(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0043b840();
  if ((param_1 == 0) || (iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if ((param_2 & 1) != 0) {
      return *(long *)(param_1 + 0x18) != 0;
    }
  }
  return bVar1;
}

