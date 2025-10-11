
uint get_issuer_sk(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = find_issuer(param_2,*(undefined8 *)(param_2 + 0x28));
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = X509_up_ref();
  return -(uint)(iVar1 == 0) | 1;
}

