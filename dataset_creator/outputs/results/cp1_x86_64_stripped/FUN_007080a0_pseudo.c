
void FUN_007080a0(uint *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  lVar1 = *(long *)(param_1 + 0x12);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((*param_1 & 0x100) != 0) {
      *param_1 = *param_1 & 0xfffffeff;
      lVar2 = *(long *)(param_1 + 6);
      *(long *)(param_1 + 6) = lVar1;
      *(long *)(param_1 + 0x12) = lVar2;
      *(long *)(param_1 + 2) = lVar1;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x16);
    }
    FUN_007104f0(lVar2);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  }
  return;
}

