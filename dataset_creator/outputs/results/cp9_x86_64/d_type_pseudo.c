
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * d_type(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  byte bVar13;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  int *piVar17;
  undefined4 *puVar18;
  long in_FS_OFFSET;
  int *local_48;
  long local_40;
  
  pcVar15 = *(char **)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = next_is_type_qual_isra_0(pcVar15);
  if (iVar6 != 0) {
    puVar8 = (undefined8 *)d_cv_qualifiers(param_1,&local_48,0);
    if (puVar8 != (undefined8 *)0x0) {
      if (**(char **)(param_1 + 0x18) == 'F') {
        piVar17 = (int *)d_function_type(param_1);
      }
      else {
        piVar17 = (int *)d_type();
      }
      *puVar8 = piVar17;
      if (piVar17 != (int *)0x0) {
        if (*piVar17 - 0x1fU < 2) {
          uVar12 = *(undefined8 *)(piVar17 + 4);
          *(int **)(piVar17 + 4) = local_48;
          local_48 = (int *)*puVar8;
          *puVar8 = uVar12;
        }
        if ((local_48 != (int *)0x0) &&
           (iVar6 = *(int *)(param_1 + 0x38), iVar6 < *(int *)(param_1 + 0x3c))) {
          *(int **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = local_48;
          *(int *)(param_1 + 0x38) = iVar6 + 1;
          piVar17 = local_48;
          goto LAB_006b78d3;
        }
      }
    }
    goto switchD_006b7830_caseD_3a;
  }
  cVar5 = *pcVar15;
  if ('U' < cVar5) {
    bVar13 = cVar5 + 0xa6;
    if (bVar13 < 0x21) {
      uVar14 = 1L << (bVar13 & 0x3f);
      if ((uVar14 & 0x1f63dff80) != 0) {
        lVar7 = (long)(char)(cVar5 + -0x61) * 0x20;
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
        piVar17[1] = 0;
        piVar17[2] = 0;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        *(undefined1 **)(piVar17 + 4) = cplus_demangle_builtin_types + lVar7;
        iVar6 = *(int *)(cplus_demangle_builtin_types + lVar7 + 8);
        *piVar17 = 0x27;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar6;
        *(char **)(param_1 + 0x18) = pcVar15 + 1;
        goto LAB_006b78d3;
      }
      if ((uVar14 & 1) != 0) goto switchD_006b7830_caseD_30;
      if (bVar13 == 0x1b) {
        *(char **)(param_1 + 0x18) = pcVar15 + 1;
        uVar12 = d_source_name(param_1);
        piVar17 = (int *)d_make_comp(param_1,0x28,uVar12,0);
        local_48 = piVar17;
        goto LAB_006b79a0;
      }
    }
    goto switchD_006b7830_caseD_3a;
  }
  if (cVar5 < '0') goto switchD_006b7830_caseD_3a;
  switch(cVar5) {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case 'N':
switchD_006b7830_caseD_30:
    piVar17 = (int *)d_name(param_1);
    local_48 = piVar17;
    break;
  default:
    goto switchD_006b7830_caseD_3a;
  case 'A':
    pcVar16 = pcVar15 + 1;
    *(char **)(param_1 + 0x18) = pcVar16;
    if (pcVar15[1] == '_') {
      lVar7 = 0;
    }
    else {
      pcVar10 = pcVar16;
      if ((byte)(pcVar15[1] - 0x30U) < 10) {
        do {
          pcVar9 = pcVar10;
          pcVar10 = pcVar9 + 1;
          *(char **)(param_1 + 0x18) = pcVar10;
        } while ((byte)(*pcVar10 - 0x30U) < 10);
        lVar7 = d_make_name(param_1,pcVar16,(int)pcVar9 - (int)pcVar15);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        lVar7 = d_expression_1(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar1;
      }
      if ((lVar7 == 0) || (pcVar16 = *(char **)(param_1 + 0x18), *pcVar16 != '_'))
      goto switchD_006b7830_caseD_3a;
    }
    *(char **)(param_1 + 0x18) = pcVar16 + 1;
    uVar12 = d_type(param_1);
    piVar17 = (int *)d_make_comp(param_1,0x2a,lVar7,uVar12);
    local_48 = piVar17;
    break;
  case 'C':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = d_type(param_1);
    piVar17 = (int *)d_make_comp(param_1,0x25,uVar12,0);
    local_48 = piVar17;
    break;
  case 'D':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    if (pcVar15[1] == '\0') goto switchD_006b7830_caseD_3a;
    *(char **)(param_1 + 0x18) = pcVar15 + 2;
    switch(pcVar15[1]) {
    case 'F':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
        _SUB_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x2c;
      cVar5 = pcVar15[2];
      *(ushort *)(piVar17 + 6) = (ushort)((byte)(cVar5 - 0x30U) < 10);
      local_48 = piVar17;
      if ((byte)(cVar5 - 0x30U) < 10) {
        d_number(param_1);
      }
      lVar7 = d_type(param_1);
      *(long *)(piVar17 + 4) = lVar7;
      if (lVar7 != 0) {
        d_number(param_1);
        pcVar15 = *(char **)(param_1 + 0x18);
        cVar5 = *pcVar15;
        if (cVar5 != '\0') {
          *(char **)(param_1 + 0x18) = pcVar15 + 1;
          cVar5 = *pcVar15;
        }
        *(ushort *)((long)piVar17 + 0x1a) = (ushort)(cVar5 == 's');
        break;
      }
    default:
      goto switchD_006b7830_caseD_3a;
    case 'T':
    case 't':
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 1;
      uVar12 = d_expression_1(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      piVar17 = (int *)d_make_comp(param_1,0x44,uVar12,0);
      local_48 = piVar17;
      if (((piVar17 != (int *)0x0) && (pcVar15 = *(char **)(param_1 + 0x18), *pcVar15 != '\0')) &&
         (*(char **)(param_1 + 0x18) = pcVar15 + 1, *pcVar15 == 'E')) goto LAB_006b79a9;
      goto switchD_006b7830_caseD_3a;
    case 'a':
      iVar6 = *(int *)(param_1 + 0x28);
      if (iVar6 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
        piVar17[0] = 0;
        piVar17[1] = 0;
        piVar17[2] = 0;
        *(undefined **)(piVar17 + 4) = &DAT_007d2ac2;
        piVar17[6] = 4;
        break;
      }
      goto switchD_006b7830_caseD_3a;
    case 'c':
      iVar6 = *(int *)(param_1 + 0x28);
      if (iVar6 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
        piVar17[0] = 0;
        piVar17[1] = 0;
        piVar17[2] = 0;
        *(char **)(piVar17 + 4) = "decltype(auto)";
        piVar17[6] = 0xe;
        break;
      }
      goto switchD_006b7830_caseD_3a;
    case 'd':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c860;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      break;
    case 'e':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c880;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 10;
      break;
    case 'f':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c840;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      break;
    case 'h':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c8a0;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
      break;
    case 'i':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c900;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 8;
      break;
    case 'n':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c920;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x11;
      break;
    case 'p':
      uVar12 = d_type(param_1);
      piVar17 = (int *)d_make_comp(param_1,0x4c,uVar12,0);
      local_48 = piVar17;
      goto LAB_006b79a0;
    case 's':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c8e0;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 8;
      break;
    case 'u':
      iVar6 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      piVar17[1] = 0;
      piVar17[2] = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *piVar17 = 0x27;
      piVar17[4] = 0x90c8c0;
      piVar17[5] = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 7;
      break;
    case 'v':
      if (pcVar15[2] == '_') {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(char **)(param_1 + 0x18) = pcVar15 + 3;
        puVar18 = (undefined4 *)d_expression_1(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar1;
        if (puVar18 != (undefined4 *)0x0) goto LAB_006b7f9b;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x28);
        if (iVar6 < *(int *)(param_1 + 0x2c)) {
          puVar18 = (undefined4 *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(puVar18 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar6 + 1;
          *puVar18 = 0x43;
          iVar6 = d_number(param_1);
          *(long *)(puVar18 + 4) = (long)iVar6;
LAB_006b7f9b:
          if (**(char **)(param_1 + 0x18) == '_') {
            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
            uVar12 = d_type(param_1);
            piVar17 = (int *)d_make_comp(param_1,0x2d,puVar18,uVar12);
            local_48 = piVar17;
            goto LAB_006b79a0;
          }
        }
      }
      goto switchD_006b7830_caseD_3a;
    }
    goto LAB_006b78d3;
  case 'F':
    piVar17 = (int *)d_function_type(param_1);
    local_48 = piVar17;
    break;
  case 'G':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = d_type(param_1);
    piVar17 = (int *)d_make_comp(param_1,0x26,uVar12,0);
    local_48 = piVar17;
    break;
  case 'M':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    lVar7 = d_type(param_1);
    if ((lVar7 != 0) && (lVar11 = d_type(param_1), lVar11 != 0)) {
      piVar17 = (int *)d_make_comp(param_1,0x2b,lVar7,lVar11);
      local_48 = piVar17;
      break;
    }
    goto switchD_006b7830_caseD_3a;
  case 'O':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = d_type(param_1);
    piVar17 = (int *)d_make_comp(param_1,0x24,uVar12,0);
    local_48 = piVar17;
    break;
  case 'P':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = d_type(param_1);
    piVar17 = (int *)d_make_comp(param_1,0x22,uVar12,0);
    local_48 = piVar17;
    break;
  case 'R':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = d_type(param_1);
    piVar17 = (int *)d_make_comp(param_1,0x23,uVar12,0);
    local_48 = piVar17;
    break;
  case 'S':
    if (((byte)((byte)pcVar15[1] - 0x30) < 0x30) &&
       ((0xffff78000001fc00U >> ((ulong)((byte)pcVar15[1] - 0x30) & 0x3f) & 1) == 0)) {
      piVar17 = (int *)d_substitution(param_1,0);
      local_48 = piVar17;
      if (**(char **)(param_1 + 0x18) != 'I') goto LAB_006b78d3;
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar12 = d_template_args_1(param_1);
      goto LAB_006b7a9f;
    }
    piVar17 = (int *)d_name(param_1);
    local_48 = piVar17;
    if (piVar17 == (int *)0x0) goto switchD_006b7830_caseD_3a;
    if (*piVar17 == 0x18) goto LAB_006b78d3;
    goto LAB_006b79a9;
  case 'T':
    piVar17 = (int *)d_template_param(param_1);
    pcVar15 = *(char **)(param_1 + 0x18);
    local_48 = piVar17;
    if (*pcVar15 != 'I') break;
    if (*(int *)(param_1 + 0x50) == 0) {
      if ((piVar17 != (int *)0x0) &&
         (iVar6 = *(int *)(param_1 + 0x38), iVar6 < *(int *)(param_1 + 0x3c))) {
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = piVar17;
        uVar12 = 0;
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        if ((byte)(*pcVar15 + 0xb7U) < 2) {
          *(char **)(param_1 + 0x18) = pcVar15 + 1;
          uVar12 = d_template_args_1(param_1);
        }
LAB_006b7a9f:
        piVar17 = (int *)d_make_comp(param_1,4,piVar17,uVar12);
        local_48 = piVar17;
        break;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      *(char **)(param_1 + 0x18) = pcVar15 + 1;
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      uVar12 = d_template_args_1(param_1);
      if (**(char **)(param_1 + 0x18) != 'I') {
        *(char **)(param_1 + 0x18) = pcVar15;
        *(undefined4 *)(param_1 + 0x28) = uVar1;
        *(undefined4 *)(param_1 + 0x38) = uVar2;
        *(undefined4 *)(param_1 + 0x48) = uVar3;
        break;
      }
      if ((piVar17 != (int *)0x0) &&
         (iVar6 = *(int *)(param_1 + 0x38), iVar6 < *(int *)(param_1 + 0x3c))) {
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = piVar17;
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        goto LAB_006b7a9f;
      }
    }
    goto switchD_006b7830_caseD_3a;
  case 'U':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    piVar17 = (int *)d_source_name(param_1);
    local_48 = piVar17;
    if (**(char **)(param_1 + 0x18) == 'I') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar12 = d_template_args_1(param_1);
      piVar17 = (int *)d_make_comp(param_1,4,piVar17,uVar12);
    }
    uVar12 = d_type(param_1);
    piVar17 = (int *)d_make_comp(param_1,0x21,uVar12,piVar17);
    local_48 = piVar17;
  }
LAB_006b79a0:
  if (piVar17 != (int *)0x0) {
LAB_006b79a9:
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = piVar17;
      *(int *)(param_1 + 0x38) = iVar6 + 1;
      piVar17 = local_48;
      goto LAB_006b78d3;
    }
  }
switchD_006b7830_caseD_3a:
  piVar17 = (int *)0x0;
LAB_006b78d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

