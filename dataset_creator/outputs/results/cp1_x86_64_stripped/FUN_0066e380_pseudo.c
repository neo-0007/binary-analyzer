
void FUN_0066e380(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = (long)&PTR_FUN_00936cc8;
                    /* try { // try from 0066e3b6 to 0066e3ba has its CatchHandler @ 0066e3f6 */
  FUN_0066beb0();
  thunk_FUN_006c3ec0(param_1 + 0xe);
  param_1[1] = (long)&PTR_FUN_00938928;
  FUN_00625980(param_1 + 8);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  return;
}

