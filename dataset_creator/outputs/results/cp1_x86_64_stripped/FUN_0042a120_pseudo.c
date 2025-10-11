
undefined8 FUN_0042a120(long *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  if (param_1[4] - uVar1 < param_3) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rand/rand_pool.c",0x135,"ossl_rand_pool_add");
    FUN_0051f8f0(0x24,0x6a,0);
    return 0;
  }
  if (*param_1 != 0) {
    uVar2 = 1;
    if (param_3 != 0) {
      if ((uVar1 < (ulong)param_1[5]) && (param_2 == *param_1 + uVar1)) {
        FUN_0051f420();
        uVar2 = 0x148;
        goto LAB_0042a211;
      }
      uVar2 = FUN_00429b10(param_1,param_3);
      if ((int)uVar2 != 0) {
        thunk_FUN_00713a50(param_1[1] + *param_1,param_2,param_3);
        param_1[1] = param_1[1] + param_3;
        param_1[6] = param_1[6] + param_4;
        return 1;
      }
    }
    return uVar2;
  }
  FUN_0051f420();
  uVar2 = 0x13a;
LAB_0042a211:
  FUN_0051f540("../crypto/rand/rand_pool.c",uVar2,"ossl_rand_pool_add");
  FUN_0051f8f0(0x24,0xc0103,0);
  return 0;
}

