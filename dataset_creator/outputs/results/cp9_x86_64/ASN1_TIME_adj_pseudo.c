
ASN1_TIME * ASN1_TIME_adj(ASN1_TIME *s,time_t t,int offset_day,long offset_sec)

{
  int iVar1;
  long lVar2;
  ASN1_TIME *pAVar3;
  long in_FS_OFFSET;
  time_t local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = t;
  lVar2 = OPENSSL_gmtime(&local_70,local_68);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_time.c",0x14c,"ASN1_TIME_adj");
    ERR_set_error(0xd,0xad,0);
    pAVar3 = (ASN1_TIME *)0x0;
  }
  else {
    if ((offset_day != 0) || (offset_sec != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,offset_day,offset_sec);
      if (iVar1 == 0) {
        pAVar3 = (ASN1_TIME *)0x0;
        goto LAB_005a4acf;
      }
    }
    pAVar3 = (ASN1_TIME *)ossl_asn1_time_from_tm(s,lVar2,0xffffffff);
  }
LAB_005a4acf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

