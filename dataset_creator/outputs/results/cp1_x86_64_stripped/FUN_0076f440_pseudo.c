
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0076f440(undefined8 param_1,ulong *param_2,code *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *local_50;
  int local_3c;
  
  if (param_2 != (ulong *)0x0) {
    uVar2 = *param_2;
    if ((uVar2 & 0xfffffffffffffffe) != 0) {
      puVar1 = (ulong *)((uVar2 & 0xfffffffffffffffe) + 8);
      *puVar1 = *puVar1 & 0xfffffffffffffffe;
    }
    local_3c = 0;
    local_50 = (ulong *)0x0;
    puVar1 = (ulong *)0x0;
    iVar8 = 0;
    do {
      iVar6 = iVar8;
      puVar5 = param_2;
      puVar4 = puVar1;
      puVar10 = (undefined8 *)(uVar2 & 0xfffffffffffffffe);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_007101b0(0x18);
        uVar7 = _UNK_0082dbd8;
        uVar3 = _DAT_0082dbd0;
        if (puVar10 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        *puVar5 = (ulong)((uint)*puVar5 & 1) | (ulong)puVar10;
        *puVar10 = param_1;
        puVar10[1] = uVar3;
        puVar10[2] = uVar7;
        return puVar10;
      }
      iVar8 = (*param_3)(param_1,*puVar10);
      if (iVar8 == 0) {
        return puVar10;
      }
      uVar9 = *puVar5 & 0xfffffffffffffffe;
      uVar2 = *(ulong *)(uVar9 + 0x10);
      uVar12 = *(ulong *)(uVar9 + 8) & 0xfffffffffffffffe;
      if ((((uVar2 != 0) && (uVar12 != 0)) && ((*(byte *)(uVar2 + 8) & 1) != 0)) &&
         ((*(byte *)(uVar12 + 8) & 1) != 0)) {
        *(ulong *)(uVar9 + 8) = *(ulong *)(uVar9 + 8) | 1;
        *(ulong *)(uVar2 + 8) = *(ulong *)(uVar2 + 8) & 0xfffffffffffffffe;
        *(ulong *)(uVar12 + 8) = *(ulong *)(uVar12 + 8) & 0xfffffffffffffffe;
        if (puVar4 != (ulong *)0x0) {
          uVar14 = *puVar4 & 0xfffffffffffffffe;
          uVar11 = *(ulong *)(uVar14 + 8);
          if ((uVar11 & 1) != 0) {
            uVar13 = *local_50 & 0xfffffffffffffffe;
            if (0 < iVar6 == 0 < local_3c) {
              *local_50 = (uint)*local_50 & 1 | uVar14;
              *(ulong *)(uVar14 + 8) = uVar11 & 0xfffffffffffffffe;
              *(ulong *)(uVar13 + 8) = *(ulong *)(uVar13 + 8) | 1;
              if (iVar6 < 0) {
                *(ulong *)(uVar13 + 8) = *(ulong *)(uVar14 + 0x10) | 1;
                *(ulong *)(uVar14 + 0x10) = uVar13;
              }
              else {
                uVar2 = *(ulong *)(uVar14 + 8);
                *(ulong *)(uVar13 + 0x10) = uVar2 & 0xfffffffffffffffe;
                *(ulong *)(uVar14 + 8) = (uint)uVar2 & 1 | uVar13;
              }
            }
            else {
              *(ulong *)(uVar14 + 8) = uVar11 | 1;
              *(ulong *)(uVar13 + 8) = *(ulong *)(uVar13 + 8) | 1;
              uVar11 = (ulong)((uint)uVar2 & 1);
              *(ulong *)(uVar9 + 8) = *(ulong *)(uVar9 + 8) & 0xfffffffffffffffe;
              if (iVar6 < 0) {
                *(ulong *)(uVar14 + 8) = uVar2 | (uint)*(undefined8 *)(uVar14 + 8) & 1;
                *(ulong *)(uVar9 + 0x10) = uVar11 | uVar14;
                *(ulong *)(uVar13 + 0x10) = uVar12;
                *(ulong *)(uVar9 + 8) = uVar13;
              }
              else {
                *(ulong *)(uVar14 + 0x10) = uVar12;
                uVar3 = *(undefined8 *)(uVar13 + 8);
                *(ulong *)(uVar9 + 8) = uVar14;
                *(ulong *)(uVar13 + 8) = uVar2 | (uint)uVar3 & 1;
                *(ulong *)(uVar9 + 0x10) = uVar11 | uVar13;
              }
              *local_50 = uVar9 | (uint)*local_50 & 1;
            }
          }
        }
      }
      if (iVar8 < 0) {
        uVar2 = puVar10[1];
        param_2 = puVar10 + 1;
      }
      else {
        uVar2 = puVar10[2];
        param_2 = puVar10 + 2;
      }
      puVar1 = puVar5;
      local_3c = iVar6;
      local_50 = puVar4;
    } while ((uVar2 & 0xfffffffffffffffe) != 0);
    puVar10 = (undefined8 *)FUN_007101b0(0x18);
    uVar7 = _UNK_0082dbd8;
    uVar3 = _DAT_0082dbd0;
    if (puVar10 != (undefined8 *)0x0) {
      *param_2 = (ulong)((uint)*param_2 & 1) | (ulong)puVar10;
      *puVar10 = param_1;
      puVar10[1] = uVar3;
      puVar10[2] = uVar7;
      if (puVar5 == param_2) {
        return puVar10;
      }
      uVar9 = *param_2 & 0xfffffffffffffffe;
      uVar2 = *(ulong *)(uVar9 + 0x10);
      uVar12 = *(ulong *)(uVar9 + 8) & 0xfffffffffffffffe;
      *(ulong *)(uVar9 + 8) = *(ulong *)(uVar9 + 8) | 1;
      if (uVar2 != 0) {
        *(ulong *)(uVar2 + 8) = *(ulong *)(uVar2 + 8) & 0xfffffffffffffffe;
      }
      if (uVar12 != 0) {
        *(ulong *)(uVar12 + 8) = *(ulong *)(uVar12 + 8) & 0xfffffffffffffffe;
      }
      uVar14 = *puVar5 & 0xfffffffffffffffe;
      uVar11 = *(ulong *)(uVar14 + 8);
      if ((uVar11 & 1) == 0) {
        return puVar10;
      }
      uVar13 = *puVar4 & 0xfffffffffffffffe;
      if (0 < iVar8 != 0 < iVar6) {
        *(ulong *)(uVar14 + 8) = uVar11 | 1;
        *(ulong *)(uVar13 + 8) = *(ulong *)(uVar13 + 8) | 1;
        uVar11 = (ulong)((uint)uVar2 & 1);
        *(ulong *)(uVar9 + 8) = *(ulong *)(uVar9 + 8) & 0xfffffffffffffffe;
        if (iVar8 < 0) {
          *(ulong *)(uVar14 + 8) = (uint)*(undefined8 *)(uVar14 + 8) & 1 | uVar2;
          *(ulong *)(uVar9 + 0x10) = uVar11 | uVar14;
          *(ulong *)(uVar13 + 0x10) = uVar12;
          *(ulong *)(uVar9 + 8) = uVar13;
        }
        else {
          *(ulong *)(uVar14 + 0x10) = uVar12;
          *(ulong *)(uVar9 + 8) = uVar14;
          *(ulong *)(uVar13 + 8) = (uint)*(undefined8 *)(uVar13 + 8) & 1 | uVar2;
          *(ulong *)(uVar9 + 0x10) = uVar11 | uVar13;
        }
        *puVar4 = uVar9 | (uint)*puVar4 & 1;
        return puVar10;
      }
      *puVar4 = (uint)*puVar4 & 1 | uVar14;
      *(ulong *)(uVar14 + 8) = uVar11 & 0xfffffffffffffffe;
      *(ulong *)(uVar13 + 8) = *(ulong *)(uVar13 + 8) | 1;
      if (iVar8 < 0) {
        *(ulong *)(uVar13 + 8) = *(ulong *)(uVar14 + 0x10) | 1;
        *(ulong *)(uVar14 + 0x10) = uVar13;
        return puVar10;
      }
      uVar2 = *(ulong *)(uVar14 + 8);
      *(ulong *)(uVar13 + 0x10) = uVar2 & 0xfffffffffffffffe;
      *(ulong *)(uVar14 + 8) = (uint)uVar2 & 1 | uVar13;
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}

