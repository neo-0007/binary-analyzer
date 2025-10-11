
void FUN_00693e60(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_00938818;
  *param_1 = &PTR_FUN_00938840;
  param_1[0xe] = &PTR_FUN_00938868;
  param_1[1] = &PTR_FUN_009384a8;
  if ((undefined8 *)param_1[10] != param_1 + 0xc) {
    thunk_FUN_007104f0();
  }
  param_1[1] = &PTR_FUN_00938928;
  FUN_00625980(param_1 + 8);
  param_1[-1] = 0;
  *param_1 = &DAT_009386b0;
  param_1[-2] = &DAT_00938700;
  param_1[0xe] = &PTR_FUN_009370f8;
  FUN_00670330(param_1 + 0xe);
  thunk_FUN_007104f0(param_1 + -2);
  return;
}

