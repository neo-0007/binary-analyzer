
void FUN_0068ce30(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8) + 0x60))();
  if (param_3 == lVar1) {
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_0066ec40(lVar1,*(uint *)(lVar1 + 0x20) | 1);
  return;
}

