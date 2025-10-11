
long FUN_00547ef0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_0041aec0(0x18,"../crypto/param_build.c",0x5d);
  lVar3 = lVar1;
  if (lVar1 != 0) {
    lVar2 = FUN_00436410();
    *(long *)(lVar1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
      FUN_0041ad60(lVar1,"../crypto/param_build.c",0x62);
    }
  }
  return lVar3;
}

