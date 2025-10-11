
uint FUN_005d0900(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2 == 0 || param_3 == 0) || (param_1 == 0)) {
    FUN_0051f420();
    lVar3 = 0;
    uVar1 = 0;
    FUN_0051f540("../crypto/ec/ecp_nist.c",0xa0,"ossl_ec_GFp_nist_field_sqr");
    FUN_0051f8f0(0x10,0x86,0);
  }
  else {
    lVar3 = 0;
    lVar4 = lVar3;
    if ((param_4 == 0) &&
       (param_4 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xa8)), lVar4 = param_4, param_4 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_004bc940(param_2,param_3,param_4);
      lVar3 = lVar4;
      if (uVar1 != 0) {
        iVar2 = (**(code **)(param_1 + 0x88))
                          (param_2,param_2,*(undefined8 *)(param_1 + 0x40),param_4);
        uVar1 = (uint)(iVar2 != 0);
      }
    }
  }
  FUN_004b2b50(lVar3);
  return uVar1;
}

