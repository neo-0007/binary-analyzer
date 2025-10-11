
void FUN_00693080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009384a8;
  if ((undefined8 *)param_1[9] != param_1 + 0xb) {
    thunk_FUN_007104f0();
  }
  *param_1 = &PTR_FUN_00938928;
  FUN_00625980(param_1 + 7);
  thunk_FUN_007104f0(param_1);
  return;
}

