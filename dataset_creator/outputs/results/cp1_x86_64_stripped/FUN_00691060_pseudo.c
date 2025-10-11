
void FUN_00691060(long *param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & 0x4a;
  if ((uVar1 != 0x40) && (uVar1 != 8)) {
    FUN_00690e50(param_1,(long)param_2);
    return;
  }
  FUN_00690e50(param_1,param_2);
  return;
}

