
void FUN_00693530(undefined8 *param_1)

{
  param_1[0xf] = &PTR_FUN_009385c8;
  *param_1 = &PTR_FUN_009385a0;
  param_1[2] = &PTR_FUN_009384a8;
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_007104f0();
  }
  param_1[2] = &PTR_FUN_00938928;
  FUN_00625980(param_1 + 9);
  param_1[1] = 0;
  *param_1 = &DAT_00938530;
  param_1[0xf] = &PTR_FUN_009370f8;
  FUN_00670330(param_1 + 0xf);
  thunk_FUN_007104f0(param_1);
  return;
}

