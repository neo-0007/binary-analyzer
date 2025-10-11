
void FUN_0066e4b0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_00937038;
  *param_1 = &PTR_FUN_00937060;
  param_1[0x1f] = &PTR_FUN_00937088;
  param_1[1] = &PTR_FUN_00936cc8;
                    /* try { // try from 0066e4ec to 0066e4f0 has its CatchHandler @ 0066e54e */
  FUN_0066beb0();
  thunk_FUN_006c3ec0(param_1 + 0xe);
  param_1[1] = &PTR_FUN_00938928;
  FUN_00625980(param_1 + 8);
  param_1[-1] = 0;
  *param_1 = &DAT_00936ed0;
  param_1[-2] = &DAT_00936f20;
  param_1[0x1f] = &PTR_FUN_009370f8;
  FUN_00670330(param_1 + 0x1f);
  return;
}

