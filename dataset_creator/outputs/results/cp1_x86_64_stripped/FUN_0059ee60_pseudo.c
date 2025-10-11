
undefined8 FUN_0059ee60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 auStack_1b8 [8];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_188;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    local_1b0 = *param_3;
    uStack_1a8 = param_3[1];
    local_1a0 = param_3[2];
    iVar3 = 0;
    local_188 = param_2;
    while( true ) {
      iVar1 = FUN_00436480(param_1);
      if (iVar1 <= iVar3) break;
      uVar2 = FUN_004364a0(param_1,iVar3);
      iVar1 = FUN_0059eb90(uVar2,auStack_1b8);
      if (iVar1 == 0) goto LAB_0059eede;
      iVar3 = iVar3 + 1;
    }
  }
  uVar2 = 0;
LAB_0059eede:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

