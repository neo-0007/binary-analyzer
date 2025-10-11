
undefined8 FUN_0060f1c0(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int *local_80;
  int local_78 [26];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = local_78;
  if (-1 < param_1) {
    local_78[0] = param_1;
    puVar2 = (undefined8 *)FUN_00423d90(&local_80,&PTR_DAT_0093cf60,0x31,8,FUN_0060f0f0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *puVar2;
      goto LAB_0060f215;
    }
    if (DAT_00942850 != 0) {
      uVar1 = FUN_00435f40(DAT_00942850,local_78);
      uVar3 = FUN_004364a0(DAT_00942850,uVar1);
      goto LAB_0060f215;
    }
  }
  uVar3 = 0;
LAB_0060f215:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

