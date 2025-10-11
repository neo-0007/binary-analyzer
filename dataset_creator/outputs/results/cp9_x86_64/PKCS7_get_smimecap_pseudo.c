
stack_st_X509_ALGOR * PKCS7_get_smimecap(PKCS7_SIGNER_INFO *si)

{
  ASN1_TYPE *pAVar1;
  ASN1_ITEM *it;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pAVar1 = PKCS7_get_signed_attribute(si,0xa7);
  if (pAVar1 != (ASN1_TYPE *)0x0) {
    if (pAVar1->type == 0x10) {
      local_18 = ((pAVar1->value).asn1_string)->data;
      it = (ASN1_ITEM *)X509_ALGORS_it();
      pAVar1 = (ASN1_TYPE *)
               ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,
                             (long)((pAVar1->value).asn1_string)->length,it);
    }
    else {
      pAVar1 = (ASN1_TYPE *)0x0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (stack_st_X509_ALGOR *)pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

