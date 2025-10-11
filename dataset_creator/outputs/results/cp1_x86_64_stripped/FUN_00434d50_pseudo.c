
undefined8 FUN_00434d50(undefined1 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  
  puVar1 = (undefined8 *)(param_2 + 10);
  uVar3 = param_2[0x1a];
  *(undefined1 *)((long)param_2 + (ulong)uVar3 + 0x28) = 0x80;
  uVar4 = (ulong)uVar3 + 1;
  if (uVar4 < 0x39) {
    uVar8 = 0x38 - uVar4;
    puVar6 = (undefined8 *)((long)puVar1 + uVar4);
  }
  else {
    if (uVar4 != 0x40) {
      uVar8 = 0;
      do {
        *(undefined1 *)((long)((long)puVar1 + uVar4) + uVar8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x40 - uVar4);
    }
    FUN_00584f80(param_2,puVar1,1);
    uVar8 = 0x38;
    puVar6 = puVar1;
  }
  uVar3 = (uint)uVar8;
  if (uVar3 < 8) {
    if ((uVar8 & 4) == 0) {
      if ((uVar3 != 0) && (*(undefined1 *)puVar6 = 0, (uVar8 & 2) != 0)) {
        *(undefined2 *)((long)puVar6 + ((uVar8 & 0xffffffff) - 2)) = 0;
      }
    }
    else {
      *(undefined4 *)puVar6 = 0;
      *(undefined4 *)((long)puVar6 + ((uVar8 & 0xffffffff) - 4)) = 0;
    }
  }
  else {
    *puVar6 = 0;
    *(undefined8 *)((long)puVar6 + ((uVar8 & 0xffffffff) - 8)) = 0;
    uVar3 = uVar3 + ((int)puVar6 - (int)((ulong)(puVar6 + 1) & 0xfffffffffffffff8)) & 0xfffffff8;
    if (7 < uVar3) {
      uVar4 = 0;
      do {
        uVar7 = (int)uVar4 + 8;
        *(undefined8 *)(((ulong)(puVar6 + 1) & 0xfffffffffffffff8) + uVar4) = 0;
        uVar4 = (ulong)uVar7;
      } while (uVar7 < uVar3);
    }
  }
  uVar4 = *(ulong *)(param_2 + 8);
  *(ulong *)(param_2 + 0x18) =
       uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
       (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
       (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  FUN_00584f80(param_2,puVar1,1);
  param_2[0x1a] = 0;
  FUN_004227b0(puVar1,0x40);
  uVar3 = param_2[0x1b];
  if (uVar3 == 0x1c) {
    puVar9 = param_1;
    do {
      uVar2 = *param_2;
      puVar10 = puVar9 + 4;
      param_2 = param_2 + 1;
      puVar9[2] = (char)((uint)uVar2 >> 8);
      *puVar9 = (char)((uint)uVar2 >> 0x18);
      puVar9[1] = (char)((uint)uVar2 >> 0x10);
      puVar9[3] = (char)uVar2;
      puVar9 = puVar10;
    } while (puVar10 != param_1 + 0x1c);
    uVar11 = 1;
  }
  else if (uVar3 == 0x20) {
    puVar9 = param_1;
    do {
      uVar2 = *param_2;
      puVar10 = puVar9 + 4;
      param_2 = param_2 + 1;
      puVar9[2] = (char)((uint)uVar2 >> 8);
      *puVar9 = (char)((uint)uVar2 >> 0x18);
      puVar9[1] = (char)((uint)uVar2 >> 0x10);
      puVar9[3] = (char)uVar2;
      puVar9 = puVar10;
    } while (puVar10 != param_1 + 0x20);
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
    if (uVar3 < 0x21) {
      if (uVar3 >> 2 != 0) {
        lVar5 = 0;
        do {
          uVar2 = param_2[lVar5];
          param_1[lVar5 * 4 + 2] = (char)((uint)uVar2 >> 8);
          param_1[lVar5 * 4 + 3] = (char)uVar2;
          param_1[lVar5 * 4] = (char)((uint)uVar2 >> 0x18);
          param_1[lVar5 * 4 + 1] = (char)((uint)uVar2 >> 0x10);
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < (uint)param_2[0x1b] >> 2);
      }
      uVar11 = 1;
    }
  }
  return uVar11;
}

