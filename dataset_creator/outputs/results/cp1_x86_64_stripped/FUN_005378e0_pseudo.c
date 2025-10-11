
long FUN_005378e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_0041aec0(0x100,"../crypto/evp/evp_enc.c",0x5b0);
  lVar3 = lVar1;
  if (lVar1 != 0) {
    lVar2 = FUN_00422240();
    *(long *)(lVar1 + 0x88) = lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
      FUN_0041ad60(lVar1,"../crypto/evp/evp_enc.c",0x5b5);
    }
    else {
      LOCK();
      *(undefined4 *)(lVar1 + 0x80) = 1;
      UNLOCK();
    }
  }
  return lVar3;
}

