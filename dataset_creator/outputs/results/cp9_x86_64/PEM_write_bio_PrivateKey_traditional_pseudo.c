
int PEM_write_bio_PrivateKey_traditional
              (BIO *param_1,EVP_PKEY *param_2,EVP_CIPHER *param_3,uchar *param_4,int param_5,
              undefined1 *param_6,void *param_7)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  EVP_PKEY *local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (EVP_PKEY *)0x0;
  if (((((param_2->pkey).ptr != (char *)0x0) ||
       (param_2[1].attributes != (stack_st_X509_ATTRIBUTE *)0x0)) &&
      (*(long *)&param_2[1].save_parameters != 0)) &&
     (iVar2 = evp_pkey_copy_downgraded(&local_a0,param_2), iVar2 != 0)) {
    param_2 = local_a0;
  }
  lVar1 = *(long *)&param_2->references;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0xc0) == 0)) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/pem/pem_pkey.c",0x159,"PEM_write_bio_PrivateKey_traditional");
    ERR_set_error(9,0x6e,0);
  }
  else {
    BIO_snprintf(local_98,0x50,"%s PRIVATE KEY",*(undefined8 *)(lVar1 + 0x10));
    iVar2 = PEM_ASN1_write_bio(i2d_PrivateKey,local_98,param_1,param_2,param_3,param_4,param_5,
                               param_6,param_7);
    EVP_PKEY_free(local_a0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

