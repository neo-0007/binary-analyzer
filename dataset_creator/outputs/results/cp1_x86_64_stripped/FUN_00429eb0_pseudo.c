
void FUN_00429eb0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 2) == 0) {
      if (*(int *)((long)param_1 + 0x14) == 0) {
        FUN_0041aef0(*param_1,param_1[5],"../crypto/rand/rand_pool.c",0x6d);
      }
      else {
        FUN_0041c0b0(*param_1,param_1[5],"../crypto/rand/rand_pool.c",0x6b);
      }
    }
    FUN_0041ad60(param_1,"../crypto/rand/rand_pool.c",0x70);
    return;
  }
  return;
}

