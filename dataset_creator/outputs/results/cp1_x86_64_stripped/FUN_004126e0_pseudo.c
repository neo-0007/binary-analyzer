
undefined8 * FUN_004126e0(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 *local_130;
  undefined8 local_128 [33];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((DAT_0093f9f8 == 0) ||
      (local_128[0]._0_4_ = param_1, iVar1 = FUN_00435f40(DAT_0093f9f8,local_128), iVar1 < 0)) ||
     (puVar2 = (undefined8 *)FUN_004364a0(DAT_0093f9f8,iVar1), local_130 = puVar2,
     puVar2 == (undefined8 *)0x0)) {
    local_130 = local_128;
    local_128[0]._0_4_ = param_1;
    puVar2 = (undefined8 *)
             FUN_00423d90(&local_130,&switchD_00413c8f::switchdataD_0093b180,10,8,FUN_004125f0);
    if (puVar2 != (undefined8 *)0x0) {
      if ((code *)*puVar2 == (code *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)(*(code *)*puVar2)();
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar2;
}

