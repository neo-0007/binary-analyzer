
ulong crypto_128_unwrap_raw
                (undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                ulong param_5,code *param_6)

{
  ulong __n;
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_78;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  __n = param_5 - 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 & 7) == 0) {
    uVar4 = (ulong)((uint)param_5 & 7);
    if (param_5 - 0x18 < 0x7ffffff1) {
      local_58 = *param_4;
      memmove(param_3,param_4 + 1,__n);
      local_78 = 6;
      uVar4 = (__n >> 3) * 6;
      do {
        uVar6 = uVar4;
        if (__n != 0) {
          uVar5 = uVar4 - (param_5 - 9 >> 3);
          uVar6 = uVar5 - 1;
          lVar1 = (param_5 - 0x10) + uVar4 * -8;
          do {
            uVar3 = local_58;
            bVar2 = local_58._7_1_ ^ (byte)uVar4;
            local_58 = CONCAT17(bVar2,(undefined7)local_58);
            if (0xff < uVar4) {
              local_58._6_1_ = SUB81(uVar3,6);
              local_58._5_1_ = SUB81(uVar3,5);
              local_58._4_1_ = SUB81(uVar3,4);
              local_58._4_1_ = local_58._4_1_ ^ (byte)(uVar4 >> 0x18);
              local_58._0_4_ = (undefined4)uVar3;
              local_58 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_58._6_1_ ^ (byte)(uVar4 >> 8)),
                                           local_58._5_1_ ^ (byte)(uVar4 >> 0x10)),
                                  CONCAT14(local_58._4_1_,(undefined4)local_58));
            }
            local_50 = *(undefined8 *)((long)param_3 + uVar4 * 8 + lVar1);
            (*param_6)(&local_58,&local_58,param_1);
            *(undefined8 *)((long)param_3 + uVar4 * 8 + lVar1) = local_50;
            bVar7 = uVar4 != uVar5;
            uVar4 = uVar4 - 1;
          } while (bVar7);
        }
        local_78 = local_78 + -1;
        uVar4 = uVar6;
      } while (local_78 != 0);
      *param_2 = local_58;
      uVar4 = __n;
    }
  }
  else {
    uVar4 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

