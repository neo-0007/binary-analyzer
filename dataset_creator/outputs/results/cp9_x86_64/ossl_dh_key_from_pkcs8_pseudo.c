
DH * ossl_dh_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1)

{
  int iVar1;
  int iVar2;
  ASN1_INTEGER *ai;
  DH *dh;
  BIGNUM *bn;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  uchar *local_40;
  uchar *local_38;
  int *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  dh = (DH *)0x0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_40,&local_48,&local_28,param_1);
  if (iVar1 == 0) goto LAB_004c7073;
  X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,&local_30,local_28);
  if ((local_44 == 0x10) &&
     (ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_40,(long)local_48),
     ai != (ASN1_INTEGER *)0x0)) {
    local_38 = *(uchar **)(local_30 + 2);
    iVar1 = *local_30;
    iVar2 = OBJ_obj2nid(local_28->algorithm);
    if (iVar2 == 0x1c) {
      dh = d2i_DHparams((DH **)0x0,&local_38,(long)iVar1);
    }
    else {
      if (iVar2 != 0x398) goto LAB_004c702d;
      dh = (DH *)d2i_DHxparams(0,&local_38,(long)iVar1);
    }
    if (dh == (DH *)0x0) goto LAB_004c702d;
    bn = (BIGNUM *)BN_secure_new();
    if ((bn == (BIGNUM *)0x0) || (pBVar3 = ASN1_INTEGER_to_BN(ai,bn), pBVar3 == (BIGNUM *)0x0)) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_backend.c",0xe5,"ossl_dh_key_from_pkcs8");
      ERR_set_error(5,0x6a,0);
      BN_clear_free(bn);
      goto LAB_004c7060;
    }
    iVar1 = DH_set0_key(dh,0,bn);
    if ((iVar1 == 0) || (iVar1 = DH_generate_key(dh), iVar1 == 0)) goto LAB_004c7060;
  }
  else {
    ai = (ASN1_INTEGER *)0x0;
LAB_004c702d:
    ERR_new();
    dh = (DH *)0x0;
    ERR_set_debug("../crypto/dh/dh_backend.c",0xf2,"ossl_dh_key_from_pkcs8");
    ERR_set_error(5,0x72,0);
LAB_004c7060:
    DH_free(dh);
    dh = (DH *)0x0;
  }
  ASN1_STRING_clear_free(ai);
LAB_004c7073:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return dh;
}

