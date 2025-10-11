
void FUN_006a2a30(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00938f90;
                    /* try { // try from 006a2a63 to 006a2a67 has its CatchHandler @ 006a2a70 */
  FUN_0062a780(param_1,0,0);
  return;
}

