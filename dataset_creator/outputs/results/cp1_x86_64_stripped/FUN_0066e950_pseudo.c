
void FUN_0066e950(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  param_1[3] = (long)&PTR_FUN_00936cc8;
                    /* try { // try from 0066e98e to 0066e992 has its CatchHandler @ 0066ea09 */
  FUN_0066beb0();
  thunk_FUN_006c3ec0(param_1 + 0x10);
  param_1[3] = (long)&PTR_FUN_00938928;
  FUN_00625980(param_1 + 10);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar1 = param_2[4];
  param_1[2] = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18) + 0x10) = param_2[5];
  lVar1 = param_2[2];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = 0;
  return;
}

