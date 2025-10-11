
ulong FUN_00553190(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (ulong)((uint)param_5 & 7);
  if ((param_5 & 7) == 0) {
    if (param_5 - 0x10 < 0x7ffffff1) {
      thunk_FUN_00713610(param_3 + 1,param_4,param_5);
      local_58 = 0xa6a6a6a6a6a6a6a6;
      if (param_2 != (undefined8 *)0x0) {
        local_58 = *param_2;
      }
      local_70 = 6;
      uVar3 = 1;
      do {
        uVar4 = uVar3 + (param_5 - 1 >> 3) + 1;
        uVar5 = uVar3;
        do {
          local_50 = param_3[(uVar5 + 1) - uVar3];
          (*param_6)(&local_58,&local_58,param_1);
          uVar2 = local_58;
          bVar1 = local_58._7_1_ ^ (byte)uVar5;
          local_58 = CONCAT17(bVar1,(undefined7)local_58);
          if (0xff < uVar5) {
            local_58._6_1_ = SUB81(uVar2,6);
            local_58._5_1_ = SUB81(uVar2,5);
            local_58._4_1_ = SUB81(uVar2,4);
            local_58._4_1_ = local_58._4_1_ ^ (byte)(uVar5 >> 0x18);
            local_58._0_4_ = (undefined4)uVar2;
            local_58 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_58._6_1_ ^ (byte)(uVar5 >> 8)),
                                         local_58._5_1_ ^ (byte)(uVar5 >> 0x10)),
                                CONCAT14(local_58._4_1_,(undefined4)local_58));
          }
          param_3[(uVar5 + 1) - uVar3] = local_50;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
        local_70 = local_70 + -1;
        uVar3 = uVar4;
      } while (local_70 != 0);
      *param_3 = local_58;
      uVar3 = param_5 + 8;
    }
  }
  else {
    uVar3 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

