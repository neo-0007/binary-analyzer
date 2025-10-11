
int i2a_ASN1_OBJECT(BIO *bp,ASN1_OBJECT *a)

{
  int iVar1;
  int iVar2;
  char *buf;
  long in_FS_OFFSET;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((a == (ASN1_OBJECT *)0x0) || (a->data == (uchar *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar1 = BIO_write(bp,"NULL",4);
      return iVar1;
    }
  }
  else {
    iVar1 = i2t_ASN1_OBJECT(local_98,0x50,a);
    if (iVar1 < 0x50) {
      if (iVar1 < 1) {
        iVar1 = BIO_write(bp,"<INVALID>",9);
        iVar2 = BIO_dump(bp,(char *)a->data,a->length);
        iVar1 = iVar1 + iVar2;
      }
      else {
        BIO_write(bp,local_98,iVar1);
      }
    }
    else if (iVar1 == 0x7fffffff) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_object.c",0xc4,"i2a_ASN1_OBJECT");
      iVar1 = -1;
      ERR_set_error(0xd,0xe7,0);
    }
    else {
      buf = (char *)CRYPTO_malloc(iVar1 + 1,"../crypto/asn1/a_object.c",199);
      if (buf == (char *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_object.c",200,"i2a_ASN1_OBJECT");
        iVar1 = -1;
        ERR_set_error(0xd,0xc0100,0);
      }
      else {
        i2t_ASN1_OBJECT(buf,iVar1 + 1,a);
        BIO_write(bp,buf,iVar1);
        if (buf != local_98) {
          CRYPTO_free(buf);
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

