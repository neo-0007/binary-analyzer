
long FUN_0059cee0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_0049fb40(param_2,0);
  if (lVar2 != 0) {
    iVar1 = FUN_004b7bb0(lVar2);
    if (iVar1 < 0x80) {
      lVar3 = FUN_004b2330(lVar2);
    }
    else {
      lVar3 = FUN_0059cbb0();
    }
    if (lVar3 != 0) goto LAB_0059cf23;
  }
  FUN_0051f420();
  lVar3 = 0;
  FUN_0051f540("../crypto/x509/v3_utl.c",0xaf,"i2s_ASN1_ENUMERATED");
  FUN_0051f8f0(0x22,0xc0100,0);
LAB_0059cf23:
  FUN_004b7fa0(lVar2);
  return lVar3;
}

