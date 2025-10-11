
void FUN_0066b3a0(undefined8 *param_1)

{
  param_1[0x1f] = &PTR_FUN_00936ac8;
  *param_1 = &PTR_FUN_00936aa0;
  param_1[1] = &PTR_FUN_009368e8;
                    /* try { // try from 0066b3d4 to 0066b3d8 has its CatchHandler @ 0066b423 */
  FUN_006692f0();
  thunk_FUN_006c3ec0(param_1 + 0xe);
  param_1[1] = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 8);
  *param_1 = &DAT_00936a30;
  param_1[0x1f] = &PTR_FUN_009370d8;
  FUN_00670330(param_1 + 0x1f);
  return;
}

