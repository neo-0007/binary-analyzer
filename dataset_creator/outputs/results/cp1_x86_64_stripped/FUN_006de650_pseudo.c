
undefined8 * FUN_006de650(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char cVar10;
  char *pcVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  char *local_68 [2];
  char *local_58;
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar5 = (char *)FUN_007128a0(param_2);
  local_68[0] = pcVar5;
  pcVar6 = (char *)FUN_007128a0(param_3);
  local_58 = pcVar6;
  if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
    puVar14 = (undefined8 *)0x0;
    goto LAB_006de8cd;
  }
  FUN_006de4f0(local_68);
  FUN_006de4f0(&local_58);
  *(undefined2 *)(param_1 + 2) = local_50;
  lVar7 = thunk_FUN_007129d0(param_2);
  puVar8 = (undefined1 *)FUN_007101b0(lVar7 + 3);
  *param_1 = puVar8;
  if (puVar8 == (undefined1 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    pcVar6 = local_58;
    pcVar5 = local_68[0];
    goto LAB_006de8cd;
  }
  lVar7 = thunk_FUN_007129d0(param_3);
  puVar9 = (undefined1 *)FUN_007101b0(lVar7 + 3);
  pcVar6 = local_58;
  pcVar5 = local_68[0];
  param_1[1] = puVar9;
  puVar2 = PTR_DAT_00939cb8;
  puVar1 = PTR_DAT_00939ca8;
  if (puVar9 == (undefined1 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    FUN_007104f0(puVar8);
    *param_1 = 0;
    goto LAB_006de8cd;
  }
  cVar10 = *local_68[0];
  if (cVar10 == '\0') {
    iVar4 = 1;
LAB_006de7ba:
    lVar7 = (ulong)(2 - iVar4) + 1;
    if (2 < iVar4) {
      lVar7 = 1;
    }
    puVar13 = puVar8 + lVar7;
    thunk_FUN_00713720(puVar8,0x2f,lVar7);
  }
  else {
    iVar12 = 0;
    pcVar11 = local_68[0];
    do {
      while( true ) {
        bVar3 = (byte)(*(ushort *)(puVar1 + (long)cVar10 * 2) >> 3) & 1;
        if ((byte)(cVar10 - 0x2cU) < 0x34) {
          bVar3 = bVar3 | (byte)(-0x8000000004008 >> (cVar10 - 0x2cU & 0x3f)) & 1 ^ 1;
        }
        if (bVar3 == 0) break;
        *puVar8 = (char)*(undefined4 *)(puVar2 + (long)cVar10 * 4);
        puVar8 = puVar8 + 1;
LAB_006de74c:
        cVar10 = pcVar11[1];
        pcVar11 = pcVar11 + 1;
        if (cVar10 == '\0') goto LAB_006de7b0;
      }
      if (cVar10 != '/') goto LAB_006de74c;
      iVar12 = iVar12 + 1;
      puVar13 = puVar8;
      if (iVar12 == 3) goto LAB_006de7e6;
      pcVar11 = pcVar11 + 1;
      *puVar8 = 0x2f;
      puVar8 = puVar8 + 1;
      cVar10 = *pcVar11;
    } while (cVar10 != '\0');
LAB_006de7b0:
    iVar4 = iVar12 + 1;
    puVar13 = puVar8;
    if (iVar12 < 2) goto LAB_006de7ba;
  }
LAB_006de7e6:
  *puVar13 = 0;
  puVar2 = PTR_DAT_00939cb8;
  puVar1 = PTR_DAT_00939ca8;
  cVar10 = *pcVar6;
  if (cVar10 == '\0') {
    iVar4 = 1;
LAB_006de89a:
    lVar7 = (ulong)(2 - iVar4) + 1;
    if (2 < iVar4) {
      lVar7 = 1;
    }
    puVar8 = puVar9 + lVar7;
    thunk_FUN_00713720(puVar9,0x2f,lVar7);
  }
  else {
    iVar12 = 0;
    pcVar11 = pcVar6;
    do {
      while( true ) {
        bVar3 = (byte)(*(ushort *)(puVar1 + (long)cVar10 * 2) >> 3) & 1;
        if ((byte)(cVar10 - 0x2cU) < 0x34) {
          bVar3 = bVar3 | (byte)(-0x8000000004008 >> (cVar10 - 0x2cU & 0x3f)) & 1 ^ 1;
        }
        if (bVar3 == 0) break;
        *puVar9 = (char)*(undefined4 *)(puVar2 + (long)cVar10 * 4);
        puVar9 = puVar9 + 1;
LAB_006de82b:
        cVar10 = pcVar11[1];
        pcVar11 = pcVar11 + 1;
        if (cVar10 == '\0') goto LAB_006de890;
      }
      if (cVar10 != '/') goto LAB_006de82b;
      iVar12 = iVar12 + 1;
      puVar8 = puVar9;
      if (iVar12 == 3) goto LAB_006de8c6;
      pcVar11 = pcVar11 + 1;
      *puVar9 = 0x2f;
      puVar9 = puVar9 + 1;
      cVar10 = *pcVar11;
    } while (cVar10 != '\0');
LAB_006de890:
    iVar4 = iVar12 + 1;
    puVar8 = puVar9;
    if (iVar12 < 2) goto LAB_006de89a;
  }
LAB_006de8c6:
  *puVar8 = 0;
  puVar14 = param_1;
LAB_006de8cd:
  FUN_007104f0(pcVar5);
  FUN_007104f0(pcVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar14;
}

