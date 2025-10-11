
void FUN_00694750(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_0069f220(param_1 + 0x48,0,*(undefined8 *)(param_1 + 0x50),*param_2,param_2[1]);
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0x40) & 3) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_00694640(param_1,*(undefined8 *)(param_1 + 0x48),0,uVar1);
  return;
}

