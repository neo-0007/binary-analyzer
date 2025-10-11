
long FUN_0066c630(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_0066beb0();
  FUN_0069dcb0(param_1,param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = uVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x70) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 1;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  uVar1 = *(undefined1 *)(param_2 + 0xa8);
  *(undefined1 *)(param_2 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa8) = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  uVar1 = *(undefined1 *)(param_2 + 0xa9);
  *(undefined1 *)(param_2 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xa9) = uVar1;
  uVar1 = *(undefined1 *)(param_2 + 0xaa);
  *(undefined1 *)(param_2 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0xaa) = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  uVar1 = *(undefined1 *)(param_2 + 0xc0);
  *(undefined1 *)(param_2 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc0) = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x84) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x8c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return param_1;
}

