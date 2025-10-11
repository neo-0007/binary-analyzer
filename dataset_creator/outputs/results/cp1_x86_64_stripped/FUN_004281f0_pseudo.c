
long FUN_004281f0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00429cb0(param_3,1,param_4,param_5);
  if (lVar1 != 0) {
    lVar2 = FUN_0047c000(lVar1);
    if (lVar2 != 0) {
      lVar2 = FUN_00429f50(lVar1);
      uVar3 = FUN_00429f60(lVar1);
      *param_2 = uVar3;
    }
    FUN_00429eb0(lVar1);
    return lVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/rand/prov_seed.c",0x19,"ossl_rand_get_entropy");
  FUN_0051f8f0(0x24,0xc0100,0);
  return 0;
}

