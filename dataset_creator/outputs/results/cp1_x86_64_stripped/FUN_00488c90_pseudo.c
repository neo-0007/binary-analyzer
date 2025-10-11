
bool FUN_00488c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x10))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x18))(param_1,param_4,param_5,param_6);
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0x10;
      iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x20))(param_1,param_7);
      return iVar1 != 0;
    }
  }
  return false;
}

