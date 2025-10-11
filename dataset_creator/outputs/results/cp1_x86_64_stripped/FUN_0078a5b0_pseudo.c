
void FUN_0078a5b0(long param_1,char param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (*(long *)(puVar1 + -0x10) != 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      FUN_007104f0(*(undefined8 *)(puVar1 + uVar2 * 0x10 + 8));
    } while (uVar2 < *(ulong *)(puVar1 + -0x10));
  }
  if (puVar1 != &DAT_009458b0) {
    FUN_007104f0(puVar1 + -0x10);
  }
  if (param_2 == '\0') {
    return;
  }
  FUN_007104f0(*(undefined8 *)(param_1 + 0x9c0));
  return;
}

