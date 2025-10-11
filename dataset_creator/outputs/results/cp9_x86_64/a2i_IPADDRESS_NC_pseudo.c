
ASN1_OCTET_STRING * a2i_IPADDRESS_NC(char *ipasc)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *ptr;
  ASN1_OCTET_STRING *str;
  long in_FS_OFFSET;
  undefined1 auStack_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = strchr(ipasc,0x2f);
  if ((pcVar3 != (char *)0x0) &&
     (ptr = CRYPTO_strdup(ipasc,"../crypto/x509/v3_utl.c",0x466), ptr != (char *)0x0)) {
    ptr[(long)pcVar3 - (long)ipasc] = '\0';
    iVar1 = ossl_a2i_ipadd(auStack_68,ptr);
    if (iVar1 == 0) {
      str = (ASN1_STRING *)0x0;
    }
    else {
      iVar2 = ossl_a2i_ipadd(auStack_68 + iVar1,ptr + ((long)pcVar3 - (long)ipasc) + 1);
      CRYPTO_free(ptr);
      if (((iVar2 == 0) || (iVar1 != iVar2)) ||
         (str = ASN1_OCTET_STRING_new(), str == (ASN1_OCTET_STRING *)0x0)) {
        ptr = (char *)0x0;
        str = (ASN1_STRING *)0x0;
      }
      else {
        ptr = (char *)0x0;
        iVar1 = ASN1_OCTET_STRING_set(str,auStack_68,iVar1 + iVar2);
        if (iVar1 != 0) goto LAB_0058a740;
      }
    }
    CRYPTO_free(ptr);
    ASN1_OCTET_STRING_free(str);
  }
  str = (ASN1_OCTET_STRING *)0x0;
LAB_0058a740:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return str;
}

