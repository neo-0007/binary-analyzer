
void FUN_007069a0(uint *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((*(long *)(param_1 + 0xe) != 0) && ((uVar1 & 1) == 0)) {
    FUN_007104f0();
    uVar1 = *param_1;
  }
  *(undefined8 *)(param_1 + 0xe) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  uVar2 = uVar1 | 1;
  if (param_4 != 0) {
    uVar2 = uVar1 & 0xfffffffe;
  }
  *param_1 = uVar2;
  return;
}

