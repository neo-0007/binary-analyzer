
long FUN_0059bc60(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0059b9e0(param_1,0xffffffff,0);
  lVar2 = 0;
  if ((iVar1 == 1) && (lVar2 = *(long *)(param_1 + 0x100), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}

