
undefined8 FUN_00709880(undefined4 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  
  lVar3 = 0;
  puVar4 = &DAT_00946980;
  do {
    uVar2 = *puVar4;
    if (((uVar2 & 1) == 0) && (uVar2 != 0xfffffffffffffffe)) {
      LOCK();
      uVar1 = *puVar4;
      if (uVar2 == uVar1) {
        *puVar4 = uVar2 + 1;
      }
      UNLOCK();
      if (uVar2 == uVar1) {
        (&DAT_00946988)[lVar3 * 2] = param_2;
        *param_1 = (int)lVar3;
        return 0;
      }
    }
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 2;
    if (lVar3 == 0x400) {
      return 0xb;
    }
  } while( true );
}

