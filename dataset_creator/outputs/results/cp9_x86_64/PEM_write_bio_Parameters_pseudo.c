
int PEM_write_bio_Parameters(BIO *bp,EVP_PKEY *x)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = OSSL_ENCODER_CTX_new_for_pkey(x,0x84,&DAT_007fb1ae,"type-specific");
  iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar3);
  if (iVar2 == 0) {
    OSSL_ENCODER_CTX_free(uVar3);
    lVar1 = *(long *)&x->references;
    iVar2 = 0;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
      BIO_snprintf(acStack_88,0x50,"%s PARAMETERS",*(undefined8 *)(lVar1 + 0x10));
      iVar2 = PEM_ASN1_write_bio(*(undefined1 **)(*(long *)&x->references + 0x78),acStack_88,bp,x,
                                 (EVP_CIPHER *)0x0,(uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
    }
  }
  else {
    iVar2 = OSSL_ENCODER_to_bio(uVar3,bp);
    OSSL_ENCODER_CTX_free(uVar3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

