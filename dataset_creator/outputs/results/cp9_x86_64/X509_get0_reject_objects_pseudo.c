
long X509_get0_reject_objects(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x150);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  return lVar1;
}

