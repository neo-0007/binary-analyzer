
void d_print_comp_inner(long param_1,undefined8 param_2,long *param_3)

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
  size_t sVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined8 unaff_RBX;
  char *pcVar23;
  undefined *puVar24;
  undefined1 *puVar25;
  int *piVar26;
  undefined8 *puVar27;
  int iVar28;
  char cVar29;
  int iVar30;
  ulong uVar31;
  undefined1 *puVar32;
  char *pcVar33;
  uint uVar34;
  long in_FS_OFFSET;
  undefined1 auVar35 [16];
  long *local_108;
  long *local_100;
  int local_f8;
  undefined8 local_f0;
  long *local_e8 [2];
  long local_d8;
  long *local_d0 [2];
  long alStack_c0 [2];
  long *aplStack_b0 [9];
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (long *)0x0) goto switchD_006ba865_caseD_34;
  if (*(int *)(param_1 + 0x130) != 0) goto switchD_006bdd5d_default;
  iVar6 = (int)*param_3;
  bVar4 = false;
  switch(iVar6) {
  case 0:
    puVar25 = (undefined1 *)param_3[2];
    if ((long)(int)param_3[3] != 0) {
      puVar32 = puVar25 + (int)param_3[3];
      lVar20 = *(long *)(param_1 + 0x100);
      do {
        uVar21 = *puVar25;
        if (lVar20 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar20 = 0;
        }
        else {
          lVar8 = lVar20 + 1;
        }
        puVar25 = puVar25 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar20) = uVar21;
        *(undefined1 *)(param_1 + 0x108) = uVar21;
        lVar20 = lVar8;
      } while (puVar32 != puVar25);
    }
    break;
  case 1:
  case 2:
    d_print_comp(param_1,0x11,param_3[2]);
    d_append_string(param_1,&DAT_00817c0b);
    piVar10 = (int *)param_3[3];
    if (*piVar10 == 0x48) {
      pcVar23 = local_68;
      d_append_string(param_1,"{default arg#");
      ___sprintf_chk(pcVar23,1,0x19,"%d",piVar10[6] + 1);
      sVar13 = strlen(pcVar23);
      if (sVar13 != 0) {
        pcVar33 = pcVar23 + sVar13;
        lVar20 = *(long *)(param_1 + 0x100);
        do {
          cVar29 = *pcVar23;
          if (lVar20 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar8 = 1;
            lVar20 = 0;
          }
          else {
            lVar8 = lVar20 + 1;
          }
          pcVar23 = pcVar23 + 1;
          *(long *)(param_1 + 0x100) = lVar8;
          *(char *)(param_1 + lVar20) = cVar29;
          *(char *)(param_1 + 0x108) = cVar29;
          lVar20 = lVar8;
        } while (pcVar33 != pcVar23);
      }
      d_append_string(param_1,&DAT_00817c0a);
      piVar10 = *(int **)(piVar10 + 4);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,piVar10);
    return;
  case 3:
    plVar19 = (long *)param_3[2];
    uVar14 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (plVar19 != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x120);
      pplVar16 = local_e8;
      pplVar17 = (long **)0x0;
      uVar22 = 0;
      do {
        pplVar12 = pplVar16;
        *pplVar12 = (long *)pplVar17;
        uVar34 = uVar22 + 1;
        *(undefined4 *)(pplVar12 + 2) = 0;
        iVar6 = (int)*plVar19;
        pplVar12[1] = plVar19;
        pplVar12[3] = plVar7;
        if (0x35 < iVar6 - 0x1cU) {
          *(long ***)(param_1 + 0x128) = pplVar12;
          if (iVar6 != 2) goto LAB_006bdba6;
          plVar19 = (long *)plVar19[3];
          iVar6 = (int)*plVar19;
          if (iVar6 == 0x48) {
            plVar19 = (long *)plVar19[2];
            if (plVar19 == (long *)0x0) goto switchD_006ba865_caseD_34;
            iVar6 = (int)*plVar19;
          }
          uVar18 = (ulong)uVar34;
          pplVar16 = local_e8 + (ulong)uVar22 * 4;
          pplVar17 = local_e8 + uVar18 * 4;
          goto joined_r0x006bdb3e;
        }
        if ((0x3400000000001fU >> ((ulong)(iVar6 - 0x1cU) & 0x3f) & 1) == 0) {
          *(long ***)(param_1 + 0x128) = pplVar12;
          goto LAB_006bc535;
        }
        plVar19 = (long *)plVar19[2];
        if (plVar19 == (long *)0x0) {
          *(long ***)(param_1 + 0x128) = pplVar12;
          goto switchD_006ba865_caseD_34;
        }
        pplVar16 = pplVar12 + 4;
        pplVar17 = pplVar12;
        uVar22 = uVar34;
      } while (uVar34 != 4);
      *(long ***)(param_1 + 0x128) = pplVar12;
    }
    goto switchD_006ba865_caseD_34;
  case 4:
    uVar14 = *(undefined8 *)(param_1 + 0x170);
    lVar20 = param_3[2];
    *(long **)(param_1 + 0x170) = param_3;
    uVar1 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    d_print_comp(param_1,0x11,lVar20);
    if (*(char *)(param_1 + 0x108) == '<') {
      d_append_char(param_1,0x20);
    }
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x3c;
    *(undefined1 *)(param_1 + 0x108) = 0x3c;
    d_print_comp(param_1,0x11,param_3[3]);
    if (*(char *)(param_1 + 0x108) == '>') {
      d_append_char(param_1,0x20);
    }
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x3e;
    *(undefined1 *)(param_1 + 0x108) = 0x3e;
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    *(undefined8 *)(param_1 + 0x170) = uVar14;
    break;
  case 5:
    if (*(int *)(param_1 + 0x138) != 0) {
      puVar24 = &DAT_00817c0e;
      uVar21 = 0x61;
      lVar20 = *(long *)(param_1 + 0x100);
      while( true ) {
        if (lVar20 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar20 = 0;
        }
        else {
          lVar8 = lVar20 + 1;
        }
        puVar24 = puVar24 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar20) = uVar21;
        *(undefined1 *)(param_1 + 0x108) = uVar21;
        if (puVar24 == &DAT_00817c13) break;
        uVar21 = *puVar24;
        lVar20 = lVar8;
      }
      pcVar23 = local_68;
      ___sprintf_chk(pcVar23,1,0x19,"%d",(int)param_3[2] + 1);
      sVar13 = strlen(pcVar23);
      if (sVar13 != 0) {
        pcVar33 = pcVar23 + sVar13;
        lVar20 = *(long *)(param_1 + 0x100);
        do {
          cVar29 = *pcVar23;
          if (lVar20 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar8 = 1;
            lVar20 = 0;
          }
          else {
            lVar8 = lVar20 + 1;
          }
          pcVar23 = pcVar23 + 1;
          *(long *)(param_1 + 0x100) = lVar8;
          *(char *)(param_1 + lVar20) = cVar29;
          *(char *)(param_1 + 0x108) = cVar29;
          lVar20 = lVar8;
        } while (pcVar33 != pcVar23);
      }
      break;
    }
    lVar20 = param_1;
    piVar10 = (int *)d_lookup_template_argument(param_1,param_3);
    if ((piVar10 != (int *)0x0) &&
       (((*piVar10 != 0x2f || (*(int *)(lVar20 + 0x13c) < 0)) ||
        (piVar10 = (int *)d_index_template_argument_part_0(piVar10,*(int *)(lVar20 + 0x13c),piVar10)
        , piVar10 != (int *)0x0)))) {
      puVar15 = *(undefined8 **)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = *puVar15;
      d_print_comp(param_1,0x11,piVar10);
      *(undefined8 **)(param_1 + 0x120) = puVar15;
      break;
    }
    goto switchD_006ba865_caseD_34;
  case 6:
    uVar18 = param_3[2];
    if (uVar18 == 0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      d_append_string(param_1,&DAT_00817d82);
      return;
    }
    pcVar23 = local_68;
    d_append_string(param_1,"{parm#");
    ___sprintf_chk(pcVar23,1,0x19,"%d",uVar18 & 0xffffffff);
    sVar13 = strlen(pcVar23);
    lVar20 = *(long *)(param_1 + 0x100);
    if (sVar13 != 0) {
      pcVar33 = pcVar23 + sVar13;
      lVar8 = lVar20;
      do {
        cVar29 = *pcVar23;
        if (lVar8 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar20 = 1;
          lVar8 = 0;
        }
        else {
          lVar20 = lVar8 + 1;
        }
        pcVar23 = pcVar23 + 1;
        *(long *)(param_1 + 0x100) = lVar20;
        *(char *)(param_1 + lVar8) = cVar29;
        *(char *)(param_1 + 0x108) = cVar29;
        lVar8 = lVar20;
      } while (pcVar33 != pcVar23);
    }
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar20 = 0;
    }
    *(long *)(param_1 + 0x100) = lVar20 + 1;
    *(undefined1 *)(param_1 + lVar20) = 0x7d;
    *(undefined1 *)(param_1 + 0x108) = 0x7d;
    break;
  case 7:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[3]);
    return;
  case 8:
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x7e;
    *(undefined1 *)(param_1 + 0x108) = 0x7e;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[3]);
    return;
  case 9:
    pcVar23 = "table for ";
    cVar29 = 'v';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 10:
    pcVar23 = "VTT for ";
    cVar29 = 'V';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0xb:
    pcVar23 = "construction vtable for ";
    cVar29 = 'c';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    puVar24 = &DAT_00817c36;
    uVar21 = 0x2d;
    d_print_comp(param_1,0x11,param_3[2]);
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      puVar24 = puVar24 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar20) = uVar21;
      *(undefined1 *)(param_1 + 0x108) = uVar21;
      if (puVar24 == &DAT_00817c3a) break;
      uVar21 = *puVar24;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[3]);
    return;
  case 0xc:
    pcVar23 = "typeinfo for ";
    cVar29 = 't';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0xd:
    pcVar23 = "typeinfo name for ";
    cVar29 = 't';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0xe:
    pcVar23 = "typeinfo fn for ";
    cVar29 = 't';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0xf:
    pcVar23 = "non-virtual thunk to ";
    cVar29 = 'n';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x10:
    pcVar23 = "irtual thunk to ";
    cVar29 = 'v';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x11:
    pcVar23 = "covariant return thunk to ";
    cVar29 = 'c';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x12:
    pcVar23 = "java Class for ";
    cVar29 = 'j';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x13:
    pcVar23 = "guard variable for ";
    cVar29 = 'g';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x14:
    pcVar23 = "TLS init function for ";
    cVar29 = 'T';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x15:
    pcVar23 = "TLS wrapper function for ";
    cVar29 = 'T';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x16:
    pcVar23 = "reference temporary #";
    cVar29 = 'r';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    pcVar23 = " for ";
    cVar29 = ' ';
    d_print_comp(param_1,0x11,param_3[3]);
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      pcVar23 = pcVar23 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x17:
    pcVar23 = "hidden alias for ";
    cVar29 = 'h';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x18:
    puVar25 = (undefined1 *)param_3[2];
    if ((long)(int)param_3[3] != 0) {
      puVar32 = puVar25 + (int)param_3[3];
      lVar20 = *(long *)(param_1 + 0x100);
      do {
        uVar21 = *puVar25;
        if (lVar20 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar20 = 0;
        }
        else {
          lVar8 = lVar20 + 1;
        }
        puVar25 = puVar25 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar20) = uVar21;
        *(undefined1 *)(param_1 + 0x108) = uVar21;
        lVar20 = lVar8;
      } while (puVar32 != puVar25);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    plVar19 = (long *)param_3[2];
    local_108 = *(long **)(param_1 + 0x128);
    for (plVar7 = local_108; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if ((int)plVar7[2] == 0) {
        uVar22 = *(int *)plVar7[1] - 0x19;
        if (2 < uVar22) {
          bVar4 = false;
          break;
        }
        if (iVar6 == *(int *)plVar7[1]) {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail_local(local_108,uVar22,plVar19);
          }
          d_print_comp(param_1,0x11);
          return;
        }
      }
    }
    goto LAB_006baa20;
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
    plVar19 = (long *)0x0;
