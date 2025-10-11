
void FUN_005a3ab0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    FUN_007607a0(&local_28);
  }
  else {
    local_28 = *param_4;
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_005b85e0(param_1,local_28,param_2,param_3);
      goto LAB_005a3afb;
    }
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_005b4580(param_1,local_28,param_2,param_3);
      goto LAB_005a3afb;
    }
  }
  FUN_005b7b90(param_1,local_28,param_2,param_3);
LAB_005a3afb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

