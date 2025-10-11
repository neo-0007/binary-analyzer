
bool BIO_ADDR_make(undefined8 *param_1,short *param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = *param_2;
  if (sVar1 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 4);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar2;
    return true;
  }
  if (sVar1 != 10) {
    if (sVar1 == 1) {
      uVar2 = *(undefined8 *)(param_2 + 4);
      *param_1 = *(undefined8 *)param_2;
      param_1[1] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      param_1[2] = *(undefined8 *)(param_2 + 8);
      param_1[3] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x14);
      param_1[4] = *(undefined8 *)(param_2 + 0x10);
      param_1[5] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x1c);
      param_1[6] = *(undefined8 *)(param_2 + 0x18);
      param_1[7] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x24);
      param_1[8] = *(undefined8 *)(param_2 + 0x20);
      param_1[9] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x2c);
      param_1[10] = *(undefined8 *)(param_2 + 0x28);
      param_1[0xb] = uVar2;
      param_1[0xc] = *(undefined8 *)(param_2 + 0x30);
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x34);
      *(short *)((long)param_1 + 0x6c) = param_2[0x36];
    }
    return sVar1 == 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 4);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar2;
  param_1[2] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0xc);
  return true;
}

