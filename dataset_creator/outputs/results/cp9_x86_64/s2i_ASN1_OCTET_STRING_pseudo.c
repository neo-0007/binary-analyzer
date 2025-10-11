
ASN1_OCTET_STRING * s2i_ASN1_OCTET_STRING(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,char *str)

{
  ASN1_OCTET_STRING *a;
  uchar *puVar1;
  long in_FS_OFFSET;
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  a = ASN1_OCTET_STRING_new();
  if (a == (ASN1_OCTET_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_skid.c",0x28,"s2i_ASN1_OCTET_STRING");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    puVar1 = (uchar *)OPENSSL_hexstr2buf(str,local_28);
    a->data = puVar1;
    if (puVar1 == (uchar *)0x0) {
      ASN1_OCTET_STRING_free(a);
      a = (ASN1_OCTET_STRING *)0x0;
    }
    else {
      a->length = local_28[0];
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

