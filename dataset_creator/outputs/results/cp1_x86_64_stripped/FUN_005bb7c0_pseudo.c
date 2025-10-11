
long FUN_005bb7c0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_004a87c0();
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/p5_pbe.c",0x61,"PKCS5_pbe_set_ex");
    FUN_0051f8f0(0xd,0xc0100,0);
  }
  else {
    iVar1 = FUN_005bb530(lVar2,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      FUN_004a87e0(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}

