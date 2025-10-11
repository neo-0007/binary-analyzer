
ulong FUN_00552fe0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  ulong param_5,code *param_6)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_78;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  uVar1 = param_5 - 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 & 7) == 0) {
    uVar5 = (ulong)((uint)param_5 & 7);
    if (param_5 - 0x18 < 0x7ffffff1) {
      local_58 = *param_4;
      thunk_FUN_00713610(param_3,param_4 + 1,uVar1);
      local_78 = 6;
      uVar5 = (uVar1 >> 3) * 6;
      do {
        uVar7 = uVar5;
        if (uVar1 != 0) {
          uVar6 = uVar5 - (param_5 - 9 >> 3);
          uVar7 = uVar6 - 1;
          lVar2 = param_3 + (param_5 - 0x10) + uVar5 * -8;
          do {
            uVar4 = local_58;
            bVar3 = local_58._7_1_ ^ (byte)uVar5;
            local_58 = CONCAT17(bVar3,(undefined7)local_58);
            if (0xff < uVar5) {
              local_58._6_1_ = SUB81(uVar4,6);
              local_58._5_1_ = SUB81(uVar4,5);
              local_58._4_1_ = SUB81(uVar4,4);
              local_58._4_1_ = local_58._4_1_ ^ (byte)(uVar5 >> 0x18);
              local_58._0_4_ = (undefined4)uVar4;
              local_58 = CONCAT35(CONCAT21(CONCAT11(bVar3,local_58._6_1_ ^ (byte)(uVar5 >> 8)),
                                           local_58._5_1_ ^ (byte)(uVar5 >> 0x10)),
                                  CONCAT14(local_58._4_1_,(undefined4)local_58));
            }
            local_50 = *(undefined8 *)(lVar2 + uVar5 * 8);
            (*param_6)(&local_58,&local_58,param_1);
            *(undefined8 *)(lVar2 + uVar5 * 8) = local_50;
            bVar8 = uVar5 != uVar6;
            uVar5 = uVar5 - 1;
          } while (bVar8);
        }
        local_78 = local_78 + -1;
        uVar5 = uVar7;
      } while (local_78 != 0);
      *param_2 = local_58;
      uVar5 = uVar1;
    }
  }
  else {
    uVar5 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

