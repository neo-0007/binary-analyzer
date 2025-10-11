
long FUN_004a8b30(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = FUN_0040bef0();
    return lVar3;
  }
  uVar1 = FUN_00423da0(*param_1);
  uVar2 = FUN_00423b00(uVar1);
  lVar3 = FUN_0040d800(uVar2);
  if (lVar3 != 0) {
    return lVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/x_algor.c",0x99,"ossl_x509_algor_get_md");
  FUN_0051f8f0(0xd,0xe5,0);
  return 0;
}

