
void FUN_00662760(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00936378;
                    /* try { // try from 00662787 to 0066278b has its CatchHandler @ 006627a1 */
  uVar1 = FUN_006256a0();
  param_1[2] = uVar1;
  uVar1 = FUN_006256d0();
  param_1[3] = uVar1;
  return;
}

