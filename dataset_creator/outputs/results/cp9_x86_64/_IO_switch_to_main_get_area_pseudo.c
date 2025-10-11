
void _IO_switch_to_main_get_area(uint *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x12);
  uVar3 = *(undefined8 *)(param_1 + 0x16);
  *param_1 = *param_1 & 0xfffffeff;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 4);
  uVar1 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar3;
  return;
}

