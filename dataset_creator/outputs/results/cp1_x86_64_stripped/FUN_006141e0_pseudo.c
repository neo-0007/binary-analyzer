
long FUN_006141e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if (param_3 == 0) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/x509/v3_utf8.c",0x34,"s2i_ASN1_UTF8STRING");
    FUN_0051f8f0(0x22,0x6b,0);
  }
  else {
    lVar3 = FUN_004a78b0();
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_utf8.c",0x38,"s2i_ASN1_UTF8STRING");
      FUN_0051f8f0(0x22,0xc0100,0);
    }
    else {
      uVar1 = thunk_FUN_007129d0(param_3);
      iVar2 = FUN_004a1fa0(lVar3,param_3,uVar1);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_utf8.c",0x3c,"s2i_ASN1_UTF8STRING");
        FUN_0051f8f0(0x22,0xc0100,0);
        thunk_FUN_004a2270(lVar3);
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}

