
uint FUN_00440ab0(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    uVar1 = FUN_00498be0(param_2,param_3 * 8,param_1 + 0xc0);
  }
  else {
    uVar1 = FUN_00498c50();
  }
  FUN_004348c0(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x68) = 0x24;
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x250);
  return ~uVar1 >> 0x1f;
}

