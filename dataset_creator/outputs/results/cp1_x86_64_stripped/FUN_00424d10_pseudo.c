
undefined8 FUN_00424d10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 *local_28;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  ppuVar2 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = local_1c;
  local_18 = param_2;
  local_14 = param_3;
  if (DAT_0093fd38 == 0) {
LAB_00424d58:
    ppuVar2 = (undefined1 **)FUN_00423d90(&local_28,&PTR_DAT_008ea5e0,0x2c,8,FUN_00424bf0);
    uVar3 = 0;
    if (ppuVar2 == (undefined1 **)0x0) goto LAB_00424d92;
  }
  else {
    iVar1 = FUN_00435f40();
    if (iVar1 < 0) goto LAB_00424d58;
    local_28 = (undefined1 *)FUN_004364a0(DAT_0093fd38,iVar1);
  }
  uVar3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
LAB_00424d92:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

