
char ecx_size(long param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
    return (iVar1 != 0x40b) + '8';
  }
  return ' ';
}

