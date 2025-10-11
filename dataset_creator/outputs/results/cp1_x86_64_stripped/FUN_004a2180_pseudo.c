
long FUN_004a2180(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(0x18,"../crypto/asn1/asn1_lib.c",0x15e);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn1_lib.c",0x160,"ASN1_STRING_type_new");
    FUN_0051f8f0(0xd,0xc0100,0);
  }
  else {
    *(undefined4 *)(lVar1 + 4) = param_1;
  }
  return lVar1;
}

