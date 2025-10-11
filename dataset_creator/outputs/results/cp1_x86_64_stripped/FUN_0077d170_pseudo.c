
undefined8
FUN_0077d170(char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  long local_68;
  char *local_60;
  undefined4 *local_58;
  char *local_50;
  long local_40;
  long *plVar12;
  long *plVar15;
  
  pcVar1 = param_3 + param_4;
  plVar13 = &local_68;
  plVar12 = &local_68;
  plVar11 = &local_68;
  plVar15 = &local_68;
  plVar14 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_5;
  local_50 = param_3;
  if ((param_1 < pcVar1) && (param_3 <= param_1)) {
    lVar10 = thunk_FUN_007129d0();
    local_50 = param_1 + lVar10 + 1;
  }
  puVar5 = (undefined1 *)FUN_00401200(param_1,&DAT_0082ea21);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  *param_2 = param_1;
  cVar3 = *param_1;
  pcVar18 = param_1;
  if (cVar3 != '\0') {
LAB_0077d1f8:
    lVar10 = (long)cVar3;
    pcVar18 = param_1 + 1;
    cVar3 = param_1[1];
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar10 * 2) & 0x20) == 0)
    goto LAB_0077d1f0;
    *param_1 = '\0';
    do {
      pcVar19 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar2 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)*pcVar19 * 2);
    } while ((uVar2 & 0x2000) != 0);
    pcVar17 = param_1;
    pcVar18 = param_1;
    if (*pcVar19 != '\0') {
      while( true ) {
        if ((uVar2 & 0x2000) != 0) break;
        pcVar18 = pcVar17 + 1;
        if (pcVar17[1] == '\0') goto LAB_0077d278;
        uVar2 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)pcVar17[1] * 2);
        pcVar17 = pcVar17 + 1;
      }
      *pcVar17 = '\0';
      do {
        pcVar19 = pcVar17 + 1;
        pcVar17 = pcVar17 + 1;
        pcVar18 = pcVar17;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar19 * 2) & 0x20) != 0);
    }
  }
LAB_0077d278:
  lVar10 = thunk_FUN_00712710(param_1,0x2e);
  if (lVar10 == 0) {
    local_68 = 6;
    uVar4 = 1;
LAB_0077d430:
    local_60 = (char *)CONCAT44(local_60._4_4_,uVar4);
    lVar10 = thunk_FUN_007129d0(param_1);
    uVar7 = local_68 + 0x18 + lVar10;
    plVar14 = &local_68;
    while (plVar12 != (long *)((long)&local_68 - (uVar7 & 0xfffffffffffff000))) {
      plVar11 = (long *)((long)plVar14 + -0x1000);
      *(undefined8 *)((long)plVar14 + -8) = *(undefined8 *)((long)plVar14 + -8);
      plVar12 = (long *)((long)plVar14 + -0x1000);
      plVar14 = (long *)((long)plVar14 + -0x1000);
    }
    uVar7 = (ulong)((uint)uVar7 & 0xff0);
    lVar10 = -uVar7;
    if (uVar7 != 0) {
      *(undefined8 *)((long)plVar11 + -8) = *(undefined8 *)((long)plVar11 + -8);
    }
    local_68 = CONCAT44(local_68._4_4_,local_60._0_4_);
    local_60 = (char *)((ulong)((long)plVar11 + lVar10 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)plVar11 + lVar10 + -8) = 0x77d4a7;
    puVar8 = (undefined4 *)thunk_FUN_00713930(local_60,param_1);
    *puVar8 = 0x302e302e;
    plVar13 = (long *)((long)plVar11 + lVar10);
    iVar9 = (int)local_68;
    if ((int)local_68 == 1) {
      *(undefined2 *)(puVar8 + 1) = 0x302e;
      plVar13 = (long *)((long)plVar11 + lVar10);
    }
  }
  else {
    lVar10 = thunk_FUN_00712710(lVar10 + 1,0x2e);
    if (lVar10 == 0) {
      local_68 = 4;
      uVar4 = 2;
      goto LAB_0077d430;
    }
    lVar10 = thunk_FUN_00712710(lVar10 + 1,0x2e);
    if (lVar10 != 0) goto LAB_0077d2bc;
    lVar10 = thunk_FUN_007129d0(param_1);
    plVar11 = &local_68;
    while (plVar15 != (long *)((long)&local_68 - (lVar10 + 0x1aU & 0xfffffffffffff000))) {
      plVar14 = (long *)((long)plVar11 + -0x1000);
      *(undefined8 *)((long)plVar11 + -8) = *(undefined8 *)((long)plVar11 + -8);
      plVar15 = (long *)((long)plVar11 + -0x1000);
      plVar11 = (long *)((long)plVar11 + -0x1000);
    }
    uVar7 = (ulong)((uint)(lVar10 + 0x1aU) & 0xff0);
    lVar10 = -uVar7;
    if (uVar7 != 0) {
      *(undefined8 *)((long)plVar14 + -8) = *(undefined8 *)((long)plVar14 + -8);
    }
    local_60 = (char *)((ulong)((long)plVar14 + lVar10 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)plVar14 + lVar10 + -8) = 0x77d537;
    puVar8 = (undefined4 *)thunk_FUN_00713930(local_60,param_1);
    *(undefined2 *)puVar8 = 0x302e;
    plVar13 = (long *)((long)plVar14 + lVar10);
    iVar9 = 3;
  }
  *(undefined1 *)((long)puVar8 + (ulong)(3 - iVar9) * 2 + 2) = 0;
  param_1 = local_60;
