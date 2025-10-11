
void FUN_00675000(undefined8 *param_1,undefined8 param_2)

{
  FUN_00670010(param_1 + 2);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_00937520;
  param_1[2] = &PTR_FUN_00937548;
  param_1[1] = 0;
                    /* try { // try from 00675086 to 0067508a has its CatchHandler @ 00675090 */
  FUN_0066fda0(param_1 + 2,param_2);
  return;
}

