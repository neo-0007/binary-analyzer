
long FUN_00624010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + -0x80) = 0;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  uVar1 = FUN_00623fa0();
  *(undefined8 *)(param_1 + -0x60) = uVar1;
  uVar1 = FUN_00623f20();
  *(undefined8 *)(param_1 + -0x58) = uVar1;
  *(undefined8 *)(param_1 + -0x20) = 0x474e5543432b2b00;
  *(code **)(param_1 + -0x18) = FUN_00623fd0;
  return param_1 + -0x80;
}

