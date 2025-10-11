
undefined4 FUN_0040e520(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  uVar2 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined4 *)FUN_004a1430(&local_18,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  FUN_0051a270(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

