
void FUN_00694070(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_00938438;
  *param_1 = &PTR_FUN_00938460;
  param_1[0xe] = &PTR_FUN_00938488;
  param_1[1] = &PTR_FUN_009380c8;
  if ((undefined8 *)param_1[10] != param_1 + 0xc) {
    thunk_FUN_007104f0();
  }
  param_1[1] = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 8);
  param_1[-1] = 0;
  *param_1 = &DAT_009382d0;
  param_1[-2] = &DAT_00938320;
  param_1[0xe] = &PTR_FUN_009370d8;
  FUN_00670330(param_1 + 0xe);
  thunk_FUN_007104f0(param_1 + -2);
  return;
}

