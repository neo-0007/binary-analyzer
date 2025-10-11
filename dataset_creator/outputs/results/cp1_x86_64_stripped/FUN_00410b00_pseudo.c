
long FUN_00410b00(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0040e590();
  if (param_2 != iVar1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_lib.c",0x368,"evp_pkey_get0_ECX_KEY");
    FUN_0051f8f0(6,0xdb,0);
    return 0;
  }
  lVar2 = FUN_00410840(param_1);
  if (lVar2 != 0) {
    iVar1 = FUN_00511630(lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  return 0;
}

