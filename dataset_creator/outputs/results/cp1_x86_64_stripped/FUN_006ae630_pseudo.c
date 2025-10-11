
undefined1  [16]
FUN_006ae630(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7,undefined8 *param_8)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined8 local_38;
  long local_30;
  
  uVar1 = *(uint *)(param_6 + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(uint *)(param_6 + 0x18) = uVar1 & 0xffffffb5 | 8;
  auVar2 = FUN_006adb90();
  *(uint *)(param_6 + 0x18) = uVar1;
  *param_8 = local_38;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._8_8_ = param_3 & 0xffffffff00000000 | auVar2._8_8_ & 0xffffffff;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1,param_2,&local_38);
}

