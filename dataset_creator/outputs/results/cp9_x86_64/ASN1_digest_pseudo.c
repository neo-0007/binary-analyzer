
int ASN1_digest(undefined1 *i2d,EVP_MD *type,char *data,uchar *md,uint *len)

{
  int iVar1;
  void *data_00;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (*(code *)i2d)(data,0);
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_digest.c",0x24,"ASN1_digest");
    ERR_set_error(0xd,0xc0103,0);
    iVar1 = 0;
  }
  else {
    data_00 = CRYPTO_malloc(iVar1,"../crypto/asn1/a_digest.c",0x27);
    if (data_00 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_digest.c",0x28,"ASN1_digest");
      ERR_set_error(0xd,0xc0100,0);
      iVar1 = 0;
    }
    else {
      local_48 = data_00;
      (*(code *)i2d)(data,&local_48);
      iVar1 = EVP_Digest(data_00,(long)iVar1,md,len,type,(ENGINE *)0x0);
      if (iVar1 == 0) {
        CRYPTO_free(data_00);
        iVar1 = 0;
      }
      else {
        CRYPTO_free(data_00);
        iVar1 = 1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

