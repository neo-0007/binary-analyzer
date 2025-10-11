
void FUN_00663d10(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_0069dc60();
  *param_1 = &PTR_FUN_009366a8;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_1[8] = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = uVar1;
  return;
}

