
void FUN_006658a0(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0069d4c0();
  param_1[0xc] = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *param_1 = &PTR_FUN_009368e8;
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0xd] = uVar5;
  uVar1 = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x84);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  param_1[0x13] = uVar4;
  *(undefined8 *)((long)param_1 + 0x84) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0xf) = uVar3;
  uVar5 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)((long)param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_2 + 0x78) = 0;
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined2 *)(param_2 + 0xa8);
  *(undefined8 *)((long)param_1 + 0x7c) = uVar5;
  *(undefined2 *)(param_1 + 0x15) = uVar2;
  uVar1 = *(undefined1 *)(param_2 + 0xaa);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 1;
  *(undefined2 *)(param_2 + 0xa8) = 0;
  *(undefined1 *)(param_2 + 0xaa) = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0xab) = *(undefined1 *)(param_2 + 0xab);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined1 *)(param_2 + 0xc0) = 0;
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  param_1[0x1b] = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = 0;
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xe0);
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  param_1[0x1d] = uVar4;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x84) = uVar5;
  *(undefined8 *)(param_2 + 0x8c) = uVar5;
  return;
}

