
RSA * ossl_rsa_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1)

{
  int iVar1;
  RSA *r;
  long in_FS_OFFSET;
  int local_34;
  uchar *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_30,&local_34,&local_28,param_1);
  r = (RSA *)0x0;
  if (iVar1 != 0) {
    r = d2i_RSAPrivateKey((RSA **)0x0,&local_30,(long)local_34);
    if (r == (RSA *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_backend.c",0x239,"ossl_rsa_key_from_pkcs8");
      ERR_set_error(4,0x80004,0);
    }
    else {
      iVar1 = ossl_rsa_param_decode(r,local_28);
      if (iVar1 == 0) {
        RSA_free(r);
        r = (RSA *)0x0;
      }
      else {
        RSA_clear_flags(r,0xf000);
        iVar1 = OBJ_obj2nid(local_28->algorithm);
        if (iVar1 == 6) {
          RSA_set_flags(r,0);
        }
        else if (iVar1 == 0x390) {
          RSA_set_flags(r,0x1000);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return r;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

