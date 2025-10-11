
void FUN_00649640(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_009355e8;
                    /* try { // try from 00649673 to 00649677 has its CatchHandler @ 00649680 */
  FUN_00627740(param_1,0,0);
  return;
}

