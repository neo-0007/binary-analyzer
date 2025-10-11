
void FUN_006bc890(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long **pplVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long **pplVar15;
  long **pplVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined8 unaff_RBX;
  char *pcVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  undefined8 *puVar26;
  int iVar27;
  char cVar28;
  int iVar29;
  ulong uVar30;
  char *pcVar31;
  undefined1 *puVar32;
  long in_FS_OFFSET;
  undefined1 auVar33 [16];
  long *local_108;
  long *local_100;
  int local_f8;
  undefined8 local_f0;
  long *local_e8 [2];
  long local_d8;
  long *local_d0 [2];
  long alStack_c0 [2];
  long *aplStack_b0 [9];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (long *)0x0) goto switchD_006bc8e5_caseD_34;
  if (*(int *)(param_1 + 0x130) != 0) goto switchD_006bfddd_default;
  iVar6 = (int)*param_3;
  bVar4 = false;
  switch(iVar6) {
  case 0:
    puVar24 = (undefined1 *)param_3[2];
    if ((long)(int)param_3[3] != 0) {
      puVar32 = puVar24 + (int)param_3[3];
      lVar19 = *(long *)(param_1 + 0x100);
      do {
        uVar20 = *puVar24;
        if (lVar19 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar19 = 0;
        }
        else {
          lVar8 = lVar19 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar19) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        lVar19 = lVar8;
      } while (puVar32 != puVar24);
    }
    break;
  case 1:
  case 2:
    FUN_006c06b0(param_1,0x11,param_3[2]);
    FUN_006b9200(param_1,&DAT_00821383);
    piVar10 = (int *)param_3[3];
    if (*piVar10 == 0x48) {
      puVar24 = local_68;
      FUN_006b9200(param_1,"{default arg#");
      FUN_00771b70(puVar24,1,0x19,"%d",piVar10[6] + 1);
      lVar19 = thunk_FUN_007129d0(puVar24);
      if (lVar19 != 0) {
        puVar32 = puVar24 + lVar19;
        lVar19 = *(long *)(param_1 + 0x100);
        do {
          uVar20 = *puVar24;
          if (lVar19 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar8 = 1;
            lVar19 = 0;
          }
          else {
            lVar8 = lVar19 + 1;
          }
          puVar24 = puVar24 + 1;
          *(long *)(param_1 + 0x100) = lVar8;
          *(undefined1 *)(param_1 + lVar19) = uVar20;
          *(undefined1 *)(param_1 + 0x108) = uVar20;
          lVar19 = lVar8;
        } while (puVar32 != puVar24);
      }
      FUN_006b9200(param_1,&DAT_00821382);
      piVar10 = *(int **)(piVar10 + 4);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,piVar10);
    return;
  case 3:
    plVar18 = (long *)param_3[2];
    uVar13 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (plVar18 != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x120);
      uVar17 = 0;
      pplVar15 = local_e8;
      pplVar16 = (long **)0x0;
      while( true ) {
        pplVar12 = pplVar15;
        *pplVar12 = (long *)pplVar16;
        uVar21 = (int)uVar17 + 1;
        *(undefined4 *)(pplVar12 + 2) = 0;
        iVar6 = (int)*plVar18;
        pplVar12[1] = plVar18;
        pplVar12[3] = plVar7;
        if (0x35 < iVar6 - 0x1cU) break;
        if ((0x3400000000001fU >> ((ulong)(iVar6 - 0x1cU) & 0x3f) & 1) == 0) {
          *(long ***)(param_1 + 0x128) = pplVar12;
          goto LAB_006be5b5;
        }
        plVar18 = (long *)plVar18[2];
        if (plVar18 == (long *)0x0) {
          *(long ***)(param_1 + 0x128) = pplVar12;
          goto switchD_006bc8e5_caseD_34;
        }
        if (uVar21 == 4) {
          *(long ***)(param_1 + 0x128) = pplVar12;
          goto switchD_006bc8e5_caseD_34;
        }
        uVar17 = (ulong)uVar21;
        pplVar15 = pplVar12 + 4;
        pplVar16 = pplVar12;
      }
      *(long ***)(param_1 + 0x128) = pplVar12;
      if (iVar6 == 2) {
        plVar18 = (long *)plVar18[3];
        iVar6 = (int)*plVar18;
        if (iVar6 == 0x48) {
          plVar18 = (long *)plVar18[2];
          if (plVar18 == (long *)0x0) goto switchD_006bc8e5_caseD_34;
          iVar6 = (int)*plVar18;
        }
        uVar30 = (ulong)uVar21;
        pplVar15 = local_e8 + uVar17 * 4;
        pplVar16 = local_e8 + uVar30 * 4;
        while (iVar6 - 0x1cU < 0x36) {
          if ((0x3400000000001fU >> ((ulong)(iVar6 - 0x1cU) & 0x3f) & 1) == 0) goto LAB_006be5b5;
          if ((int)uVar30 == 4) goto switchD_006bc8e5_caseD_34;
          plVar2 = *pplVar15;
          plVar3 = pplVar15[1];
          *(long ***)(param_1 + 0x128) = pplVar16;
          uVar30 = uVar30 + 1;
          *pplVar16 = plVar2;
          pplVar16[1] = plVar3;
          plVar2 = pplVar15[2];
          plVar3 = pplVar15[3];
          *pplVar16 = (long *)pplVar15;
          pplVar16[2] = plVar2;
          pplVar16[3] = plVar3;
          pplVar15[1] = plVar18;
          *(undefined4 *)(pplVar15 + 2) = 0;
          plVar18 = (long *)plVar18[2];
          pplVar15[3] = plVar7;
          if (plVar18 == (long *)0x0) goto switchD_006bc8e5_caseD_34;
          uVar21 = (uint)uVar30;
          pplVar15 = pplVar15 + 4;
          pplVar16 = pplVar16 + 4;
          iVar6 = (int)*plVar18;
        }
      }
      if (iVar6 == 4) {
        *(long ***)(param_1 + 0x120) = &local_108;
        local_108 = plVar7;
        local_100 = plVar18;
      }
LAB_006be5b5:
      FUN_006c06b0(param_1,0x11,param_3[3]);
      if ((int)*plVar18 == 4) {
        *(long **)(param_1 + 0x120) = local_108;
      }
      if (uVar21 != 0) {
        iVar6 = (int)(&local_d8)[(ulong)(uVar21 - 1) * 4];
        pplVar15 = local_e8 + (ulong)(uVar21 - 1) * 4;
        while( true ) {
          if (iVar6 == 0) {
            lVar19 = *(long *)(param_1 + 0x100);
            if (lVar19 == 0xff) {
              *(undefined1 *)(param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
              lVar8 = 1;
              lVar19 = 0;
            }
            else {
              lVar8 = lVar19 + 1;
            }
            *(long *)(param_1 + 0x100) = lVar8;
            plVar18 = pplVar15[1];
            *(undefined1 *)(param_1 + lVar19) = 0x20;
            *(undefined1 *)(param_1 + 0x108) = 0x20;
            FUN_006c0770(param_1,0x11,plVar18);
          }
          if (local_e8 == pplVar15) break;
          iVar6 = *(int *)(pplVar15 + -2);
          pplVar15 = pplVar15 + -4;
        }
      }
      *(undefined8 *)(param_1 + 0x128) = uVar13;
      break;
    }
    goto switchD_006bc8e5_caseD_34;
  case 4:
    uVar13 = *(undefined8 *)(param_1 + 0x170);
    lVar19 = param_3[2];
    *(long **)(param_1 + 0x170) = param_3;
    uVar1 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_006c06b0(param_1,0x11,lVar19);
    if (*(char *)(param_1 + 0x108) == '<') {
      FUN_006b9130(param_1,0x20);
    }
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x3c;
    *(undefined1 *)(param_1 + 0x108) = 0x3c;
    FUN_006c06b0(param_1,0x11,param_3[3]);
    if (*(char *)(param_1 + 0x108) == '>') {
      FUN_006b9130(param_1,0x20);
    }
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x3e;
    *(undefined1 *)(param_1 + 0x108) = 0x3e;
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    *(undefined8 *)(param_1 + 0x170) = uVar13;
    break;
  case 5:
    if (*(int *)(param_1 + 0x138) != 0) {
      puVar23 = &DAT_00821386;
      uVar20 = 0x61;
      lVar19 = *(long *)(param_1 + 0x100);
      while( true ) {
        if (lVar19 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar19 = 0;
        }
        else {
          lVar8 = lVar19 + 1;
        }
        puVar23 = puVar23 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar19) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        if (puVar23 == &DAT_0082138b) break;
        uVar20 = *puVar23;
        lVar19 = lVar8;
      }
      puVar24 = local_68;
      FUN_00771b70(puVar24,1,0x19,"%d",(int)param_3[2] + 1);
      lVar19 = thunk_FUN_007129d0(puVar24);
      if (lVar19 != 0) {
        puVar32 = puVar24 + lVar19;
        lVar19 = *(long *)(param_1 + 0x100);
        do {
          uVar20 = *puVar24;
          if (lVar19 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar8 = 1;
            lVar19 = 0;
          }
          else {
            lVar8 = lVar19 + 1;
          }
          puVar24 = puVar24 + 1;
          *(long *)(param_1 + 0x100) = lVar8;
          *(undefined1 *)(param_1 + lVar19) = uVar20;
          *(undefined1 *)(param_1 + 0x108) = uVar20;
          lVar19 = lVar8;
        } while (puVar32 != puVar24);
      }
      break;
    }
    lVar19 = param_1;
    piVar10 = (int *)FUN_006b91a0(param_1,param_3);
    if ((piVar10 != (int *)0x0) &&
       (((*piVar10 != 0x2f || (*(int *)(lVar19 + 0x13c) < 0)) ||
        (piVar10 = (int *)thunk_FUN_006b8fe8(piVar10,*(int *)(lVar19 + 0x13c),piVar10),
        piVar10 != (int *)0x0)))) {
      puVar14 = *(undefined8 **)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = *puVar14;
      FUN_006c06b0(param_1,0x11,piVar10);
      *(undefined8 **)(param_1 + 0x120) = puVar14;
      break;
    }
    goto switchD_006bc8e5_caseD_34;
  case 6:
    uVar17 = param_3[2];
    if (uVar17 == 0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      FUN_006b9200(param_1,&DAT_008214fa);
      return;
    }
    puVar24 = local_68;
    FUN_006b9200(param_1,"{parm#");
    FUN_00771b70(puVar24,1,0x19,"%d",uVar17 & 0xffffffff);
    lVar8 = thunk_FUN_007129d0(puVar24);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar8 != 0) {
      puVar32 = puVar24 + lVar8;
      lVar8 = lVar19;
      do {
        uVar20 = *puVar24;
        if (lVar8 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar19 = 1;
          lVar8 = 0;
        }
        else {
          lVar19 = lVar8 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        *(undefined1 *)(param_1 + lVar8) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        lVar8 = lVar19;
      } while (puVar32 != puVar24);
    }
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar19 = 0;
    }
    *(long *)(param_1 + 0x100) = lVar19 + 1;
    *(undefined1 *)(param_1 + lVar19) = 0x7d;
    *(undefined1 *)(param_1 + 0x108) = 0x7d;
    break;
  case 7:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[3]);
    return;
  case 8:
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x7e;
    *(undefined1 *)(param_1 + 0x108) = 0x7e;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[3]);
    return;
  case 9:
    pcVar22 = "table for ";
    cVar28 = 'v';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 10:
    pcVar22 = "VTT for ";
    cVar28 = 'V';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0xb:
    pcVar22 = "construction vtable for ";
    cVar28 = 'c';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    puVar23 = &DAT_008213ae;
    uVar20 = 0x2d;
    FUN_006c06b0(param_1,0x11,param_3[2]);
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      puVar23 = puVar23 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar19) = uVar20;
      *(undefined1 *)(param_1 + 0x108) = uVar20;
      if (puVar23 == &DAT_008213b2) break;
      uVar20 = *puVar23;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[3]);
    return;
  case 0xc:
    pcVar22 = "typeinfo for ";
    cVar28 = 't';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0xd:
    pcVar22 = "typeinfo name for ";
    cVar28 = 't';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0xe:
    pcVar22 = "typeinfo fn for ";
    cVar28 = 't';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0xf:
    pcVar22 = "non-virtual thunk to ";
    cVar28 = 'n';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x10:
    pcVar22 = "irtual thunk to ";
    cVar28 = 'v';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x11:
    pcVar22 = "covariant return thunk to ";
    cVar28 = 'c';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x12:
    pcVar22 = "java Class for ";
    cVar28 = 'j';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x13:
    pcVar22 = "guard variable for ";
    cVar28 = 'g';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x14:
    pcVar22 = "TLS init function for ";
    cVar28 = 'T';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x15:
    pcVar22 = "TLS wrapper function for ";
    cVar28 = 'T';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x16:
    pcVar22 = "reference temporary #";
    cVar28 = 'r';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    pcVar22 = " for ";
    cVar28 = ' ';
    FUN_006c06b0(param_1,0x11,param_3[3]);
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      pcVar22 = pcVar22 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x17:
    pcVar22 = "hidden alias for ";
    cVar28 = 'h';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x18:
    puVar24 = (undefined1 *)param_3[2];
    if ((long)(int)param_3[3] != 0) {
      puVar32 = puVar24 + (int)param_3[3];
      lVar19 = *(long *)(param_1 + 0x100);
      do {
        uVar20 = *puVar24;
        if (lVar19 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar19 = 0;
        }
        else {
          lVar8 = lVar19 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar19) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        lVar19 = lVar8;
      } while (puVar32 != puVar24);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    plVar18 = (long *)param_3[2];
    local_108 = *(long **)(param_1 + 0x128);
    for (plVar7 = local_108; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if ((int)plVar7[2] == 0) {
        uVar21 = *(int *)plVar7[1] - 0x19;
        if (2 < uVar21) {
          bVar4 = false;
          break;
        }
        if (iVar6 == *(int *)plVar7[1]) {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_00771f60(local_108,uVar21,plVar18);
          }
          FUN_006c06b0(param_1,0x11);
          return;
        }
      }
    }
    goto LAB_006bcaa0;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x4e:
  case 0x50:
  case 0x51:
    local_108 = *(long **)(param_1 + 0x128);
    plVar18 = (long *)0x0;
