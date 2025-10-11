
void _IO_old_init(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = stdio_needs_locking;
  *param_1 = param_2 | 0xfbad0000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = (uint)(iVar2 != 0) << 7;
  puVar1 = *(undefined8 **)(param_1 + 0x22);
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

