
int PEM_write_PUBKEY_ex(FILE *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(param_2,0x86,&DAT_007fb1ae,"SubjectPublicKeyInfo");
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_ENCODER_to_fp(uVar2,param_1);
    OSSL_ENCODER_CTX_free(uVar2);
    return iVar1;
  }
  OSSL_ENCODER_CTX_free(uVar2);
  iVar1 = PEM_ASN1_write(i2d_PUBKEY,"PUBLIC KEY",param_1,param_2,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}

