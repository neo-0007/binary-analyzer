
bool FUN_004a8e00(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(8,"../crypto/asn1/x_int64.c",0x1f);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/x_int64.c",0x20,"uint64_new");
    FUN_0051f8f0(0xd,0xc0100,0);
  }
  return lVar1 != 0;
}

