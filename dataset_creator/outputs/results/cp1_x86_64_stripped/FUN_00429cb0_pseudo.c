
long * FUN_00429cb0(int param_1,int param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = (long *)FUN_0041aec0(0x40,"../crypto/rand/rand_pool.c",0x19);
  if (param_2 == 0) {
    if (plVar1 == (long *)0x0) goto LAB_00429da0;
    plVar1[3] = param_3;
    if (0x3000 < param_4) {
      param_4 = 0x3000;
    }
    uVar3 = 0x30;
    if (0x2f < param_3) {
      uVar3 = param_3;
    }
    plVar1[4] = param_4;
    if (param_4 < uVar3) {
      uVar3 = param_4;
    }
    plVar1[5] = uVar3;
    lVar2 = FUN_0041aec0(uVar3,"../crypto/rand/rand_pool.c",0x2b);
  }
  else {
    if (plVar1 == (long *)0x0) {
LAB_00429da0:
      FUN_0051f420();
      FUN_0051f540("../crypto/rand/rand_pool.c",0x1d,"ossl_rand_pool_new");
      FUN_0051f8f0(0x24,0xc0100,0);
      return (long *)0x0;
    }
    plVar1[3] = param_3;
    if (0x3000 < param_4) {
      param_4 = 0x3000;
    }
    uVar3 = 0x10;
    if (0xf < param_3) {
      uVar3 = param_3;
    }
    plVar1[4] = param_4;
    if (param_4 < uVar3) {
      uVar3 = param_4;
    }
    plVar1[5] = uVar3;
    lVar2 = FUN_0041bfc0(uVar3,"../crypto/rand/rand_pool.c",0x29);
  }
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rand/rand_pool.c",0x2e,"ossl_rand_pool_new");
    FUN_0051f8f0(0x24,0xc0100,0);
    FUN_0041ad60(plVar1,"../crypto/rand/rand_pool.c",0x37);
    plVar1 = (long *)0x0;
  }
  else {
    plVar1[7] = (long)param_1;
    *(int *)((long)plVar1 + 0x14) = param_2;
  }
  return plVar1;
}

