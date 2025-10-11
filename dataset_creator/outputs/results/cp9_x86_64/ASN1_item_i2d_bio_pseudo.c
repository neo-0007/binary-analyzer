
int ASN1_item_i2d_bio(ASN1_ITEM *it,BIO *out,void *x)

{
  int len;
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  iVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (uchar *)0x0;
  len = ASN1_item_i2d((ASN1_VALUE *)x,&local_28,it);
  if (local_28 == (uchar *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_i2d_fp.c",0x5e,"ASN1_item_i2d_bio");
    ERR_set_error(0xd,0xc0100,0);
  }
  else {
    while( true ) {
      iVar1 = BIO_write(out,local_28 + iVar2,len);
      if (len == iVar1) break;
      if (iVar1 < 1) {
        iVar2 = 0;
        goto LAB_005a1bfe;
      }
      iVar2 = iVar2 + iVar1;
      len = len - iVar1;
    }
    iVar2 = 1;
LAB_005a1bfe:
    CRYPTO_free(local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

