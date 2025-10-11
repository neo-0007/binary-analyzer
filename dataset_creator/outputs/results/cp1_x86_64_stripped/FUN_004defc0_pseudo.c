
void FUN_004defc0(undefined1 *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_58 [4];
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  ulong uStack_20;
  long local_10;
  
  local_58[0] = *param_2;
  local_58[1] = param_2[1];
  local_58[2] = param_2[2];
  local_58[3] = param_2[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2[4];
  uStack_30 = param_2[5];
  local_28 = param_2[6];
  uStack_20 = param_2[7];
  FUN_004dee90(local_58);
  puVar1 = param_1 + 0x38;
  uVar5 = 0;
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    if (((uint)uVar3 | uVar2) < 8) {
      uVar2 = uVar2 + 0x38;
      uVar4 = (ulong)((uint)uVar3 + 1);
      uVar5 = local_58[uVar3] | uVar5;
    }
    *param_1 = (char)uVar5;
    param_1 = param_1 + 1;
    uVar5 = uVar5 >> 8;
    uVar2 = uVar2 - 8;
    uVar3 = uVar4;
  } while (param_1 != puVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

