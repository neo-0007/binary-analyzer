
int PEM_do_header(EVP_CIPHER_INFO *cipher,uchar *data,long *len,undefined1 *callback,void *u)

{
  int iVar1;
  EVP_MD *md;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  int local_48c;
  uchar local_488 [64];
  uchar local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48c = (int)*len;
  if (0x7fffffff < *len) {
    ERR_new();
    ERR_set_debug("../crypto/pem/pem_lib.c",0x1ac,"PEM_do_header");
    ERR_set_error(9,0x80,0);
    iVar1 = 0;
    goto LAB_0053feca;
  }
  if (cipher->cipher == (EVP_CIPHER *)0x0) {
    iVar1 = 1;
    goto LAB_0053feca;
  }
  if (callback == (undefined1 *)0x0) {
    iVar1 = PEM_def_callback((char *)local_448,0x400,0,u);
  }
  else {
    iVar1 = (*(code *)callback)();
  }
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/pem/pem_lib.c",0x1b8,"PEM_do_header");
    ERR_set_error(9,0x68,0);
    iVar1 = 0;
    goto LAB_0053feca;
  }
  md = EVP_md5();
  iVar1 = EVP_BytesToKey(cipher->cipher,md,cipher->iv,local_448,iVar1,1,local_488,(uchar *)0x0);
  if (iVar1 != 0) {
    ctx = EVP_CIPHER_CTX_new();
    if (ctx != (EVP_CIPHER_CTX *)0x0) {
      iVar1 = EVP_DecryptInit_ex(ctx,cipher->cipher,(ENGINE *)0x0,local_488,cipher->iv);
      if (iVar1 == 0) {
LAB_0053fe5a:
        ERR_new();
        ERR_set_debug("../crypto/pem/pem_lib.c",0x1d3,"PEM_do_header");
        ERR_set_error(9,0x65,0);
        iVar1 = 0;
      }
      else {
        iVar1 = EVP_DecryptUpdate(ctx,data,&local_48c,data,local_48c);
        if (iVar1 == 0) goto LAB_0053fe5a;
        *len = (long)local_48c;
        iVar1 = EVP_DecryptFinal_ex(ctx,data + local_48c,&local_48c);
        if (iVar1 == 0) goto LAB_0053fe5a;
        *len = *len + (long)local_48c;
      }
      EVP_CIPHER_CTX_free(ctx);
      OPENSSL_cleanse(local_448,0x400);
      OPENSSL_cleanse(local_488,0x40);
      goto LAB_0053feca;
    }
  }
  iVar1 = 0;
LAB_0053feca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

