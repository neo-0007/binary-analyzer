
void _IO_default_finish(byte *param_1)

{
  undefined8 *puVar1;
  
  if ((*(void **)(param_1 + 0x38) != (void *)0x0) && ((*param_1 & 1) == 0)) {
    free(*(void **)(param_1 + 0x38));
    *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x60); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    puVar1[1] = 0;
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    free(*(void **)(param_1 + 0x48));
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
    _IO_un_link_part_0(param_1);
    return;
  }
  return;
}

