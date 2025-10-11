
void FUN_006a3f70(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(lVar1 + 0x20);
  param_2[1] = *(undefined8 *)(lVar1 + 0x28);
  return;
}

