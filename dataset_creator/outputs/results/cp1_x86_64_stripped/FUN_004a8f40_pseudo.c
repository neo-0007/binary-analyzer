
void FUN_004a8f40(undefined8 param_1,undefined8 *param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
    FUN_004ae9e0(param_1,&DAT_007e88ea,*(undefined4 *)*param_2);
    return;
  }
  FUN_004ae9e0(param_1,&DAT_007e4051,*(undefined4 *)*param_2);
  return;
}

