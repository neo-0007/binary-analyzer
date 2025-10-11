
int FUN_005b61c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00406bd0(param_7,param_6,param_9,param_10);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_sign.c",0x88,"ASN1_item_sign_ex");
    FUN_0051f8f0(0xd,0xc0100,0);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0040cab0(lVar2,0,param_8,0);
    if (iVar1 != 0) {
      iVar1 = FUN_005b5b10(param_1,param_2,param_3,param_4,param_5,lVar2);
    }
    uVar3 = FUN_0040b080(lVar2);
    FUN_00412f00(uVar3);
    FUN_00406b90(lVar2);
  }
  return iVar1;
}

