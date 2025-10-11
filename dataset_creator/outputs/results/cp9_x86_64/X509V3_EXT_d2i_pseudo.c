
void * X509V3_EXT_d2i(X509_EXTENSION *ext)

{
  int iVar1;
  X509V3_EXT_METHOD *pXVar2;
  ASN1_OCTET_STRING *x;
  ASN1_ITEM *it;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pXVar2 = X509V3_EXT_get(ext);
  if (pXVar2 != (X509V3_EXT_METHOD *)0x0) {
    x = X509_EXTENSION_get_data(ext);
    local_28 = (uchar *)ASN1_STRING_get0_data(x);
    iVar1 = ASN1_STRING_length(x);
    if (pXVar2->it == (ASN1_ITEM_EXP *)0x0) {
      pXVar2 = (X509V3_EXT_METHOD *)(*pXVar2->d2i)((void *)0x0,&local_28,(long)iVar1);
    }
    else {
      it = (ASN1_ITEM *)(*(code *)pXVar2->it)();
      pXVar2 = (X509V3_EXT_METHOD *)ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,(long)iVar1,it);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

