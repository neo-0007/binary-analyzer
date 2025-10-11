
void FUN_0067b410(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  param_1[2] = param_2;
  param_1[3] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_00937a48;
  uVar1 = FUN_006256d0();
  param_1[4] = uVar1;
                    /* try { // try from 0067b451 to 0067b455 has its CatchHandler @ 0067b45e */
  FUN_006c8050(param_1,0);
  return;
}

