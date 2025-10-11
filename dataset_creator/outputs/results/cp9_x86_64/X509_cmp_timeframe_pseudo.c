
int X509_cmp_timeframe(X509_VERIFY_PARAM *param_1,ASN1_TIME *param_2,ASN1_TIME *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  time_t *t;
  long in_FS_OFFSET;
  time_t local_28;
  long local_20;
  
  t = &local_28;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (X509_VERIFY_PARAM *)0x0) {
LAB_00591d90:
    t = (time_t *)0x0;
LAB_00591d27:
    if (param_3 != (ASN1_TIME *)0x0) {
      iVar1 = X509_cmp_time(param_3,t);
      iVar2 = 1;
      if (iVar1 < 0) goto LAB_00591d5e;
    }
    if (param_2 != (ASN1_TIME *)0x0) {
      iVar1 = X509_cmp_time(param_2,t);
      iVar2 = -(uint)(0 < iVar1);
      goto LAB_00591d5e;
    }
  }
  else {
    uVar3 = X509_VERIFY_PARAM_get_flags(param_1);
    if ((uVar3 & 2) != 0) {
      local_28 = X509_VERIFY_PARAM_get_time(param_1);
      goto LAB_00591d27;
    }
    if ((uVar3 & 0x200000) == 0) goto LAB_00591d90;
  }
  iVar2 = 0;
LAB_00591d5e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