LAB_006bc931:
    *(long ***)(param_1 + 0x128) = &local_108;
    local_f0 = *(undefined8 *)(param_1 + 0x120);
    local_100 = param_3;
    if (plVar18 == (long *)0x0) {
      plVar18 = (long *)param_3[2];
    }
    goto LAB_006bc964;
  case 0x23:
  case 0x24:
    plVar18 = (long *)param_3[2];
    auVar5._8_8_ = plVar18;
    auVar5._0_8_ = plVar18;
    auVar33._8_8_ = plVar18;
    auVar33._0_8_ = plVar18;
    iVar29 = (int)*plVar18;
    if ((*(int *)(param_1 + 0x138) != 0) || (bVar4 = false, auVar33 = auVar5, iVar29 != 5))
    goto LAB_006bca7a;
    iVar29 = *(int *)(param_1 + 0x158);
    if (0 < iVar29) {
      puVar26 = *(undefined8 **)(param_1 + 0x150);
      puVar14 = puVar26 + (ulong)(iVar29 - 1) * 2 + 2;
      do {
        if (plVar18 == (long *)*puVar26) {
          puVar14 = *(undefined8 **)(param_1 + 0x148);
          goto joined_r0x006bffd7;
        }
        puVar26 = puVar26 + 2;
      } while (puVar26 != puVar14);
    }
    if (iVar29 < *(int *)(param_1 + 0x15c)) {
      plVar7 = *(long **)(param_1 + 0x120);
      puVar14 = (undefined8 *)((long)iVar29 * 0x10 + *(long *)(param_1 + 0x150));
      *(int *)(param_1 + 0x158) = iVar29 + 1;
      puVar26 = puVar14 + 1;
      *puVar14 = plVar18;
      if (plVar7 != (long *)0x0) {
        uVar17 = (ulong)*(int *)(param_1 + 0x168);
        iVar29 = *(int *)(param_1 + 0x16c);
        lVar19 = uVar17 << 4;
        puVar14 = puVar26;
        do {
          if (iVar29 <= (int)uVar17) goto switchD_006bc8e5_caseD_34;
          lVar8 = plVar7[1];
          uVar21 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar21;
          *(uint *)(param_1 + 0x168) = uVar21;
          puVar26 = (undefined8 *)(*(long *)(param_1 + 0x160) + lVar19);
          lVar19 = lVar19 + 0x10;
          puVar26[1] = lVar8;
          *puVar14 = puVar26;
          plVar7 = (long *)*plVar7;
          puVar14 = puVar26;
        } while (plVar7 != (long *)0x0);
      }
      *puVar26 = 0;
LAB_006bffff:
      bVar4 = false;
      piVar10 = (int *)FUN_006b91a0(param_1,plVar18);
      if (piVar10 != (int *)0x0) goto LAB_006c0021;
    }
    goto switchD_006bc8e5_caseD_34;
  case 0x27:
    lVar19 = (long)*(int *)((undefined8 *)param_3[2] + 1);
    puVar24 = *(undefined1 **)param_3[2];
    if (lVar19 != 0) {
      puVar32 = puVar24 + lVar19;
      lVar19 = *(long *)(param_1 + 0x100);
      do {
        uVar20 = *puVar24;
        if (lVar19 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar19 = 0;
        }
        else {
          lVar8 = lVar19 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar19) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        lVar19 = lVar8;
      } while (puVar32 != puVar24);
    }
    break;
  case 0x28:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x29:
    plVar18 = *(long **)(param_1 + 0x128);
    if (param_3[2] != 0) {
      *(long ***)(param_1 + 0x128) = &local_108;
      local_f0 = *(undefined8 *)(param_1 + 0x120);
      local_f8 = 0;
      local_108 = plVar18;
      local_100 = param_3;
      FUN_006c06b0(param_1,0x11);
      *(long **)(param_1 + 0x128) = local_108;
      if (local_f8 != 0) break;
      FUN_006b9130(param_1,0x20);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c10b0(param_1,0x11,param_3,*(undefined8 *)(param_1 + 0x128));
    return;
  case 0x2a:
    plVar18 = *(long **)(param_1 + 0x128);
    uVar21 = 1;
    local_d0[0] = *(long **)(param_1 + 0x120);
    *(long ***)(param_1 + 0x128) = local_e8;
    local_d8._0_4_ = 0;
    plVar7 = plVar18;
    pplVar15 = local_e8;
    local_e8[0] = plVar18;
    local_e8[1] = param_3;
    if (plVar18 == (long *)0x0) {
      FUN_006c06b0(param_1,0x11,param_3[3]);
      *(undefined8 *)(param_1 + 0x128) = 0;
      if ((int)local_d8 != 0) break;
    }
    else {
      do {
        if (2 < *(int *)plVar7[1] - 0x19U) break;
        if ((int)plVar7[2] == 0) {
          if (3 < uVar21) goto switchD_006bc8e5_caseD_34;
          lVar19 = plVar7[1];
          uVar17 = (ulong)uVar21;
          uVar21 = uVar21 + 1;
          local_e8[uVar17 * 4] = (long *)*plVar7;
          (&local_d8)[uVar17 * 4 + -1] = lVar19;
          lVar19 = plVar7[2];
          plVar2 = (long *)plVar7[3];
          local_e8[uVar17 * 4] = (long *)pplVar15;
          pplVar15 = local_e8 + uVar17 * 4;
          *(long ***)(param_1 + 0x128) = pplVar15;
          (&local_d8)[uVar17 * 4] = lVar19;
          local_d0[uVar17 * 4] = plVar2;
          *(undefined4 *)(plVar7 + 2) = 1;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      FUN_006c06b0(param_1,0x11,param_3[3]);
      *(long **)(param_1 + 0x128) = plVar18;
      if ((int)local_d8 != 0) break;
      if (uVar21 != 1) {
        uVar17 = (ulong)(uVar21 - 1);
        pplVar15 = local_e8 + uVar17 * 4;
        while( true ) {
          pplVar16 = pplVar15 + 1;
          pplVar15 = pplVar15 + -4;
          FUN_006c0770(param_1,0x11,*pplVar16);
          if ((int)uVar17 == 1) break;
          uVar17 = (ulong)((int)uVar17 - 1);
        }
      }
    }
    FUN_006c17c0(param_1,0x11,param_3,*(undefined8 *)(param_1 + 0x128));
    break;
  case 0x2b:
  case 0x2d:
    lVar19 = param_3[3];
    local_108 = *(long **)(param_1 + 0x128);
    local_f8 = 0;
    *(long ***)(param_1 + 0x128) = &local_108;
    local_f0 = *(undefined8 *)(param_1 + 0x120);
    local_100 = param_3;
    FUN_006c06b0(param_1,0x11,lVar19);
    if (local_f8 == 0) {
      FUN_006c0770(param_1,0x11,param_3);
    }
    *(long **)(param_1 + 0x128) = local_108;
    break;
  case 0x2c:
    if (*(short *)((long)param_3 + 0x1a) != 0) {
      FUN_006b9200(param_1,"_Sat ");
    }
    if (*(undefined ***)(param_3[2] + 0x10) != &PTR_s_int_00918d20) {
      FUN_006c06b0(param_1,0x11);
      lVar19 = *(long *)(param_1 + 0x100);
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar19 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar19 + 1;
      *(undefined1 *)(param_1 + lVar19) = 0x20;
      *(undefined1 *)(param_1 + 0x108) = 0x20;
    }
    if ((short)param_3[3] == 0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      FUN_006b9200(param_1,"_Fract");
      return;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006b9200(param_1,"_Accum");
    return;
  case 0x2e:
  case 0x2f:
    if (param_3[2] != 0) {
      FUN_006c06b0(param_1,0x11);
    }
    if (param_3[3] != 0) {
      uVar17 = *(ulong *)(param_1 + 0x100);
      if (0xfd < uVar17) {
        *(undefined1 *)(param_1 + uVar17) = 0;
        (**(code **)(param_1 + 0x110))(param_1,uVar17,*(undefined8 *)(param_1 + 0x118));
        uVar17 = 0;
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        *(undefined8 *)(param_1 + 0x100) = 0;
      }
      puVar23 = &DAT_00801fb4;
      uVar20 = 0x2c;
      while( true ) {
        if (uVar17 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          uVar30 = 1;
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          uVar17 = 0;
        }
        else {
          uVar30 = uVar17 + 1;
        }
        puVar23 = puVar23 + 1;
        *(ulong *)(param_1 + 0x100) = uVar30;
        *(undefined1 *)(param_1 + uVar17) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        if (puVar23 == &DAT_00801fb6) break;
        uVar20 = *puVar23;
        uVar17 = uVar30;
      }
      lVar19 = *(long *)(param_1 + 0x140);
      FUN_006c06b0(param_1,0x11,param_3[3]);
      if ((*(long *)(param_1 + 0x140) == lVar19) && (*(ulong *)(param_1 + 0x100) == uVar30)) {
        *(ulong *)(param_1 + 0x100) = uVar30 - 2;
      }
    }
    break;
  case 0x30:
    pcVar22 = "template parameter object for ";
    cVar28 = 't';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x31:
    lVar19 = param_3[3];
    if (param_3[2] != 0) {
      FUN_006c06b0(param_1,0x11);
    }
    lVar8 = *(long *)(param_1 + 0x100);
    if (lVar8 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar11 = 1;
      lVar8 = 0;
    }
    else {
      lVar11 = lVar8 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar11;
    *(undefined1 *)(param_1 + lVar8) = 0x7b;
    *(undefined1 *)(param_1 + 0x108) = 0x7b;
    FUN_006c06b0(param_1,0x11,lVar19);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x7d;
    *(undefined1 *)(param_1 + 0x108) = 0x7d;
    break;
  case 0x32:
    lVar19 = param_3[2];
    pcVar22 = "operator";
    cVar28 = 'o';
    lVar11 = (long)*(int *)(lVar19 + 0x10);
    lVar8 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar8 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar9 = 1;
        lVar8 = 0;
      }
      else {
        lVar9 = lVar8 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar9;
      *(char *)(param_1 + lVar8) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar8 = lVar9;
    }
    pcVar22 = *(char **)(lVar19 + 8);
    if ((byte)(*pcVar22 + 0x9fU) < 0x1a) {
      if (lVar9 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        pcVar22 = *(char **)(lVar19 + 8);
        lVar9 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar9 + 1;
      *(undefined1 *)(param_1 + lVar9) = 0x20;
      *(undefined1 *)(param_1 + 0x108) = 0x20;
    }
    lVar19 = lVar11 + -1;
    if (pcVar22[lVar11 + -1] != ' ') {
      lVar19 = lVar11;
    }
    if (lVar19 != 0) {
      pcVar31 = pcVar22 + lVar19;
      lVar19 = *(long *)(param_1 + 0x100);
      do {
        cVar28 = *pcVar22;
        if (lVar19 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar19 = 0;
        }
        else {
          lVar8 = lVar19 + 1;
        }
        pcVar22 = pcVar22 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(char *)(param_1 + lVar19) = cVar28;
        *(char *)(param_1 + 0x108) = cVar28;
        lVar19 = lVar8;
      } while (pcVar31 != pcVar22);
    }
    break;
  case 0x33:
    pcVar22 = "operator ";
    cVar28 = 'o';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[3]);
    return;
  default:
    goto switchD_006bc8e5_caseD_34;
  case 0x35:
    pcVar22 = "operator ";
    cVar28 = 'o';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (*(long **)(param_1 + 0x170) != (long *)0x0) {
      local_108 = *(long **)(param_1 + 0x120);
      *(long ***)(param_1 + 0x120) = &local_108;
      local_100 = *(long **)(param_1 + 0x170);
    }
    if (*(int *)param_3[2] == 4) {
      FUN_006c06b0(param_1,0x11,*(undefined8 *)((int *)param_3[2] + 4));
      if (*(long *)(param_1 + 0x170) != 0) {
        *(long **)(param_1 + 0x120) = local_108;
      }
      if (*(char *)(param_1 + 0x108) == '<') {
        FUN_006b9130(param_1,0x20);
      }
      lVar19 = *(long *)(param_1 + 0x100);
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar19 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar19 + 1;
      *(undefined1 *)(param_1 + lVar19) = 0x3c;
      *(undefined1 *)(param_1 + 0x108) = 0x3c;
      FUN_006c06b0(param_1,0x11,*(undefined8 *)(param_3[2] + 0x18));
      if (*(char *)(param_1 + 0x108) == '>') {
        FUN_006b9130(param_1,0x20);
      }
      lVar19 = *(long *)(param_1 + 0x100);
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar19 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar19 + 1;
      *(undefined1 *)(param_1 + lVar19) = 0x3e;
      *(undefined1 *)(param_1 + 0x108) = 0x3e;
    }
    else {
      FUN_006c06b0(param_1,0x11);
      if (*(long *)(param_1 + 0x170) != 0) {
        *(long **)(param_1 + 0x120) = local_108;
      }
    }
    break;
  case 0x36:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c1ab0(param_1,0x11,param_3[2]);
    return;
  case 0x37:
    piVar10 = (int *)param_3[2];
    piVar25 = (int *)param_3[3];
    if (*piVar10 == 0x32) {
      pcVar22 = (char *)**(undefined8 **)(piVar10 + 4);
      if (((*pcVar22 == 'a') && (pcVar22[1] == 'd')) && ((pcVar22[2] == '\0' && (*piVar25 == 3)))) {
        if ((**(int **)(piVar25 + 4) == 1) && (**(int **)(piVar25 + 6) == 0x29)) {
          piVar25 = *(int **)(piVar25 + 4);
        }
      }
      else if (*piVar25 == 0x39) {
        FUN_006c2270(param_1,0x11,*(undefined8 *)(piVar25 + 4));
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_00771f60();
        }
        FUN_006c1ab0(param_1,0x11,piVar10);
        return;
      }
      if (*pcVar22 == 's') {
        if ((pcVar22[1] == 'Z') && (pcVar22[2] == '\0')) {
          uVar13 = FUN_006b92a0(param_1,piVar25);
          FUN_006b8fa0(uVar13);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_00771f60();
          }
          FUN_006b9430(param_1);
          return;
        }
        if ((pcVar22[1] == 'P') && (pcVar22[2] == '\0')) {
          do {
            if ((*piVar25 != 0x2f) || (piVar10 = *(int **)(piVar25 + 4), piVar10 == (int *)0x0))
            break;
            if ((*piVar10 == 0x4c) &&
               (piVar10 = (int *)FUN_006b92a0(param_1,*(undefined8 *)(piVar10 + 4)),
               piVar10 != (int *)0x0)) {
              while (*piVar10 == 0x2f) {
                if ((*(long *)(piVar10 + 4) == 0) ||
                   (piVar10 = *(int **)(piVar10 + 6), piVar10 == (int *)0x0)) break;
              }
            }
            piVar25 = *(int **)(piVar25 + 6);
          } while (piVar25 != (int *)0x0);
          puVar24 = local_68;
          FUN_00771b70(puVar24,1,0x19,"%d");
          lVar19 = thunk_FUN_007129d0(puVar24);
          if (lVar19 != 0) {
            puVar32 = puVar24 + lVar19;
            lVar19 = *(long *)(param_1 + 0x100);
            do {
              uVar20 = *puVar24;
              if (lVar19 == 0xff) {
                *(undefined1 *)(param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
                lVar8 = 1;
                lVar19 = 0;
              }
              else {
                lVar8 = lVar19 + 1;
              }
              puVar24 = puVar24 + 1;
              *(long *)(param_1 + 0x100) = lVar8;
              *(undefined1 *)(param_1 + lVar19) = uVar20;
              *(undefined1 *)(param_1 + 0x108) = uVar20;
              lVar19 = lVar8;
            } while (puVar24 != puVar32);
          }
          break;
        }
      }
      FUN_006c1ab0(param_1,0x11,piVar10);
      if (((*pcVar22 == 'g') && (pcVar22[1] == 's')) && (pcVar22[2] == '\0')) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_00771f60();
        }
        FUN_006c06b0(param_1,0x11,piVar25);
        return;
      }
      if (((*pcVar22 == 's') && (pcVar22[1] == 't')) && (pcVar22[2] == '\0')) {
        FUN_006b9130(param_1,0x28);
        FUN_006c06b0(param_1,0x11,piVar25);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_00771f60();
        }
        FUN_006b9130(param_1,0x29);
        return;
      }
    }
    else if (*piVar10 == 0x34) {
      FUN_006b9130(param_1,0x28);
      FUN_006c06b0(param_1,0x11,*(undefined8 *)(piVar10 + 4));
      FUN_006b9130(param_1,0x29);
    }
    else {
      FUN_006c1ab0(param_1,0x11,piVar10);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c2270(param_1,0x11,piVar25);
    return;
  case 0x38:
    if (*(int *)param_3[3] == 0x39) {
      if ((((char *)**(undefined8 **)(param_3[2] + 0x10))[1] == 'c') &&
         ((cVar28 = *(char *)**(undefined8 **)(param_3[2] + 0x10), (byte)(cVar28 + 0x8eU) < 2 ||
          ((byte)(cVar28 + 0x9dU) < 2)))) {
        FUN_006c1ab0(param_1,0x11);
        FUN_006b9130(param_1,0x3c);
        FUN_006c06b0(param_1,0x11,*(undefined8 *)(param_3[3] + 0x10));
        FUN_006b9200(param_1,&DAT_008214d5);
        FUN_006c06b0(param_1,0x11,*(undefined8 *)(param_3[3] + 0x18));
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_00771f60();
        }
        FUN_006b9130(param_1,0x29);
        return;
      }
      iVar6 = FUN_006c2420(param_1,0x11,param_3);
      if ((iVar6 == 0) && (iVar6 = FUN_006c27d0(param_1,0x11,param_3), iVar6 == 0)) {
        piVar10 = (int *)param_3[2];
        if ((*piVar10 == 0x32) &&
           ((*(int *)(*(long *)(piVar10 + 4) + 0x10) == 1 &&
            (**(char **)(*(long *)(piVar10 + 4) + 8) == '>')))) {
          FUN_006b9130(param_1,0x28);
          piVar10 = (int *)param_3[2];
        }
        iVar6 = thunk_FUN_00712780(**(undefined8 **)(piVar10 + 4),&DAT_007d1ad5);
        if ((iVar6 == 0) && (piVar10 = *(int **)(param_3[3] + 0x10), *piVar10 == 3)) {
          if (**(int **)(piVar10 + 6) != 0x29) {
            *(undefined4 *)(param_1 + 0x130) = 1;
          }
          FUN_006c2270(param_1,0x11,*(undefined8 *)(piVar10 + 4));
        }
        else {
          FUN_006c2270(param_1,0x11,*(undefined8 *)(param_3[3] + 0x10));
        }
        lVar19 = param_3[2];
        uVar13 = **(undefined8 **)(lVar19 + 0x10);
        iVar6 = thunk_FUN_00712780(uVar13,"ix");
        if (iVar6 == 0) {
          FUN_006b9130(param_1,0x5b);
          FUN_006c06b0(param_1,0x11,*(undefined8 *)(param_3[3] + 0x18));
          FUN_006b9130(param_1,0x5d);
        }
        else {
          iVar6 = thunk_FUN_00712780(uVar13,&DAT_007d1ad5);
          if (iVar6 != 0) {
            FUN_006c1ab0(param_1,0x11,lVar19);
          }
          FUN_006c2270(param_1,0x11,*(undefined8 *)(param_3[3] + 0x18));
        }
        if (((*(int *)param_3[2] == 0x32) &&
            (lVar19 = *(long *)((int *)param_3[2] + 4), *(int *)(lVar19 + 0x10) == 1)) &&
           (**(char **)(lVar19 + 8) == '>')) {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_00771f60();
          }
          FUN_006b9130(param_1,0x29);
          return;
        }
      }
      break;
    }
    goto switchD_006bc8e5_caseD_34;
  case 0x3a:
    if ((*(int *)param_3[3] == 0x3b) && (**(int **)((int *)param_3[3] + 6) == 0x3c)) {
      iVar6 = FUN_006c2420(param_1,0x11,param_3);
      if ((iVar6 == 0) && (iVar6 = FUN_006c27d0(param_1,0x11,param_3), iVar6 == 0)) {
        lVar19 = param_3[2];
        lVar8 = *(long *)(param_3[3] + 0x10);
        lVar11 = *(long *)(param_3[3] + 0x18);
        uVar13 = *(undefined8 *)(lVar11 + 0x10);
        lVar11 = *(long *)(lVar11 + 0x18);
        iVar6 = thunk_FUN_00712780(**(undefined8 **)(lVar19 + 0x10),&DAT_008214d8);
        if (iVar6 == 0) {
          FUN_006c2270(param_1,0x11,lVar8);
          FUN_006c1ab0(param_1,0x11,lVar19);
          FUN_006c2270(param_1,0x11,uVar13);
          FUN_006b9200(param_1," : ");
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_00771f60();
          }
          FUN_006c2270(param_1,0x11,lVar11);
          return;
        }
        FUN_006b9200(param_1,&DAT_008214db);
        if (*(long *)(lVar8 + 0x10) != 0) {
          FUN_006c2270(param_1,0x11,lVar8);
          FUN_006b9130(param_1,0x20);
        }
        FUN_006c06b0(param_1,0x11,uVar13);
        if (lVar11 != 0) {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_00771f60();
          }
          FUN_006c2270(param_1,0x11,lVar11);
          return;
        }
      }
      break;
    }
