
undefined8 FUN_0053bdb0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  if (param_1 != (long *)0x0) {
    FUN_0041dba0(&local_a8,"size",&local_70);
    local_48._0_8_ = local_88;
    lVar2 = *param_1;
    local_68._8_8_ = uStack_a0;
    local_68._0_8_ = local_a8;
    local_58._8_8_ = uStack_90;
    local_58._0_8_ = local_98;
    if (*(code **)(lVar2 + 0x78) != (code *)0x0) {
      iVar1 = (**(code **)(lVar2 + 0x78))(param_1[1],local_68);
      uVar3 = local_70;
      if (iVar1 != 0) goto LAB_0053be67;
      lVar2 = *param_1;
    }
    if ((*(code **)(lVar2 + 0x70) != (code *)0x0) &&
       (iVar1 = (**(code **)(lVar2 + 0x70))(local_68), uVar3 = local_70, iVar1 != 0))
    goto LAB_0053be67;
  }
  uVar3 = 0;
LAB_0053be67:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

