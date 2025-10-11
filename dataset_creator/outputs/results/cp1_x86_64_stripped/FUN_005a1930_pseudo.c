
void FUN_005a1930(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    thunk_FUN_004a2270();
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}

