
long FUN_00421090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0041aec0(0xe0,"../crypto/provider_core.c",0x1c9);
  if (lVar1 != 0) {
    lVar2 = FUN_00422240();
    *(long *)(lVar1 + 0xb8) = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_00422240();
      *(long *)(lVar1 + 8) = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_0041c2c0(param_1,"../crypto/provider_core.c",0x1cf);
        *(long *)(lVar1 + 0x28) = lVar2;
        if (lVar2 != 0) {
          lVar2 = FUN_00436200(param_3,FUN_0041f340,FUN_0041f280);
          *(long *)(lVar1 + 0x48) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(undefined4 *)(lVar1 + 0x10) = 1;
            UNLOCK();
            *(undefined8 *)(lVar1 + 0x40) = param_2;
            return lVar1;
          }
        }
      }
    }
  }
  FUN_00420d40(lVar1);
  FUN_0051f420();
  FUN_0051f540("../crypto/provider_core.c",0x1d4,"provider_new");
  FUN_0051f8f0(0xf,0xc0100,0);
  return 0;
}

