
void FUN_00700110(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (*(long *)(param_1 + 0x12) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    uVar2 = puVar1[8];
    uVar4 = uVar2;
    if ((*param_1 & 0x100) != 0) {
      *param_1 = *param_1 & 0xfffffeff;
      uVar4 = puVar1[1];
      *puVar1 = uVar2;
      puVar1[1] = puVar1[10];
      puVar1[10] = uVar4;
      uVar4 = puVar1[2];
      puVar1[2] = uVar2;
      puVar1[8] = uVar4;
    }
    FUN_007104f0(uVar4);
    lVar3 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined1 (*) [16])(lVar3 + 0x40) = (undefined1  [16])0x0;
  }
  return;
}

