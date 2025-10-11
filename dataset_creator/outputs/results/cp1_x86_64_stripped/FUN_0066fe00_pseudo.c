
void FUN_0066fe00(undefined8 *param_1,undefined8 param_2)

{
  FUN_00670010();
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_009370f8;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
                    /* try { // try from 0066fe73 to 0066fe77 has its CatchHandler @ 0066fe80 */
  FUN_0066fda0(param_1,param_2);
  return;
}

