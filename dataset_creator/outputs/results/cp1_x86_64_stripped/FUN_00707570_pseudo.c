
void FUN_00707570(byte *param_1)

{
  undefined8 *puVar1;
  
  if ((*(long *)(param_1 + 0x38) != 0) && ((*param_1 & 1) == 0)) {
    FUN_007104f0();
    *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    puVar1[1] = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_007104f0();
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  if ((*param_1 & 0x80) != 0) {
    FUN_00705f80(param_1);
    return;
  }
  return;
}

