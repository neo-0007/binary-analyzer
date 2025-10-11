
int * d_name(long param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  int *local_28;
  long local_20;
  
  pcVar10 = *(char **)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *pcVar10;
  if (cVar1 == 'U') {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      piVar6 = (int *)d_unqualified_name();
      return piVar6;
    }
    goto LAB_006ba5ac;
  }
  if (cVar1 < 'V') {
    if (cVar1 == 'N') {
      *(char **)(param_1 + 0x18) = pcVar10 + 1;
      plVar7 = (long *)d_cv_qualifiers(param_1,&local_28,1);
      if (plVar7 != (long *)0x0) {
        piVar6 = (int *)d_ref_qualifier(param_1,0);
        lVar8 = d_prefix();
        *plVar7 = lVar8;
        if (lVar8 != 0) {
          if (piVar6 != (int *)0x0) {
            *(int **)(piVar6 + 4) = local_28;
            local_28 = piVar6;
          }
          if (**(char **)(param_1 + 0x18) == 'E') {
            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
            piVar6 = local_28;
            goto LAB_006ba210;
          }
        }
      }
      goto LAB_006ba450;
    }
    if (cVar1 != 'S') goto LAB_006ba308;
    if (pcVar10[1] == 't') {
      *(char **)(param_1 + 0x18) = pcVar10 + 2;
      uVar13 = d_unqualified_name();
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 < *(int *)(param_1 + 0x2c)) {
        puVar12 = (undefined8 *)((long)iVar4 * 0x20 + *(long *)(param_1 + 0x20));
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        *puVar12 = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        puVar12[2] = &DAT_00817bf2;
        *(undefined4 *)(puVar12 + 3) = 3;
      }
      else {
        puVar12 = (undefined8 *)0x0;
      }
      piVar6 = (int *)d_make_comp(param_1,1,puVar12,uVar13);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 3;
      pcVar10 = *(char **)(param_1 + 0x18);
      if (*pcVar10 == 'I') {
        if ((piVar6 == (int *)0x0) ||
           (iVar4 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar4)) goto LAB_006ba450;
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar4 * 8) = piVar6;
        *(int *)(param_1 + 0x38) = iVar4 + 1;
        if ((byte)(*pcVar10 + 0xb7U) < 2) goto LAB_006ba4d0;
        piVar9 = (int *)0x0;
        goto LAB_006ba4e3;
      }
    }
    else {
      piVar6 = (int *)d_substitution(param_1,0);
      pcVar10 = *(char **)(param_1 + 0x18);
      if (*pcVar10 == 'I') {
LAB_006ba4d0:
        *(char **)(param_1 + 0x18) = pcVar10 + 1;
        piVar9 = (int *)d_template_args_1(param_1);
LAB_006ba4e3:
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar13 = 4;
LAB_006ba4ff:
          piVar6 = (int *)d_make_comp(param_1,uVar13,piVar6,piVar9);
          return piVar6;
        }
        goto LAB_006ba5ac;
      }
    }
  }
  else {
    if (cVar1 == 'Z') {
      *(char **)(param_1 + 0x18) = pcVar10 + 1;
      if ((pcVar10[1] == 'G') || (pcVar10[1] == 'T')) {
        piVar6 = (int *)d_special_name(param_1);
      }
      else {
        piVar6 = (int *)d_encoding_part_0(param_1,0);
      }
      if ((piVar6 != (int *)0x0) && (pcVar10 = *(char **)(param_1 + 0x18), *pcVar10 == 'E')) {
        *(char **)(param_1 + 0x18) = pcVar10 + 1;
        if (pcVar10[1] == 's') {
          *(char **)(param_1 + 0x18) = pcVar10 + 2;
          iVar4 = d_discriminator(param_1);
          if (iVar4 != 0) {
            iVar4 = *(int *)(param_1 + 0x28);
            if (iVar4 < *(int *)(param_1 + 0x2c)) {
              *(int *)(param_1 + 0x28) = iVar4 + 1;
              piVar9 = (int *)((long)iVar4 * 0x20 + *(long *)(param_1 + 0x20));
              piVar9[0] = 0;
              piVar9[1] = 0;
              piVar9[2] = 0;
              *(char **)(piVar9 + 4) = "string literal";
              piVar9[6] = 0xe;
              goto LAB_006ba2b0;
            }
LAB_006ba642:
            piVar9 = (int *)0x0;
            goto LAB_006ba2b0;
          }
        }
        else {
          if (pcVar10[1] != 'd') {
            piVar9 = (int *)d_name(param_1);
            if (((piVar9 != (int *)0x0) && ((*piVar9 - 0x47U & 0xfffffffd) != 0)) &&
               (iVar4 = d_discriminator(param_1), iVar4 == 0)) goto LAB_006ba450;
LAB_006ba2b0:
            if ((*piVar6 == 3) && (piVar11 = *(int **)(piVar6 + 6), *piVar11 == 0x29)) {
              piVar11[4] = 0;
              piVar11[5] = 0;
            }
            if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar13 = 2;
              goto LAB_006ba4ff;
            }
            goto LAB_006ba5ac;
          }
          *(char **)(param_1 + 0x18) = pcVar10 + 2;
          if (pcVar10[2] == '_') {
            pcVar10 = pcVar10 + 3;
            iVar4 = 0;
LAB_006ba552:
            *(char **)(param_1 + 0x18) = pcVar10;
            piVar11 = (int *)d_name(param_1);
            if (((piVar11 == (int *)0x0) || ((*piVar11 - 0x47U & 0xfffffffd) == 0)) ||
               (iVar5 = d_discriminator(param_1), iVar5 != 0)) {
              iVar5 = *(int *)(param_1 + 0x28);
              if (*(int *)(param_1 + 0x2c) <= iVar5) goto LAB_006ba642;
              piVar9 = (int *)((long)iVar5 * 0x20 + *(long *)(param_1 + 0x20));
              piVar9[1] = 0;
              piVar9[2] = 0;
              *(int *)(param_1 + 0x28) = iVar5 + 1;
              *piVar9 = 0x48;
              piVar9[6] = iVar4;
              *(int **)(piVar9 + 4) = piVar11;
              goto LAB_006ba2b0;
            }
          }
          else if (pcVar10[2] != 'n') {
            iVar4 = d_number(param_1);
            iVar4 = iVar4 + 1;
            if ((-1 < iVar4) && (**(char **)(param_1 + 0x18) == '_')) {
              pcVar10 = *(char **)(param_1 + 0x18) + 1;
              goto LAB_006ba552;
            }
          }
        }
      }
    }
    else {
LAB_006ba308:
      piVar6 = (int *)d_unqualified_name(param_1);
      pbVar3 = *(byte **)(param_1 + 0x18);
      if (*pbVar3 != 0x49) goto LAB_006ba210;
      if ((piVar6 != (int *)0x0) &&
         (iVar4 = *(int *)(param_1 + 0x38), iVar4 < *(int *)(param_1 + 0x3c))) {
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar4 * 8) = piVar6;
        piVar9 = (int *)0x0;
        *(int *)(param_1 + 0x38) = iVar4 + 1;
        bVar2 = *pbVar3;
        if ((byte)(bVar2 - 0x49) < 2) {
          *(byte **)(param_1 + 0x18) = pbVar3 + 1;
          piVar9 = (int *)d_template_args_1(param_1,bVar2 - 0x49,pbVar3 + 1,0);
        }
        goto LAB_006ba4e3;
      }
    }
LAB_006ba450:
    piVar6 = (int *)0x0;
  }
LAB_006ba210:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar6;
  }
LAB_006ba5ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

