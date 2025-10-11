
int DH_check_pub_key(DH *dh,BIGNUM *pub_key,int *codes)

{
  int iVar1;
  
  iVar1 = BN_num_bits(dh->p);
  if (0x8000 < iVar1) {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_check.c",0xfd,"DH_check_pub_key");
    ERR_set_error(5,0x67,0);
    *codes = 0x104;
    return 0;
  }
  if (dh->g != (BIGNUM *)0x0) {
    iVar1 = BN_ucmp(dh->p,dh->g);
    if (iVar1 < 0) {
      *codes = *codes | 0x24;
      return 1;
    }
  }
  iVar1 = ossl_ffc_validate_public_key(&dh->p,pub_key,codes);
  return iVar1;
}

