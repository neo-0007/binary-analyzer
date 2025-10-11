
void FUN_0067bb30(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00937b38;
                    /* try { // try from 0067bb57 to 0067bb5b has its CatchHandler @ 0067bb71 */
  uVar1 = FUN_006256a0();
  param_1[2] = uVar1;
  uVar1 = FUN_006256d0();
  param_1[3] = uVar1;
  return;
}

