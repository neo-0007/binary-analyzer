
int FUN_00619dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_004b7bb0(param_3);
  iVar1 = iVar1 + 1;
  lVar3 = FUN_0041ad90((long)iVar1 << 2,"../crypto/bn/bn_gf2m.c",0x21b);
  if (lVar3 == 0) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/bn/bn_gf2m.c",0x21d,"BN_GF2m_mod_sqr");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    iVar2 = FUN_006194d0(param_3,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_gf2m.c",0x222,"BN_GF2m_mod_sqr");
      FUN_0051f8f0(3,0x6a,0);
    }
    else {
      iVar2 = FUN_00618820(param_1,param_2,lVar3,param_4);
    }
    FUN_0041ad60(lVar3,"../crypto/bn/bn_gf2m.c",0x228);
  }
  return iVar2;
}

