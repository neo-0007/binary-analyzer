
void FUN_00663910(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_0069d4c0();
  *param_1 = &PTR_FUN_00936628;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_1[8] = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = uVar1;
  return;
}

