
long EVP_MD_CTX_get1_md(long *param_1)

{
  long lVar1;
  int iVar2;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    iVar2 = EVP_MD_up_ref(lVar1);
    if (iVar2 != 0) {
      return lVar1;
    }
  }
  return 0;
}

