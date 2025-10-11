
undefined8 FUN_00435480(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  puVar1 = param_2 + 10;
  uVar6 = *(uint *)(param_2 + 0x1a);
  *(undefined1 *)((long)param_2 + (ulong)uVar6 + 0x50) = 0x80;
  uVar3 = (ulong)uVar6 + 1;
  puVar9 = (undefined8 *)((long)puVar1 + uVar3);
  if (uVar3 < 0x71) {
    uVar3 = 0x70 - uVar3;
  }
  else {
    lVar7 = -uVar3;
    uVar3 = lVar7 + 0x80;
    if (uVar3 < 8) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 != 0) && (*(undefined1 *)puVar9 = 0, (uVar3 & 2) != 0)) {
          *(undefined2 *)((long)puVar9 + lVar7 + 0x7e) = 0;
        }
      }
      else {
        *(undefined4 *)puVar9 = 0;
        *(undefined4 *)((long)puVar9 + lVar7 + 0x7c) = 0;
      }
    }
    else {
      *puVar9 = 0;
      *(undefined8 *)((long)puVar9 + lVar7 + 0x78) = 0;
      uVar3 = (ulong)((long)puVar9 + (uVar3 - ((ulong)(puVar9 + 1) & 0xfffffffffffffff8))) &
              0xfffffffffffffff8;
      if (7 < uVar3) {
        uVar5 = 0;
        do {
          *(undefined8 *)(((ulong)(puVar9 + 1) & 0xfffffffffffffff8) + uVar5) = 0;
          uVar5 = uVar5 + 8;
        } while (uVar5 < uVar3);
      }
    }
    FUN_00589980(param_2,puVar1,1);
    uVar3 = 0x70;
    puVar9 = puVar1;
  }
  uVar6 = (uint)uVar3;
  if (uVar6 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar6 != 0) && (*(undefined1 *)puVar9 = 0, (uVar3 & 2) != 0)) {
        *(undefined2 *)((long)puVar9 + ((uVar3 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *(undefined4 *)puVar9 = 0;
      *(undefined4 *)((long)puVar9 + ((uVar3 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    *puVar9 = 0;
    *(undefined8 *)((long)puVar9 + ((uVar3 & 0xffffffff) - 8)) = 0;
    uVar3 = (ulong)(uVar6 + ((int)puVar9 -
                            (int)(undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8)) >> 3);
    puVar9 = (undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
    }
  }
  uVar3 = param_2[8];
  param_2[0x19] =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = param_2[9];
  param_2[0x18] =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  FUN_00589980(param_2,puVar1,1);
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  uVar6 = *(uint *)((long)param_2 + 0xd4);
  if (uVar6 == 0x30) {
    puVar4 = param_1;
    do {
      uVar2 = *param_2;
      puVar8 = puVar4 + 8;
      param_2 = param_2 + 1;
      puVar4[6] = (char)((ulong)uVar2 >> 8);
      *puVar4 = (char)((ulong)uVar2 >> 0x38);
      puVar4[1] = (char)((ulong)uVar2 >> 0x30);
      puVar4[2] = (char)((ulong)uVar2 >> 0x28);
      puVar4[3] = (char)((ulong)uVar2 >> 0x20);
      puVar4[4] = (char)((ulong)uVar2 >> 0x18);
      puVar4[5] = (char)((ulong)uVar2 >> 0x10);
      puVar4[7] = (char)uVar2;
      puVar4 = puVar8;
    } while (puVar8 != param_1 + 0x30);
  }
  else if (uVar6 < 0x31) {
    if (uVar6 == 0x1c) {
      lVar7 = 0;
      puVar4 = param_1;
      do {
        uVar2 = param_2[lVar7];
        lVar7 = lVar7 + 1;
        puVar4[6] = (char)((ulong)uVar2 >> 8);
        *puVar4 = (char)((ulong)uVar2 >> 0x38);
        puVar4[1] = (char)((ulong)uVar2 >> 0x30);
        puVar4[2] = (char)((ulong)uVar2 >> 0x28);
        puVar4[3] = (char)((ulong)uVar2 >> 0x20);
        puVar4[4] = (char)((ulong)uVar2 >> 0x18);
        puVar4[5] = (char)((ulong)uVar2 >> 0x10);
        puVar4[7] = (char)uVar2;
        puVar4 = puVar4 + 8;
      } while (lVar7 != 3);
      uVar2 = param_2[3];
      param_1[0x18] = (char)((ulong)uVar2 >> 0x38);
      param_1[0x19] = (char)((ulong)uVar2 >> 0x30);
      param_1[0x1b] = (char)((ulong)uVar2 >> 0x20);
      param_1[0x1a] = (char)((ulong)uVar2 >> 0x28);
      return 1;
    }
    if (uVar6 != 0x20) {
      return 0;
    }
    lVar7 = 0;
    do {
      uVar2 = param_2[lVar7];
      lVar7 = lVar7 + 1;
      param_1[6] = (char)((ulong)uVar2 >> 8);
      *param_1 = (char)((ulong)uVar2 >> 0x38);
      param_1[1] = (char)((ulong)uVar2 >> 0x30);
      param_1[2] = (char)((ulong)uVar2 >> 0x28);
      param_1[3] = (char)((ulong)uVar2 >> 0x20);
      param_1[4] = (char)((ulong)uVar2 >> 0x18);
      param_1[5] = (char)((ulong)uVar2 >> 0x10);
      param_1[7] = (char)uVar2;
      param_1 = param_1 + 8;
    } while (lVar7 != 4);
  }
  else {
    puVar4 = param_1;
    if (uVar6 != 0x40) {
      return 0;
    }
    do {
      uVar2 = *param_2;
      puVar8 = puVar4 + 8;
      param_2 = param_2 + 1;
      puVar4[6] = (char)((ulong)uVar2 >> 8);
      *puVar4 = (char)((ulong)uVar2 >> 0x38);
      puVar4[1] = (char)((ulong)uVar2 >> 0x30);
      puVar4[2] = (char)((ulong)uVar2 >> 0x28);
      puVar4[3] = (char)((ulong)uVar2 >> 0x20);
      puVar4[4] = (char)((ulong)uVar2 >> 0x18);
      puVar4[5] = (char)((ulong)uVar2 >> 0x10);
      puVar4[7] = (char)uVar2;
      puVar4 = puVar8;
    } while (puVar8 != param_1 + 0x40);
  }
  return 1;
}

