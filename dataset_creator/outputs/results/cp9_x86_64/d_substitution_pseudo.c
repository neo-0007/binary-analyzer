
undefined4 * d_substitution(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  bool bVar17;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'S') {
    return (undefined4 *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  cVar5 = pcVar7[1];
  if (cVar5 == '\0') {
LAB_006b75a0:
    bVar17 = (*(byte *)(param_1 + 0x10) & 8) != 0;
    if (((!bVar17) && ((param_2 & 1) != 0)) && ((byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2)) {
      bVar17 = true;
    }
    puVar16 = standard_subs;
    cVar9 = 't';
    while (cVar5 != cVar9) {
      puVar16 = puVar16 + 0x38;
      if (puVar16 == "") {
        return (undefined4 *)0x0;
      }
      cVar9 = *puVar16;
    }
    lVar4 = *(long *)(puVar16 + 0x28);
    iVar6 = *(int *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x2c);
    if (lVar4 != 0) {
      uVar2 = *(undefined4 *)(puVar16 + 0x30);
      if (iVar6 < iVar1) {
        lVar11 = (long)iVar6;
        iVar6 = iVar6 + 1;
        puVar12 = (undefined4 *)(lVar11 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(puVar12 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar6;
        *puVar12 = 0x18;
        *(long *)(puVar12 + 4) = lVar4;
        puVar12[6] = uVar2;
      }
      else {
        puVar12 = (undefined4 *)0x0;
      }
      *(undefined4 **)(param_1 + 0x40) = puVar12;
    }
    if (bVar17) {
      uVar13 = *(undefined8 *)(puVar16 + 0x18);
      iVar3 = *(int *)(puVar16 + 0x20);
    }
    else {
      uVar13 = *(undefined8 *)(puVar16 + 8);
      iVar3 = *(int *)(puVar16 + 0x10);
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar3;
    if (iVar6 < iVar1) {
      puVar12 = (undefined4 *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(puVar12 + 1) = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *puVar12 = 0x18;
      *(undefined8 *)(puVar12 + 4) = uVar13;
      puVar12[6] = iVar3;
    }
    else {
      puVar12 = (undefined4 *)0x0;
    }
    pcVar7 = *(char **)(param_1 + 0x18);
    if (*pcVar7 != 'B') {
      return puVar12;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    do {
      *(char **)(param_1 + 0x18) = pcVar7 + 1;
      uVar8 = d_source_name(param_1);
      puVar12 = (undefined4 *)d_make_comp(param_1,0x4d,puVar12,uVar8);
      pcVar7 = *(char **)(param_1 + 0x18);
    } while (*pcVar7 == 'B');
    *(undefined8 *)(param_1 + 0x40) = uVar13;
    if ((puVar12 != (undefined4 *)0x0) &&
       (iVar6 = *(int *)(param_1 + 0x38), iVar6 < *(int *)(param_1 + 0x3c))) {
      *(undefined4 **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = puVar12;
      *(int *)(param_1 + 0x38) = iVar6 + 1;
      return puVar12;
    }
  }
  else {
    *(char **)(param_1 + 0x18) = pcVar7 + 2;
    cVar5 = pcVar7[1];
    iVar6 = (int)cVar5;
    if ((byte)(cVar5 - 0x30U) < 10) {
      if (cVar5 != '_') {
LAB_006b7620:
        uVar14 = 0;
        uVar15 = uVar14;
        if (9 < (byte)(cVar5 - 0x30U)) goto LAB_006b765f;
        do {
          uVar15 = uVar14;
          uVar14 = iVar6 + -0x30 + uVar14 * 0x24;
          while( true ) {
            if (uVar14 < uVar15) {
              return (undefined4 *)0x0;
            }
            pcVar7 = *(char **)(param_1 + 0x18);
            cVar5 = *pcVar7;
            if (cVar5 != '\0') {
              *(char **)(param_1 + 0x18) = pcVar7 + 1;
              cVar5 = *pcVar7;
              if (cVar5 == '_') {
                uVar10 = (ulong)(uVar14 + 1);
                goto LAB_006b767a;
              }
            }
            iVar6 = (int)cVar5;
            uVar15 = uVar14;
            if ((byte)(cVar5 - 0x30U) < 10) break;
LAB_006b765f:
            if (0x19 < (byte)((char)iVar6 + 0xbfU)) {
              return (undefined4 *)0x0;
            }
            uVar14 = iVar6 + -0x37 + uVar15 * 0x24;
          }
        } while( true );
      }
    }
    else if (cVar5 != '_') {
      if ((byte)(cVar5 + 0xbfU) < 0x1a) goto LAB_006b7620;
      goto LAB_006b75a0;
    }
    uVar10 = 0;
LAB_006b767a:
    if ((uint)uVar10 < *(uint *)(param_1 + 0x38)) {
      return *(undefined4 **)(*(long *)(param_1 + 0x30) + uVar10 * 8);
    }
  }
  return (undefined4 *)0x0;
}

