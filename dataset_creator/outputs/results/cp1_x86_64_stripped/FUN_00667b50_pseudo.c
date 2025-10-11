
void FUN_00667b50(long param_1)

{
  if (*(char *)(param_1 + 0xa8) != '\0') {
    if (*(long *)(param_1 + 0x98) != 0) {
      thunk_FUN_007104f0();
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    thunk_FUN_007104f0();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

