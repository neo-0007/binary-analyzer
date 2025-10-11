
undefined8 FUN_00437e20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  iVar1 = FUN_00436480();
  uVar2 = local_38;
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      uVar2 = FUN_004364a0(param_1,iVar4);
      lVar3 = FUN_00437d20(&local_38,uVar2);
      if (lVar3 == 0) {
        FUN_00436430(local_38,FUN_00438680);
        uVar2 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      uVar2 = local_38;
    } while (iVar1 != iVar4);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

