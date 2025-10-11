
void ge_madd(int *param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  long in_FS_OFFSET;
  int local_58 [10];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = 0;
  do {
    *(int *)((long)param_1 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_2 + 0x28 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  piVar4 = param_1 + 10;
  lVar1 = 0x28;
  do {
    *(int *)((long)param_1 + lVar1) = *(int *)(param_2 + lVar1) - *(int *)(param_2 + -0x28 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x50);
  fe_mul(param_1 + 0x14,param_1,param_3);
  fe_mul(piVar4,piVar4,param_3 + 0x28);
  fe_mul(param_1 + 0x1e,param_3 + 0x50,param_2 + 0x78);
  lVar1 = 0;
  do {
    *(int *)((long)local_58 + lVar1) = *(int *)(param_2 + 0x50 + lVar1) * 2;
    lVar1 = lVar1 + 4;
    piVar2 = param_1;
  } while (lVar1 != 0x28);
  do {
    piVar3 = piVar2 + 1;
    *piVar2 = piVar2[0x14] - piVar2[10];
    piVar2 = piVar3;
  } while (piVar4 != piVar3);
  do {
    *piVar4 = *piVar4 + piVar4[10];
    piVar4 = piVar4 + 1;
  } while (param_1 + 0x14 != piVar4);
  lVar1 = 0;
  do {
    *(int *)((long)param_1 + lVar1 + 0x50) =
         *(int *)((long)param_1 + lVar1 + 0x78) + *(int *)((long)local_58 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  lVar1 = 0;
  do {
    *(int *)((long)param_1 + lVar1 + 0x78) =
         *(int *)((long)local_58 + lVar1) - *(int *)((long)param_1 + lVar1 + 0x78);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

