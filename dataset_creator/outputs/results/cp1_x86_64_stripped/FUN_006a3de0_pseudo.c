
void FUN_006a3de0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  param_1[2] = param_2;
  param_1[3] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_00938f08;
  uVar1 = FUN_006256d0();
  param_1[4] = uVar1;
                    /* try { // try from 006a3e21 to 006a3e25 has its CatchHandler @ 006a3e2e */
  FUN_006c89d0(param_1,0);
  return;
}

