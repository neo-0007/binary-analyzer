
long FUN_0055d6f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_0055d440();
  lVar2 = FUN_004a7500(uVar1,param_1,param_2);
  lVar4 = lVar2;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_1;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    if (param_2 != 0) {
      lVar3 = FUN_0041c2c0(param_2,"../crypto/pkcs7/pk7_asn1.c",0x67);
      *(long *)(lVar2 + 0x30) = lVar3;
      if (lVar3 == 0) {
        lVar4 = 0;
        FUN_0055d6b0(lVar2);
        FUN_0051f420();
        FUN_0051f540("../crypto/pkcs7/pk7_asn1.c",0x6b,"PKCS7_new_ex");
        FUN_0051f8f0(0x39,0xc0100,0);
      }
    }
  }
  return lVar4;
}

