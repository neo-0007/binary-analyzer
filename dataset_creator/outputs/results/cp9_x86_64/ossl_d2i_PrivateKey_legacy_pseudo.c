
EVP_PKEY *
ossl_d2i_PrivateKey_legacy
          (int param_1,long *param_2,undefined8 *param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long lVar3;
  PKCS8_PRIV_KEY_INFO *a;
  EVP_PKEY *pkey_00;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)*param_3;
  if ((param_2 == (long *)0x0) || (pkey = (EVP_PKEY *)*param_2, pkey == (EVP_PKEY *)0x0)) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      pkey = (EVP_PKEY *)0x0;
      ERR_set_debug("../crypto/asn1/d2i_pr.c",0x56,"ossl_d2i_PrivateKey_legacy");
      ERR_set_error(0xd,0x80006,0);
      goto LAB_005a7616;
    }
    iVar1 = EVP_PKEY_set_type(pkey,param_1);
    if (iVar1 == 0) goto LAB_005a74e9;
LAB_005a7560:
    ERR_set_mark();
    lVar3 = *(long *)&pkey->references;
    if (*(code **)(lVar3 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(lVar3 + 0xb8))(pkey,&local_48,param_4 & 0xffffffff);
      if (iVar1 == 0) {
        lVar3 = *(long *)&pkey->references;
        goto LAB_005a758e;
      }
      ERR_clear_last_mark();
LAB_005a7605:
      *param_3 = local_48;
      if (param_2 != (long *)0x0) {
        *param_2 = (long)pkey;
      }
      goto LAB_005a7616;
    }
LAB_005a758e:
    if ((*(long *)(lVar3 + 0x40) == 0) && (*(long *)(lVar3 + 0x138) == 0)) {
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("../crypto/asn1/d2i_pr.c",0x7f,"ossl_d2i_PrivateKey_legacy");
      ERR_set_error(0xd,0x8000d,0);
      pkey_00 = pkey;
    }
    else {
      a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_48,param_4);
      if (a != (PKCS8_PRIV_KEY_INFO *)0x0) {
        pkey_00 = (EVP_PKEY *)evp_pkcs82pkey_legacy(a,param_5,param_6);
        PKCS8_PRIV_KEY_INFO_free(a);
        if (pkey_00 != (EVP_PKEY *)0x0) {
          EVP_PKEY_free(pkey);
          ERR_pop_to_mark();
          iVar1 = EVP_PKEY_type(param_1);
          iVar2 = EVP_PKEY_get_base_id(pkey_00);
          pkey = pkey_00;
          if (iVar1 == iVar2) goto LAB_005a7605;
          goto LAB_005a7519;
        }
      }
      ERR_clear_last_mark();
      pkey_00 = pkey;
    }
  }
  else {
    ENGINE_finish((ENGINE *)pkey->ameth);
    pkey->ameth = (EVP_PKEY_ASN1_METHOD *)0x0;
    iVar1 = EVP_PKEY_set_type(pkey,param_1);
    if (iVar1 != 0) goto LAB_005a7560;
LAB_005a74e9:
    ERR_new();
    ERR_set_debug("../crypto/asn1/d2i_pr.c",0x62,"ossl_d2i_PrivateKey_legacy");
    ERR_set_error(0xd,0xa3,0);
    pkey_00 = pkey;
  }
LAB_005a7519:
  if ((param_2 == (long *)0x0) || (pkey = (EVP_PKEY *)0x0, (EVP_PKEY *)*param_2 != pkey_00)) {
    pkey = (EVP_PKEY *)0x0;
    EVP_PKEY_free(pkey_00);
  }
LAB_005a7616:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pkey;
}

