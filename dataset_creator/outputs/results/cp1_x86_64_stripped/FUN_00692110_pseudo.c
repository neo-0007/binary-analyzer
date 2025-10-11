
ulong FUN_00692110(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uint local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = rdseed();
  bVar4 = (bool)rdseedIsValid();
  iVar2 = 99;
  if (bVar4) {
LAB_0069214e:
    uVar3 = (ulong)local_14;
  }
  else {
    do {
      local_14 = rdseed();
      bVar4 = (bool)rdseedIsValid();
      if (bVar4) goto LAB_0069214e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar3 = FUN_00691f60(0);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

