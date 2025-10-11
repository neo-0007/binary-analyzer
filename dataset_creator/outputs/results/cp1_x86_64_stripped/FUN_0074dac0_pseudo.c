
void FUN_0074dac0(undefined1 (*param_1) [16],ulong param_2)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  
  if (param_2 < 0x10) {
    uVar1 = (uint)param_2;
    if (7 < uVar1) {
      *(undefined8 *)*param_1 = 0;
      *(undefined8 *)(param_1[-1] + param_2 + 8) = 0;
      return;
    }
    if (3 < uVar1) {
      *(undefined4 *)*param_1 = 0;
      *(undefined4 *)(param_1[-1] + param_2 + 0xc) = 0;
      return;
    }
    if (1 < uVar1) {
      *(undefined2 *)*param_1 = 0;
      param_1[-1][param_2 + 0xf] = 0;
      return;
    }
    if (uVar1 != 0) {
      (*param_1)[0] = 0;
      return;
    }
  }
  else {
    if (param_2 < 0x21) {
      *(undefined1 (*) [16])(param_1[-1] + param_2) = (undefined1  [16])0x0;
      *param_1 = (undefined1  [16])0x0;
      return;
    }
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    if (param_2 < 0x41) {
      *(undefined1 (*) [16])(param_1[-2] + param_2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1[-1] + param_2) = (undefined1  [16])0x0;
      return;
    }
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    if (0x80 < param_2) {
      pauVar2 = (undefined1 (*) [16])((ulong)(param_1 + 4) & 0xffffffffffffffe0);
      do {
        *pauVar2 = (undefined1  [16])0x0;
        pauVar2[1] = (undefined1  [16])0x0;
        pauVar2[2] = (undefined1  [16])0x0;
        pauVar2[3] = (undefined1  [16])0x0;
        pauVar2 = pauVar2 + 4;
      } while (pauVar2 < (undefined1 (*) [16])(param_1[-4] + param_2));
    }
    *(undefined1 (*) [16])(param_1[-4] + param_2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1[-3] + param_2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1[-2] + param_2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1[-1] + param_2) = (undefined1  [16])0x0;
  }
  return;
}

