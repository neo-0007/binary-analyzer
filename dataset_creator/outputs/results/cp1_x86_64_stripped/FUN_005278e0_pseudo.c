
undefined8 FUN_005278e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_004098f0();
  if (lVar1 != 0) {
    FUN_004227b0(lVar1 + 0x100,0x1b8);
    uVar2 = 1;
    if (*(long *)(lVar1 + 0x2b8) != param_1 + 0x28) {
      FUN_0041ad60(*(long *)(lVar1 + 0x2b8),"../crypto/evp/e_aes.c",0xa04);
    }
  }
  return uVar2;
}

