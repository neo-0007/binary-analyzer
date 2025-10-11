
void FUN_006967f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = param_2[1];
  *param_1 = lVar1;
  plVar3 = (long *)(*(long *)(lVar1 + -0x18) + (long)param_1);
  *plVar3 = param_2[2];
  FUN_0066f450(plVar3,0);
  lVar1 = *param_2;
  lVar2 = param_2[3];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = lVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = (long)&PTR_FUN_009388a8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_006274c0(param_1 + 8);
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 9) = 0x10;
  param_1[1] = (long)&PTR_FUN_009380c8;
  param_1[10] = (long)(param_1 + 0xc);
                    /* try { // try from 006968b6 to 006968ba has its CatchHandler @ 006968c6 */
  FUN_0066f450(*(long *)(*param_1 + -0x18) + (long)param_1,param_1 + 1);
  return;
}

