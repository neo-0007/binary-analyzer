
void FUN_0066df90(undefined8 *param_1)

{
  param_1[0x1f] = &PTR_FUN_00936ea8;
  *param_1 = &PTR_FUN_00936e80;
  param_1[1] = &PTR_FUN_00936cc8;
                    /* try { // try from 0066dfc4 to 0066dfc8 has its CatchHandler @ 0066e013 */
  FUN_0066beb0();
  thunk_FUN_006c3ec0(param_1 + 0xe);
  param_1[1] = &PTR_FUN_00938928;
  FUN_00625980(param_1 + 8);
  *param_1 = &DAT_00936e10;
  param_1[0x1f] = &PTR_FUN_009370f8;
  FUN_00670330(param_1 + 0x1f);
  return;
}