LAB_006ba8b1:
    *(long ***)(param_1 + 0x128) = &local_108;
    local_f0 = *(undefined8 *)(param_1 + 0x120);
    local_100 = param_3;
    if (plVar19 == (long *)0x0) {
      plVar19 = (long *)param_3[2];
    }
    goto LAB_006ba8e4;
  case 0x23:
  case 0x24:
    plVar19 = (long *)param_3[2];
    auVar5._8_8_ = plVar19;
    auVar5._0_8_ = plVar19;
    auVar35._8_8_ = plVar19;
    auVar35._0_8_ = plVar19;
    iVar30 = (int)*plVar19;
    if ((*(int *)(param_1 + 0x138) != 0) || (bVar4 = false, auVar35 = auVar5, iVar30 != 5))
    goto LAB_006ba9fa;
    iVar30 = *(int *)(param_1 + 0x158);
    if (0 < iVar30) {
      puVar27 = *(undefined8 **)(param_1 + 0x150);
      puVar15 = puVar27 + (ulong)(iVar30 - 1) * 2 + 2;
      do {
        if (plVar19 == (long *)*puVar27) {
          puVar15 = *(undefined8 **)(param_1 + 0x148);
          goto joined_r0x006bdf57;
        }
        puVar27 = puVar27 + 2;
      } while (puVar27 != puVar15);
    }
    if (iVar30 < *(int *)(param_1 + 0x15c)) {
      plVar7 = *(long **)(param_1 + 0x120);
      puVar15 = (undefined8 *)((long)iVar30 * 0x10 + *(long *)(param_1 + 0x150));
      *(int *)(param_1 + 0x158) = iVar30 + 1;
      puVar27 = puVar15 + 1;
      *puVar15 = plVar19;
      if (plVar7 != (long *)0x0) {
        uVar18 = (ulong)*(int *)(param_1 + 0x168);
        iVar30 = *(int *)(param_1 + 0x16c);
        lVar20 = uVar18 << 4;
        puVar15 = puVar27;
        do {
          if (iVar30 <= (int)uVar18) goto switchD_006ba865_caseD_34;
          lVar8 = plVar7[1];
          uVar22 = (int)uVar18 + 1;
          uVar18 = (ulong)uVar22;
          *(uint *)(param_1 + 0x168) = uVar22;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x160) + lVar20);
          lVar20 = lVar20 + 0x10;
          puVar27[1] = lVar8;
          *puVar15 = puVar27;
          plVar7 = (long *)*plVar7;
          puVar15 = puVar27;
        } while (plVar7 != (long *)0x0);
      }
      *puVar27 = 0;
