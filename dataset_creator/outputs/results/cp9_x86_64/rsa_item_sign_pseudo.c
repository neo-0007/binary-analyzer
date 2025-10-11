
undefined8 rsa_item_sign(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ASN1_STRING *a;
  ASN1_STRING *pval;
  ASN1_OBJECT *pAVar4;
  X509_ALGOR *in_RCX;
  X509_ALGOR *in_R8;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_MD_CTX_get_pkey_ctx();
  iVar1 = EVP_PKEY_CTX_get_rsa_padding(uVar2,&local_34);
  if (0 < iVar1) {
    uVar3 = 2;
    if (local_34 != 6) goto LAB_0055359c;
    a = (ASN1_STRING *)ossl_rsa_ctx_to_pss_string(uVar2);
    if (a != (ASN1_STRING *)0x0) {
      if (in_R8 != (X509_ALGOR *)0x0) {
        pval = ASN1_STRING_dup(a);
        if (pval == (ASN1_STRING *)0x0) {
          ASN1_STRING_free(a);
          goto LAB_005535d0;
        }
        pAVar4 = OBJ_nid2obj(0x390);
        X509_ALGOR_set0(in_R8,pAVar4,0x10,pval);
      }
      pAVar4 = OBJ_nid2obj(0x390);
      X509_ALGOR_set0(in_RCX,pAVar4,0x10,a);
      uVar3 = 3;
      goto LAB_0055359c;
    }
  }
LAB_005535d0:
  uVar3 = 0;
LAB_0055359c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

