
int FUN_0051a180(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_init.c",0x55,"ENGINE_init");
    FUN_0051f8f0(0x26,0xc0102,0);
    return 0;
  }
  iVar1 = FUN_00422340(&DAT_00941004,FUN_0051a300);
  if ((iVar1 == 0) || (DAT_00941000 == 0)) {
    FUN_0051f420();
    iVar1 = 0;
    FUN_0051f540("../crypto/engine/eng_init.c",0x59,"ENGINE_init");
    FUN_0051f8f0(0x26,0xc0100,0);
  }
  else {
    iVar1 = FUN_004222c0(DAT_00941008);
    if (iVar1 != 0) {
      iVar1 = FUN_0051a070(param_1);
      FUN_004222e0(DAT_00941008);
      return iVar1;
    }
  }
  return iVar1;
}

