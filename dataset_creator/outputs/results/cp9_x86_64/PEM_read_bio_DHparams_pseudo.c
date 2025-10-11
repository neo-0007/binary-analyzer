
DH * PEM_read_bio_DHparams(BIO *bp,DH **x,undefined1 *cb,void *u)

{
  int iVar1;
  DH *pDVar2;
  long in_FS_OFFSET;
  char *local_40;
  uchar *local_38;
  uchar *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (char *)0x0;
  local_38 = (uchar *)0x0;
  local_30 = (uchar *)0x0;
  iVar1 = PEM_bytes_read_bio(&local_30,&local_28,&local_40,"DH PARAMETERS",bp,cb,u);
  if (iVar1 == 0) {
    pDVar2 = (DH *)0x0;
  }
  else {
    local_38 = local_30;
    iVar1 = strcmp(local_40,"X9.42 DH PARAMETERS");
    if (iVar1 == 0) {
      pDVar2 = (DH *)d2i_DHxparams();
    }
    else {
      pDVar2 = d2i_DHparams(x,&local_38,local_28);
    }
    if (pDVar2 == (DH *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pem_all.c",0xca,"PEM_read_bio_DHparams");
      ERR_set_error(9,0x8000d,0);
    }
    CRYPTO_free(local_40);
    CRYPTO_free(local_30);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pDVar2;
}

