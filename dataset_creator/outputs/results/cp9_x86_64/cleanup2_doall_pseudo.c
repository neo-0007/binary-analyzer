
void cleanup2_doall(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + 1;
  return;
}

