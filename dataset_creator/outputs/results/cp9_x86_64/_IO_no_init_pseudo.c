
void _IO_no_init(uint *param_1,uint param_2,uint param_3,undefined1 (*param_4) [16],
                undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_1 = param_2 | 0xfbad0000;
  iVar2 = stdio_needs_locking;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = (uint)(iVar2 != 0) << 7;
  puVar1 = *(undefined8 **)(param_1 + 0x22);
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  param_1[0x30] = param_3;
  if (-1 < (int)param_3) {
    *(undefined1 (**) [16])(param_1 + 0x28) = param_4;
    *(undefined8 *)param_4[5] = 0;
    *(undefined8 *)param_4[0xe] = param_5;
    *param_4 = (undefined1  [16])0x0;
    param_4[1] = (undefined1  [16])0x0;
    param_4[2] = (undefined1  [16])0x0;
    param_4[3] = (undefined1  [16])0x0;
    param_4[4] = (undefined1  [16])0x0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    return;
  }
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return;
}

