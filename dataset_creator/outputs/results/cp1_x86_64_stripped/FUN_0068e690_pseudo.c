
void FUN_0068e690(long *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & 0x4a;
  if ((uVar1 != 0x40) && (uVar1 != 8)) {
    FUN_0068e410(param_1,(long)param_2);
    return;
  }
  FUN_0068e410(param_1,param_2);
  return;
}

