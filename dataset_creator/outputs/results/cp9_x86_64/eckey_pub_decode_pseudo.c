
undefined8 eckey_pub_decode(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  EC_KEY *pEVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_4c;
  uchar *local_48;
  EC_KEY *local_40;
  X509_ALGOR *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_40 = (EC_KEY *)0x0;
  local_30 = 0;
  local_28 = 0;
  iVar1 = ossl_x509_PUBKEY_get0_libctx(&local_30,&local_28,param_2);
  if (iVar1 != 0) {
    iVar1 = X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_48,&local_4c,&local_38,param_2);
    if (iVar1 != 0) {
      local_40 = (EC_KEY *)ossl_ec_key_param_from_x509_algor(local_38,local_30,local_28);
      if (local_40 != (EC_KEY *)0x0) {
        pEVar2 = o2i_ECPublicKey(&local_40,&local_48,(long)local_4c);
        if (pEVar2 != (EC_KEY *)0x0) {
          EVP_PKEY_assign(param_1,0x198,local_40);
          uVar3 = 1;
          goto LAB_004db8ce;
        }
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_ameth.c",0x7a,"eckey_pub_decode");
        ERR_set_error(0x10,0x8e,0);
        EC_KEY_free(local_40);
      }
    }
  }
  uVar3 = 0;
LAB_004db8ce:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

