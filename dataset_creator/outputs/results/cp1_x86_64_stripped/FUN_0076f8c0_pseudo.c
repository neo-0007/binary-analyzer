
/* WARNING: Removing unreachable block (ram,0x0076f8f4) */

undefined8 * FUN_0076f8c0(undefined8 param_1,ulong *param_2,code *param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long in_FS_OFFSET;
  undefined1 auStack_1c8 [8];
  undefined1 local_1c0 [336];
  ulong *local_70;
  ulong local_68;
  code *local_60;
  undefined1 *local_58;
  int local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar9 = auStack_1c8;
  local_58 = local_1c0;
  puVar12 = auStack_1c8;
  local_60 = param_3;
  if ((param_2 == (ulong *)0x0) ||
     (puVar15 = (undefined8 *)(*param_2 & 0xfffffffffffffffe), puVar12 = auStack_1c8,
     puVar15 == (undefined8 *)0x0)) {
LAB_0076f995:
    puVar16 = (undefined8 *)0x0;
    goto LAB_0076f998;
  }
  local_4c = 0x28;
  uVar11 = 0;
  puVar16 = puVar15;
  while( true ) {
    pcVar7 = local_60;
    uVar1 = *puVar15;
    uVar13 = uVar11 & 0xffffffff;
    *(undefined8 *)(puVar9 + -8) = 0x76f957;
    iVar2 = (*pcVar7)(param_1,uVar1);
    if (iVar2 == 0) break;
    if (local_4c == (int)uVar11) {
      local_4c = local_4c + 0x14;
      uVar13 = (long)local_4c * 8 + 0x17;
      for (puVar12 = puVar9; puVar12 != puVar9 + -(uVar13 & 0xfffffffffffff000);
          puVar12 = puVar12 + -0x1000) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      uVar13 = (ulong)((uint)uVar13 & 0xff0);
      lVar14 = -uVar13;
      puVar9 = puVar12 + lVar14;
      if (uVar13 != 0) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      local_68 = CONCAT44(local_68._4_4_,iVar2);
      *(undefined8 *)(puVar12 + lVar14 + -8) = 0x76fa49;
      local_58 = (undefined1 *)
                 thunk_FUN_00713a50((ulong)(puVar12 + lVar14 + 0xf) & 0xfffffffffffffff0,local_58,
                                    uVar11 * 8);
      iVar2 = (int)local_68;
    }
    *(ulong **)(local_58 + uVar11 * 8) = param_2;
    puVar16 = (undefined8 *)(*param_2 & 0xfffffffffffffffe);
    if (iVar2 < 0) {
      param_2 = puVar16 + 1;
      puVar15 = (undefined8 *)(puVar16[1] & 0xfffffffffffffffe);
    }
    else {
      puVar15 = (undefined8 *)puVar16[2];
      param_2 = puVar16 + 2;
    }
    uVar11 = uVar11 + 1;
    puVar12 = puVar9;
    if (puVar15 == (undefined8 *)0x0) goto LAB_0076f995;
  }
  uVar4 = *param_2;
  puVar17 = (undefined8 *)(uVar4 & 0xfffffffffffffffe);
  uVar3 = puVar17[1] & 0xfffffffffffffffe;
  puVar15 = puVar17;
  if (puVar17[2] == 0) {
    puVar12 = puVar9;
    if (uVar3 != 0) goto LAB_0076fb6c;
  }
  else if (uVar3 != 0) {
    pcVar7 = (code *)((long)(int)uVar11 << 3);
    puVar5 = param_2;
    puVar18 = puVar17 + 2;
    while( true ) {
      if (local_4c == (int)uVar13) {
        local_4c = local_4c + 0x14;
        uVar11 = (long)local_4c * 8 + 0x17;
        puVar12 = puVar9 + -(uVar11 & 0xfffffffffffff000);
        for (; puVar9 != puVar12; puVar9 = puVar9 + -0x1000) {
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        }
        uVar11 = (ulong)((uint)uVar11 & 0xff0);
        lVar14 = -uVar11;
        if (uVar11 != 0) {
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        }
        *(undefined8 *)(puVar9 + lVar14 + -8) = 0x76fb35;
        local_70 = puVar5;
        local_68 = uVar4;
        local_60 = pcVar7;
        local_58 = (undefined1 *)
                   thunk_FUN_00713a50((ulong)(puVar9 + lVar14 + 0xf) & 0xfffffffffffffff0,local_58);
        puVar15 = (undefined8 *)(*puVar18 & 0xfffffffffffffffe);
        *(ulong **)(local_58 + (long)local_60) = local_70;
        uVar11 = puVar15[1];
        pcVar7 = local_60;
        puVar9 = puVar9 + lVar14;
        uVar4 = local_68;
      }
      else {
        puVar15 = (undefined8 *)(*puVar18 & 0xfffffffffffffffe);
        *(ulong **)(local_58 + (long)pcVar7) = puVar5;
        uVar11 = puVar15[1];
      }
      uVar13 = (ulong)((int)uVar13 + 1);
      if ((uVar11 & 0xfffffffffffffffe) == 0) break;
      pcVar7 = pcVar7 + 8;
      puVar5 = puVar18;
      puVar18 = puVar15 + 1;
    }
  }
  uVar3 = puVar15[2];
  puVar12 = puVar9;
LAB_0076fb6c:
  iVar2 = (int)uVar13;
  if (iVar2 == 0) {
    *param_2 = (uint)uVar4 & 1 | uVar3;
  }
  else {
    uVar11 = **(ulong **)(local_58 + (long)iVar2 * 8 + -8) & 0xfffffffffffffffe;
    if (puVar15 == *(undefined8 **)(uVar11 + 0x10)) {
      *(ulong *)(uVar11 + 0x10) = uVar3;
    }
    else {
      *(ulong *)(uVar11 + 8) = (uint)*(undefined8 *)(uVar11 + 8) & 1 | uVar3;
    }
  }
  if (puVar17 != puVar15) {
    *puVar17 = *puVar15;
  }
  if ((*(byte *)(puVar15 + 1) & 1) == 0) {
    uVar11 = uVar3;
    if (iVar2 == 0) {
      if (uVar3 == 0) goto LAB_0076fcad;
      uVar13 = *(ulong *)(uVar3 + 8);
    }
    else {
      do {
        iVar2 = (int)uVar13;
        if ((uVar11 != 0) && (uVar13 = *(ulong *)(uVar11 + 8), uVar3 = uVar11, (uVar13 & 1) != 0))
        goto LAB_0076fea7;
        lVar14 = (long)iVar2;
        puVar5 = *(ulong **)(local_58 + lVar14 * 8 + -8);
        uVar3 = *puVar5 & 0xfffffffffffffffe;
        uVar13 = *(ulong *)(uVar3 + 8);
        uVar4 = uVar13 & 0xfffffffffffffffe;
        uVar10 = (uint)*puVar5;
        if (uVar4 == uVar11) {
          uVar11 = *(ulong *)(uVar3 + 0x10);
          uVar13 = *(ulong *)(uVar11 + 8);
          uVar4 = uVar11;
          if ((uVar13 & 1) != 0) {
            iVar2 = iVar2 + 1;
            *(ulong *)(uVar11 + 8) = uVar13 & 0xfffffffffffffffe;
            *(ulong *)(uVar3 + 8) = *(ulong *)(uVar3 + 8) | 1;
            uVar13 = *(ulong *)(uVar11 + 8);
            uVar4 = uVar13 & 0xfffffffffffffffe;
            *(ulong *)(uVar3 + 0x10) = uVar4;
            *(ulong *)(uVar11 + 8) = (uint)uVar13 & 1 | uVar3;
            *puVar5 = uVar10 & 1 | uVar11;
            puVar5 = (ulong *)(uVar11 + 8);
            *(ulong **)(local_58 + lVar14 * 8) = puVar5;
            uVar13 = *(ulong *)(uVar4 + 8);
          }
          uVar11 = uVar13 & 0xfffffffffffffffe;
          if ((uVar11 == 0) || (uVar6 = *(ulong *)(uVar11 + 8), (uVar6 & 1) == 0)) {
            lVar14 = *(long *)(uVar4 + 0x10);
            if ((lVar14 == 0) || ((*(byte *)(lVar14 + 8) & 1) == 0)) {
              *(ulong *)(uVar4 + 8) = uVar13 | 1;
              goto LAB_0076fd18;
            }
          }
          else {
            lVar14 = *(long *)(uVar4 + 0x10);
            if ((lVar14 == 0) || ((*(byte *)(lVar14 + 8) & 1) == 0)) {
              if ((*(byte *)(uVar3 + 8) & 1) == 0) {
                uVar13 = uVar6 & 0xfffffffffffffffe;
              }
              else {
                uVar13 = uVar6 | 1;
              }
              *(ulong *)(uVar11 + 8) = uVar13;
              uVar1 = *(undefined8 *)(uVar4 + 8);
              *(ulong *)(uVar3 + 0x10) = uVar6 & 0xfffffffffffffffe;
              *(ulong *)(uVar4 + 8) = (ulong)((uint)uVar1 & 1) | *(ulong *)(uVar11 + 0x10);
              *(ulong *)(uVar11 + 0x10) = uVar4;
              *(ulong *)(uVar11 + 8) = (uint)*(undefined8 *)(uVar11 + 8) & 1 | uVar3;
              goto LAB_0076fc9c;
            }
          }
          if ((*(byte *)(uVar3 + 8) & 1) != 0) {
            uVar11 = uVar13 | 1;
          }
          *(ulong *)(uVar4 + 8) = uVar11;
          *(ulong *)(uVar3 + 8) = *(ulong *)(uVar3 + 8) & 0xfffffffffffffffe;
          *(ulong *)(lVar14 + 8) = *(ulong *)(lVar14 + 8) & 0xfffffffffffffffe;
          uVar11 = *(ulong *)(uVar4 + 8);
          *(ulong *)(uVar3 + 0x10) = uVar11 & 0xfffffffffffffffe;
          *(ulong *)(uVar4 + 8) = (uint)uVar11 & 1 | uVar3;
          *puVar5 = uVar4 | (uint)*puVar5 & 1;
          goto LAB_0076fcad;
        }
        uVar6 = *(ulong *)(uVar4 + 8);
        if ((uVar6 & 1) != 0) {
          uVar11 = *(ulong *)(uVar4 + 0x10);
          iVar2 = iVar2 + 1;
          *(ulong *)(uVar4 + 8) = uVar6 & 0xfffffffffffffffe;
          uVar13 = uVar11 | 1;
          *(ulong *)(uVar3 + 8) = uVar13;
          *(ulong *)(uVar4 + 0x10) = uVar3;
          *puVar5 = uVar10 & 1 | uVar4;
          puVar5 = (ulong *)(uVar4 + 0x10);
          *(ulong **)(local_58 + lVar14 * 8) = puVar5;
          uVar4 = uVar11 & 0xfffffffffffffffe;
          uVar6 = *(ulong *)(uVar4 + 8);
        }
        uVar11 = *(ulong *)(uVar4 + 0x10);
        if ((uVar11 != 0) && (uVar8 = *(ulong *)(uVar11 + 8), (uVar8 & 1) != 0)) {
          if (((uVar6 & 0xfffffffffffffffe) == 0) ||
             ((*(byte *)((uVar6 & 0xfffffffffffffffe) + 8) & 1) == 0)) {
            uVar6 = uVar8 & 0xfffffffffffffffe;
            if ((uVar13 & 1) != 0) {
              uVar6 = uVar8 | 1;
            }
            *(ulong *)(uVar11 + 8) = uVar6;
            *(ulong *)(uVar3 + 8) =
                 (ulong)((uint)*(undefined8 *)(uVar3 + 8) & 1) | *(ulong *)(uVar11 + 0x10);
            uVar13 = *(ulong *)(uVar11 + 8);
            *(ulong *)(uVar4 + 0x10) = uVar13 & 0xfffffffffffffffe;
            *(ulong *)(uVar11 + 8) = (uint)uVar13 & 1 | uVar4;
            *(ulong *)(uVar11 + 0x10) = uVar3;
LAB_0076fc9c:
            *puVar5 = (uint)*puVar5 & 1 | uVar11;
            *(ulong *)(uVar3 + 8) = *(ulong *)(uVar3 + 8) & 0xfffffffffffffffe;
          }
          else {
LAB_0076fccc:
            uVar8 = uVar6 & 0xfffffffffffffffe;
            if ((uVar13 & 1) != 0) {
              uVar8 = uVar6 | 1;
            }
            *(ulong *)(uVar4 + 8) = uVar8;
            *(ulong *)(uVar3 + 8) = *(ulong *)(uVar3 + 8) & 0xfffffffffffffffe;
            puVar18 = (ulong *)((*(ulong *)(uVar4 + 8) & 0xfffffffffffffffe) + 8);
            *puVar18 = *puVar18 & 0xfffffffffffffffe;
            *(ulong *)(uVar3 + 8) = (uint)*(undefined8 *)(uVar3 + 8) & 1 | uVar11;
            *(ulong *)(uVar4 + 0x10) = uVar3;
            *puVar5 = uVar4 | (uint)*puVar5 & 1;
          }
          goto LAB_0076fcad;
        }
        if (((uVar6 & 0xfffffffffffffffe) != 0) &&
           ((*(byte *)((uVar6 & 0xfffffffffffffffe) + 8) & 1) != 0)) goto LAB_0076fccc;
        *(ulong *)(uVar4 + 8) = uVar6 | 1;
LAB_0076fd18:
        uVar13 = (ulong)(iVar2 - 1U);
        uVar11 = uVar3;
      } while (iVar2 - 1U != 0);
      uVar13 = *(ulong *)(uVar3 + 8);
    }
LAB_0076fea7:
    *(ulong *)(uVar3 + 8) = uVar13 & 0xfffffffffffffffe;
  }
LAB_0076fcad:
  *(undefined8 *)(puVar12 + -8) = 0x76fcb2;
  FUN_007104f0();
LAB_0076f998:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -8) = &UNK_0076ff14;
    FUN_00771f60();
  }
  return puVar16;
}

