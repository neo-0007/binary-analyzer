
void FUN_006fffa0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2;
  if ((uVar1 & 0x800) != 0) {
    FUN_006ff780(param_2);
    uVar1 = *param_2;
  }
  plVar2 = *(long **)(param_2 + 0x28);
  if ((uVar1 & 0x100) == 0) {
    uVar3 = (undefined4)(*plVar2 - plVar2[2] >> 2);
  }
  else {
    uVar3 = (undefined4)(*plVar2 - plVar2[1] >> 2);
  }
  *(undefined4 *)(param_1 + 2) = uVar3;
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 **)(param_2 + 0x18) = param_1;
  return;
}

