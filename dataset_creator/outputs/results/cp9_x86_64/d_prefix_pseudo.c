
long d_prefix(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char cVar8;
  undefined8 uVar9;
  
  cVar8 = **(char **)(param_1 + 0x18);
  if (cVar8 != '\0') {
    lVar6 = 0;
    pcVar7 = *(char **)(param_1 + 0x18);
    do {
      switch(cVar8) {
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
      case 'C':
      case 'L':
      case 'U':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
        lVar4 = d_unqualified_name(param_1);
        if (lVar6 != 0) goto LAB_006b90a0;
        pcVar5 = *(char **)(param_1 + 0x18);
        cVar1 = *pcVar5;
        lVar6 = lVar4;
        goto joined_r0x006b9068;
      default:
        goto switchD_006b8f4b_caseD_3a;
      case 'D':
        if ((pcVar7[1] & 0xdfU) == 0x54) {
          lVar4 = d_type();
        }
        else {
          lVar4 = d_unqualified_name(param_1);
        }
        goto joined_r0x006b8fde;
      case 'E':
        goto switchD_006b8f4b_caseD_45;
      case 'I':
        if (lVar6 != 0) {
          *(char **)(param_1 + 0x18) = pcVar7 + 1;
          lVar4 = d_template_args_1(param_1);
          uVar9 = 4;
          goto LAB_006b904d;
        }
        goto switchD_006b8f4b_caseD_3a;
      case 'M':
        if (lVar6 == 0) goto switchD_006b8f4b_caseD_3a;
        pcVar5 = pcVar7 + 1;
        *(char **)(param_1 + 0x18) = pcVar5;
        cVar8 = pcVar7[1];
        break;
      case 'S':
        lVar4 = d_substitution(param_1,1);
        if (lVar6 != 0) goto LAB_006b90a0;
        pcVar5 = *(char **)(param_1 + 0x18);
        lVar6 = lVar4;
        cVar8 = *pcVar5;
        break;
      case 'T':
        lVar4 = d_template_param(param_1);
joined_r0x006b8fde:
        if (lVar6 == 0) {
          pcVar5 = *(char **)(param_1 + 0x18);
        }
        else {
LAB_006b90a0:
          uVar9 = 1;
LAB_006b904d:
          lVar6 = d_make_comp(param_1,uVar9,lVar6,lVar4);
          pcVar5 = *(char **)(param_1 + 0x18);
          cVar1 = *pcVar5;
joined_r0x006b9068:
          bVar3 = cVar8 == 'S';
          lVar4 = lVar6;
          cVar8 = cVar1;
          if (bVar3) break;
        }
        cVar8 = *pcVar5;
        lVar6 = lVar4;
        if ((cVar8 != 'E') && ((param_2 & 1) != 0)) {
          if ((lVar4 == 0) || (iVar2 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar2))
          goto switchD_006b8f4b_caseD_3a;
          *(long *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8) = lVar4;
          *(int *)(param_1 + 0x38) = iVar2 + 1;
          cVar8 = *pcVar5;
        }
      }
      pcVar7 = pcVar5;
    } while (cVar8 != '\0');
  }
switchD_006b8f4b_caseD_3a:
  lVar6 = 0;
switchD_006b8f4b_caseD_45:
  return lVar6;
}

