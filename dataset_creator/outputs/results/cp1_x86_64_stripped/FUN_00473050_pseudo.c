
bool FUN_00473050(long param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0043b840();
  if ((param_1 == 0) || (iVar1 == 0)) {
    bVar2 = false;
  }
  else if ((((param_2 & 2) == 0) || (bVar2 = false, (*(byte *)(param_1 + 0x10) & 1) != 0)) &&
          (bVar2 = true, (param_2 & 1) != 0)) {
    bVar2 = *(long *)(param_1 + 0x50) != 0;
  }
  return bVar2;
}

