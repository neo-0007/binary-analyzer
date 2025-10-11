
bool FUN_004538c0(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004ee6c0();
  return (*(int *)(*(long *)(param_2 + 8) + 0x18) == 0x494) == (bool)((byte)(uVar1 >> 2) & 1);
}

