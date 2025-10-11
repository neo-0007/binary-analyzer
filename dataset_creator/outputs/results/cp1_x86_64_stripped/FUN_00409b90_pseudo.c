
undefined8 * FUN_00409b90(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_1 + 3;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  FUN_0041e440(local_a8,"iv",&local_70,0x10);
  local_48._0_8_ = local_88;
  iVar1 = FUN_0040b850(*param_1,param_1[0x15],local_68);
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = local_70;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

