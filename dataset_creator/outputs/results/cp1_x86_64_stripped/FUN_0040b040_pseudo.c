
long FUN_0040b040(long *param_1)

{
  long lVar1;
  int iVar2;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    iVar2 = FUN_00406a10(lVar1);
    if (iVar2 != 0) {
      return lVar1;
    }
  }
  return 0;
}

