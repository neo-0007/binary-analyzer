
void FUN_007ab9b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_2 + 0x18) & 0xf000;
  if (uVar4 == 0x4000) {
    *param_1 = 0;
    return;
  }
  if (uVar4 != 0x8000) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  *param_1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  param_1[2] = *(undefined8 *)(param_2 + 0x58);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return;
}

