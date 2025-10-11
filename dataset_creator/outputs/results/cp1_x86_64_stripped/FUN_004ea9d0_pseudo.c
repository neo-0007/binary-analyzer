
long FUN_004ea9d0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (((param_1 != (long *)0x0) && (lVar2 = *param_1, lVar2 != 0)) && (*(long *)(lVar2 + 0x18) != 0)
     ) {
    iVar1 = FUN_004ee9a0(lVar2,*param_2,param_3,0);
    if (iVar1 == 0) {
      FUN_0051f420();
      lVar2 = 0;
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x476,"o2i_ECPublicKey");
      FUN_0051f8f0(0x10,0x80010,0);
    }
    else {
      *param_2 = *param_2 + param_3;
    }
    return lVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_asn1.c",0x470,"o2i_ECPublicKey");
  FUN_0051f8f0(0x10,0xc0102,0);
  return 0;
}

