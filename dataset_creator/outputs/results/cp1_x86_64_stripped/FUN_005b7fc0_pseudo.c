
undefined8 FUN_005b7fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [64];
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_005b7e90(param_3,auStack_a8);
  if (iVar1 != 0) {
    iVar1 = FUN_005b7e90(param_4,local_68);
    if (iVar1 != 0) {
      uVar2 = FUN_00602c70(param_1,param_2,auStack_a8,local_68);
      goto LAB_005b7ffe;
    }
  }
  uVar2 = 0;
LAB_005b7ffe:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

