
int ct_public_key_hash_isra_0
              (undefined8 param_1,undefined8 param_2,X509_PUBKEY *param_3,long *param_4,
              ulong *param_5)

{
  int iVar1;
  int iVar2;
  EVP_MD *type;
  uchar *md;
  long in_FS_OFFSET;
  uint local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  type = (EVP_MD *)EVP_MD_fetch(param_1,"SHA2-256",param_2);
  if ((type == (EVP_MD *)0x0) ||
     (((md = (uchar *)*param_4, md == (uchar *)0x0 || (*param_5 < 0x20)) &&
      (md = (uchar *)CRYPTO_malloc(0x20,"../crypto/ct/ct_sct_ctx.c",0xdc), md == (uchar *)0x0)))) {
    md = (uchar *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = i2d_X509_PUBKEY(param_3,&local_48);
    if ((0 < iVar1) &&
       (iVar2 = EVP_Digest(local_48,(long)iVar1,md,&local_4c,type,(ENGINE *)0x0), iVar2 != 0)) {
      if (md == (uchar *)*param_4) {
        md = (uchar *)0x0;
        iVar2 = 1;
      }
      else {
        iVar2 = 1;
        CRYPTO_free((uchar *)*param_4);
        *param_4 = (long)md;
        md = (uchar *)0x0;
        *param_5 = 0x20;
      }
    }
  }
  EVP_MD_free(type);
  CRYPTO_free(md);
  CRYPTO_free(local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

