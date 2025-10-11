
long FUN_0051b6f0(void)

{
  int iVar1;
  long lVar2;
  
  if (DAT_00941068 == 0) {
    lVar2 = FUN_0040ac70(0x40,0x41);
    if (((((lVar2 == 0) || (iVar1 = FUN_0040ae40(lVar2,0x14), iVar1 == 0)) ||
         (iVar1 = FUN_0040ae20(lVar2,0x40), iVar1 == 0)) ||
        ((iVar1 = FUN_0040ae60(lVar2,0x68), iVar1 == 0 ||
         (iVar1 = FUN_0040ae80(lVar2,0), iVar1 == 0)))) ||
       ((iVar1 = FUN_0040aea0(lVar2,FUN_0051b8e0), iVar1 == 0 ||
        ((iVar1 = FUN_0040aec0(lVar2,FUN_0051b8b0), iVar1 == 0 ||
         (iVar1 = FUN_0040aee0(lVar2,FUN_0051b890), iVar1 == 0)))))) {
      FUN_0040ae00(lVar2);
      lVar2 = 0;
    }
    DAT_00941068 = lVar2;
    return lVar2;
  }
  return DAT_00941068;
}

