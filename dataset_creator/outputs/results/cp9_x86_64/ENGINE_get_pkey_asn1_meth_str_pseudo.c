
EVP_PKEY_ASN1_METHOD * ENGINE_get_pkey_asn1_meth_str(ENGINE *e,char *str,int len)

{
  code *pcVar1;
  char *__s;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_50;
  EVP_PKEY_ASN1_METHOD *local_48;
  long local_40;
  
  pcVar1 = *(code **)(e + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pcVar1 != (code *)0x0) {
    if (len == -1) {
      sVar4 = strlen(str);
      len = (int)sVar4;
    }
    iVar2 = (*pcVar1)(e,0,&local_50,0);
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        (**(code **)(e + 0x50))(e,&local_48,0,*(undefined4 *)(local_50 + lVar5));
        if (local_48 != (EVP_PKEY_ASN1_METHOD *)0x0) {
          __s = *(char **)(local_48 + 0x10);
          sVar4 = strlen(__s);
          if ((len == (int)sVar4) && (iVar3 = OPENSSL_strncasecmp(__s,str,(long)len), iVar3 == 0))
          goto LAB_0050e96a;
        }
        lVar5 = lVar5 + 4;
      } while ((long)iVar2 * 4 - lVar5 != 0);
    }
  }
  local_48 = (EVP_PKEY_ASN1_METHOD *)0x0;
LAB_0050e96a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_48;
}

