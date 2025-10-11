
int X509_NAME_get_text_by_OBJ(X509_NAME *name,ASN1_OBJECT *obj,char *buf,int len)

{
  int iVar1;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar2;
  
  iVar1 = X509_NAME_get_index_by_OBJ(name,obj,-1);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ne = X509_NAME_get_entry(name,iVar1);
    pAVar2 = X509_NAME_ENTRY_get_data(ne);
    if (buf == (char *)0x0) {
      return pAVar2->length;
    }
    iVar1 = 0;
    if (0 < len) {
      iVar1 = pAVar2->length;
      if (len <= pAVar2->length) {
        iVar1 = len + -1;
      }
      memcpy(buf,pAVar2->data,(long)iVar1);
      buf[iVar1] = '\0';
    }
  }
  return iVar1;
}

