
int X509_REQ_add_extensions_nid(X509_REQ *req,stack_st_X509_EXTENSION *exts,int nid)

{
  int len;
  int iVar1;
  ASN1_ITEM *it;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  iVar1 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  it = (ASN1_ITEM *)X509_EXTENSIONS_it();
  len = ASN1_item_i2d((ASN1_VALUE *)exts,&local_38,it);
  if (0 < len) {
    iVar1 = X509_REQ_add1_attr_by_NID(req,nid,0x10,local_38,len);
    CRYPTO_free(local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

