
undefined8 * d_operator_name(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  if (*pcVar3 == '\0') {
    cVar11 = '\0';
    cVar12 = '\0';
  }
  else {
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    cVar12 = pcVar3[1];
    cVar11 = *pcVar3;
    if (cVar12 != '\0') {
      *(char **)(param_1 + 0x18) = pcVar3 + 2;
      cVar12 = pcVar3[1];
      if (cVar11 == 'v') {
        if ((byte)(cVar12 - 0x30U) < 10) {
          lVar7 = d_source_name();
          iVar9 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar9) {
            return (undefined8 *)0x0;
          }
          puVar6 = (undefined8 *)((long)iVar9 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)((long)puVar6 + 4) = 0;
          *(int *)(param_1 + 0x28) = iVar9 + 1;
          if (lVar7 == 0) {
            return (undefined8 *)0x0;
          }
          *puVar6 = 0x33;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(int *)(puVar6 + 2) = (int)(char)(cVar12 - 0x30U);
          puVar6[3] = lVar7;
          return puVar6;
        }
      }
      else if ((cVar12 == 'v') && (cVar11 == 'c')) {
        uVar2 = *(undefined4 *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = (uint)(*(int *)(param_1 + 0x4c) == 0);
        uVar8 = d_type();
        if (*(int *)(param_1 + 0x50) == 0) {
          puVar6 = (undefined8 *)d_make_comp(param_1,0x34,uVar8,0);
        }
        else {
          puVar6 = (undefined8 *)d_make_comp(param_1,0x35,uVar8,0);
        }
        *(undefined4 *)(param_1 + 0x50) = uVar2;
        return puVar6;
      }
    }
  }
  iVar10 = 0x48;
  iVar9 = 0;
  do {
    iVar5 = (iVar10 - iVar9) / 2 + iVar9;
    pcVar3 = *(char **)(cplus_demangle_operators + (long)iVar5 * 0x18);
    cVar1 = *pcVar3;
    bVar14 = SBORROW1(cVar1,cVar11);
    cVar4 = cVar1 - cVar11;
    bVar13 = cVar1 == cVar11;
    if (bVar13) {
      cVar4 = pcVar3[1];
      bVar14 = SBORROW1(cVar4,cVar12);
      cVar4 = cVar4 - cVar12;
      bVar13 = cVar4 == '\0';
      if (bVar13) {
        iVar9 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar9) {
          return (undefined8 *)0x0;
        }
        puVar6 = (undefined8 *)((long)iVar9 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)((long)puVar6 + 4) = 0;
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *(undefined4 *)puVar6 = 0x32;
        puVar6[2] = cplus_demangle_operators + (long)iVar5 * 0x18;
        return puVar6;
      }
    }
    if (bVar13 || bVar14 != cVar4 < '\0') {
      iVar9 = iVar5 + 1;
      iVar5 = iVar10;
    }
    iVar10 = iVar5;
  } while (iVar9 != iVar10);
  return (undefined8 *)0x0;
}