LAB_006bdf7f:
      bVar4 = false;
      piVar10 = (int *)d_lookup_template_argument(param_1,plVar19);
      if (piVar10 != (int *)0x0) goto LAB_006bdfa1;
    }
    goto switchD_006ba865_caseD_34;
  case 0x27:
    lVar20 = (long)*(int *)((undefined8 *)param_3[2] + 1);
    puVar25 = *(undefined1 **)param_3[2];
    if (lVar20 != 0) {
      puVar32 = puVar25 + lVar20;
      lVar20 = *(long *)(param_1 + 0x100);
      do {
        uVar21 = *puVar25;
        if (lVar20 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar20 = 0;
        }
        else {
          lVar8 = lVar20 + 1;
        }
        puVar25 = puVar25 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(undefined1 *)(param_1 + lVar20) = uVar21;
        *(undefined1 *)(param_1 + 0x108) = uVar21;
        lVar20 = lVar8;
      } while (puVar32 != puVar25);
    }
    break;
  case 0x28:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x29:
    plVar19 = *(long **)(param_1 + 0x128);
    if (param_3[2] != 0) {
      *(long ***)(param_1 + 0x128) = &local_108;
      local_f0 = *(undefined8 *)(param_1 + 0x120);
      local_f8 = 0;
      local_108 = plVar19;
      local_100 = param_3;
      d_print_comp(param_1,0x11);
      *(long **)(param_1 + 0x128) = local_108;
      if (local_f8 != 0) break;
      d_append_char(param_1,0x20);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_function_type(param_1,0x11,param_3,*(undefined8 *)(param_1 + 0x128));
    return;
  case 0x2a:
    plVar19 = *(long **)(param_1 + 0x128);
    uVar22 = 1;
    local_d0[0] = *(long **)(param_1 + 0x120);
    *(long ***)(param_1 + 0x128) = local_e8;
    local_d8._0_4_ = 0;
    plVar7 = plVar19;
    pplVar16 = local_e8;
    local_e8[0] = plVar19;
    local_e8[1] = param_3;
    if (plVar19 == (long *)0x0) {
      d_print_comp(param_1,0x11,param_3[3]);
      *(undefined8 *)(param_1 + 0x128) = 0;
      if ((int)local_d8 != 0) break;
    }
    else {
      do {
        if (2 < *(int *)plVar7[1] - 0x19U) break;
        if ((int)plVar7[2] == 0) {
          if (3 < uVar22) goto switchD_006ba865_caseD_34;
          lVar20 = plVar7[1];
          uVar18 = (ulong)uVar22;
          uVar22 = uVar22 + 1;
          local_e8[uVar18 * 4] = (long *)*plVar7;
          (&local_d8)[uVar18 * 4 + -1] = lVar20;
          lVar20 = plVar7[2];
          plVar2 = (long *)plVar7[3];
          local_e8[uVar18 * 4] = (long *)pplVar16;
          pplVar16 = local_e8 + uVar18 * 4;
          *(long ***)(param_1 + 0x128) = pplVar16;
          (&local_d8)[uVar18 * 4] = lVar20;
          local_d0[uVar18 * 4] = plVar2;
          *(undefined4 *)(plVar7 + 2) = 1;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      d_print_comp(param_1,0x11,param_3[3]);
      *(long **)(param_1 + 0x128) = plVar19;
      if ((int)local_d8 != 0) break;
      if (uVar22 != 1) {
        uVar18 = (ulong)(uVar22 - 1);
        pplVar16 = local_e8 + uVar18 * 4;
        while( true ) {
          pplVar17 = pplVar16 + 1;
          pplVar16 = pplVar16 + -4;
          d_print_mod(param_1,0x11,*pplVar17);
          if ((int)uVar18 == 1) break;
          uVar18 = (ulong)((int)uVar18 - 1);
        }
      }
    }
    d_print_array_type(param_1,0x11,param_3,*(undefined8 *)(param_1 + 0x128));
    break;
  case 0x2b:
  case 0x2d:
    lVar20 = param_3[3];
    local_108 = *(long **)(param_1 + 0x128);
    local_f8 = 0;
    *(long ***)(param_1 + 0x128) = &local_108;
    local_f0 = *(undefined8 *)(param_1 + 0x120);
    local_100 = param_3;
    d_print_comp(param_1,0x11,lVar20);
    if (local_f8 == 0) {
      d_print_mod(param_1,0x11,param_3);
    }
    *(long **)(param_1 + 0x128) = local_108;
    break;
  case 0x2c:
    if (*(short *)((long)param_3 + 0x1a) != 0) {
      d_append_string(param_1,"_Sat ");
    }
    if (*(long *)(param_3[2] + 0x10) != 0x90c600) {
      d_print_comp(param_1,0x11);
      lVar20 = *(long *)(param_1 + 0x100);
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar20 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar20 + 1;
      *(undefined1 *)(param_1 + lVar20) = 0x20;
      *(undefined1 *)(param_1 + 0x108) = 0x20;
    }
    if ((short)param_3[3] == 0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      d_append_string(param_1,"_Fract");
      return;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_append_string(param_1,"_Accum");
    return;
  case 0x2e:
  case 0x2f:
    if (param_3[2] != 0) {
      d_print_comp(param_1,0x11);
    }
    if (param_3[3] != 0) {
      uVar18 = *(ulong *)(param_1 + 0x100);
      if (0xfd < uVar18) {
        *(undefined1 *)(param_1 + uVar18) = 0;
        (**(code **)(param_1 + 0x110))(param_1,uVar18,*(undefined8 *)(param_1 + 0x118));
        uVar18 = 0;
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        *(undefined8 *)(param_1 + 0x100) = 0;
      }
      puVar24 = &DAT_007f7194;
      uVar21 = 0x2c;
      while( true ) {
        if (uVar18 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          uVar31 = 1;
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          uVar18 = 0;
        }
        else {
          uVar31 = uVar18 + 1;
        }
        puVar24 = puVar24 + 1;
        *(ulong *)(param_1 + 0x100) = uVar31;
        *(undefined1 *)(param_1 + uVar18) = uVar21;
        *(undefined1 *)(param_1 + 0x108) = uVar21;
        if (puVar24 == &DAT_007f7196) break;
        uVar21 = *puVar24;
        uVar18 = uVar31;
      }
      lVar20 = *(long *)(param_1 + 0x140);
      d_print_comp(param_1,0x11,param_3[3]);
      if ((*(long *)(param_1 + 0x140) == lVar20) && (*(ulong *)(param_1 + 0x100) == uVar31)) {
        *(ulong *)(param_1 + 0x100) = uVar31 - 2;
      }
    }
    break;
  case 0x30:
    pcVar23 = "template parameter object for ";
    cVar29 = 't';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x31:
    lVar20 = param_3[3];
    if (param_3[2] != 0) {
      d_print_comp(param_1,0x11);
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
    d_print_comp(param_1,0x11,lVar20);
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x7d;
    *(undefined1 *)(param_1 + 0x108) = 0x7d;
    break;
  case 0x32:
    lVar20 = param_3[2];
    pcVar23 = "operator";
    cVar29 = 'o';
    lVar11 = (long)*(int *)(lVar20 + 0x10);
    lVar8 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
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
      *(char *)(param_1 + lVar8) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar8 = lVar9;
    }
    pcVar23 = *(char **)(lVar20 + 8);
    if ((byte)(*pcVar23 + 0x9fU) < 0x1a) {
      if (lVar9 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        pcVar23 = *(char **)(lVar20 + 8);
        lVar9 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar9 + 1;
      *(undefined1 *)(param_1 + lVar9) = 0x20;
      *(undefined1 *)(param_1 + 0x108) = 0x20;
    }
    lVar20 = lVar11 + -1;
    if (pcVar23[lVar11 + -1] != ' ') {
      lVar20 = lVar11;
    }
    if (lVar20 != 0) {
      pcVar33 = pcVar23 + lVar20;
      lVar20 = *(long *)(param_1 + 0x100);
      do {
        cVar29 = *pcVar23;
        if (lVar20 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar20 = 0;
        }
        else {
          lVar8 = lVar20 + 1;
        }
        pcVar23 = pcVar23 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(char *)(param_1 + lVar20) = cVar29;
        *(char *)(param_1 + 0x108) = cVar29;
        lVar20 = lVar8;
      } while (pcVar33 != pcVar23);
    }
    break;
  case 0x33:
    pcVar23 = "operator ";
    cVar29 = 'o';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[3]);
    return;
  default:
    goto switchD_006ba865_caseD_34;
  case 0x35:
    pcVar23 = "operator ";
    cVar29 = 'o';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (*(long **)(param_1 + 0x170) != (long *)0x0) {
      local_108 = *(long **)(param_1 + 0x120);
      *(long ***)(param_1 + 0x120) = &local_108;
      local_100 = *(long **)(param_1 + 0x170);
    }
    if (*(int *)param_3[2] == 4) {
      d_print_comp(param_1,0x11,*(undefined8 *)((int *)param_3[2] + 4));
      if (*(long *)(param_1 + 0x170) != 0) {
        *(long **)(param_1 + 0x120) = local_108;
      }
      if (*(char *)(param_1 + 0x108) == '<') {
        d_append_char(param_1,0x20);
      }
      lVar20 = *(long *)(param_1 + 0x100);
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar20 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar20 + 1;
      *(undefined1 *)(param_1 + lVar20) = 0x3c;
      *(undefined1 *)(param_1 + 0x108) = 0x3c;
      d_print_comp(param_1,0x11,*(undefined8 *)(param_3[2] + 0x18));
      if (*(char *)(param_1 + 0x108) == '>') {
        d_append_char(param_1,0x20);
      }
      lVar20 = *(long *)(param_1 + 0x100);
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar20 = 0;
      }
      *(long *)(param_1 + 0x100) = lVar20 + 1;
      *(undefined1 *)(param_1 + lVar20) = 0x3e;
      *(undefined1 *)(param_1 + 0x108) = 0x3e;
    }
    else {
      d_print_comp(param_1,0x11);
      if (*(long *)(param_1 + 0x170) != 0) {
        *(long **)(param_1 + 0x120) = local_108;
      }
    }
    break;
  case 0x36:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_expr_op(param_1,0x11,param_3[2]);
    return;
  case 0x37:
    piVar10 = (int *)param_3[2];
    piVar26 = (int *)param_3[3];
    if (*piVar10 == 0x32) {
      pcVar23 = (char *)**(undefined8 **)(piVar10 + 4);
      if (((*pcVar23 == 'a') && (pcVar23[1] == 'd')) && ((pcVar23[2] == '\0' && (*piVar26 == 3)))) {
        if ((**(int **)(piVar26 + 4) == 1) && (**(int **)(piVar26 + 6) == 0x29)) {
          piVar26 = *(int **)(piVar26 + 4);
        }
      }
      else if (*piVar26 == 0x39) {
        d_print_subexpr(param_1,0x11,*(undefined8 *)(piVar26 + 4));
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail_local();
        }
        d_print_expr_op(param_1,0x11,piVar10);
        return;
      }
      if (*pcVar23 == 's') {
        if ((pcVar23[1] == 'Z') && (pcVar23[2] == '\0')) {
          uVar14 = d_find_pack(param_1,piVar26);
          d_pack_length(uVar14);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail_local();
          }
          d_append_num(param_1);
          return;
        }
        if ((pcVar23[1] == 'P') && (pcVar23[2] == '\0')) {
          do {
            if ((*piVar26 != 0x2f) || (piVar10 = *(int **)(piVar26 + 4), piVar10 == (int *)0x0))
            break;
            if ((*piVar10 == 0x4c) &&
               (piVar10 = (int *)d_find_pack(param_1,*(undefined8 *)(piVar10 + 4)),
               piVar10 != (int *)0x0)) {
              while (*piVar10 == 0x2f) {
                if ((*(long *)(piVar10 + 4) == 0) ||
                   (piVar10 = *(int **)(piVar10 + 6), piVar10 == (int *)0x0)) break;
              }
            }
            piVar26 = *(int **)(piVar26 + 6);
          } while (piVar26 != (int *)0x0);
          pcVar23 = local_68;
          ___sprintf_chk(pcVar23,1,0x19,"%d");
          sVar13 = strlen(pcVar23);
          if (sVar13 != 0) {
            pcVar33 = pcVar23 + sVar13;
            lVar20 = *(long *)(param_1 + 0x100);
            do {
              cVar29 = *pcVar23;
              if (lVar20 == 0xff) {
                *(undefined1 *)(param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
                lVar8 = 1;
                lVar20 = 0;
              }
              else {
                lVar8 = lVar20 + 1;
              }
              pcVar23 = pcVar23 + 1;
              *(long *)(param_1 + 0x100) = lVar8;
              *(char *)(param_1 + lVar20) = cVar29;
              *(char *)(param_1 + 0x108) = cVar29;
              lVar20 = lVar8;
            } while (pcVar23 != pcVar33);
          }
          break;
        }
      }
      d_print_expr_op(param_1,0x11,piVar10);
      if (((*pcVar23 == 'g') && (pcVar23[1] == 's')) && (pcVar23[2] == '\0')) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail_local();
        }
        d_print_comp(param_1,0x11,piVar26);
        return;
      }
      if (((*pcVar23 == 's') && (pcVar23[1] == 't')) && (pcVar23[2] == '\0')) {
        d_append_char(param_1,0x28);
        d_print_comp(param_1,0x11,piVar26);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail_local();
        }
        d_append_char(param_1,0x29);
        return;
      }
    }
    else if (*piVar10 == 0x34) {
      d_append_char(param_1,0x28);
      d_print_comp(param_1,0x11,*(undefined8 *)(piVar10 + 4));
      d_append_char(param_1,0x29);
    }
    else {
      d_print_expr_op(param_1,0x11,piVar10);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_subexpr(param_1,0x11,piVar26);
    return;
  case 0x38:
    if (*(int *)param_3[3] == 0x39) {
      if ((((char *)**(undefined8 **)(param_3[2] + 0x10))[1] == 'c') &&
         ((cVar29 = *(char *)**(undefined8 **)(param_3[2] + 0x10), (byte)(cVar29 + 0x8eU) < 2 ||
          ((byte)(cVar29 + 0x9dU) < 2)))) {
        d_print_expr_op(param_1,0x11);
        d_append_char(param_1,0x3c);
        d_print_comp(param_1,0x11,*(undefined8 *)(param_3[3] + 0x10));
        d_append_string(param_1,&DAT_00817d5d);
        d_print_comp(param_1,0x11,*(undefined8 *)(param_3[3] + 0x18));
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail_local();
        }
        d_append_char(param_1,0x29);
        return;
      }
      iVar6 = d_maybe_print_fold_expression(param_1,0x11,param_3);
      if ((iVar6 == 0) && (iVar6 = d_maybe_print_designated_init(param_1,0x11,param_3), iVar6 == 0))
      {
        piVar10 = (int *)param_3[2];
        if ((*piVar10 == 0x32) &&
           ((*(int *)(*(long *)(piVar10 + 4) + 0x10) == 1 &&
            (**(char **)(*(long *)(piVar10 + 4) + 8) == '>')))) {
          d_append_char(param_1,0x28);
          piVar10 = (int *)param_3[2];
        }
        iVar6 = strcmp((char *)**(undefined8 **)(piVar10 + 4),"cl");
        if ((iVar6 == 0) && (piVar10 = *(int **)(param_3[3] + 0x10), *piVar10 == 3)) {
          if (**(int **)(piVar10 + 6) != 0x29) {
            *(undefined4 *)(param_1 + 0x130) = 1;
          }
          d_print_subexpr(param_1,0x11,*(undefined8 *)(piVar10 + 4));
        }
        else {
          d_print_subexpr(param_1,0x11,*(undefined8 *)(param_3[3] + 0x10));
        }
        lVar20 = param_3[2];
        pcVar23 = (char *)**(undefined8 **)(lVar20 + 0x10);
        iVar6 = strcmp(pcVar23,"ix");
        if (iVar6 == 0) {
          d_append_char(param_1,0x5b);
          d_print_comp(param_1,0x11,*(undefined8 *)(param_3[3] + 0x18));
          d_append_char(param_1,0x5d);
        }
        else {
          iVar6 = strcmp(pcVar23,"cl");
          if (iVar6 != 0) {
            d_print_expr_op(param_1,0x11,lVar20);
          }
          d_print_subexpr(param_1,0x11,*(undefined8 *)(param_3[3] + 0x18));
        }
        if (((*(int *)param_3[2] == 0x32) &&
            (lVar20 = *(long *)((int *)param_3[2] + 4), *(int *)(lVar20 + 0x10) == 1)) &&
           (**(char **)(lVar20 + 8) == '>')) {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail_local();
          }
          d_append_char(param_1,0x29);
          return;
        }
      }
      break;
    }
    goto switchD_006ba865_caseD_34;
  case 0x3a:
    if ((*(int *)param_3[3] == 0x3b) && (**(int **)((int *)param_3[3] + 6) == 0x3c)) {
      iVar6 = d_maybe_print_fold_expression(param_1,0x11,param_3);
      if ((iVar6 == 0) && (iVar6 = d_maybe_print_designated_init(param_1,0x11,param_3), iVar6 == 0))
      {
        lVar20 = param_3[2];
        lVar8 = *(long *)(param_3[3] + 0x10);
        lVar11 = *(long *)(param_3[3] + 0x18);
        uVar14 = *(undefined8 *)(lVar11 + 0x10);
        lVar11 = *(long *)(lVar11 + 0x18);
        iVar6 = strcmp((char *)**(undefined8 **)(lVar20 + 0x10),"qu");
        if (iVar6 == 0) {
          d_print_subexpr(param_1,0x11,lVar8);
          d_print_expr_op(param_1,0x11,lVar20);
          d_print_subexpr(param_1,0x11,uVar14);
          d_append_string(param_1," : ");
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail_local();
          }
          d_print_subexpr(param_1,0x11,lVar11);
          return;
        }
        d_append_string(param_1,&DAT_00817d63);
        if (*(long *)(lVar8 + 0x10) != 0) {
          d_print_subexpr(param_1,0x11,lVar8);
          d_append_char(param_1,0x20);
        }
        d_print_comp(param_1,0x11,uVar14);
        if (lVar11 != 0) {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail_local();
          }
          d_print_subexpr(param_1,0x11,lVar11);
          return;
        }
      }
      break;
    }
