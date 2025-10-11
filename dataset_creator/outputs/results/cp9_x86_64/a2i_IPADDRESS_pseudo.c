
ASN1_OCTET_STRING * a2i_IPADDRESS(char *ipasc)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_a2i_ipadd(auStack_38,ipasc);
  if (iVar1 != 0) {
    str = ASN1_OCTET_STRING_new();
    if (str != (ASN1_OCTET_STRING *)0x0) {
      iVar1 = ASN1_OCTET_STRING_set(str,auStack_38,iVar1);
      if (iVar1 != 0) goto LAB_0058a611;
      ASN1_OCTET_STRING_free(str);
    }
  }
  str = (ASN1_OCTET_STRING *)0x0;
LAB_0058a611:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

