
void FUN_00413570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_1;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  uVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar2;
  uVar2 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar2;
  uVar2 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar2;
  uVar2 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar2;
  uVar2 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar2;
  uVar2 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar2;
  *param_1 = uVar1;
  return;
}