switchD_006ba865_caseD_34:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x3d:
  case 0x3e:
    piVar10 = (int *)param_3[2];
    if (*piVar10 == 0x27) {
      uVar22 = *(uint *)(*(long *)(piVar10 + 4) + 0x1c);
      if (uVar22 < 7) {
        if ((uVar22 != 0) && (piVar26 = (int *)param_3[3], *piVar26 == 0)) {
          if (iVar6 == 0x3e) {
            d_append_char(param_1,0x2d);
            piVar26 = (int *)param_3[3];
          }
          d_print_comp(param_1,0x11,piVar26);
          switch(uVar22) {
          case 2:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail_local();
            }
            d_append_char(param_1,0x75);
            return;
          case 3:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail_local();
            }
            d_append_char(param_1,0x6c);
            return;
          case 4:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail_local();
            }
            d_append_string(param_1,&DAT_00816e97);
            return;
          case 5:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail_local();
            }
            d_append_string(param_1,"ll");
            return;
          case 6:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail_local();
            }
            d_append_string(param_1,"ull");
            return;
          }
          break;
        }
      }
      else if ((((uVar22 == 7) && (piVar26 = (int *)param_3[3], *piVar26 == 0)) && (piVar26[6] == 1)
               ) && (iVar6 == 0x3d)) {
        if (**(char **)(piVar26 + 4) == '0') {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail_local();
          }
          d_append_string(param_1,"false");
          return;
        }
        if (**(char **)(piVar26 + 4) == '1') {
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail_local();
          }
          d_append_string(param_1,&DAT_0080044b);
          return;
        }
      }
    }
    else {
      uVar22 = 0;
    }
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      piVar10 = (int *)param_3[2];
      lVar20 = 0;
      lVar8 = 1;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x28;
    *(undefined1 *)(param_1 + 0x108) = 0x28;
    d_print_comp(param_1,0x11,piVar10);
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x29;
    *(undefined1 *)(param_1 + 0x108) = 0x29;
    if ((int)*param_3 == 0x3e) {
      d_append_char(param_1,0x2d);
    }
    if (uVar22 == 8) {
      d_append_char(param_1,0x5b);
      d_print_comp(param_1,0x11,param_3[3]);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      d_append_char(param_1,0x5d);
      return;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[3]);
    return;
  case 0x3f:
    d_print_comp(param_1,0x11,param_3[2]);
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x28;
    *(undefined1 *)(param_1 + 0x108) = 0x28;
    lVar20 = param_3[3];
    goto LAB_006bbcd6;
  case 0x40:
    pcVar23 = "java resource ";
    cVar29 = 'j';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x41:
    d_print_comp(param_1,0x11,param_3[2]);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[3]);
    return;
  case 0x42:
    lVar20 = *(long *)(param_1 + 0x100);
    lVar8 = param_3[2];
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar11 = 1;
      lVar20 = 0;
    }
    else {
      lVar11 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar11;
    uVar21 = (undefined1)(int)lVar8;
    *(undefined1 *)(param_1 + lVar20) = uVar21;
    *(undefined1 *)(param_1 + 0x108) = uVar21;
    break;
  case 0x43:
    pcVar23 = local_68;
    ___sprintf_chk(pcVar23,1,0x19,"%d",(int)param_3[2]);
    sVar13 = strlen(pcVar23);
    if (sVar13 != 0) {
      pcVar33 = pcVar23 + sVar13;
      lVar20 = *(long *)(param_1 + 0x100);
      do {
        cVar29 = *pcVar23;
        if (lVar20 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar20 = 0;
        }
        else {
          lVar8 = lVar20 + 1;
        }
        pcVar23 = pcVar23 + 1;
        *(long *)(param_1 + 0x100) = lVar8;
        *(char *)(param_1 + lVar20) = cVar29;
        *(char *)(param_1 + 0x108) = cVar29;
        lVar20 = lVar8;
      } while (pcVar33 != pcVar23);
    }
    break;
  case 0x44:
    pcVar23 = "decltype (";
    cVar29 = 'd';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    lVar20 = param_3[2];
LAB_006bbcd6:
    d_print_comp(param_1,0x11,lVar20);
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x29;
    *(undefined1 *)(param_1 + 0x108) = 0x29;
    break;
  case 0x45:
    pcVar23 = "global constructors keyed to ";
    cVar29 = 'g';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x46:
    pcVar23 = "global destructors keyed to ";
    cVar29 = 'g';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x47:
    puVar25 = &DAT_00817dca;
    uVar21 = 0x7b;
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar20) = uVar21;
      *(undefined1 *)(param_1 + 0x108) = uVar21;
      if (puVar25 == &DAT_00817dd1) break;
      uVar21 = *puVar25;
      puVar25 = puVar25 + 1;
      lVar20 = lVar8;
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    puVar24 = &DAT_00817dd2;
    uVar21 = 0x29;
    d_print_comp(param_1,0x11,param_3[2]);
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      puVar24 = puVar24 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar20) = uVar21;
      *(undefined1 *)(param_1 + 0x108) = uVar21;
      if (puVar24 == &DAT_00817dd4) break;
      uVar21 = *puVar24;
      lVar20 = lVar8;
    }
    pcVar23 = local_68;
    ___sprintf_chk(pcVar23,1,0x19,"%d",(int)param_3[3] + 1);
    sVar13 = strlen(pcVar23);
    lVar20 = *(long *)(param_1 + 0x100);
    if (sVar13 != 0) {
      pcVar33 = pcVar23 + sVar13;
      lVar8 = lVar20;
      do {
        cVar29 = *pcVar23;
        if (lVar8 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar20 = 1;
          lVar8 = 0;
        }
        else {
          lVar20 = lVar8 + 1;
        }
        pcVar23 = pcVar23 + 1;
        *(long *)(param_1 + 0x100) = lVar20;
        *(char *)(param_1 + lVar8) = cVar29;
        *(char *)(param_1 + 0x108) = cVar29;
        lVar8 = lVar20;
      } while (pcVar33 != pcVar23);
    }
    goto LAB_006bcd68;
  case 0x49:
    pcVar23 = "{unnamed type#";
    cVar29 = '{';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    pcVar23 = local_68;
    ___sprintf_chk(pcVar23,1,0x19,"%d",(int)param_3[2] + 1);
    sVar13 = strlen(pcVar23);
    lVar20 = *(long *)(param_1 + 0x100);
    if (sVar13 != 0) {
      pcVar33 = pcVar23 + sVar13;
      lVar8 = lVar20;
      do {
        cVar29 = *pcVar23;
        if (lVar8 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar20 = 1;
          lVar8 = 0;
        }
        else {
          lVar20 = lVar8 + 1;
        }
        pcVar23 = pcVar23 + 1;
        *(long *)(param_1 + 0x100) = lVar20;
        *(char *)(param_1 + lVar8) = cVar29;
        *(char *)(param_1 + 0x108) = cVar29;
        lVar8 = lVar20;
      } while (pcVar33 != pcVar23);
    }
