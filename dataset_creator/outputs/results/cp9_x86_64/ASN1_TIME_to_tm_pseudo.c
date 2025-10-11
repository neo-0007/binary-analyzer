
ulong ASN1_TIME_to_tm(long param_1,undefined1 (*param_2) [16])

{
  ulong uVar1;
  long lVar2;
  long in_FS_OFFSET;
  time_t tStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    time(&tStack_28);
    *(undefined8 *)param_2[3] = 0;
    *param_2 = (undefined1  [16])0x0;
    param_2[1] = (undefined1  [16])0x0;
    param_2[2] = (undefined1  [16])0x0;
    lVar2 = OPENSSL_gmtime(&tStack_28,param_2);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(lVar2 != 0);
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar1 = ossl_asn1_time_to_tm(param_2,param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

