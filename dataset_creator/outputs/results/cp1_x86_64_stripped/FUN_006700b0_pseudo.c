
int FUN_006700b0(void)

{
  int iVar1;
  
  iVar1 = DAT_009453f0;
  if (DAT_0093ea10 != '\0') {
    iVar1 = DAT_009453f0 + 4;
    DAT_009453f0 = DAT_009453f0 + 1;
    return iVar1;
  }
  LOCK();
  DAT_009453f0 = DAT_009453f0 + 1;
  UNLOCK();
  return iVar1 + 4;
}