LAB_006bcd68:
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x7d;
    *(undefined1 *)(param_1 + 0x108) = 0x7d;
    break;
  case 0x4a:
    pcVar23 = "ransaction clone for ";
    cVar29 = 't';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x4b:
    pcVar23 = "non-transaction clone for ";
    cVar29 = 'n';
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    d_print_comp(param_1,0x11,param_3[2]);
    return;
  case 0x4c:
    lVar20 = param_3[2];
    piVar10 = (int *)d_find_pack(param_1,lVar20);
    iVar6 = 0;
    if (piVar10 == (int *)0x0) {
      d_print_subexpr(param_1,0x11,lVar20);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      d_append_string(param_1,&DAT_00817e5d);
      return;
    }
    do {
      iVar30 = iVar6;
      if ((*piVar10 != 0x2f) || (*(long *)(piVar10 + 4) == 0)) {
        if (iVar30 == 0) goto switchD_006bdd5d_default;
        iVar28 = iVar30 + -1;
        iVar6 = iVar30;
        break;
      }
      piVar10 = *(int **)(piVar10 + 6);
      iVar6 = iVar30 + 1;
      iVar28 = iVar30;
    } while (piVar10 != (int *)0x0);
    iVar30 = 0;
    do {
      *(int *)(param_1 + 0x13c) = iVar30;
      d_print_comp(param_1,0x11,lVar20);
      if (iVar30 < iVar28) {
        puVar24 = &DAT_007f7194;
        uVar21 = 0x2c;
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
          puVar24 = puVar24 + 1;
          *(long *)(param_1 + 0x100) = lVar11;
          *(undefined1 *)(param_1 + lVar8) = uVar21;
          *(undefined1 *)(param_1 + 0x108) = uVar21;
          if (puVar24 == &DAT_007f7196) break;
          uVar21 = *puVar24;
          lVar8 = lVar11;
        }
      }
      iVar30 = iVar30 + 1;
    } while (iVar30 < iVar6);
    break;
  case 0x4d:
    puVar24 = &DAT_00817bf6;
    uVar21 = 0x5b;
    d_print_comp(param_1,0x11,param_3[2]);
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      puVar24 = puVar24 + 1;
      *(long *)(param_1 + 0x100) = lVar8;
      *(undefined1 *)(param_1 + lVar20) = uVar21;
      *(undefined1 *)(param_1 + 0x108) = uVar21;
      if (puVar24 == &DAT_00817bfb) break;
      uVar21 = *puVar24;
      lVar20 = lVar8;
    }
    goto LAB_006bc860;
  case 0x4f:
    pcVar23 = " [clone ";
    cVar29 = ' ';
    d_print_comp(param_1,0x11,param_3[2]);
    lVar20 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar23 = pcVar23 + 1;
      if (lVar20 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar8 = 1;
        lVar20 = 0;
      }
      else {
        lVar8 = lVar20 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar8;
      *(char *)(param_1 + lVar20) = cVar29;
      *(char *)(param_1 + 0x108) = cVar29;
      if (pcVar23 == "") break;
      cVar29 = *pcVar23;
      lVar20 = lVar8;
    }
