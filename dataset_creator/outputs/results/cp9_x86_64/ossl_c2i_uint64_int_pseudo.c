
undefined8 ossl_c2i_uint64_int(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  byte local_48 [8];
  long local_40;
  
  uVar5 = 0;
  pbVar4 = local_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = c2i_ibuf(0,0,*param_3);
  if (uVar2 != 0) {
    if (uVar2 < 9) {
      c2i_ibuf(local_48,param_2,*param_3);
      uVar3 = 0;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar3 = uVar3 << 8 | (ulong)bVar1;
      } while (pbVar4 != local_48 + uVar2);
      *param_1 = uVar3;
      uVar5 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_int.c",0x274,"ossl_c2i_uint64_int");
      ERR_set_error(0xd,0xdf,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

