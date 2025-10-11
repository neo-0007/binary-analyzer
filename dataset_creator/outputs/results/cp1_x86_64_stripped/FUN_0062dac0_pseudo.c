
undefined8
FUN_0062dac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined2 *param_6,long param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xffffffff;
  local_30 = param_7;
  if (0xfffe < (uint)*(ulong *)(param_1 + 0x10)) {
    uVar2 = 0xffff;
  }
  local_38 = param_6;
  local_48 = param_3;
  local_40 = param_4;
  if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
    uVar1 = 1;
    if ((ulong)(param_7 - (long)param_6) < 3) goto LAB_0062db36;
    *(undefined1 *)(param_6 + 1) = 0xbf;
    local_38 = (undefined2 *)((long)param_6 + 3);
    *param_6 = 0xbbef;
  }
  uVar1 = FUN_0062cde0(&local_48,&local_38,uVar2,1);
LAB_0062db36:
  *param_5 = local_48;
  *param_8 = local_38;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

