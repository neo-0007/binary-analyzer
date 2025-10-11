
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_006b9850(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
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
  iVar6 = FUN_006b90e0(pcVar15);
  if (iVar6 != 0) {
    puVar7 = (undefined8 *)FUN_006bba50(param_1,&local_48,0);
    if (puVar7 != (undefined8 *)0x0) {
      if (**(char **)(param_1 + 0x18) == 'F') {
        piVar17 = (int *)FUN_006ba4f0(param_1);
      }
      else {
        piVar17 = (int *)FUN_006b9850();
      }
      *puVar7 = piVar17;
      if (piVar17 != (int *)0x0) {
        if (*piVar17 - 0x1fU < 2) {
          uVar12 = *(undefined8 *)(piVar17 + 4);
          *(int **)(piVar17 + 4) = local_48;
          local_48 = (int *)*puVar7;
          *puVar7 = uVar12;
        }
        if ((local_48 != (int *)0x0) &&
           (iVar6 = *(int *)(param_1 + 0x38), iVar6 < *(int *)(param_1 + 0x3c))) {
          *(int **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = local_48;
          *(int *)(param_1 + 0x38) = iVar6 + 1;
          piVar17 = local_48;
          goto LAB_006b9953;
        }
      }
    }
    goto switchD_006b98b0_caseD_3a;
  }
  cVar5 = *pcVar15;
  if ('U' < cVar5) {
    bVar13 = cVar5 + 0xa6;
    if (bVar13 < 0x21) {
      uVar14 = 1L << (bVar13 & 0x3f);
      if ((uVar14 & 0x1f63dff80) != 0) {
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
        *(undefined ***)(piVar17 + 4) =
             &PTR_s_signed_char_00918c20 + (long)(char)(cVar5 + -0x61) * 4;
        iVar6 = *(int *)(&DAT_00918c28 + (long)(char)(cVar5 + -0x61) * 0x20);
        *piVar17 = 0x27;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar6;
        *(char **)(param_1 + 0x18) = pcVar15 + 1;
        goto LAB_006b9953;
      }
      if ((uVar14 & 1) != 0) goto switchD_006b98b0_caseD_30;
      if (bVar13 == 0x1b) {
        *(char **)(param_1 + 0x18) = pcVar15 + 1;
        uVar12 = FUN_006b9510(param_1);
        piVar17 = (int *)FUN_006b8b90(param_1,0x28,uVar12,0);
        local_48 = piVar17;
        goto LAB_006b9a20;
      }
    }
    goto switchD_006b98b0_caseD_3a;
  }
  if (cVar5 < '0') goto switchD_006b98b0_caseD_3a;
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
switchD_006b98b0_caseD_30:
    piVar17 = (int *)FUN_006bc230(param_1);
    local_48 = piVar17;
    break;
  default:
    goto switchD_006b98b0_caseD_3a;
  case 'A':
    pcVar16 = pcVar15 + 1;
    *(char **)(param_1 + 0x18) = pcVar16;
    if (pcVar15[1] == '_') {
      lVar10 = 0;
    }
    else {
      pcVar9 = pcVar16;
      if ((byte)(pcVar15[1] - 0x30U) < 10) {
        do {
          pcVar8 = pcVar9;
          pcVar9 = pcVar8 + 1;
          *(char **)(param_1 + 0x18) = pcVar9;
        } while ((byte)(*pcVar9 - 0x30U) < 10);
        lVar10 = FUN_006b8c70(param_1,pcVar16,(int)pcVar8 - (int)pcVar15);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        lVar10 = FUN_006bb140(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar1;
      }
      if ((lVar10 == 0) || (pcVar16 = *(char **)(param_1 + 0x18), *pcVar16 != '_'))
      goto switchD_006b98b0_caseD_3a;
    }
    *(char **)(param_1 + 0x18) = pcVar16 + 1;
    uVar12 = FUN_006b9850(param_1);
    piVar17 = (int *)FUN_006b8b90(param_1,0x2a,lVar10,uVar12);
    local_48 = piVar17;
    break;
  case 'C':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = FUN_006b9850(param_1);
    piVar17 = (int *)FUN_006b8b90(param_1,0x25,uVar12,0);
    local_48 = piVar17;
    break;
  case 'D':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    if (pcVar15[1] == '\0') goto switchD_006b98b0_caseD_3a;
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
        FUN_006b8cc0(param_1);
      }
      lVar10 = FUN_006b9850(param_1);
      *(long *)(piVar17 + 4) = lVar10;
      if (lVar10 != 0) {
        FUN_006b8cc0(param_1);
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
      goto switchD_006b98b0_caseD_3a;
    case 'T':
    case 't':
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 1;
      uVar12 = FUN_006bb140(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      piVar17 = (int *)FUN_006b8b90(param_1,0x44,uVar12,0);
      local_48 = piVar17;
      if (((piVar17 != (int *)0x0) && (pcVar15 = *(char **)(param_1 + 0x18), *pcVar15 != '\0')) &&
         (*(char **)(param_1 + 0x18) = pcVar15 + 1, *pcVar15 == 'E')) goto LAB_006b9a29;
      goto switchD_006b98b0_caseD_3a;
    case 'a':
      iVar6 = *(int *)(param_1 + 0x28);
      if (iVar6 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        piVar17 = (int *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
        piVar17[0] = 0;
        piVar17[1] = 0;
        piVar17[2] = 0;
        *(undefined **)(piVar17 + 4) = &DAT_007dcf1c;
        piVar17[6] = 4;
        break;
      }
      goto switchD_006b98b0_caseD_3a;
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
      goto switchD_006b98b0_caseD_3a;
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
      *(undefined ***)(piVar17 + 4) = &PTR_s_decimal64_00918f80;
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
      *(undefined ***)(piVar17 + 4) = &PTR_s_decimal128_00918fa0;
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
      *(undefined ***)(piVar17 + 4) = &PTR_s_decimal32_00918f60;
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
      *(undefined ***)(piVar17 + 4) = &PTR_DAT_00918fc0;
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
      *(undefined ***)(piVar17 + 4) = &PTR_s_char32_t_00919020;
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
      *(undefined ***)(piVar17 + 4) = &PTR_s_decltype_nullptr__00919040;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x11;
      break;
    case 'p':
      uVar12 = FUN_006b9850(param_1);
      piVar17 = (int *)FUN_006b8b90(param_1,0x4c,uVar12,0);
      local_48 = piVar17;
      goto LAB_006b9a20;
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
      *(undefined ***)(piVar17 + 4) = &PTR_s_char16_t_00919000;
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
      *(undefined ***)(piVar17 + 4) = &PTR_s_char8_t_00918fe0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 7;
      break;
    case 'v':
      if (pcVar15[2] == '_') {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(char **)(param_1 + 0x18) = pcVar15 + 3;
        puVar18 = (undefined4 *)FUN_006bb140(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar1;
        if (puVar18 != (undefined4 *)0x0) goto LAB_006ba01b;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x28);
        if (iVar6 < *(int *)(param_1 + 0x2c)) {
          puVar18 = (undefined4 *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(puVar18 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar6 + 1;
          *puVar18 = 0x43;
          iVar6 = FUN_006b8cc0(param_1);
          *(long *)(puVar18 + 4) = (long)iVar6;
LAB_006ba01b:
          if (**(char **)(param_1 + 0x18) == '_') {
            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
            uVar12 = FUN_006b9850(param_1);
            piVar17 = (int *)FUN_006b8b90(param_1,0x2d,puVar18,uVar12);
            local_48 = piVar17;
            goto LAB_006b9a20;
          }
        }
      }
      goto switchD_006b98b0_caseD_3a;
    }
    goto LAB_006b9953;
  case 'F':
    piVar17 = (int *)FUN_006ba4f0(param_1);
    local_48 = piVar17;
    break;
  case 'G':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = FUN_006b9850(param_1);
    piVar17 = (int *)FUN_006b8b90(param_1,0x26,uVar12,0);
    local_48 = piVar17;
    break;
  case 'M':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    lVar10 = FUN_006b9850(param_1);
    if ((lVar10 != 0) && (lVar11 = FUN_006b9850(param_1), lVar11 != 0)) {
      piVar17 = (int *)FUN_006b8b90(param_1,0x2b,lVar10,lVar11);
      local_48 = piVar17;
      break;
    }
    goto switchD_006b98b0_caseD_3a;
  case 'O':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = FUN_006b9850(param_1);
    piVar17 = (int *)FUN_006b8b90(param_1,0x24,uVar12,0);
    local_48 = piVar17;
    break;
  case 'P':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = FUN_006b9850(param_1);
    piVar17 = (int *)FUN_006b8b90(param_1,0x22,uVar12,0);
    local_48 = piVar17;
    break;
  case 'R':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    uVar12 = FUN_006b9850(param_1);
    piVar17 = (int *)FUN_006b8b90(param_1,0x23,uVar12,0);
    local_48 = piVar17;
    break;
  case 'S':
    if (((byte)((byte)pcVar15[1] - 0x30) < 0x30) &&
       ((0xffff78000001fc00U >> ((ulong)((byte)pcVar15[1] - 0x30) & 0x3f) & 1) == 0)) {
      piVar17 = (int *)FUN_006b9600(param_1,0);
      local_48 = piVar17;
      if (**(char **)(param_1 + 0x18) != 'I') goto LAB_006b9953;
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar12 = FUN_006baeb0(param_1);
      goto LAB_006b9b1f;
    }
    piVar17 = (int *)FUN_006bc230(param_1);
    local_48 = piVar17;
    if (piVar17 == (int *)0x0) goto switchD_006b98b0_caseD_3a;
    if (*piVar17 == 0x18) goto LAB_006b9953;
    goto LAB_006b9a29;
  case 'T':
    piVar17 = (int *)FUN_006b93b0(param_1);
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
          uVar12 = FUN_006baeb0(param_1);
        }
LAB_006b9b1f:
        piVar17 = (int *)FUN_006b8b90(param_1,4,piVar17,uVar12);
        local_48 = piVar17;
        break;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      *(char **)(param_1 + 0x18) = pcVar15 + 1;
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      uVar12 = FUN_006baeb0(param_1);
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
        goto LAB_006b9b1f;
      }
    }
    goto switchD_006b98b0_caseD_3a;
  case 'U':
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    piVar17 = (int *)FUN_006b9510(param_1);
    local_48 = piVar17;
    if (**(char **)(param_1 + 0x18) == 'I') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar12 = FUN_006baeb0(param_1);
      piVar17 = (int *)FUN_006b8b90(param_1,4,piVar17,uVar12);
    }
    uVar12 = FUN_006b9850(param_1);
    piVar17 = (int *)FUN_006b8b90(param_1,0x21,uVar12,piVar17);
    local_48 = piVar17;
  }
LAB_006b9a20:
  if (piVar17 != (int *)0x0) {
LAB_006b9a29:
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = piVar17;
      *(int *)(param_1 + 0x38) = iVar6 + 1;
      piVar17 = local_48;
      goto LAB_006b9953;
    }
  }
switchD_006b98b0_caseD_3a:
  piVar17 = (int *)0x0;
LAB_006b9953:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

