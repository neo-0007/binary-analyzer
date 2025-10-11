
PKCS7_SIGNER_INFO * PKCS7_add_signature(PKCS7 *p7,X509 *x509,EVP_PKEY *pkey,EVP_MD *dgst)

{
  int iVar1;
  PKCS7_SIGNER_INFO *p7i;
  char *name;
  PKCS7_SIGNER_INFO *pPVar2;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (dgst == (EVP_MD *)0x0) {
    iVar1 = EVP_PKEY_get_default_digest_nid(pkey,&local_34);
    if (0 < iVar1) {
      name = OBJ_nid2sn(local_34);
      dgst = EVP_get_digestbyname(name);
      if (dgst != (EVP_MD *)0x0) goto LAB_0054b422;
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x18e,"PKCS7_add_signature");
      ERR_set_error(0x21,0x97,0);
    }
    p7i = (PKCS7_SIGNER_INFO *)0x0;
  }
  else {
LAB_0054b422:
    p7i = PKCS7_SIGNER_INFO_new();
    if (p7i != (PKCS7_SIGNER_INFO *)0x0) {
      iVar1 = PKCS7_SIGNER_INFO_set(p7i,x509,pkey,dgst);
      if (iVar1 != 0) {
        iVar1 = PKCS7_add_signer(p7,p7i);
        pPVar2 = p7i;
        if (iVar1 != 0) goto LAB_0054b45f;
      }
    }
  }
  pPVar2 = (PKCS7_SIGNER_INFO *)0x0;
  PKCS7_SIGNER_INFO_free(p7i);
LAB_0054b45f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

