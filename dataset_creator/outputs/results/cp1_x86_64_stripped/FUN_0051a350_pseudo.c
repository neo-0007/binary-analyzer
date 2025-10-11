
long FUN_0051a350(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_00422340(&DAT_00941004,FUN_0051a300);
  if (((iVar1 != 0) && (DAT_00941000 != 0)) &&
     (lVar2 = FUN_0041aec0(0xe0,"../crypto/engine/eng_lib.c",0x20), lVar2 != 0)) {
    LOCK();
    *(undefined4 *)(lVar2 + 0x9c) = 1;
    UNLOCK();
    iVar1 = FUN_004196b0(10,lVar2,lVar2 + 0xa8);
    lVar3 = lVar2;
    if (iVar1 == 0) {
      lVar3 = 0;
      FUN_0041ad60(lVar2,"../crypto/engine/eng_lib.c",0x27);
    }
    return lVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/engine/eng_lib.c",0x21,"ENGINE_new");
  FUN_0051f8f0(0x26,0xc0100,0);
  return 0;
}

