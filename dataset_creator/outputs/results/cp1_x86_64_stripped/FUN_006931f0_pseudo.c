
void FUN_006931f0(undefined8 *param_1)

{
  param_1[0xe] = &PTR_FUN_009382a8;
  *param_1 = &PTR_FUN_00938280;
  param_1[1] = &PTR_FUN_009380c8;
  if ((undefined8 *)param_1[10] != param_1 + 0xc) {
    thunk_FUN_007104f0();
  }
  param_1[1] = &PTR_FUN_009388a8;
  FUN_00625980(param_1 + 8);
  *param_1 = &DAT_00938210;
  param_1[0xe] = &PTR_FUN_009370d8;
  FUN_00670330(param_1 + 0xe);
  return;
}

