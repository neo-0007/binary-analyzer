
void ge_p3_to_cached(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(int *)(param_1 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_2 + 0x28 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  do {
    *(int *)(param_1 + lVar1) = *(int *)(param_2 + lVar1) - *(int *)(param_2 + -0x28 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x50);
  memmove((void *)(param_1 + 0x50),(void *)(param_2 + 0x50),0x28);
  fe_mul(param_1 + 0x78,param_2 + 0x78,d2);
  return;
}

