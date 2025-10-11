
int sm2_to_SubjectPublicKeyInfo_der_encode
              (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
              long param_6,undefined8 param_7)

{
  int iVar1;
  BIO *a;
  X509_PUBKEY *a_00;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x571,
                  "sm2_to_SubjectPublicKeyInfo_der_encode");
    ERR_set_error(0x39,0x80106,0);
    goto LAB_0045b033;
  }
  if (param_3 == 0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                  "key2any_encode");
    ERR_set_error(0x39,0xc0102,0);
    goto LAB_0045b033;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if (a == (BIO *)0x0) {
LAB_0045b110:
    iVar1 = 0;
  }
  else {
    if (param_6 != 0) {
      iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7);
      if (iVar1 == 0) goto LAB_0045b110;
    }
    local_3c = 0xffffffff;
    local_38 = 0;
    iVar1 = prepare_ec_params(param_3,0x494,*(undefined4 *)(param_1 + 1),&local_38,&local_3c);
    if (iVar1 != 0) {
      iVar1 = 0;
      a_00 = (X509_PUBKEY *)key_to_pubkey(param_3,0x494,local_38,local_3c,ec_spki_pub_to_der);
      if (a_00 != (X509_PUBKEY *)0x0) {
        iVar1 = i2d_X509_PUBKEY_bio(a,a_00);
      }
      X509_PUBKEY_free(a_00);
    }
  }
  BIO_free(a);
LAB_0045b033:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

