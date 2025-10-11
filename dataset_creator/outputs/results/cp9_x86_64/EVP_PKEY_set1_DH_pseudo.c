
int EVP_PKEY_set1_DH(EVP_PKEY *pkey,dh_st *key)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_dh_is_named_safe_prime_group(key);
  if (iVar1 == 0) {
    lVar2 = DH_get0_q(key);
    if (lVar2 != 0) {
      iVar1 = 0x398;
      goto LAB_00530d52;
    }
  }
  iVar1 = 0x1c;
LAB_00530d52:
  iVar1 = EVP_PKEY_assign(pkey,iVar1,key);
  if (iVar1 == 0) {
    return 0;
  }
  DH_up_ref(key);
  return iVar1;
}

