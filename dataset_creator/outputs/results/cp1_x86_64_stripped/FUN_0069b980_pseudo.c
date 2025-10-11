
void FUN_0069b980(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  lVar4 = *(long *)(lVar2 + -0x18);
  *param_1 = lVar2;
  *(long *)((long)param_1 + lVar4) = lVar3;
  param_1[1] = 0;
  FUN_0066fda0(*(long *)(lVar2 + -0x18) + (long)param_1,0);
  lVar2 = param_2[4];
  param_1[2] = lVar2;
  plVar1 = (long *)((long)param_1 + *(long *)(lVar2 + -0x18) + 0x10);
  *plVar1 = param_2[5];
                    /* try { // try from 0069b9d7 to 0069b9db has its CatchHandler @ 0069baac */
  FUN_0066fda0(plVar1,0);
  lVar2 = param_2[1];
  lVar3 = param_2[6];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = lVar3;
  param_1[2] = param_2[7];
  lVar2 = *param_2;
  lVar3 = param_2[8];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = lVar3;
  lVar2 = param_2[9];
  param_1[4] = 0;
  param_1[2] = lVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = (long)&PTR_FUN_00938928;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_006274c0(param_1 + 10);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x18;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[3] = (long)&PTR_FUN_009384a8;
  param_1[0xc] = (long)(param_1 + 0xe);
                    /* try { // try from 0069ba9c to 0069baa0 has its CatchHandler @ 0069bab5 */
  FUN_0066fda0(*(long *)(*param_1 + -0x18) + (long)param_1,param_1 + 3);
  return;
}

