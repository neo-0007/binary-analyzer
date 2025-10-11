
void FUN_006c4c90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00939588;
                    /* try { // try from 006c4cb7 to 006c4cbb has its CatchHandler @ 006c4cc8 */
  uVar1 = FUN_006256a0();
  param_1[2] = uVar1;
  return;
}

