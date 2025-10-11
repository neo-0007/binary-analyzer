
void FUN_006a44f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00938ff8;
                    /* try { // try from 006a4517 to 006a451b has its CatchHandler @ 006a4531 */
  uVar1 = FUN_006256a0();
  param_1[2] = uVar1;
  uVar1 = FUN_006256d0();
  param_1[3] = uVar1;
  return;
}

