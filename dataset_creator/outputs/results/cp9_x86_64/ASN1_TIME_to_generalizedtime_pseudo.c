
ASN1_GENERALIZEDTIME * ASN1_TIME_to_generalizedtime(ASN1_TIME *t,ASN1_GENERALIZEDTIME **out)

{
  int iVar1;
  ASN1_GENERALIZEDTIME *pAVar2;
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_TIME_to_tm(t,auStack_58);
  if (iVar1 == 0) {
    pAVar2 = (ASN1_GENERALIZEDTIME *)0x0;
  }
  else if (out == (ASN1_GENERALIZEDTIME **)0x0) {
    pAVar2 = (ASN1_GENERALIZEDTIME *)ossl_asn1_time_from_tm(0,auStack_58,0x18);
  }
  else {
    pAVar2 = (ASN1_GENERALIZEDTIME *)ossl_asn1_time_from_tm(*out,auStack_58,0x18);
    if (pAVar2 != (ASN1_GENERALIZEDTIME *)0x0) {
      *out = pAVar2;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

