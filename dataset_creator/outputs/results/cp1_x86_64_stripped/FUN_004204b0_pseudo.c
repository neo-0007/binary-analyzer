
undefined8 * FUN_004204b0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x50,"../crypto/provider_core.c",0x134);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar2 = FUN_00436420(FUN_0041f320);
  puVar1[1] = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_00422240();
    puVar1[3] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_00436410();
      puVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_00422240();
        puVar1[4] = lVar2;
        if (lVar2 != 0) {
          *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) | 1;
          *puVar1 = param_1;
          return puVar1;
        }
      }
    }
  }
  FUN_004203f0(puVar1);
  return (undefined8 *)0x0;
}

