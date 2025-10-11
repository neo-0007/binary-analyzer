
void FUN_0064e800(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_009356b8;
                    /* try { // try from 0064e827 to 0064e82b has its CatchHandler @ 0064e841 */
  uVar1 = FUN_006256a0();
  param_1[2] = uVar1;
  uVar1 = FUN_006256d0();
  param_1[3] = uVar1;
  return;
}

