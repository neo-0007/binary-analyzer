
undefined8
FUN_004282b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00429cb0(0,0);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rand/prov_seed.c",0x38,"ossl_rand_get_nonce");
    FUN_0051f8f0(0x24,0xc0100,0);
    return 0;
  }
  iVar1 = FUN_0047c310(lVar2);
  if (iVar1 == 0) {
LAB_00428330:
    uVar3 = 0;
  }
  else {
    if (param_5 != 0) {
      iVar1 = FUN_0042a120(lVar2,param_5,param_6,0);
      if (iVar1 == 0) goto LAB_00428330;
    }
    uVar3 = FUN_00429f50(lVar2);
    uVar4 = FUN_00429f60(lVar2);
    *param_2 = uVar4;
  }
  FUN_00429eb0(lVar2);
  return uVar3;
}

