
int i2d_PrivateKey(EVP_PKEY *a,uchar **pp)

{
  long lVar1;
  int iVar2;
  PKCS8_PRIV_KEY_INFO *a_00;
  
  if (*(long *)&a[1].save_parameters != 0) {
    iVar2 = i2d_provided(a,0x87,output_info_3,pp);
    return iVar2;
  }
  lVar1 = *(long *)&a->references;
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a80ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(lVar1 + 0xc0))();
      return iVar2;
    }
    if (*(long *)(lVar1 + 0x48) != 0) {
      a_00 = EVP_PKEY2PKCS8(a);
      if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
        return 0;
      }
      iVar2 = i2d_PKCS8_PRIV_KEY_INFO(a_00,pp);
      PKCS8_PRIV_KEY_INFO_free(a_00);
      return iVar2;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/asn1/i2d_evp.c",0x77,"i2d_PrivateKey");
  ERR_set_error(0xd,0xa7,0);
  return -1;
}

