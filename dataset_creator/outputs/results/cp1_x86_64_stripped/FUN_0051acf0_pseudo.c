
long FUN_0051acf0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/engine/eng_list.c",0x106,"ENGINE_get_next");
    FUN_0051f8f0(0x26,0xc0102,0);
  }
  else {
    iVar1 = FUN_004222c0(DAT_00941008);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0xc0);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0x9c) = *(int *)(lVar2 + 0x9c) + 1;
      UNLOCK();
    }
    FUN_004222e0(DAT_00941008);
    FUN_0051a5a0(param_1);
  }
  return lVar2;
}

