
void FUN_00693030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009380c8;
  if ((undefined8 *)param_1[9] != param_1 + 0xb) {
    thunk_FUN_007104f0();
  }
  *param_1 = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 7);
  thunk_FUN_007104f0(param_1);
  return;
}

