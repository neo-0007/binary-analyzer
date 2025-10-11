
undefined1  [16] FUN_00667f90(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  cVar2 = FUN_00667e30();
  if (cVar2 == '\0') {
    param_4 = 0;
    uVar4 = 0;
    lVar3 = -1;
  }
  else {
    lVar3 = FUN_006c4100(param_1 + 0x68,param_2,param_3);
    if (lVar3 == -1) {
      param_4 = 0;
      uVar4 = 0;
    }
    else {
      *(ulong *)(param_1 + 0x84) = param_4;
      *(undefined2 *)(param_1 + 0xa9) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd0);
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 8) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      uVar4 = param_4 & 0xffffffff;
      param_4 = param_4 >> 0x20;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  auVar5._8_8_ = uVar4 | param_4 << 0x20;
  auVar5._0_8_ = lVar3;
  return auVar5;
}

