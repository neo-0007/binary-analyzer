
ASN1_STRING * ossl_rsa_ctx_to_pss_string(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *pEVar4;
  RSA_PSS_PARAMS *a;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar5;
  long in_FS_OFFSET;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar4 = EVP_PKEY_CTX_get0_pkey(param_1);
  iVar1 = EVP_PKEY_CTX_get_signature_md(param_1,&local_30);
  if (((0 < iVar1) && (iVar1 = EVP_PKEY_CTX_get_rsa_mgf1_md(param_1,&local_28), 0 < iVar1)) &&
     (iVar1 = EVP_PKEY_CTX_get_rsa_pss_saltlen(param_1,&local_34), iVar1 != 0)) {
    if (local_34 == -1) {
      local_34 = EVP_MD_get_size(local_30);
    }
    else if (local_34 + 3U < 2) {
      iVar1 = EVP_PKEY_get_size(pEVar4);
      iVar2 = EVP_MD_get_size(local_30);
      local_34 = (iVar1 - iVar2) + -2;
      uVar3 = EVP_PKEY_get_bits(pEVar4);
      if ((uVar3 & 7) == 1) {
        local_34 = local_34 + -1;
      }
      if (local_34 < 0) goto LAB_005534f8;
    }
    a = (RSA_PSS_PARAMS *)ossl_rsa_pss_params_create(local_30,local_28,local_34);
    if (a != (RSA_PSS_PARAMS *)0x0) {
      it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
      pAVar5 = ASN1_item_pack(a,it,(ASN1_OCTET_STRING **)0x0);
      RSA_PSS_PARAMS_free(a);
      goto LAB_005534fb;
    }
  }
LAB_005534f8:
  pAVar5 = (ASN1_STRING *)0x0;
LAB_005534fb:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pAVar5;
}

