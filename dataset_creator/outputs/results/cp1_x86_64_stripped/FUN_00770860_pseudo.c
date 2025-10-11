
ulong FUN_00770860(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_98 [40];
  long local_70;
  uint local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00770a10(auStack_98);
  iVar1 = FUN_0076ece0();
  for (uVar3 = (ulong)iVar1; (1 < local_30 && (1 < uVar3)); uVar3 = uVar3 >> 1) {
    local_30 = local_30 >> 1;
  }
  uVar2 = (ulong)local_30 * local_70;
  if (1 < uVar3) {
    do {
      uVar3 = uVar3 >> 1;
      uVar2 = uVar2 >> 1;
    } while (uVar3 != 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

