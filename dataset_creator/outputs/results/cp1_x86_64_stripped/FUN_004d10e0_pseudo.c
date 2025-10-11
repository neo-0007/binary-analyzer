
void FUN_004d10e0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar1 = *param_1 ^ uVar2;
  uVar3 = uVar2 << 4 ^ param_1[1];
  uVar2 = (uVar1 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 0x10 ^ uVar1;
  uVar2 = (uVar3 >> 2 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 2 ^ uVar3;
  uVar2 = (uVar1 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = (uVar3 >> 1 ^ uVar1) & 0x55555555;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar2 * 2 ^ uVar3;
  FUN_004cfd60(param_1,param_2,1);
  FUN_004cfd60(param_1,param_3,0);
  FUN_004cfd60(param_1,param_4,1);
  uVar2 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar1 = *param_1 ^ uVar2;
  uVar3 = uVar2 * 2 ^ param_1[1];
  uVar2 = (uVar1 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 8 ^ uVar1;
  uVar2 = (uVar3 >> 2 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 2 ^ uVar3;
  uVar2 = (uVar1 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 0x10;
  uVar2 = (uVar3 >> 4 ^ uVar1) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar2 << 4 ^ uVar3;
  return;
}

