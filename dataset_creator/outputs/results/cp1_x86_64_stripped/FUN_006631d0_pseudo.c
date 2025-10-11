
void FUN_006631d0(long param_1,int param_2)

{
  if (param_2 == -1) {
    if (*(int *)(param_1 + 0x48) != -1) {
      FUN_006fe9b0(*(int *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    return;
  }
  FUN_006fe9b0(param_2,*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}

