
stack_st_X509_EXTENSION * X509_REQ_get_extensions(X509_REQ *req)

{
  int *piVar1;
  int iVar2;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar3;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar4;
  stack_st_X509_EXTENSION *psVar5;
  undefined *puVar6;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((req == (X509_REQ *)0x0) || (ext_nids == (undefined *)0x0)) {
LAB_0058e658:
    pAVar4 = (ASN1_VALUE *)0x0;
LAB_0058e65a:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (stack_st_X509_EXTENSION *)pAVar4;
    }
  }
  else {
    iVar2 = *(int *)ext_nids;
    puVar6 = ext_nids;
    while (iVar2 != 0) {
      iVar2 = X509_REQ_get_attr_by_NID(req,iVar2,-1);
      if (iVar2 != -1) {
        attr = X509_REQ_get_attr(req,iVar2);
        pAVar3 = X509_ATTRIBUTE_get0_type(attr,0);
        if (pAVar3 != (ASN1_TYPE *)0x0) {
          if (pAVar3->type != 0x10) goto LAB_0058e658;
          local_28 = ((pAVar3->value).asn1_string)->data;
          it = (ASN1_ITEM *)X509_EXTENSIONS_it();
          pAVar4 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,
                                 (long)((pAVar3->value).asn1_string)->length,it);
          goto LAB_0058e65a;
        }
        break;
      }
      piVar1 = (int *)(puVar6 + 4);
      puVar6 = puVar6 + 4;
      iVar2 = *piVar1;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      psVar5 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null();
      return psVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