LAB_006bc860:
    d_print_comp(param_1,0x11,param_3[3]);
    lVar20 = *(long *)(param_1 + 0x100);
    if (lVar20 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar8 = 1;
      lVar20 = 0;
    }
    else {
      lVar8 = lVar20 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar8;
    *(undefined1 *)(param_1 + lVar20) = 0x5d;
    *(undefined1 *)(param_1 + 0x108) = 0x5d;
  }
switchD_006bdd5d_default:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
joined_r0x006bdf57:
  if (puVar15 == (undefined8 *)0x0) goto LAB_006be18a;
  if (((long *)*puVar15 == plVar19) ||
     ((*(undefined8 **)(param_1 + 0x148) != puVar15 && ((long *)*puVar15 == param_3))))
  goto LAB_006bdf7f;
  puVar15 = (undefined8 *)puVar15[1];
  goto joined_r0x006bdf57;
LAB_006be18a:
  unaff_RBX = *(undefined8 *)(param_1 + 0x120);
  bVar4 = true;
  *(undefined8 *)(param_1 + 0x120) = puVar27[1];
  piVar10 = (int *)d_lookup_template_argument(param_1,plVar19);
  if (piVar10 == (int *)0x0) {
LAB_006be1c1:
    *(undefined8 *)(param_1 + 0x120) = unaff_RBX;
    goto switchD_006ba865_caseD_34;
  }
