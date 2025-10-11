
void FUN_00518830(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    return;
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 1;
  iVar1 = FUN_00435f80(*param_2,param_1);
  if (0 < iVar1) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfe;
  }
  return;
}

