
int FUN_004ea0e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_004e90c0(param_1,0);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_asn1.c",0x391,"i2d_ECPKParameters");
    FUN_0051f8f0(0x10,0x78,0);
    return 0;
  }
  iVar1 = FUN_004e8530(lVar2,param_2);
  if (iVar1 != 0) {
    FUN_004e8580(lVar2);
    return iVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_asn1.c",0x395,"i2d_ECPKParameters");
  FUN_0051f8f0(0x10,0x79,0);
  FUN_004e8580(lVar2);
  return 0;
}