LAB_006bdfa1:
  auVar35._0_8_ = piVar10;
  iVar30 = *piVar10;
  if (iVar30 == 0x2f) {
    if (-1 < *(int *)(param_1 + 0x13c)) {
      auVar35 = d_index_template_argument_part_0(piVar10,*(int *)(param_1 + 0x13c),plVar19);
      if (auVar35._0_8_ == (int *)0x0) {
        if (!bVar4) goto switchD_006ba865_caseD_34;
        goto LAB_006be1c1;
      }
      iVar30 = *auVar35._0_8_;
      goto LAB_006ba9fa;
    }
    local_108 = *(long **)(param_1 + 0x128);
  }
  else {
LAB_006ba9fa:
    plVar19 = auVar35._8_8_;
    plVar7 = auVar35._0_8_;
    local_108 = *(long **)(param_1 + 0x128);
    if ((iVar30 == 0x23) || (iVar6 == iVar30)) {
      plVar19 = (long *)plVar7[2];
      param_3 = plVar7;
    }
    else if (iVar30 == 0x24) {
      plVar19 = (long *)plVar7[2];
      goto LAB_006ba8b1;
    }
  }
LAB_006baa20:
  *(long ***)(param_1 + 0x128) = &local_108;
  local_f0 = *(undefined8 *)(param_1 + 0x120);
  local_100 = param_3;
