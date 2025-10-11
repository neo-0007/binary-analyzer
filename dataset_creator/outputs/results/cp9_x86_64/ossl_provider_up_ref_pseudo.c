
int ossl_provider_up_ref(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  iVar3 = iVar3 + 1;
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    iVar2 = ossl_provider_up_ref_parent(param_1,0);
    if (iVar2 == 0) {
      iVar3 = 0;
      ossl_provider_free(param_1);
    }
  }
  return iVar3;
}

