
int PEM_ASN1_write_bio(undefined1 *i2d,char *name,BIO *bp,void *x,EVP_CIPHER *enc,uchar *kstr,
                      int klen,undefined1 *cb,void *u)

{
  int iVar1;
  uint uVar2;
  EVP_MD *md;
  EVP_CIPHER_CTX *ctx;
  size_t sVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_4d8;
  char *local_4d0;
  long local_4c8;
  int local_4a8;
  int local_4a4;
  uchar *local_4a0;
  uchar local_498 [16];
  uchar local_488 [64];
  uchar local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4a8 = 0;
  local_4a4 = 0;
  if (enc == (EVP_CIPHER *)0x0) {
    local_4d0 = (char *)0x0;
LAB_00540891:
    iVar1 = (*(code *)i2d)(x,0);
    if (0 < iVar1) {
      local_4d8 = (uchar *)CRYPTO_malloc(iVar1 + 0x14,"../crypto/pem/pem_lib.c",0x15b);
      local_4c8 = (long)iVar1;
      if (local_4d8 == (uchar *)0x0) {
        ERR_new();
        ctx = (EVP_CIPHER_CTX *)0x0;
        ERR_set_debug("../crypto/pem/pem_lib.c",0x15d,"PEM_ASN1_write_bio");
        ERR_set_error(9,0xc0100,0);
        uVar2 = 0;
        goto LAB_00540807;
      }
      local_4a0 = local_4d8;
      local_4a8 = (*(code *)i2d)(x,&local_4a0);
      if (enc == (EVP_CIPHER *)0x0) {
        local_448[0] = '\0';
        ctx = (EVP_CIPHER_CTX *)0x0;
      }
      else {
        if (kstr == (uchar *)0x0) {
          if (cb == (undefined1 *)0x0) {
            klen = PEM_def_callback((char *)local_448,0x400,1,u);
          }
          else {
            klen = (*(code *)cb)();
          }
          kstr = local_448;
          if (klen < 1) {
            ERR_new();
            ERR_set_debug("../crypto/pem/pem_lib.c",0x16a,"PEM_ASN1_write_bio");
            ERR_set_error(9,0x6f,0);
            uVar2 = 0;
            ctx = (EVP_CIPHER_CTX *)0x0;
            goto LAB_00540807;
          }
        }
        iVar1 = EVP_CIPHER_get_iv_length(enc);
        iVar1 = RAND_bytes(local_498,iVar1);
        if (iVar1 < 1) {
          uVar2 = 0;
          ctx = (EVP_CIPHER_CTX *)0x0;
          goto LAB_00540807;
        }
        md = EVP_md5();
        iVar1 = EVP_BytesToKey(enc,md,local_498,kstr,klen,1,local_488,(uchar *)0x0);
        if (iVar1 == 0) {
          ctx = (EVP_CIPHER_CTX *)0x0;
          uVar2 = 0;
          goto LAB_00540807;
        }
        if (kstr == local_448) {
          OPENSSL_cleanse(local_448,0x400);
        }
        local_448[0] = '\0';
        PEM_proc_type((char *)local_448,10);
        iVar1 = EVP_CIPHER_get_iv_length(enc);
        PEM_dek_info((char *)local_448,local_4d0,iVar1,(char *)local_498);
        ctx = EVP_CIPHER_CTX_new();
        uVar2 = 0;
        if (((ctx == (EVP_CIPHER_CTX *)0x0) ||
            (uVar2 = EVP_EncryptInit_ex(ctx,enc,(ENGINE *)0x0,local_488,local_498), uVar2 == 0)) ||
           ((uVar2 = EVP_EncryptUpdate(ctx,local_4d8,&local_4a4,local_4d8,local_4a8), uVar2 == 0 ||
            (uVar2 = EVP_EncryptFinal_ex(ctx,local_4d8 + local_4a4,&local_4a8), uVar2 == 0))))
        goto LAB_00540807;
        local_4a8 = local_4a4 + local_4a8;
      }
      local_4a8 = PEM_write_bio(bp,name,(char *)local_448,local_4d8,(long)local_4a8);
      uVar2 = (uint)(0 < local_4a8);
      goto LAB_00540807;
    }
    ERR_new();
    ERR_set_debug("../crypto/pem/pem_lib.c",0x155,"PEM_ASN1_write_bio");
    uVar4 = 0x8000d;
  }
  else {
    local_4d0 = (char *)EVP_CIPHER_get0_name(enc);
    if (((local_4d0 != (char *)0x0) && (iVar1 = EVP_CIPHER_get_iv_length(enc), iVar1 != 0)) &&
       (iVar1 = EVP_CIPHER_get_iv_length(enc), iVar1 < 0x11)) {
      sVar3 = strlen(local_4d0);
      iVar1 = EVP_CIPHER_get_iv_length(enc);
      if (sVar3 + 0x24 + (long)(iVar1 * 2) < 0x401) goto LAB_00540891;
    }
    ERR_new();
    ERR_set_debug("../crypto/pem/pem_lib.c",0x14f,"PEM_ASN1_write_bio");
    uVar4 = 0x71;
  }
  ctx = (EVP_CIPHER_CTX *)0x0;
  ERR_set_error(9,uVar4,0);
  local_4d8 = (uchar *)0x0;
  uVar2 = 0;
  local_4c8 = 0;
LAB_00540807:
  OPENSSL_cleanse(local_488,0x40);
  OPENSSL_cleanse(local_498,0x10);
  EVP_CIPHER_CTX_free(ctx);
  OPENSSL_cleanse(local_448,0x400);
  CRYPTO_clear_free(local_4d8,local_4c8,"../crypto/pem/pem_lib.c",0x19a);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

