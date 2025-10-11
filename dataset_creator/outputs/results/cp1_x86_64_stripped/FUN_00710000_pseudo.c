
ulong FUN_00710000(void)

{
  uint uVar1;
  ulong in_RAX;
  ulong uVar2;
  uint *puVar3;
  bool bVar4;
  
  if (DAT_0094a9a8 == '\0') {
    return in_RAX;
  }
  LOCK();
  bVar4 = DAT_0094a9ac == 0;
  if (bVar4) {
    DAT_0094a9ac = 1;
  }
  UNLOCK();
  if (!bVar4) {
    FUN_00709590(&DAT_0094a9ac);
  }
  puVar3 = &DAT_0093e160;
  do {
    while( true ) {
      LOCK();
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        *puVar3 = 1;
        uVar2 = 0;
      }
      else {
        uVar2 = (ulong)uVar1;
      }
      UNLOCK();
      if (uVar1 != 0) break;
      puVar3 = *(uint **)(puVar3 + 0x21c);
      if (puVar3 == &DAT_0093e160) {
        return uVar2;
      }
    }
    uVar2 = FUN_00709590(puVar3);
    puVar3 = *(uint **)(puVar3 + 0x21c);
  } while (puVar3 != &DAT_0093e160);
  return uVar2;
}

