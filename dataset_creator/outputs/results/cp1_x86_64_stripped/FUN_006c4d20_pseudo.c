
void FUN_006c4d20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_009395e0;
                    /* try { // try from 006c4d47 to 006c4d4b has its CatchHandler @ 006c4d58 */
  uVar1 = FUN_006256a0();
  param_1[2] = uVar1;
  return;
}

