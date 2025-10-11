
/* WARNING: Removing unreachable block (ram,0x00765ef4) */

void * tdelete(void *__key,void **__rootp,__compar_fn_t __compar)

{
  ulong *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  void **ppvVar6;
  ulong uVar7;
  __compar_fn_t p_Var8;
  ulong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  void *pvVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  void **ppvVar21;
  long in_FS_OFFSET;
  undefined1 auStack_1c8 [8];
  undefined1 local_1c0 [336];
  void **local_70;
  void *local_68;
  __compar_fn_t local_60;
  undefined1 *local_58;
  int local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = auStack_1c8;
  local_58 = local_1c0;
  puVar13 = auStack_1c8;
  local_60 = __compar;
  if ((__rootp == (void **)0x0) ||
     (puVar18 = (undefined8 *)((ulong)*__rootp & 0xfffffffffffffffe), puVar13 = auStack_1c8,
     puVar18 == (undefined8 *)0x0)) {
LAB_00765f95:
    puVar19 = (undefined8 *)0x0;
    goto LAB_00765f98;
  }
  local_4c = 0x28;
  uVar12 = 0;
  puVar19 = puVar18;
  while( true ) {
    p_Var8 = local_60;
    pvVar14 = (void *)*puVar18;
    uVar16 = uVar12 & 0xffffffff;
    *(undefined8 *)(puVar10 + -8) = 0x765f57;
    iVar3 = (*p_Var8)(__key,pvVar14);
    if (iVar3 == 0) break;
    if (local_4c == (int)uVar12) {
      local_4c = local_4c + 0x14;
      uVar16 = (long)local_4c * 8 + 0x17;
      for (puVar13 = puVar10; puVar13 != puVar10 + -(uVar16 & 0xfffffffffffff000);
          puVar13 = puVar13 + -0x1000) {
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
      }
      uVar16 = (ulong)((uint)uVar16 & 0xff0);
      lVar17 = -uVar16;
      puVar10 = puVar13 + lVar17;
      if (uVar16 != 0) {
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
      }
      local_68 = (void *)CONCAT44(local_68._4_4_,iVar3);
      *(undefined8 *)(puVar13 + lVar17 + -8) = 0x766049;
      local_58 = (undefined1 *)
                 memcpy((void *)((ulong)(puVar13 + lVar17 + 0xf) & 0xfffffffffffffff0),local_58,
                        uVar12 * 8);
      iVar3 = (int)local_68;
    }
    *(void ***)(local_58 + uVar12 * 8) = __rootp;
    puVar19 = (undefined8 *)((ulong)*__rootp & 0xfffffffffffffffe);
    if (iVar3 < 0) {
      __rootp = (void **)(puVar19 + 1);
      puVar18 = (undefined8 *)(puVar19[1] & 0xfffffffffffffffe);
    }
    else {
      puVar18 = (undefined8 *)puVar19[2];
      __rootp = (void **)(puVar19 + 2);
    }
    uVar12 = uVar12 + 1;
    puVar13 = puVar10;
    if (puVar18 == (undefined8 *)0x0) goto LAB_00765f95;
  }
  pvVar14 = *__rootp;
  puVar20 = (undefined8 *)((ulong)pvVar14 & 0xfffffffffffffffe);
  uVar4 = puVar20[1] & 0xfffffffffffffffe;
  puVar18 = puVar20;
  if (puVar20[2] == 0) {
    puVar13 = puVar10;
    if (uVar4 != 0) goto LAB_0076616c;
  }
  else if (uVar4 != 0) {
    p_Var8 = (__compar_fn_t)((long)(int)uVar12 << 3);
    ppvVar6 = __rootp;
    ppvVar21 = (void **)(puVar20 + 2);
    while( true ) {
      if (local_4c == (int)uVar16) {
        local_4c = local_4c + 0x14;
        uVar12 = (long)local_4c * 8 + 0x17;
        puVar13 = puVar10 + -(uVar12 & 0xfffffffffffff000);
        for (; puVar10 != puVar13; puVar10 = puVar10 + -0x1000) {
          *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        }
        uVar12 = (ulong)((uint)uVar12 & 0xff0);
        lVar17 = -uVar12;
        if (uVar12 != 0) {
          *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        }
        *(undefined8 *)(puVar10 + lVar17 + -8) = 0x766135;
        local_70 = ppvVar6;
        local_68 = pvVar14;
        local_60 = p_Var8;
        local_58 = (undefined1 *)
                   memcpy((void *)((ulong)(puVar10 + lVar17 + 0xf) & 0xfffffffffffffff0),local_58,
                          (size_t)p_Var8);
        puVar18 = (undefined8 *)((ulong)*ppvVar21 & 0xfffffffffffffffe);
        *(void ***)(local_58 + (long)local_60) = local_70;
        uVar12 = puVar18[1];
        p_Var8 = local_60;
        puVar10 = puVar10 + lVar17;
        pvVar14 = local_68;
      }
      else {
        puVar18 = (undefined8 *)((ulong)*ppvVar21 & 0xfffffffffffffffe);
        *(void ***)(local_58 + (long)p_Var8) = ppvVar6;
        uVar12 = puVar18[1];
      }
      uVar16 = (ulong)((int)uVar16 + 1);
      if ((uVar12 & 0xfffffffffffffffe) == 0) break;
      p_Var8 = p_Var8 + 8;
      ppvVar6 = ppvVar21;
      ppvVar21 = (void **)(puVar18 + 1);
    }
  }
  uVar4 = puVar18[2];
  puVar13 = puVar10;
LAB_0076616c:
  iVar3 = (int)uVar16;
  if (iVar3 == 0) {
    *__rootp = (void *)((uint)pvVar14 & 1 | uVar4);
  }
  else {
    uVar12 = **(ulong **)(local_58 + (long)iVar3 * 8 + -8) & 0xfffffffffffffffe;
    if (puVar18 == *(undefined8 **)(uVar12 + 0x10)) {
      *(ulong *)(uVar12 + 0x10) = uVar4;
    }
    else {
      *(ulong *)(uVar12 + 8) = (uint)*(undefined8 *)(uVar12 + 8) & 1 | uVar4;
    }
  }
  if (puVar20 != puVar18) {
    *puVar20 = *puVar18;
  }
  if ((*(byte *)(puVar18 + 1) & 1) == 0) {
    uVar12 = uVar4;
    if (iVar3 == 0) {
      if (uVar4 == 0) goto LAB_007662ad;
      uVar16 = *(ulong *)(uVar4 + 8);
    }
    else {
      do {
        iVar3 = (int)uVar16;
        if ((uVar12 != 0) && (uVar16 = *(ulong *)(uVar12 + 8), uVar4 = uVar12, (uVar16 & 1) != 0))
        goto LAB_007664a7;
        lVar17 = (long)iVar3;
        puVar15 = *(ulong **)(local_58 + lVar17 * 8 + -8);
        uVar4 = *puVar15 & 0xfffffffffffffffe;
        uVar16 = *(ulong *)(uVar4 + 8);
        uVar5 = uVar16 & 0xfffffffffffffffe;
        uVar11 = (uint)*puVar15;
        if (uVar5 == uVar12) {
          uVar12 = *(ulong *)(uVar4 + 0x10);
          uVar16 = *(ulong *)(uVar12 + 8);
          uVar5 = uVar12;
          if ((uVar16 & 1) != 0) {
            iVar3 = iVar3 + 1;
            *(ulong *)(uVar12 + 8) = uVar16 & 0xfffffffffffffffe;
            *(ulong *)(uVar4 + 8) = *(ulong *)(uVar4 + 8) | 1;
            uVar16 = *(ulong *)(uVar12 + 8);
            uVar5 = uVar16 & 0xfffffffffffffffe;
            *(ulong *)(uVar4 + 0x10) = uVar5;
            *(ulong *)(uVar12 + 8) = (uint)uVar16 & 1 | uVar4;
            *puVar15 = uVar11 & 1 | uVar12;
            puVar15 = (ulong *)(uVar12 + 8);
            *(ulong **)(local_58 + lVar17 * 8) = puVar15;
            uVar16 = *(ulong *)(uVar5 + 8);
          }
          uVar12 = uVar16 & 0xfffffffffffffffe;
          if ((uVar12 == 0) || (uVar7 = *(ulong *)(uVar12 + 8), (uVar7 & 1) == 0)) {
            lVar17 = *(long *)(uVar5 + 0x10);
            if ((lVar17 == 0) || ((*(byte *)(lVar17 + 8) & 1) == 0)) {
              *(ulong *)(uVar5 + 8) = uVar16 | 1;
              goto LAB_00766318;
            }
          }
          else {
            lVar17 = *(long *)(uVar5 + 0x10);
            if ((lVar17 == 0) || ((*(byte *)(lVar17 + 8) & 1) == 0)) {
              if ((*(byte *)(uVar4 + 8) & 1) == 0) {
                uVar16 = uVar7 & 0xfffffffffffffffe;
              }
              else {
                uVar16 = uVar7 | 1;
              }
              *(ulong *)(uVar12 + 8) = uVar16;
              uVar2 = *(undefined8 *)(uVar5 + 8);
              *(ulong *)(uVar4 + 0x10) = uVar7 & 0xfffffffffffffffe;
              *(ulong *)(uVar5 + 8) = (ulong)((uint)uVar2 & 1) | *(ulong *)(uVar12 + 0x10);
              *(ulong *)(uVar12 + 0x10) = uVar5;
              *(ulong *)(uVar12 + 8) = (uint)*(undefined8 *)(uVar12 + 8) & 1 | uVar4;
              goto LAB_0076629c;
            }
          }
          if ((*(byte *)(uVar4 + 8) & 1) != 0) {
            uVar12 = uVar16 | 1;
          }
          *(ulong *)(uVar5 + 8) = uVar12;
          *(ulong *)(uVar4 + 8) = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
          *(ulong *)(lVar17 + 8) = *(ulong *)(lVar17 + 8) & 0xfffffffffffffffe;
          uVar12 = *(ulong *)(uVar5 + 8);
          *(ulong *)(uVar4 + 0x10) = uVar12 & 0xfffffffffffffffe;
          *(ulong *)(uVar5 + 8) = (uint)uVar12 & 1 | uVar4;
          *puVar15 = uVar5 | (uint)*puVar15 & 1;
          goto LAB_007662ad;
        }
        uVar7 = *(ulong *)(uVar5 + 8);
        if ((uVar7 & 1) != 0) {
          uVar12 = *(ulong *)(uVar5 + 0x10);
          iVar3 = iVar3 + 1;
          *(ulong *)(uVar5 + 8) = uVar7 & 0xfffffffffffffffe;
          uVar16 = uVar12 | 1;
          *(ulong *)(uVar4 + 8) = uVar16;
          *(ulong *)(uVar5 + 0x10) = uVar4;
          *puVar15 = uVar11 & 1 | uVar5;
          puVar15 = (ulong *)(uVar5 + 0x10);
          *(ulong **)(local_58 + lVar17 * 8) = puVar15;
          uVar5 = uVar12 & 0xfffffffffffffffe;
          uVar7 = *(ulong *)(uVar5 + 8);
        }
        uVar12 = *(ulong *)(uVar5 + 0x10);
        if ((uVar12 != 0) && (uVar9 = *(ulong *)(uVar12 + 8), (uVar9 & 1) != 0)) {
          if (((uVar7 & 0xfffffffffffffffe) == 0) ||
             ((*(byte *)((uVar7 & 0xfffffffffffffffe) + 8) & 1) == 0)) {
            uVar7 = uVar9 & 0xfffffffffffffffe;
            if ((uVar16 & 1) != 0) {
              uVar7 = uVar9 | 1;
            }
            *(ulong *)(uVar12 + 8) = uVar7;
            *(ulong *)(uVar4 + 8) =
                 (ulong)((uint)*(undefined8 *)(uVar4 + 8) & 1) | *(ulong *)(uVar12 + 0x10);
            uVar16 = *(ulong *)(uVar12 + 8);
            *(ulong *)(uVar5 + 0x10) = uVar16 & 0xfffffffffffffffe;
            *(ulong *)(uVar12 + 8) = (uint)uVar16 & 1 | uVar5;
            *(ulong *)(uVar12 + 0x10) = uVar4;
LAB_0076629c:
            *puVar15 = (uint)*puVar15 & 1 | uVar12;
            *(ulong *)(uVar4 + 8) = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
          }
          else {
LAB_007662cc:
            uVar9 = uVar7 & 0xfffffffffffffffe;
            if ((uVar16 & 1) != 0) {
              uVar9 = uVar7 | 1;
            }
            *(ulong *)(uVar5 + 8) = uVar9;
            *(ulong *)(uVar4 + 8) = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
            puVar1 = (ulong *)((*(ulong *)(uVar5 + 8) & 0xfffffffffffffffe) + 8);
            *puVar1 = *puVar1 & 0xfffffffffffffffe;
            *(ulong *)(uVar4 + 8) = (uint)*(undefined8 *)(uVar4 + 8) & 1 | uVar12;
            *(ulong *)(uVar5 + 0x10) = uVar4;
            *puVar15 = uVar5 | (uint)*puVar15 & 1;
          }
          goto LAB_007662ad;
        }
        if (((uVar7 & 0xfffffffffffffffe) != 0) &&
           ((*(byte *)((uVar7 & 0xfffffffffffffffe) + 8) & 1) != 0)) goto LAB_007662cc;
        *(ulong *)(uVar5 + 8) = uVar7 | 1;
LAB_00766318:
        uVar16 = (ulong)(iVar3 - 1U);
        uVar12 = uVar4;
      } while (iVar3 - 1U != 0);
      uVar16 = *(ulong *)(uVar4 + 8);
    }
LAB_007664a7:
    *(ulong *)(uVar4 + 8) = uVar16 & 0xfffffffffffffffe;
  }
LAB_007662ad:
  *(undefined8 *)(puVar13 + -8) = 0x7662b2;
  free(puVar18);
LAB_00765f98:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -8) = &UNK_00766514;
    __stack_chk_fail_local();
  }
  return puVar19;
}

