
int FUN_0051a270(long param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 != 0) {
    iVar1 = FUN_004222c0(DAT_00941008);
    if (iVar1 != 0) {
      iVar1 = FUN_0051a0b0(param_1,1);
      FUN_004222e0(DAT_00941008);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/engine/eng_init.c",0x6f,"ENGINE_finish");
        FUN_0051f8f0(0x26,0x6a,0);
      }
    }
  }
  return iVar1;
}

