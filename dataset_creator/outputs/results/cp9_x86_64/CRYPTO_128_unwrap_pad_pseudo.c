
ulong CRYPTO_128_unwrap_pad
                (undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                ulong param_5,code *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *b;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (ulong)((uint)param_5 & 7);
  if ((param_5 & 7) != 0) {
    uVar3 = 0;
    goto LAB_00428ac7;
  }
  uVar3 = uVar4;
  if (0x7fffffef < param_5 - 0x10) goto LAB_00428ac7;
  if (param_5 == 0x10) {
    (*param_6)(param_4,&local_58,param_1);
    local_60 = local_58;
    *param_3 = local_50;
    OPENSSL_cleanse(&local_58,0x10);
    lVar2 = 8;
LAB_00428a6d:
    b = &default_aiv;
    if (param_2 != (undefined4 *)0x0) {
      b = param_2;
    }
    iVar1 = CRYPTO_memcmp(&local_60,b,4);
    if (iVar1 == 0) {
      uVar3 = (ulong)(local_60._4_4_ >> 0x18 | (local_60._4_4_ & 0xff0000) >> 8 |
                      (local_60._4_4_ & 0xff00) << 8 | local_60._4_4_ << 0x18);
      if ((((param_5 & 0xfffffffffffffff8) - 0x10 < uVar3) &&
          (uVar3 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
         (iVar1 = CRYPTO_memcmp((void *)((long)param_3 + uVar3),&zeros_0,lVar2 - uVar3), iVar1 == 0)
         ) goto LAB_00428ac7;
    }
  }
  else {
    lVar2 = crypto_128_unwrap_raw(param_1,&local_60);
    if (param_5 - 8 == lVar2) goto LAB_00428a6d;
  }
  OPENSSL_cleanse(param_3,param_5);
  uVar3 = uVar4;
LAB_00428ac7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

