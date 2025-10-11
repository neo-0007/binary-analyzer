
void FUN_0068f740(undefined8 *param_1,undefined8 param_2)

{
  FUN_00670010(param_1 + 1);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_00937fc0;
  param_1[1] = &PTR_FUN_00937fe8;
                    /* try { // try from 0068f7be to 0068f7c2 has its CatchHandler @ 0068f7c8 */
  FUN_0066fda0(param_1 + 1,param_2);
  return;
}

