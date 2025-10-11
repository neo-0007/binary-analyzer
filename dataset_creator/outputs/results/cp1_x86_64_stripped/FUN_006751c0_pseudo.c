
void FUN_006751c0(undefined8 *param_1)

{
  FUN_00670010(param_1 + 2);
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_00937520;
  param_1[2] = &PTR_FUN_00937548;
  param_1[1] = 0;
                    /* try { // try from 00675242 to 00675246 has its CatchHandler @ 0067524c */
  FUN_0066fda0(param_1 + 2,0);
  return;
}