switchD_006bc8e5_caseD_34:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x3d:
  case 0x3e:
    piVar10 = (int *)param_3[2];
    if (*piVar10 == 0x27) {
      uVar21 = *(uint *)(*(long *)(piVar10 + 4) + 0x1c);
      if (uVar21 < 7) {
        if ((uVar21 != 0) && (piVar25 = (int *)param_3[3], *piVar25 == 0)) {
          if (iVar6 == 0x3e) {
            FUN_006b9130(param_1,0x2d);
            piVar25 = (int *)param_3[3];
          }
          FUN_006c06b0(param_1,0x11,piVar25);
          switch(uVar21) {
          case 2:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              FUN_00771f60();
            }
            FUN_006b9130(param_1,0x75);
            return;
          case 3:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              FUN_00771f60();
            }
            FUN_006b9130(param_1,0x6c);
            return;
          case 4:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              FUN_00771f60();
            }
            FUN_006b9200(param_1,&DAT_00821eeb);
            return;
          case 5:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              FUN_00771f60();
            }
            FUN_006b9200(param_1,"ll");
            return;
          case 6:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              FUN_00771f60();
            }
            FUN_006b9200(param_1,"ull");
            return;
          }
          break;
        }
      }
      else if ((((uVar21 == 7) && (piVar25 = (int *)param_3[3], *piVar25 == 0)) && (piVar25[6] == 1)
               ) && (iVar6 == 0x3d)) {
        if (**(char **)(piVar25 + 4) == '0') {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_00771f60();
          }
          FUN_006b9200(param_1,"false");
          return;
        }
        if (**(char **)(piVar25 + 4) == '1') {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_00771f60();
          }
          FUN_006b9200(param_1,&DAT_0080b58b);
          return;
        }
      }
    }
    else {
      uVar21 = 0;
    }
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      piVar10 = (int *)param_3[2];
      lVar19 = 0;
      lVar8 = 1;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x28;
    *(undefined1 *)(param_1 + 0x108) = 0x28;
    FUN_006c06b0(param_1,0x11,piVar10);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x29;
    *(undefined1 *)(param_1 + 0x108) = 0x29;
    if ((int)*param_3 == 0x3e) {
      FUN_006b9130(param_1,0x2d);
    }
    if (uVar21 == 8) {
      FUN_006b9130(param_1,0x5b);
      FUN_006c06b0(param_1,0x11,param_3[3]);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      FUN_006b9130(param_1,0x5d);
      return;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[3]);
    return;
  case 0x3f:
    FUN_006c06b0(param_1,0x11,param_3[2]);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x28;
    *(undefined1 *)(param_1 + 0x108) = 0x28;
    lVar19 = param_3[3];
    goto LAB_006bdd56;
  case 0x40:
    pcVar22 = "java resource ";
    cVar28 = 'j';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x41:
    FUN_006c06b0(param_1,0x11,param_3[2]);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[3]);
    return;
  case 0x42:
    lVar19 = *(long *)(param_1 + 0x100);
    lVar8 = param_3[2];
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar11 = 1;
      lVar19 = 0;
    }
    else {
      lVar11 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar11;
    uVar20 = (undefined1)(int)lVar8;
    *(undefined1 *)(param_1 + lVar19) = uVar20;
    *(undefined1 *)(param_1 + 0x108) = uVar20;
    break;
  case 0x43:
    puVar24 = local_68;
    FUN_00771b70(puVar24,1,0x19,"%d",(int)param_3[2]);
    lVar19 = thunk_FUN_007129d0(puVar24);
    if (lVar19 != 0) {
      puVar32 = puVar24 + lVar19;
      lVar19 = *(long *)(param_1 + 0x100);
      do {
        uVar20 = *puVar24;
        if (lVar19 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar19 = 0;
        }
        else {
          lVar8 = lVar19 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar19) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        lVar19 = lVar8;
      } while (puVar32 != puVar24);
    }
    break;
  case 0x44:
    pcVar22 = "decltype (";
    cVar28 = 'd';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    lVar19 = param_3[2];
LAB_006bdd56:
    FUN_006c06b0(param_1,0x11,lVar19);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x29;
    *(undefined1 *)(param_1 + 0x108) = 0x29;
    break;
  case 0x45:
    pcVar22 = "global constructors keyed to ";
    cVar28 = 'g';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x46:
    pcVar22 = "global destructors keyed to ";
    cVar28 = 'g';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x47:
    puVar24 = &DAT_00821542;
    uVar20 = 0x7b;
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar19) = uVar20;
      *(undefined1 *)(param_1 + 0x108) = uVar20;
      if (puVar24 == &DAT_00821549) break;
      uVar20 = *puVar24;
      puVar24 = puVar24 + 1;
      lVar19 = lVar8;
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    puVar23 = &DAT_0082154a;
    uVar20 = 0x29;
    FUN_006c06b0(param_1,0x11,param_3[2]);
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      puVar23 = puVar23 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar19) = uVar20;
      *(undefined1 *)(param_1 + 0x108) = uVar20;
      if (puVar23 == &DAT_0082154c) break;
      uVar20 = *puVar23;
      lVar19 = lVar8;
    }
    puVar24 = local_68;
    FUN_00771b70(puVar24,1,0x19,"%d",(int)param_3[3] + 1);
    lVar8 = thunk_FUN_007129d0(puVar24);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar8 != 0) {
      puVar32 = puVar24 + lVar8;
      lVar8 = lVar19;
      do {
        uVar20 = *puVar24;
        if (lVar8 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar19 = 1;
          lVar8 = 0;
        }
        else {
          lVar19 = lVar8 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        *(undefined1 *)(param_1 + lVar8) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        lVar8 = lVar19;
      } while (puVar32 != puVar24);
    }
    goto LAB_006bede8;
  case 0x49:
    pcVar22 = "{unnamed type#";
    cVar28 = '{';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    puVar24 = local_68;
    FUN_00771b70(puVar24,1,0x19,"%d",(int)param_3[2] + 1);
    lVar8 = thunk_FUN_007129d0(puVar24);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar8 != 0) {
      puVar32 = puVar24 + lVar8;
      lVar8 = lVar19;
      do {
        uVar20 = *puVar24;
        if (lVar8 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar19 = 1;
          lVar8 = 0;
        }
        else {
          lVar19 = lVar8 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        *(undefined1 *)(param_1 + lVar8) = uVar20;
        *(undefined1 *)(param_1 + 0x108) = uVar20;
        lVar8 = lVar19;
      } while (puVar32 != puVar24);
    }
LAB_006bede8:
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x7d;
    *(undefined1 *)(param_1 + 0x108) = 0x7d;
    break;
  case 0x4a:
    pcVar22 = "ransaction clone for ";
    cVar28 = 't';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x4b:
    pcVar22 = "non-transaction clone for ";
    cVar28 = 'n';
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    FUN_006c06b0(param_1,0x11,param_3[2]);
    return;
  case 0x4c:
    lVar19 = param_3[2];
    piVar10 = (int *)FUN_006b92a0(param_1,lVar19);
    iVar6 = 0;
    if (piVar10 == (int *)0x0) {
      FUN_006c2270(param_1,0x11,lVar19);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      FUN_006b9200(param_1,&DAT_008215d5);
      return;
    }
    do {
      iVar29 = iVar6;
      if ((*piVar10 != 0x2f) || (*(long *)(piVar10 + 4) == 0)) {
        if (iVar29 == 0) goto switchD_006bfddd_default;
        iVar27 = iVar29 + -1;
        iVar6 = iVar29;
        break;
      }
      piVar10 = *(int **)(piVar10 + 6);
      iVar6 = iVar29 + 1;
      iVar27 = iVar29;
    } while (piVar10 != (int *)0x0);
    iVar29 = 0;
    do {
      *(int *)(param_1 + 0x13c) = iVar29;
      FUN_006c06b0(param_1,0x11,lVar19);
      if (iVar29 < iVar27) {
        puVar23 = &DAT_00801fb4;
        uVar20 = 0x2c;
        lVar8 = *(long *)(param_1 + 0x100);
        while( true ) {
          if (lVar8 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar8 = 0;
            lVar11 = 1;
          }
          else {
            lVar11 = lVar8 + 1;
          }
          puVar23 = puVar23 + 1;
          *(long *)(param_1 + 0x100) = lVar11;
          *(undefined1 *)(param_1 + lVar8) = uVar20;
          *(undefined1 *)(param_1 + 0x108) = uVar20;
          if (puVar23 == &DAT_00801fb6) break;
          uVar20 = *puVar23;
          lVar8 = lVar11;
        }
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < iVar6);
    break;
  case 0x4d:
    puVar23 = &DAT_0082136e;
    uVar20 = 0x5b;
    FUN_006c06b0(param_1,0x11,param_3[2]);
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      puVar23 = puVar23 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar19) = uVar20;
      *(undefined1 *)(param_1 + 0x108) = uVar20;
      if (puVar23 == &DAT_00821373) break;
      uVar20 = *puVar23;
      lVar19 = lVar8;
    }
    goto LAB_006be8e0;
  case 0x4f:
    pcVar22 = " [clone ";
    cVar28 = ' ';
    FUN_006c06b0(param_1,0x11,param_3[2]);
    lVar19 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar22 = pcVar22 + 1;
      if (lVar19 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar19 = 0;
      }
      else {
        lVar8 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar19) = cVar28;
      *(char *)(param_1 + 0x108) = cVar28;
      if (pcVar22 == "") break;
      cVar28 = *pcVar22;
      lVar19 = lVar8;
    }
