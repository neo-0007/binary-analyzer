
ASN1_OCTET_STRING * ossl_x509_pubkey_hash(X509_PUBKEY *param_1)

{
  int iVar1;
  EVP_MD *type;
  ASN1_OCTET_STRING *str;
  long in_FS_OFFSET;
  int local_98;
  uint local_94;
  uchar *local_90;
  undefined8 local_88;
  undefined8 local_80;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (X509_PUBKEY *)0x0) {
    ERR_new();
    str = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("../crypto/x509/v3_skid.c",0x43,"ossl_x509_pubkey_hash");
    ERR_set_error(0x22,0x72,0);
    goto LAB_00610192;
  }
  iVar1 = ossl_x509_PUBKEY_get0_libctx(&local_80,&local_88,param_1);
  if (iVar1 != 0) {
    type = (EVP_MD *)EVP_MD_fetch(local_80,&DAT_007c6514,local_88);
    if (type != (EVP_MD *)0x0) {
      str = ASN1_OCTET_STRING_new();
      if (str == (ASN1_OCTET_STRING *)0x0) {
LAB_006101b0:
        EVP_MD_free(type);
        goto LAB_00610192;
      }
      X509_PUBKEY_get0_param((ASN1_OBJECT **)0x0,&local_90,&local_98,(X509_ALGOR **)0x0,param_1);
      iVar1 = EVP_Digest(local_90,(long)local_98,local_78,&local_94,type,(ENGINE *)0x0);
      if (iVar1 != 0) {
        iVar1 = ASN1_OCTET_STRING_set(str,local_78,local_94);
        if (iVar1 != 0) goto LAB_006101b0;
      }
      EVP_MD_free(type);
      ASN1_OCTET_STRING_free(str);
    }
  }
  str = (ASN1_OCTET_STRING *)0x0;
LAB_00610192:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

