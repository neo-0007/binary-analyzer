
void FUN_005b2c70(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 == 2) {
    (**(code **)(param_1 + 0x18))();
    iVar1 = *(int *)(param_1 + 0xf0);
  }
  if (iVar1 != 0) {
    return;
  }
  FUN_005b2610(param_1,*(undefined4 *)(param_1 + 0x80),0,0,0);
  return;
}