LAB_0077d2bc:
  *(undefined8 *)((long)plVar13 + -8) = 0x77d2c4;
  uVar4 = FUN_007acb60(param_1);
  *(undefined4 *)(param_2 + 2) = 2;
  *(undefined4 *)((long)param_2 + 0x14) = uVar4;
  pcVar19 = local_50;
  if (((local_50 == (char *)0x0) && (pcVar19 = param_3, param_3 <= pcVar18)) &&
     (pcVar19 = param_3, pcVar18 < pcVar1)) {
    *(undefined8 *)((long)plVar13 + -8) = 0x77d40f;
    lVar10 = thunk_FUN_007129d0(pcVar18);
    pcVar19 = pcVar18 + lVar10 + 1;
  }
  local_50 = pcVar19;
  puVar20 = (undefined8 *)((ulong)(local_50 + 7) & 0xfffffffffffffff8);
  puVar16 = puVar20;
joined_r0x0077d2ef:
  if (pcVar1 < puVar16 + 2) {
    *local_58 = 0x22;
    uVar6 = 0xffffffff;
  }
  else {
    if (*pcVar18 != '\0') {
      lVar10 = *(long *)(in_FS_OFFSET + -0x40);
      uVar2 = *(ushort *)(lVar10 + (long)*pcVar18 * 2);
      pcVar19 = pcVar18;
      if ((uVar2 & 0x2000) != 0) goto LAB_0077d320;
      goto LAB_0077d355;
    }
    *puVar16 = 0;
    if (puVar20 == (undefined8 *)0x0) {
      uVar6 = 0xffffffff;
    }
    else {
      param_2[1] = puVar20;
      uVar6 = 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar13 + -8) = 0x77d583;
  FUN_00771f60();
LAB_0077d1f0:
  param_1 = pcVar18;
  if (cVar3 == '\0') goto LAB_0077d278;
  goto LAB_0077d1f8;
LAB_0077d320:
  do {
    pcVar17 = pcVar18 + 1;
    pcVar18 = pcVar18 + 1;
    uVar2 = *(ushort *)(lVar10 + (long)*pcVar17 * 2);
  } while ((uVar2 & 0x2000) != 0);
  pcVar19 = pcVar18;
  if (*pcVar17 != '\0') {
LAB_0077d355:
    while ((uVar2 & 0x2000) == 0) {
      pcVar17 = pcVar18 + 1;
      pcVar18 = pcVar18 + 1;
      if (*pcVar17 == '\0') {
        if (pcVar18 <= pcVar19) goto joined_r0x0077d2ef;
        goto LAB_0077d3c8;
      }
      uVar2 = *(ushort *)(lVar10 + (long)*pcVar17 * 2);
    }
    if (pcVar19 < pcVar18) {
LAB_0077d3c8:
      *puVar16 = pcVar19;
      puVar16 = puVar16 + 1;
      cVar3 = *pcVar18;
    }
    else {
      cVar3 = *pcVar18;
    }
    if (cVar3 != '\0') {
      *pcVar18 = '\0';
      pcVar18 = pcVar18 + 1;
    }
  }
  goto joined_r0x0077d2ef;
}

