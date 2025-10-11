
void FUN_0063d880(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00935170;
                    /* try { // try from 0063d8a7 to 0063d8ab has its CatchHandler @ 0063d8c3 */
  uVar1 = FUN_006256a0();
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0063e320(param_1);
  return;
}

