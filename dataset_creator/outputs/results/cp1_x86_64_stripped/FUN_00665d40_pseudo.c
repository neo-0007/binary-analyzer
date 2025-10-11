
void FUN_00665d40(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    return;
  }
  uVar1 = thunk_FUN_006c31f0(*(undefined8 *)(param_1 + 0xa0));
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  return;
}

