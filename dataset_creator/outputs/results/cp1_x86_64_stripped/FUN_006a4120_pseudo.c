
void FUN_006a4120(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(lVar1 + 0x128);
  param_2[1] = *(undefined8 *)(lVar1 + 0x130);
  param_2[2] = *(undefined8 *)(lVar1 + 0x138);
  param_2[3] = *(undefined8 *)(lVar1 + 0x140);
  param_2[4] = *(undefined8 *)(lVar1 + 0x148);
  param_2[5] = *(undefined8 *)(lVar1 + 0x150);
  param_2[6] = *(undefined8 *)(lVar1 + 0x158);
  param_2[7] = *(undefined8 *)(lVar1 + 0x160);
  param_2[8] = *(undefined8 *)(lVar1 + 0x168);
  param_2[9] = *(undefined8 *)(lVar1 + 0x170);
  param_2[10] = *(undefined8 *)(lVar1 + 0x178);
  param_2[0xb] = *(undefined8 *)(lVar1 + 0x180);
  return;
}

