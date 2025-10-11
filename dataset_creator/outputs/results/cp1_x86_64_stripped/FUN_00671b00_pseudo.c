
void FUN_00671b00(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = *(long *)(lVar1 + -0x18);
  *param_1 = lVar1;
  *(long *)((long)param_1 + lVar3) = lVar2;
  param_1[1] = 0;
  FUN_0066f450((long)param_1 + *(long *)(lVar1 + -0x18),param_3);
  return;
}

