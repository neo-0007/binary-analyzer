
ASN1_TIME * X509_time_adj_ex(ASN1_TIME *s,int offset_day,long offset_sec,time_t *t)

{
  ASN1_TIME *pAVar1;
  long in_FS_OFFSET;
  time_t local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (t == (time_t *)0x0) {
    time(&local_28);
  }
  else {
    local_28 = *t;
  }
  if ((s != (ASN1_TIME *)0x0) && ((s->flags & 0x40) == 0)) {
    if (s->type == 0x17) {
      pAVar1 = ASN1_UTCTIME_adj(s,local_28,offset_day,offset_sec);
      goto LAB_005909fb;
    }
    if (s->type == 0x18) {
      pAVar1 = ASN1_GENERALIZEDTIME_adj(s,local_28,offset_day,offset_sec);
      goto LAB_005909fb;
    }
  }
  pAVar1 = ASN1_TIME_adj(s,local_28,offset_day,offset_sec);
LAB_005909fb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

