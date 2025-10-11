
void FUN_00698e50(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x40) = param_2;
  uVar1 = 0;
  if ((param_2 & 3) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_00698d90(param_1,*(undefined8 *)(param_1 + 0x48),0,uVar1);
  return;
}

