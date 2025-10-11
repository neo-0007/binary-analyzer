
ulong FUN_0062e8d0(long param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  ulong uVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_7;
  local_48 = param_3;
  local_40 = param_4;
  local_38 = param_6;
  uVar1 = FUN_0062e780(&local_48,&local_38,*(undefined8 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x18));
  *param_5 = local_48;
  *param_8 = local_38;
  if ((int)uVar1 == 0) {
    uVar1 = (ulong)((uint)(local_48 != param_4) * 2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

