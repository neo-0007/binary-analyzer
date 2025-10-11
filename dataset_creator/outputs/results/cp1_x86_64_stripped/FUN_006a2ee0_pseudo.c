
void FUN_006a2ee0(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00938f28;
                    /* try { // try from 006a2f13 to 006a2f17 has its CatchHandler @ 006a2f20 */
  FUN_0062a1b0(param_1,0,0);
  return;
}

