
undefined8 FUN_00427ac0(undefined4 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (undefined4 *)0x0) && (param_3 != 0)) {
    local_14 = FUN_00428100(param_2,param_3,0);
    if (local_14 != 0) {
      uVar1 = FUN_00546310(&local_14,param_1 + 2,*param_1,0x18,&LAB_00427ab0,0);
      goto LAB_00427b22;
    }
  }
  uVar1 = 0;
LAB_00427b22:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

