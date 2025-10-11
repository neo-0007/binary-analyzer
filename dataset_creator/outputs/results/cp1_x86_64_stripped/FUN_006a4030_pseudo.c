
void FUN_006a4030(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(lVar1 + 0x90);
  param_2[1] = *(undefined8 *)(lVar1 + 0x98);
  param_2[2] = *(undefined8 *)(lVar1 + 0xa0);
  param_2[3] = *(undefined8 *)(lVar1 + 0xa8);
  param_2[4] = *(undefined8 *)(lVar1 + 0xb0);
  param_2[5] = *(undefined8 *)(lVar1 + 0xb8);
  param_2[6] = *(undefined8 *)(lVar1 + 0xc0);
  return;
}

