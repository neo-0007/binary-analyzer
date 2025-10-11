
void _IO_switch_to_main_wget_area(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *param_1 = *param_1 & 0xfffffeff;
  uVar3 = puVar1[8];
  uVar4 = puVar1[10];
  puVar1[10] = puVar1[1];
  uVar2 = puVar1[2];
  puVar1[2] = uVar3;
  puVar1[8] = uVar2;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  return;
}

