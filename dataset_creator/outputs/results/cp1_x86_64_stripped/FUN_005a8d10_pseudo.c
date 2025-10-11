
bool FUN_005a8d10(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = FUN_00436410();
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_00435f80(lVar2,param_2);
  return iVar1 != 0;
}

