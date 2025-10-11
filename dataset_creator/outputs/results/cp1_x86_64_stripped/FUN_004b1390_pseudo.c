
undefined4 * FUN_004b1390(void)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_0041ad90(0x18,"../crypto/bio/ossl_core_bio.c",0x1a);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = FUN_00422240();
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *puVar1 = 1;
      UNLOCK();
      return puVar1;
    }
  }
  FUN_0041ad60(puVar1,"../crypto/bio/ossl_core_bio.c",0x1d);
  return (undefined4 *)0x0;
}

