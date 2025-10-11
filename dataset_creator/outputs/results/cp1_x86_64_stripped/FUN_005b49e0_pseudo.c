
long FUN_005b49e0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = FUN_005c0c00();
    lVar3 = FUN_004ab550(uVar2);
    lVar4 = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_005b4830(param_1,lVar3,param_2);
      if (iVar1 < 1) {
        lVar4 = 0;
        FUN_004ab560(lVar3);
      }
    }
    return lVar4;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/a_i2d_fp.c",0x76,"ASN1_item_i2d_mem_bio");
  FUN_0051f8f0(0xd,0xc0102,0);
  return 0;
}

