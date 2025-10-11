
int PEM_write_bio_PUBKEY(BIO *bp,EVP_PKEY *x)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(x,0x86,&DAT_007fb1ae,"SubjectPublicKeyInfo");
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_ENCODER_to_bio(uVar2,bp);
    OSSL_ENCODER_CTX_free(uVar2);
    return iVar1;
  }
  OSSL_ENCODER_CTX_free(uVar2);
  iVar1 = PEM_ASN1_write_bio(i2d_PUBKEY,"PUBLIC KEY",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}

