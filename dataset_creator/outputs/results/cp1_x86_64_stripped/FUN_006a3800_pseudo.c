
void FUN_006a3800(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_00938d80;
                    /* try { // try from 006a3831 to 006a3835 has its CatchHandler @ 006a383e */
  FUN_0062bb60(param_1,0);
  return;
}

