
long FUN_004a0640(void)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(0x28,"../crypto/asn1/a_object.c",0x15b);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_object.c",0x15d,"ASN1_OBJECT_new");
    FUN_0051f8f0(0xd,0xc0100,0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x20) = 1;
  }
  return lVar1;
}

