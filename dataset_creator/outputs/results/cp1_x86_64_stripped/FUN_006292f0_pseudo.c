
void FUN_006292f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00933f98;
  if (*(char *)(param_1 + 0x13) != '\0') {
    if (param_1[2] != 0) {
      thunk_FUN_007104f0();
    }
    if (param_1[6] != 0) {
      thunk_FUN_007104f0();
    }
    if (param_1[8] != 0) {
      thunk_FUN_007104f0();
    }
    if (param_1[10] != 0) {
      thunk_FUN_007104f0();
    }
  }
  FUN_00625090(param_1);
  return;
}

