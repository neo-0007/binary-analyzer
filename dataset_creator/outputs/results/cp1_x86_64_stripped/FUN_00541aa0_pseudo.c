
bool FUN_00541aa0(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      FUN_00541fa0(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                   *(undefined8 *)(param_2 + 0x28));
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x58) = uVar1;
    }
    return param_2 != 0;
  }
  return false;
}

