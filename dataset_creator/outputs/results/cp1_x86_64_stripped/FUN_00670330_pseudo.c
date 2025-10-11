
void FUN_00670330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00937128;
  FUN_00670280(param_1,0);
  FUN_006702d0(param_1);
  if ((undefined8 *)param_1[0x19] != param_1 + 8) {
    if ((undefined8 *)param_1[0x19] != (undefined8 *)0x0) {
      thunk_FUN_007104f0();
    }
    param_1[0x19] = 0;
  }
  FUN_00625980(param_1 + 0x1a);
  return;
}

