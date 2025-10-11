
void FUN_004a8f00(undefined8 param_1,undefined8 *param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
    FUN_004ae9e0(param_1,&DAT_007e88e5,*(undefined8 *)*param_2);
    return;
  }
  FUN_004ae9e0(param_1,&DAT_007e88e0,*(undefined8 *)*param_2);
  return;
}

