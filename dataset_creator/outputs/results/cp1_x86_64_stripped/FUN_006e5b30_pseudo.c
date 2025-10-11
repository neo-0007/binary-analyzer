
long * FUN_006e5b30(long *param_1,ulong param_2,long param_3,uint param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                   undefined8 param_10,int param_11)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  bool bVar15;
  long *local_58;
  
  lVar4 = thunk_FUN_007129d0(param_5);
  if ((param_4 & 4) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_007129d0(param_6);
    lVar5 = lVar5 + 1;
  }
  lVar6 = 0;
  if ((param_4 & 2) != 0) {
    lVar6 = thunk_FUN_007129d0(param_7);
    lVar6 = lVar6 + 1;
  }
  lVar7 = 0;
  if ((param_4 & 1) != 0) {
    lVar7 = thunk_FUN_007129d0(param_8);
    lVar7 = lVar7 + 1;
  }
  lVar8 = 0;
  if ((param_4 & 8) != 0) {
    lVar8 = thunk_FUN_007129d0(param_9);
    lVar8 = lVar8 + 1;
  }
  lVar9 = thunk_FUN_007129d0(param_10);
  puVar10 = (undefined1 *)FUN_007101b0(lVar7 + lVar6 + lVar4 + param_3 + 2 + lVar5 + lVar8 + lVar9);
  if (puVar10 == (undefined1 *)0x0) {
    return (long *)0x0;
  }
  thunk_FUN_00713a50(puVar10,param_2,param_3);
  lVar4 = param_3;
  puVar11 = puVar10;
  if (param_3 != 0) {
    while( true ) {
      lVar5 = thunk_FUN_007129d0(puVar11);
      lVar4 = (lVar4 - lVar5) + -1;
      if (lVar4 == 0) break;
      puVar11[lVar5] = 0x3a;
      puVar11 = puVar11 + lVar5 + 1;
    }
  }
  puVar10[param_3 + -1] = 0x2f;
  puVar11 = (undefined1 *)thunk_FUN_00713930(puVar10 + param_3,param_5);
  if ((param_4 & 4) != 0) {
    *puVar11 = 0x5f;
    puVar11 = (undefined1 *)thunk_FUN_00713930(puVar11 + 1,param_6);
  }
  if ((param_4 & 2) != 0) {
    *puVar11 = 0x2e;
    puVar11 = (undefined1 *)thunk_FUN_00713930(puVar11 + 1,param_7);
  }
  if ((param_4 & 1) != 0) {
    *puVar11 = 0x2e;
    puVar11 = (undefined1 *)thunk_FUN_00713930(puVar11 + 1,param_8);
  }
  if ((param_4 & 8) != 0) {
    *puVar11 = 0x40;
    puVar11 = (undefined1 *)thunk_FUN_00713930(puVar11 + 1,param_9);
  }
  *puVar11 = 0x2f;
  thunk_FUN_00713a50(puVar11 + 1,param_10,lVar9 + 1);
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    local_58 = (long *)0x0;
  }
  else {
    local_58 = (long *)0x0;
    plVar12 = plVar1;
    do {
      plVar13 = local_58;
      if (*plVar12 != 0) {
        iVar2 = thunk_FUN_00712780(*plVar12,puVar10);
        if (iVar2 == 0) goto LAB_006e60b0;
        plVar13 = plVar12;
        if (iVar2 < 0) break;
      }
      plVar12 = (long *)plVar12[3];
      local_58 = plVar13;
    } while (plVar12 != (long *)0x0);
  }
  if (param_11 == 0) {
    plVar12 = (long *)0x0;
LAB_006e60b0:
    FUN_007104f0(puVar10);
    return plVar12;
  }
  lVar5 = 0;
  uVar3 = ((int)param_4 >> 1 & 0xffffd555U) + (param_4 & 0x5555);
  iVar2 = ((int)uVar3 >> 2 & 0xfffff333U) + (uVar3 & 0x3333);
  uVar3 = (iVar2 >> 4) + iVar2 & 0xf0f;
  lVar4 = param_3;
  uVar14 = param_2;
  if (param_3 == 0) {
    plVar12 = (long *)FUN_007101b0(0x28);
    if (plVar12 == (long *)0x0) goto LAB_006e60f4;
    *plVar12 = (long)puVar10;
    uVar3 = 1;
  }
  else {
    do {
      lVar5 = lVar5 + 1;
      lVar6 = thunk_FUN_007129d0(uVar14);
      lVar4 = (lVar4 - lVar6) + -1;
      uVar14 = uVar14 + 1 + lVar6;
    } while (lVar4 != 0);
    plVar12 = (long *)FUN_007101b0(lVar5 * (1 << (char)(uVar3 >> 8) + (char)uVar3) * 0x10 + 0x28);
    if (plVar12 == (long *)0x0) {
LAB_006e60f4:
      FUN_007104f0(puVar10);
      return (long *)0x0;
    }
    *plVar12 = (long)puVar10;
    lVar4 = 0;
    lVar5 = param_3;
    uVar14 = param_2;
    do {
      lVar4 = lVar4 + 1;
      lVar6 = thunk_FUN_007129d0(uVar14);
      uVar14 = uVar14 + 1 + lVar6;
      lVar5 = (lVar5 - lVar6) + -1;
    } while (lVar5 != 0);
    uVar3 = 1;
    if (lVar4 == 1) {
      uVar3 = (uint)((param_4 & 3) == 3);
    }
  }
  *(uint *)(plVar12 + 1) = uVar3;
  plVar12[2] = 0;
  if (local_58 == (long *)0x0) {
    plVar12[3] = (long)plVar1;
    *param_1 = (long)plVar12;
  }
  else {
    plVar12[3] = local_58[3];
    local_58[3] = (long)plVar12;
  }
  uVar3 = param_4;
  if (param_3 != 0) {
    lVar5 = 0;
    lVar4 = param_3;
    uVar14 = param_2;
    do {
      lVar5 = lVar5 + 1;
      lVar6 = thunk_FUN_007129d0(uVar14);
      uVar14 = uVar14 + 1 + lVar6;
      lVar4 = (lVar4 - lVar6) + -1;
    } while (lVar4 != 0);
    uVar3 = param_4 - (lVar5 == 1);
  }
  lVar5 = 0;
  lVar4 = lVar5;
  if (-1 < (int)uVar3) {
    do {
      lVar4 = lVar5;
      if (((uVar3 & ~param_4) == 0) && (uVar14 = param_2, param_3 != 0)) {
        do {
          lVar4 = lVar5 + 1;
          lVar6 = thunk_FUN_007129d0(uVar14);
          lVar6 = FUN_006e5b30(param_1,uVar14,lVar6 + 1,uVar3,param_5,param_6,param_7,param_8,
                               param_9,param_10,1);
          plVar12[lVar5 + 4] = lVar6;
          if (param_2 + param_3 <= uVar14) break;
          lVar5 = thunk_FUN_007129d0(uVar14);
          uVar14 = uVar14 + 1 + lVar5;
          lVar5 = lVar4;
        } while (uVar14 < param_2 + param_3);
      }
      bVar15 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      lVar5 = lVar4;
    } while (bVar15);
  }
  iVar2 = thunk_FUN_00712ab0(param_10,"LC_MESSAGES",0xb);
  if ((iVar2 == 0) && (-1 < (int)param_4)) {
    uVar3 = ~param_4;
    lVar5 = lVar4;
    do {
      lVar4 = lVar5;
      if ((param_4 & uVar3) == 0) {
        lVar4 = lVar5 + 1;
        lVar6 = FUN_006e5b30(param_1,"/usr/share/locale-langpack",0x1b,param_4,param_5,param_6,
                             param_7,param_8,param_9,param_10,1);
        plVar12[lVar5 + 4] = lVar6;
      }
      bVar15 = param_4 != 0;
      param_4 = param_4 - 1;
      lVar5 = lVar4;
    } while (bVar15);
  }
  plVar12[lVar4 + 4] = 0;
  return plVar12;
}

