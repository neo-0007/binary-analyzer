
bool ossl_x509_algor_md_to_mgf1(long *param_1,long param_2)

{
  ASN1_OCTET_STRING *pval;
  int iVar1;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar2;
  X509_ALGOR *pXVar3;
  ASN1_OBJECT *aobj;
  long in_FS_OFFSET;
  bool bVar4;
  X509_ALGOR *local_30;
  ASN1_OCTET_STRING *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  local_30 = (X509_ALGOR *)0x0;
  local_28 = (ASN1_STRING *)0x0;
  if ((param_2 == 0) || (iVar1 = EVP_MD_is_a(param_2,&DAT_007c6514), iVar1 != 0)) {
    bVar4 = true;
  }
  else {
    iVar1 = ossl_x509_algor_new_from_md(&local_30,param_2);
    if (iVar1 != 0) {
      it = (ASN1_ITEM *)X509_ALGOR_it();
      pAVar2 = ASN1_item_pack(local_30,it,&local_28);
      if (pAVar2 != (ASN1_STRING *)0x0) {
        pXVar3 = X509_ALGOR_new();
        pval = local_28;
        *param_1 = (long)pXVar3;
        if (pXVar3 != (X509_ALGOR *)0x0) {
          aobj = OBJ_nid2obj(0x38f);
          X509_ALGOR_set0((X509_ALGOR *)*param_1,aobj,0x10,pval);
          local_28 = (ASN1_STRING *)0x0;
        }
      }
    }
    ASN1_STRING_free(local_28);
    X509_ALGOR_free(local_30);
    bVar4 = *param_1 != 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar4;
}

