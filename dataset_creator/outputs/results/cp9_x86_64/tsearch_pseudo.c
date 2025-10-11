
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * tsearch(void *__key,void **__rootp,__compar_fn_t __compar)

{
  ulong *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  void **ppvVar5;
  int iVar6;
  undefined8 uVar7;
  void **ppvVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  void **local_50;
  int local_3c;
  
  if (__rootp != (void **)0x0) {
    pvVar2 = *__rootp;
    if (((ulong)pvVar2 & 0xfffffffffffffffe) != 0) {
      puVar1 = (ulong *)(((ulong)pvVar2 & 0xfffffffffffffffe) + 8);
      *puVar1 = *puVar1 & 0xfffffffffffffffe;
    }
    local_3c = 0;
    local_50 = (void **)0x0;
    ppvVar8 = (void **)0x0;
    iVar9 = 0;
    do {
      iVar6 = iVar9;
      ppvVar5 = ppvVar8;
      ppvVar8 = __rootp;
      puVar11 = (undefined8 *)((ulong)pvVar2 & 0xfffffffffffffffe);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)malloc(0x18);
        uVar7 = _UNK_008239b8;
        uVar4 = _DAT_008239b0;
        if (puVar11 == (undefined8 *)0x0) {
          return (void *)0x0;
        }
        *ppvVar8 = (void *)((ulong)((uint)*ppvVar8 & 1) | (ulong)puVar11);
        *puVar11 = __key;
        puVar11[1] = uVar4;
        puVar11[2] = uVar7;
        return puVar11;
      }
      iVar9 = (*__compar)(__key,(void *)*puVar11);
      if (iVar9 == 0) {
        return puVar11;
      }
      uVar10 = (ulong)*ppvVar8 & 0xfffffffffffffffe;
      uVar3 = *(ulong *)(uVar10 + 0x10);
      uVar13 = *(ulong *)(uVar10 + 8) & 0xfffffffffffffffe;
      if ((((uVar3 != 0) && (uVar13 != 0)) && ((*(byte *)(uVar3 + 8) & 1) != 0)) &&
         ((*(byte *)(uVar13 + 8) & 1) != 0)) {
        *(ulong *)(uVar10 + 8) = *(ulong *)(uVar10 + 8) | 1;
        *(ulong *)(uVar3 + 8) = *(ulong *)(uVar3 + 8) & 0xfffffffffffffffe;
        *(ulong *)(uVar13 + 8) = *(ulong *)(uVar13 + 8) & 0xfffffffffffffffe;
        if (ppvVar5 != (void **)0x0) {
          uVar15 = (ulong)*ppvVar5 & 0xfffffffffffffffe;
          uVar12 = *(ulong *)(uVar15 + 8);
          if ((uVar12 & 1) != 0) {
            uVar14 = (ulong)*local_50 & 0xfffffffffffffffe;
            if (0 < iVar6 == 0 < local_3c) {
              *local_50 = (void *)((uint)*local_50 & 1 | uVar15);
              *(ulong *)(uVar15 + 8) = uVar12 & 0xfffffffffffffffe;
              *(ulong *)(uVar14 + 8) = *(ulong *)(uVar14 + 8) | 1;
              if (iVar6 < 0) {
                *(ulong *)(uVar14 + 8) = *(ulong *)(uVar15 + 0x10) | 1;
                *(ulong *)(uVar15 + 0x10) = uVar14;
              }
              else {
                uVar3 = *(ulong *)(uVar15 + 8);
                *(ulong *)(uVar14 + 0x10) = uVar3 & 0xfffffffffffffffe;
                *(ulong *)(uVar15 + 8) = (uint)uVar3 & 1 | uVar14;
              }
            }
            else {
              *(ulong *)(uVar15 + 8) = uVar12 | 1;
              *(ulong *)(uVar14 + 8) = *(ulong *)(uVar14 + 8) | 1;
              uVar12 = (ulong)((uint)uVar3 & 1);
              *(ulong *)(uVar10 + 8) = *(ulong *)(uVar10 + 8) & 0xfffffffffffffffe;
              if (iVar6 < 0) {
                *(ulong *)(uVar15 + 8) = uVar3 | (uint)*(undefined8 *)(uVar15 + 8) & 1;
                *(ulong *)(uVar10 + 0x10) = uVar12 | uVar15;
                *(ulong *)(uVar14 + 0x10) = uVar13;
                *(ulong *)(uVar10 + 8) = uVar14;
              }
              else {
                *(ulong *)(uVar15 + 0x10) = uVar13;
                uVar4 = *(undefined8 *)(uVar14 + 8);
                *(ulong *)(uVar10 + 8) = uVar15;
                *(ulong *)(uVar14 + 8) = uVar3 | (uint)uVar4 & 1;
                *(ulong *)(uVar10 + 0x10) = uVar12 | uVar14;
              }
              *local_50 = (void *)(uVar10 | (uint)*local_50 & 1);
            }
          }
        }
      }
      if (iVar9 < 0) {
        pvVar2 = (void *)puVar11[1];
        __rootp = (void **)(puVar11 + 1);
      }
      else {
        pvVar2 = (void *)puVar11[2];
        __rootp = (void **)(puVar11 + 2);
      }
      local_3c = iVar6;
      local_50 = ppvVar5;
    } while (((ulong)pvVar2 & 0xfffffffffffffffe) != 0);
    puVar11 = (undefined8 *)malloc(0x18);
    uVar7 = _UNK_008239b8;
    uVar4 = _DAT_008239b0;
    if (puVar11 != (undefined8 *)0x0) {
      *__rootp = (void *)((ulong)((uint)*__rootp & 1) | (ulong)puVar11);
      *puVar11 = __key;
      puVar11[1] = uVar4;
      puVar11[2] = uVar7;
      if (ppvVar8 == __rootp) {
        return puVar11;
      }
      uVar10 = (ulong)*__rootp & 0xfffffffffffffffe;
      uVar3 = *(ulong *)(uVar10 + 0x10);
      uVar13 = *(ulong *)(uVar10 + 8) & 0xfffffffffffffffe;
      *(ulong *)(uVar10 + 8) = *(ulong *)(uVar10 + 8) | 1;
      if (uVar3 != 0) {
        *(ulong *)(uVar3 + 8) = *(ulong *)(uVar3 + 8) & 0xfffffffffffffffe;
      }
      if (uVar13 != 0) {
        *(ulong *)(uVar13 + 8) = *(ulong *)(uVar13 + 8) & 0xfffffffffffffffe;
      }
      uVar15 = (ulong)*ppvVar8 & 0xfffffffffffffffe;
      uVar12 = *(ulong *)(uVar15 + 8);
      if ((uVar12 & 1) == 0) {
        return puVar11;
      }
      uVar14 = (ulong)*ppvVar5 & 0xfffffffffffffffe;
      if (0 < iVar9 != 0 < iVar6) {
        *(ulong *)(uVar15 + 8) = uVar12 | 1;
        *(ulong *)(uVar14 + 8) = *(ulong *)(uVar14 + 8) | 1;
        uVar12 = (ulong)((uint)uVar3 & 1);
        *(ulong *)(uVar10 + 8) = *(ulong *)(uVar10 + 8) & 0xfffffffffffffffe;
        if (iVar9 < 0) {
          *(ulong *)(uVar15 + 8) = (uint)*(undefined8 *)(uVar15 + 8) & 1 | uVar3;
          *(ulong *)(uVar10 + 0x10) = uVar12 | uVar15;
          *(ulong *)(uVar14 + 0x10) = uVar13;
          *(ulong *)(uVar10 + 8) = uVar14;
        }
        else {
          *(ulong *)(uVar15 + 0x10) = uVar13;
          *(ulong *)(uVar10 + 8) = uVar15;
          *(ulong *)(uVar14 + 8) = (uint)*(undefined8 *)(uVar14 + 8) & 1 | uVar3;
          *(ulong *)(uVar10 + 0x10) = uVar12 | uVar14;
        }
        *ppvVar5 = (void *)(uVar10 | (uint)*ppvVar5 & 1);
        return puVar11;
      }
      *ppvVar5 = (void *)((uint)*ppvVar5 & 1 | uVar15);
      *(ulong *)(uVar15 + 8) = uVar12 & 0xfffffffffffffffe;
      *(ulong *)(uVar14 + 8) = *(ulong *)(uVar14 + 8) | 1;
      if (iVar9 < 0) {
        *(ulong *)(uVar14 + 8) = *(ulong *)(uVar15 + 0x10) | 1;
        *(ulong *)(uVar15 + 0x10) = uVar14;
        return puVar11;
      }
      uVar3 = *(ulong *)(uVar15 + 8);
      *(ulong *)(uVar14 + 0x10) = uVar3 & 0xfffffffffffffffe;
      *(ulong *)(uVar15 + 8) = (uint)uVar3 & 1 | uVar14;
      return puVar11;
    }
  }
  return (void *)0x0;
}

