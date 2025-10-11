
ulong ASN1_TIME_normalize(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ASN1_TIME_to_tm(param_1,auStack_58);
  if ((int)uVar1 != 0) {
    lVar2 = ossl_asn1_time_from_tm(param_1,auStack_58,0xffffffff);
    uVar1 = (ulong)(lVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

