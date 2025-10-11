
undefined4 FUN_00429b10(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  uVar2 = param_1[5];
  lVar3 = param_1[1];
  if (uVar2 - lVar3 < param_2) {
    uVar1 = param_1[4];
    if (((int)param_1[2] != 0) || (uVar1 - lVar3 < param_2)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rand/rand_pool.c",0xd5,"rand_pool_grow");
      FUN_0051f8f0(0x24,0xc0103,0);
      return 0;
    }
    do {
      uVar4 = uVar1;
      if (uVar1 >> 1 <= uVar2) break;
      uVar2 = uVar2 * 2;
      uVar4 = uVar2;
    } while (uVar2 - lVar3 < param_2);
    if (*(int *)((long)param_1 + 0x14) == 0) {
      lVar3 = FUN_0041aec0(uVar4,"../crypto/rand/rand_pool.c",0xe0);
    }
    else {
      lVar3 = FUN_0041bfc0(uVar4,"../crypto/rand/rand_pool.c",0xde);
    }
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rand/rand_pool.c",0xe2,"rand_pool_grow");
      FUN_0051f8f0(0x24,0xc0100,0);
      uVar5 = 0;
    }
    else {
      thunk_FUN_00713a50(lVar3,*param_1,param_1[1]);
      if (*(int *)((long)param_1 + 0x14) == 0) {
        FUN_0041aef0(*param_1,param_1[5],"../crypto/rand/rand_pool.c",0xe9);
      }
      else {
        FUN_0041c0b0(*param_1,param_1[5],"../crypto/rand/rand_pool.c",0xe7);
      }
      *param_1 = lVar3;
      uVar5 = 1;
      param_1[5] = uVar4;
    }
  }
  return uVar5;
}

