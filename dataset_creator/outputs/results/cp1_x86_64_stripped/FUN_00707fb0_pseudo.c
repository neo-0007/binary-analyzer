
int FUN_00707fb0(long param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 == (uint *)0x0) {
    return -1;
  }
  if ((*puVar1 & 0x100) == 0) {
    return *(int *)(param_1 + 0x10) - ((int)*(undefined8 *)(puVar1 + 2) - puVar1[6]);
  }
  return *(int *)(param_1 + 0x10) - ((int)*(undefined8 *)(puVar1 + 2) - puVar1[4]);
}

