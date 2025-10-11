
EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_find_str(ENGINE **pe,char *str,int len)

{
  char *__s;
  int iVar1;
  int iVar2;
  size_t sVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  long in_FS_OFFSET;
  ENGINE *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (len == -1) {
    sVar3 = strlen(str);
    len = (int)sVar3;
  }
  if (pe != (ENGINE **)0x0) {
    pEVar4 = ENGINE_pkey_asn1_find_str(&local_48,str,len);
    if (pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) {
      iVar1 = ENGINE_init(local_48);
      if (iVar1 == 0) {
        pEVar4 = (EVP_PKEY_ASN1_METHOD *)0x0;
      }
      ENGINE_free(local_48);
      *pe = local_48;
      goto LAB_0049e9b0;
    }
    *pe = (ENGINE *)0x0;
  }
  iVar1 = EVP_PKEY_asn1_get_count();
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
      pEVar4 = EVP_PKEY_asn1_get0(iVar1);
      if (((byte)pEVar4[8] & 1) == 0) {
        __s = *(char **)(pEVar4 + 0x10);
        sVar3 = strlen(__s);
        if ((len == (int)sVar3) && (iVar2 = OPENSSL_strncasecmp(__s,str,(long)len), iVar2 == 0))
        goto LAB_0049e9b0;
      }
    } while (iVar1 != 0);
  }
  pEVar4 = (EVP_PKEY_ASN1_METHOD *)0x0;
LAB_0049e9b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pEVar4;
}

