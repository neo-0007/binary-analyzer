
undefined8 FUN_00434750(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = param_2 + 7;
  uVar2 = param_2[0x17];
  *(undefined1 *)((long)param_2 + (ulong)uVar2 + 0x1c) = 0x80;
  uVar3 = (ulong)uVar2 + 1;
  if (uVar3 < 0x39) {
    uVar6 = 0x38 - uVar3;
    puVar4 = (uint *)((long)puVar1 + uVar3);
  }
  else {
    if (uVar3 != 0x40) {
      uVar6 = 0;
      do {
        *(undefined1 *)((long)((long)puVar1 + uVar3) + uVar6) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x40 - uVar3);
    }
    FUN_00578400(param_2,puVar1,1);
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
      *puVar4 = 0;
      *(undefined4 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    puVar4[0] = 0;
    puVar4[1] = 0;
    *(undefined8 *)((long)puVar4 + ((uVar6 & 0xffffffff) - 8)) = 0;
    uVar2 = uVar2 + ((int)puVar4 - (int)((ulong)(puVar4 + 2) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar2) {
      uVar3 = 0;
      do {
        uVar5 = (int)uVar3 + 8;
        *(undefined8 *)(((ulong)(puVar4 + 2) & 0xfffffffffffffff8) + uVar3) = 0;
        uVar3 = (ulong)uVar5;
      } while (uVar5 < uVar2);
    }
  }
  uVar3 = *(ulong *)(param_2 + 5);
  *(ulong *)(param_2 + 0x15) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  FUN_00578400(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_004227b0(puVar1,0x40);
  uVar2 = *param_2;
  *param_1 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[1];
  param_1[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[2];
  param_1[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[3];
  param_1[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[4];
  param_1[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return 1;
}

