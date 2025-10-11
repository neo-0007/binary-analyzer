
undefined8 FUN_00613b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  iVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  do {
    iVar1 = FUN_00436480(param_3);
    uVar3 = local_28;
    if (iVar1 <= iVar4) {
LAB_00613bf6:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar3;
    }
    lVar2 = FUN_004364a0(param_3,iVar4);
    iVar1 = FUN_00613b20(&local_28,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),
                         0xffffffff);
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_00613bf6;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

