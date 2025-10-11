
undefined8 FUN_007098e0(uint param_1)

{
  ulong uVar1;
  ulong *puVar2;
  bool bVar3;
  
  if (param_1 < 0x400) {
    puVar2 = &DAT_00946980 + (ulong)param_1 * 2;
    uVar1 = *puVar2;
    if ((uVar1 & 1) != 0) {
      LOCK();
      bVar3 = (uVar1 & 0xffffffff) == *puVar2;
      if (bVar3) {
        *puVar2 = (ulong)((int)uVar1 + 1);
      }
      UNLOCK();
      if (bVar3) {
        return 0;
      }
    }
  }
  return 0x16;
}

