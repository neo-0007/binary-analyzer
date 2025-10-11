
undefined8 * FUN_004a1310(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined4 *local_160;
  undefined4 local_158 [82];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = local_158;
  local_158[0] = param_1;
  if (DAT_00940fa8 != 0) {
    iVar1 = FUN_00435f40();
    if (-1 < iVar1) {
      puVar2 = (undefined8 *)FUN_004364a0(DAT_00940fa8,iVar1);
      goto LAB_004a1377;
    }
  }
  puVar2 = (undefined8 *)FUN_00423d90(&local_160,&PTR_DAT_0093bca0,0x10,8,FUN_004a1300);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar2;
  }
LAB_004a1377:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

