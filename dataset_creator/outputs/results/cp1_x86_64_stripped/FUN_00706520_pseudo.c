
void FUN_00706520(uint *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x12);
  uVar2 = uVar1;
  if ((*param_1 & 0x100) != 0) {
    *param_1 = *param_1 & 0xfffffeff;
    uVar2 = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 6) = uVar1;
    *(undefined8 *)(param_1 + 0x12) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x16);
  }
  FUN_007104f0(uVar2);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  return;
}

