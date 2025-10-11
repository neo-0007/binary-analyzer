
long FUN_00406960(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_0041aec0(0xf0,"../crypto/evp/digest.c",0x35f);
  lVar3 = lVar1;
  if (lVar1 != 0) {
    lVar2 = FUN_00422240();
    *(long *)(lVar1 + 0x80) = lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
      FUN_0041ad60(lVar1,"../crypto/evp/digest.c",0x364);
    }
    else {
      LOCK();
      *(undefined4 *)(lVar1 + 0x78) = 1;
      UNLOCK();
    }
  }
  return lVar3;
}

