
undefined4
key2pvk_encode_part_0
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5,
          undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  undefined8 uVar3;
  BIO *a;
  
  pkey = EVP_PKEY_new();
  if (((pkey != (EVP_PKEY *)0x0) && (iVar1 = (*param_4)(pkey,param_2), iVar1 != 0)) &&
     ((param_5 == 0 ||
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 2,param_5,param_6), iVar1 != 0)))) {
    uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
    a = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_3);
    if (a != (BIO *)0x0) {
      uVar2 = i2b_PVK_bio_ex(a,pkey,*(undefined4 *)(param_1 + 1),ossl_pw_pvk_password,param_1 + 2,
                             uVar3,0);
      BIO_free(a);
      goto LAB_0045f783;
    }
  }
  uVar2 = 0;
LAB_0045f783:
  EVP_PKEY_free(pkey);
  return uVar2;
}

