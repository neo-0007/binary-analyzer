
void FUN_00697a00(long *param_1,long *param_2,undefined4 param_3)

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
  FUN_0066f450(*(long *)(lVar2 + -0x18) + (long)param_1,0);
  lVar2 = param_2[4];
  param_1[2] = lVar2;
  plVar1 = (long *)((long)param_1 + *(long *)(lVar2 + -0x18) + 0x10);
  *plVar1 = param_2[5];
                    /* try { // try from 00697a5a to 00697a5e has its CatchHandler @ 00697b29 */
  FUN_0066f450(plVar1,0);
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
  param_1[3] = (long)&PTR_FUN_009388a8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_006274c0(param_1 + 10);
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = param_3;
  param_1[3] = (long)&PTR_FUN_009380c8;
  param_1[0xc] = (long)(param_1 + 0xe);
                    /* try { // try from 00697b19 to 00697b1d has its CatchHandler @ 00697b32 */
  FUN_0066f450(*(long *)(*param_1 + -0x18) + (long)param_1,param_1 + 3);
  return;
}

