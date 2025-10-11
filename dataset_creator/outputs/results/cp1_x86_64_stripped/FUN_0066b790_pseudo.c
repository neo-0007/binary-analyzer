
void FUN_0066b790(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = (long)&PTR_FUN_009368e8;
                    /* try { // try from 0066b7c6 to 0066b7ca has its CatchHandler @ 0066b806 */
  FUN_006692f0();
  thunk_FUN_006c3ec0(param_1 + 0xe);
  param_1[1] = (long)&PTR_FUN_009388a8;
  FUN_00625980(param_1 + 8);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  return;
}

