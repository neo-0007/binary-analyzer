
undefined8 FUN_00568710(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = (undefined8 *)(param_2 + 7);
  uVar2 = param_2[0x17];
  *(undefined1 *)((long)param_2 + (ulong)uVar2 + 0x1c) = 0x80;
  uVar3 = (ulong)uVar2 + 1;
  if (uVar3 < 0x39) {
    uVar6 = 0x38 - uVar3;
    puVar4 = (undefined8 *)((long)puVar1 + uVar3);
  }
  else {
    if (uVar3 != 0x40) {
      uVar6 = 0;
      do {
        *(undefined1 *)((long)((long)puVar1 + uVar3) + uVar6) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x40 - uVar3);
    }
    FUN_00567150(param_2,puVar1,1);
    uVar6 = 0x38;
    puVar4 = puVar1;
  }
  uVar2 = (uint)uVar6;
  if (uVar2 < 8) {
    if ((uVar6 & 4) == 0) {
      if ((uVar2 != 0) && (*(undefined1 *)puVar4 = 0, (uVar6 & 2) != 0)) {
        *(undefined2 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *(undefined4 *)puVar4 = 0;
      *(undefined4 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    *puVar4 = 0;
    *(undefined8 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 8)) = 0;
    uVar2 = uVar2 + ((int)puVar4 - (int)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar2) {
      uVar3 = 0;
      do {
        uVar5 = (int)uVar3 + 8;
        *(undefined8 *)(((ulong)(puVar4 + 1) & 0xfffffffffffffff8) + uVar3) = 0;
        uVar3 = (ulong)uVar5;
      } while (uVar5 < uVar2);
    }
  }
  *(undefined8 *)(param_2 + 0x15) = *(undefined8 *)(param_2 + 5);
  FUN_00567150(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_004227b0(puVar1,0x40);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return 1;
}

