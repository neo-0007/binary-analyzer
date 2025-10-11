
ASN1_TYPE * ASN1_generate_nconf(char *str,CONF *nconf)

{
  ASN1_TYPE *pAVar1;
  long in_FS_OFFSET;
  X509V3_CTX XStack_68;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (nconf == (CONF *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pAVar1 = ASN1_generate_v3(str,(X509V3_CTX *)0x0);
      return pAVar1;
    }
  }
  else {
    X509V3_set_nconf(&XStack_68,nconf);
    pAVar1 = ASN1_generate_v3(str,&XStack_68);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pAVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

