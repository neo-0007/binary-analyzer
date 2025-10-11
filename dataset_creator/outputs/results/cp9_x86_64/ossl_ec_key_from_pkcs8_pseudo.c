
EC_KEY * ossl_ec_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EC_KEY *pEVar2;
  EC_KEY *pEVar3;
  long in_FS_OFFSET;
  int local_3c;
  uchar *local_38;
  EC_KEY *local_30;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  local_30 = (EC_KEY *)0x0;
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_38,&local_3c,&local_28,param_1);
  pEVar3 = (EC_KEY *)0x0;
  if (iVar1 != 0) {
    local_30 = (EC_KEY *)ossl_ec_key_param_from_x509_algor(local_28,param_2,param_3);
    if (local_30 != (EC_KEY *)0x0) {
      pEVar2 = d2i_ECPrivateKey(&local_30,&local_38,(long)local_3c);
      pEVar3 = local_30;
      if (pEVar2 != (EC_KEY *)0x0) goto LAB_004dfd54;
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_backend.c",0x33c,"ossl_ec_key_from_pkcs8");
      ERR_set_error(0x10,0x8e,0);
    }
    EC_KEY_free(local_30);
    pEVar3 = (EC_KEY *)0x0;
  }
LAB_004dfd54:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

