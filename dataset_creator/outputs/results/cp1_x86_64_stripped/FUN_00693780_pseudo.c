
void FUN_00693780(undefined8 *param_1)

{
  param_1[0xf] = &PTR_FUN_009381e8;
  *param_1 = &PTR_FUN_009381c0;
  param_1[2] = &PTR_FUN_009380c8;
  if ((undefined8 *)param_1[0xb] != param_1 + 0xd) {
    thunk_FUN_007104f0();
  }
  param_1[2] = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 9);
  param_1[1] = 0;
  *param_1 = &DAT_00938150;
  param_1[0xf] = &PTR_FUN_009370d8;
  FUN_00670330(param_1 + 0xf);
  thunk_FUN_007104f0(param_1);
  return;
}

