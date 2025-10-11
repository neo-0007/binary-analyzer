
ASN1_GENERALIZEDTIME *
ASN1_GENERALIZEDTIME_adj(ASN1_GENERALIZEDTIME *s,time_t t,int offset_day,long offset_sec)

{
  int iVar1;
  long lVar2;
  ASN1_GENERALIZEDTIME *pAVar3;
  long in_FS_OFFSET;
  time_t local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = t;
  lVar2 = OPENSSL_gmtime(&local_70,local_68);
  if (lVar2 == 0) {
LAB_005a1962:
    pAVar3 = (ASN1_GENERALIZEDTIME *)0x0;
  }
  else {
    if ((offset_day != 0) || (offset_sec != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,offset_day,offset_sec);
      if (iVar1 == 0) goto LAB_005a1962;
    }
    pAVar3 = (ASN1_GENERALIZEDTIME *)ossl_asn1_time_from_tm(s,lVar2,0x18);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

