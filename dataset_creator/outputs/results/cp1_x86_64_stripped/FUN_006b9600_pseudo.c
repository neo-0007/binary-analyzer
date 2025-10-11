
undefined4 * FUN_006b9600(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  
  pcVar15 = *(char **)(param_1 + 0x18);
  if (*pcVar15 != 'S') {
    return (undefined4 *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar15 + 1;
  cVar5 = pcVar15[1];
  if (cVar5 == '\0') {
LAB_006b9620:
    bVar16 = (*(byte *)(param_1 + 0x10) & 8) != 0;
    if (((!bVar16) && ((param_2 & 1) != 0)) && ((byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2)) {
      bVar16 = true;
    }
    pcVar15 = "t";
    cVar8 = 't';
    while (cVar5 != cVar8) {
      pcVar15 = pcVar15 + 0x38;
      if (pcVar15 == "") {
        return (undefined4 *)0x0;
      }
      cVar8 = *pcVar15;
    }
    lVar4 = *(long *)(pcVar15 + 0x28);
    iVar6 = *(int *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x2c);
    if (lVar4 != 0) {
      uVar2 = *(undefined4 *)(pcVar15 + 0x30);
      if (iVar6 < iVar1) {
        lVar10 = (long)iVar6;
        iVar6 = iVar6 + 1;
        puVar11 = (undefined4 *)(lVar10 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(puVar11 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar6;
        *puVar11 = 0x18;
        *(long *)(puVar11 + 4) = lVar4;
        puVar11[6] = uVar2;
      }
      else {
        puVar11 = (undefined4 *)0x0;
      }
      *(undefined4 **)(param_1 + 0x40) = puVar11;
    }
    if (bVar16) {
      uVar12 = *(undefined8 *)(pcVar15 + 0x18);
      iVar3 = *(int *)(pcVar15 + 0x20);
    }
    else {
      uVar12 = *(undefined8 *)(pcVar15 + 8);
      iVar3 = *(int *)(pcVar15 + 0x10);
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar3;
    if (iVar6 < iVar1) {
      puVar11 = (undefined4 *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(puVar11 + 1) = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *puVar11 = 0x18;
      *(undefined8 *)(puVar11 + 4) = uVar12;
      puVar11[6] = iVar3;
    }
    else {
      puVar11 = (undefined4 *)0x0;
    }
    pcVar15 = *(char **)(param_1 + 0x18);
    if (*pcVar15 != 'B') {
      return puVar11;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    do {
      *(char **)(param_1 + 0x18) = pcVar15 + 1;
      uVar7 = FUN_006b9510(param_1);
      puVar11 = (undefined4 *)FUN_006b8b90(param_1,0x4d,puVar11,uVar7);
      pcVar15 = *(char **)(param_1 + 0x18);
    } while (*pcVar15 == 'B');
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    if ((puVar11 != (undefined4 *)0x0) &&
       (iVar6 = *(int *)(param_1 + 0x38), iVar6 < *(int *)(param_1 + 0x3c))) {
      *(undefined4 **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = puVar11;
      *(int *)(param_1 + 0x38) = iVar6 + 1;
      return puVar11;
    }
  }
  else {
    *(char **)(param_1 + 0x18) = pcVar15 + 2;
    cVar5 = pcVar15[1];
    iVar6 = (int)cVar5;
    if ((byte)(cVar5 - 0x30U) < 10) {
      if (cVar5 != '_') {
LAB_006b96a0:
        uVar13 = 0;
        uVar14 = uVar13;
        if (9 < (byte)(cVar5 - 0x30U)) goto LAB_006b96df;
        do {
          uVar14 = uVar13;
          uVar13 = iVar6 + -0x30 + uVar13 * 0x24;
          while( true ) {
            if (uVar13 < uVar14) {
              return (undefined4 *)0x0;
            }
            pcVar15 = *(char **)(param_1 + 0x18);
            cVar5 = *pcVar15;
            if (cVar5 != '\0') {
              *(char **)(param_1 + 0x18) = pcVar15 + 1;
              cVar5 = *pcVar15;
              if (cVar5 == '_') {
                uVar9 = (ulong)(uVar13 + 1);
                goto LAB_006b96fa;
              }
            }
            iVar6 = (int)cVar5;
            uVar14 = uVar13;
            if ((byte)(cVar5 - 0x30U) < 10) break;
LAB_006b96df:
            if (0x19 < (byte)((char)iVar6 + 0xbfU)) {
              return (undefined4 *)0x0;
            }
            uVar13 = iVar6 + -0x37 + uVar14 * 0x24;
          }
        } while( true );
      }
    }
    else if (cVar5 != '_') {
      if ((byte)(cVar5 + 0xbfU) < 0x1a) goto LAB_006b96a0;
      goto LAB_006b9620;
    }
    uVar9 = 0;
LAB_006b96fa:
    if ((uint)uVar9 < *(uint *)(param_1 + 0x38)) {
      return *(undefined4 **)(*(long *)(param_1 + 0x30) + uVar9 * 8);
    }
  }
  return (undefined4 *)0x0;
}