LAB_006be8e0:
    FUN_006c06b0(param_1,0x11,param_3[3]);
    lVar19 = *(long *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar19 = 0;
    }
    else {
      lVar8 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar19) = 0x5d;
    *(undefined1 *)(param_1 + 0x108) = 0x5d;
  }
switchD_006bfddd_default:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
joined_r0x006bffd7:
  if (puVar14 == (undefined8 *)0x0) goto LAB_006c020a;
  if (((long *)*puVar14 == plVar18) ||
     ((*(undefined8 **)(param_1 + 0x148) != puVar14 && ((long *)*puVar14 == param_3))))
  goto LAB_006bffff;
  puVar14 = (undefined8 *)puVar14[1];
  goto joined_r0x006bffd7;
LAB_006c020a:
  unaff_RBX = *(undefined8 *)(param_1 + 0x120);
  bVar4 = true;
  *(undefined8 *)(param_1 + 0x120) = puVar26[1];
  piVar10 = (int *)FUN_006b91a0(param_1,plVar18);
  if (piVar10 == (int *)0x0) {
LAB_006c0241:
    *(undefined8 *)(param_1 + 0x120) = unaff_RBX;
    goto switchD_006bc8e5_caseD_34;
  }
LAB_006c0021:
  auVar33._0_8_ = piVar10;
  iVar29 = *piVar10;
  if (iVar29 == 0x2f) {
    if (-1 < *(int *)(param_1 + 0x13c)) {
      auVar33 = thunk_FUN_006b8fe8(piVar10,*(int *)(param_1 + 0x13c),plVar18);
      if (auVar33._0_8_ == (int *)0x0) {
        if (!bVar4) goto switchD_006bc8e5_caseD_34;
        goto LAB_006c0241;
      }
      iVar29 = *auVar33._0_8_;
      goto LAB_006bca7a;
    }
    local_108 = *(long **)(param_1 + 0x128);
  }
  else {
LAB_006bca7a:
    plVar18 = auVar33._8_8_;
    plVar7 = auVar33._0_8_;
    local_108 = *(long **)(param_1 + 0x128);
    if ((iVar29 == 0x23) || (iVar6 == iVar29)) {
      plVar18 = (long *)plVar7[2];
      param_3 = plVar7;
    }
    else if (iVar29 == 0x24) {
      plVar18 = (long *)plVar7[2];
      goto LAB_006bc931;
    }
  }
LAB_006bcaa0:
  *(long ***)(param_1 + 0x128) = &local_108;
  local_f0 = *(undefined8 *)(param_1 + 0x120);
  local_100 = param_3;
LAB_006bc964:
  plVar7 = local_100;
  local_f8 = 0;
  FUN_006c06b0(param_1,0x11,plVar18);
  if (local_f8 == 0) {
    FUN_006c0770(param_1,0x11,plVar7);
  }
  *(long **)(param_1 + 0x128) = local_108;
  if (bVar4) {
    *(undefined8 *)(param_1 + 0x120) = unaff_RBX;
  }
  goto switchD_006bfddd_default;
}

