
uint FUN_00705100(uint *param_1)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[0x1c];
  if (uVar4 != 0xffffffff) {
    uVar3 = 0;
    if ((*param_1 & 0x808) == 0x800) {
      if ((int)param_1[0x30] < 1) {
        uVar3 = FUN_00704f80(param_1,*(long *)(param_1 + 8),
                             *(long *)(param_1 + 10) - *(long *)(param_1 + 8));
      }
      else {
        lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
        uVar3 = FUN_00701350(param_1,lVar1,*(long *)(*(long *)(param_1 + 0x28) + 0x20) - lVar1 >> 2)
        ;
      }
    }
    uVar4 = 0;
    FUN_007080a0(param_1);
    if ((param_1[0x1d] & 0x20) == 0) {
      lVar1 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar1 - 0x93f160U) {
        FUN_00703130();
      }
      uVar4 = (**(code **)(lVar1 + 0x88))(param_1);
    }
    if (0 < (int)param_1[0x30]) {
      if (*(long *)(*(long *)(param_1 + 0x28) + 0x40) != 0) {
        FUN_006ffe00(param_1);
      }
      FUN_006ff050(param_1,0,0,0);
      pauVar2 = *(undefined1 (**) [16])(param_1 + 0x28);
      *pauVar2 = (undefined1  [16])0x0;
      pauVar2[1] = (undefined1  [16])0x0;
      pauVar2[2] = (undefined1  [16])0x0;
    }
    FUN_007069a0(param_1,0,0,0);
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
    FUN_007061c0(param_1);
    *param_1 = 0xfbad240c;
    param_1[0x1c] = 0xffffffff;
    if (uVar4 == 0) {
      uVar4 = uVar3;
    }
    param_1[0x24] = 0xffffffff;
    param_1[0x25] = 0xffffffff;
  }
  return uVar4;
}