LAB_006ba8e4:
  plVar7 = local_100;
  local_f8 = 0;
  d_print_comp(param_1,0x11,plVar19);
  if (local_f8 == 0) {
    d_print_mod(param_1,0x11,plVar7);
  }
  *(long **)(param_1 + 0x128) = local_108;
  if (bVar4) {
    *(undefined8 *)(param_1 + 0x120) = unaff_RBX;
  }
  goto switchD_006bdd5d_default;
joined_r0x006bdb3e:
  if (0x35 < iVar6 - 0x1cU) goto LAB_006bdba6;
  if ((0x3400000000001fU >> ((ulong)(iVar6 - 0x1cU) & 0x3f) & 1) == 0) goto LAB_006bc535;
  if ((int)uVar18 == 4) goto switchD_006ba865_caseD_34;
  plVar2 = *pplVar16;
  plVar3 = pplVar16[1];
  *(long ***)(param_1 + 0x128) = pplVar17;
  uVar18 = uVar18 + 1;
  *pplVar17 = plVar2;
  pplVar17[1] = plVar3;
  plVar2 = pplVar16[2];
  plVar3 = pplVar16[3];
  *pplVar17 = (long *)pplVar16;
  pplVar17[2] = plVar2;
  pplVar17[3] = plVar3;
  pplVar16[1] = plVar19;
  *(undefined4 *)(pplVar16 + 2) = 0;
  plVar19 = (long *)plVar19[2];
  pplVar16[3] = plVar7;
  if (plVar19 == (long *)0x0) goto switchD_006ba865_caseD_34;
  iVar6 = (int)*plVar19;
  uVar34 = (uint)uVar18;
  pplVar16 = pplVar16 + 4;
  pplVar17 = pplVar17 + 4;
  goto joined_r0x006bdb3e;
LAB_006bdba6:
  if (iVar6 == 4) {
    *(long ***)(param_1 + 0x120) = &local_108;
    local_108 = plVar7;
    local_100 = plVar19;
  }
LAB_006bc535:
  d_print_comp(param_1,0x11,param_3[3]);
  if ((int)*plVar19 == 4) {
    *(long **)(param_1 + 0x120) = local_108;
  }
  if (uVar34 != 0) {
    iVar6 = (int)(&local_d8)[(ulong)(uVar34 - 1) * 4];
    pplVar16 = local_e8 + (ulong)(uVar34 - 1) * 4;
    while( true ) {
      if (iVar6 == 0) {
        lVar20 = *(long *)(param_1 + 0x100);
        if (lVar20 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar8 = 1;
          lVar20 = 0;
        }
        else {
          lVar8 = lVar20 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar8;
        plVar19 = pplVar16[1];
        *(undefined1 *)(param_1 + lVar20) = 0x20;
        *(undefined1 *)(param_1 + 0x108) = 0x20;
        d_print_mod(param_1,0x11,plVar19);
      }
      if (local_e8 == pplVar16) break;
      iVar6 = *(int *)(pplVar16 + -2);
      pplVar16 = pplVar16 + -4;
    }
  }
  *(undefined8 *)(param_1 + 0x128) = uVar14;
  goto switchD_006bdd5d_default;
}

