
bool X509_CRL_up_ref(long param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x80);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 0 < iVar2;
}

