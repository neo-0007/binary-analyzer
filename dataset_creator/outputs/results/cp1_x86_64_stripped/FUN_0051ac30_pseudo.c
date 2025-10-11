
long FUN_0051ac30(void)

{
  long lVar1;
  int iVar2;
  
  iVar2 = FUN_00422340(&DAT_00941004,FUN_0051a300);
  if ((iVar2 != 0) && (DAT_00941000 != 0)) {
    iVar2 = FUN_004222c0(DAT_00941008);
    lVar1 = DAT_00941030;
    if (iVar2 != 0) {
      if (DAT_00941030 != 0) {
        LOCK();
        *(int *)(DAT_00941030 + 0x9c) = *(int *)(DAT_00941030 + 0x9c) + 1;
        UNLOCK();
      }
      FUN_004222e0(DAT_00941008);
      return lVar1;
    }
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/engine/eng_list.c",0xf2,"ENGINE_get_last");
  FUN_0051f8f0(0x26,0xc0100,0);
  return 0;
}

