
void FUN_0068ccf0(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *param_1 = lVar1;
  param_1 = (long *)((long)param_1 + *(long *)(lVar1 + -0x18));
  *param_1 = lVar2;
  FUN_0066f450(param_1,param_3);
  return;
}

