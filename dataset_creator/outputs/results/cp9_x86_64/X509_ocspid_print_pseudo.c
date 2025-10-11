
int X509_ocspid_print(BIO *bp,X509 *x)

{
  int iVar1;
  X509_NAME *a;
  ASN1_BIT_STRING *x_00;
  EVP_MD *type;
  void *data;
  byte *pbVar2;
  long in_FS_OFFSET;
  byte *local_78;
  ASN1_BIT_STRING *local_60;
  byte local_58 [20];
  byte local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x == (X509 *)0x0) || (bp == (BIO *)0x0)) {
    iVar1 = 0;
    goto LAB_00584d6a;
  }
  iVar1 = BIO_printf(bp,"        Subject OCSP hash: ");
  if (iVar1 < 1) {
LAB_00584d97:
    type = (EVP_MD *)0x0;
    x_00 = (ASN1_BIT_STRING *)0x0;
  }
  else {
    a = X509_get_subject_name(x);
    iVar1 = i2d_X509_NAME(a,(uchar **)0x0);
    if (iVar1 < 1) goto LAB_00584d97;
    x_00 = (ASN1_BIT_STRING *)CRYPTO_malloc(iVar1,"../crypto/x509/t_x509.c",0xf6);
    local_60 = x_00;
    if (x_00 == (ASN1_BIT_STRING *)0x0) goto LAB_00584d97;
    i2d_X509_NAME(a,(uchar **)&local_60);
    type = (EVP_MD *)
           EVP_MD_fetch(*(undefined8 *)x[1].sha1_hash,&DAT_007c6514,
                        *(undefined8 *)(x[1].sha1_hash + 8));
    if (type != (EVP_MD *)0x0) {
      local_78 = local_58;
      iVar1 = EVP_Digest(x_00,(long)iVar1,local_78,(uint *)0x0,type,(ENGINE *)0x0);
      if (iVar1 != 0) {
        pbVar2 = local_78;
        do {
          iVar1 = BIO_printf(bp,"%02X",(ulong)*pbVar2);
          if (iVar1 < 1) goto LAB_00584d9d;
          pbVar2 = pbVar2 + 1;
        } while (local_44 != pbVar2);
        CRYPTO_free(x_00);
        iVar1 = BIO_printf(bp,"\n        Public key OCSP hash: ");
        if (0 < iVar1) {
          x_00 = X509_get0_pubkey_bitstr(x);
          if (x_00 == (ASN1_BIT_STRING *)0x0) goto LAB_00584d9d;
          iVar1 = ASN1_STRING_length(x_00);
          data = (void *)ASN1_STRING_get0_data(x_00);
          iVar1 = EVP_Digest(data,(long)iVar1,local_78,(uint *)0x0,type,(ENGINE *)0x0);
          if (iVar1 != 0) {
            do {
              iVar1 = BIO_printf(bp,"%02X",(ulong)*local_78);
              if (iVar1 < 1) goto LAB_00584d60;
              local_78 = local_78 + 1;
            } while (local_44 != local_78);
            BIO_printf(bp,"\n");
            EVP_MD_free(type);
            iVar1 = 1;
            goto LAB_00584d6a;
          }
        }
LAB_00584d60:
        x_00 = (ASN1_BIT_STRING *)0x0;
      }
    }
  }
LAB_00584d9d:
  CRYPTO_free(x_00);
  EVP_MD_free(type);
  iVar1 = 0;
LAB_00584d6a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

