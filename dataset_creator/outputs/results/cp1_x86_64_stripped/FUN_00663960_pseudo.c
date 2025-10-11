
long FUN_00663960(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_0069d510();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return param_1;
}

