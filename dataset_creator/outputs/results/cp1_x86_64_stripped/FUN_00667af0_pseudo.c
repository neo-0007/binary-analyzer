
void FUN_00667af0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0xa0);
  if (uVar2 < 0x1fffffffffffffff) {
    uVar1 = thunk_FUN_006c31f0(uVar2 << 2);
    *(undefined1 *)(param_1 + 0xa8) = 1;
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    return;
  }
  FUN_00403cf5();
  if (*(char *)(uVar2 + 0xa8) != '\0') {
    if (*(long *)(uVar2 + 0x98) != 0) {
      thunk_FUN_007104f0();
    }
    *(undefined8 *)(uVar2 + 0x98) = 0;
    *(undefined1 *)(uVar2 + 0xa8) = 0;
  }
  if (*(long *)(uVar2 + 0xd0) != 0) {
    thunk_FUN_007104f0();
  }
  *(undefined8 *)(uVar2 + 0xd0) = 0;
  *(undefined8 *)(uVar2 + 0xd8) = 0;
  *(undefined8 *)(uVar2 + 0xe0) = 0;
  *(undefined8 *)(uVar2 + 0xe8) = 0;
  return;
}

