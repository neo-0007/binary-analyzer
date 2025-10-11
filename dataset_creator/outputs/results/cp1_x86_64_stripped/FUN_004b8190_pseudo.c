
undefined8 FUN_004b8190(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)((long)param_1 + 0xc) < 1) {
    lVar1 = FUN_004b8000(param_1,1);
    if (lVar1 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(long *)*param_1 = param_2;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  return 1;
}

