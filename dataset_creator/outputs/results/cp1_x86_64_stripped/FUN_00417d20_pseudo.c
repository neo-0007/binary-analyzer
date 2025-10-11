
long FUN_00417d20(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = thunk_FUN_00712710(lVar2,0x3a);
    lVar3 = lVar1 - lVar2;
    if (lVar1 == 0) {
      lVar3 = thunk_FUN_007129d0(lVar2,lVar3);
    }
    lVar2 = FUN_0041c400(lVar2,lVar3,"../crypto/core_algorithm.c",0xb3);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/core_algorithm.c",0xb5,"ossl_algorithm_get1_first_name");
      FUN_0051f8f0(6,0xc0100,0);
      return 0;
    }
  }
  return lVar2;
}

