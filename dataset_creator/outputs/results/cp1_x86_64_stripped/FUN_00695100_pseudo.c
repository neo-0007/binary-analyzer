
void FUN_00695100(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_0069d4c0();
  *param_1 = &PTR_FUN_009380c8;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = param_1 + 0xb;
  if (*(long *)(param_2 + 0x48) == param_2 + 0x58) {
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    param_1[0xc] = uVar1;
  }
  else {
    param_1[9] = *(long *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(long *)(param_2 + 0x48) = param_2 + 0x58;
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[10] = uVar1;
  *(undefined1 *)(param_2 + 0x58) = 0;
  return;
}

