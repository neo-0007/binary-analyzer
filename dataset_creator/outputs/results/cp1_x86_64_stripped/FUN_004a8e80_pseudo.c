
bool FUN_004a8e80(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(4,"../crypto/asn1/x_int64.c",0x7e);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/x_int64.c",0x7f,"uint32_new");
    FUN_0051f8f0(0xd,0xc0100,0);
  }
  return lVar1 != 0;
}

