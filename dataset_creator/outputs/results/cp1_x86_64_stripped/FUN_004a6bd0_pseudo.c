
void FUN_004a6bd0(undefined8 ***param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined8 **local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *param_2;
  uVar6 = (uint)uVar1 & 0x1000;
  if ((uVar1 & 0x1000) != 0) {
    local_50 = param_1;
    param_1 = &local_50;
  }
  if ((uVar1 & 6) == 0) {
    uVar4 = (*(code *)param_2[4])();
    FUN_004a6860(param_1,uVar4,uVar6);
  }
  else {
    ppuVar2 = *param_1;
    iVar5 = 0;
    while( true ) {
      iVar3 = FUN_00436480(ppuVar2);
      if (iVar3 <= iVar5) break;
      local_48 = FUN_004364a0(ppuVar2,iVar5);
      uVar4 = (*(code *)param_2[4])();
      FUN_004a6860(&local_48,uVar4,uVar6);
      iVar5 = iVar5 + 1;
    }
    FUN_004360b0(ppuVar2);
    *param_1 = (undefined8 **)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

