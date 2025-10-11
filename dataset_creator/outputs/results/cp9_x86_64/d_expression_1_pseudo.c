
undefined4 * d_expression_1(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char *pcVar15;
  
  pcVar15 = *(char **)(param_1 + 0x18);
  cVar7 = *pcVar15;
  if (cVar7 == 'L') {
    puVar9 = (undefined4 *)d_expr_primary();
    return puVar9;
  }
  if (cVar7 == 'T') {
    puVar9 = (undefined4 *)d_template_param();
    return puVar9;
  }
  if (cVar7 == 's') {
    if (pcVar15[1] == 'r') {
      *(char **)(param_1 + 0x18) = pcVar15 + 2;
      bVar1 = pcVar15[2];
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_006b95c8:
        d_type(param_1);
      }
      else {
        if ((char)bVar1 < ':') {
          if ((char)bVar1 < '0') goto LAB_006b95c8;
        }
        else if ((0x37 < (byte)(bVar1 - 0x43)) ||
                ((0xffffffc0040201U >> ((ulong)(bVar1 - 0x43) & 0x3f) & 1) == 0)) goto LAB_006b95c8;
        *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
        d_prefix(param_1,0);
        if (**(char **)(param_1 + 0x18) == 'E') {
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        }
      }
      uVar11 = d_unqualified_name(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        uVar13 = d_template_args_1(param_1);
        d_make_comp(param_1,4,uVar11,uVar13);
      }
      goto LAB_006b92ee;
    }
    if (pcVar15[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar15 + 2;
      d_expression_1();
      goto LAB_006b92ee;
    }
  }
  else if (cVar7 == 'f') {
    if (pcVar15[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar15 + 2;
      cVar7 = pcVar15[2];
      if (cVar7 == 'T') {
        iVar8 = 0;
        *(char **)(param_1 + 0x18) = pcVar15 + 3;
      }
      else if (cVar7 == '_') {
        iVar8 = 1;
        *(char **)(param_1 + 0x18) = pcVar15 + 3;
      }
      else {
        if (cVar7 == 'n') {
          return (undefined4 *)0x0;
        }
        iVar8 = d_number();
        if (iVar8 + 1 < 0) {
          return (undefined4 *)0x0;
        }
        if (**(char **)(param_1 + 0x18) != '_') {
          return (undefined4 *)0x0;
        }
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        if (iVar8 + 1 == 0x7fffffff) {
          return (undefined4 *)0x0;
        }
        iVar8 = iVar8 + 2;
      }
      iVar3 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar3) {
        return (undefined4 *)0x0;
      }
      puVar9 = (undefined4 *)((long)iVar3 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(puVar9 + 1) = 0;
      *(int *)(param_1 + 0x28) = iVar3 + 1;
      *puVar9 = 6;
      *(long *)(puVar9 + 4) = (long)iVar8;
      return puVar9;
    }
  }
  else {
    if ((byte)(cVar7 - 0x30U) < 10) {
LAB_006b90fa:
      puVar9 = (undefined4 *)d_unqualified_name(param_1);
      if (puVar9 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      if (**(char **)(param_1 + 0x18) != 'I') {
        return puVar9;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      d_template_args_1(param_1);
      goto LAB_006b92ee;
    }
    if (cVar7 == 'o') {
      if (pcVar15[1] == 'n') {
        *(char **)(param_1 + 0x18) = pcVar15 + 2;
        goto LAB_006b90fa;
      }
    }
    else {
      if (((cVar7 == 'i') || (cVar7 == 't')) && (pcVar15[1] == 'l')) {
        pcVar15 = pcVar15 + 2;
        *(char **)(param_1 + 0x18) = pcVar15;
        if (cVar7 == 't') {
          d_type(param_1);
          pcVar15 = *(char **)(param_1 + 0x18);
        }
        if (*pcVar15 == '\0') {
          return (undefined4 *)0x0;
        }
        if (pcVar15[1] == '\0') {
          return (undefined4 *)0x0;
        }
        d_exprlist(param_1,0x45);
        goto LAB_006b92ee;
      }
      if (cVar7 == 'u') {
        *(char **)(param_1 + 0x18) = pcVar15 + 1;
        d_source_name(param_1);
        d_template_args_1(param_1);
        goto LAB_006b92ee;
      }
    }
  }
  puVar10 = (uint *)d_operator_name(param_1);
  if (puVar10 == (uint *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar4 = *puVar10;
  if (uVar4 != 0x32) {
    if (uVar4 == 0x34) {
      if (**(char **)(param_1 + 0x18) == '_') {
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        d_exprlist(param_1,0x45);
        goto LAB_006b92ee;
      }
    }
    else {
      if (0x34 < uVar4) {
        return (undefined4 *)0x0;
      }
      if (uVar4 != 0x33) {
        return (undefined4 *)0x0;
      }
      uVar4 = puVar10[4];
      if (uVar4 == 2) {
        return (undefined4 *)0x0;
      }
      if (2 < (int)uVar4) {
        return (undefined4 *)0x0;
      }
      if (uVar4 == 0) goto LAB_006b92ee;
      if (uVar4 != 1) {
        return (undefined4 *)0x0;
      }
    }
    d_expression_1(param_1);
    goto LAB_006b92ee;
  }
  puVar5 = *(undefined8 **)(puVar10 + 4);
  pcVar15 = (char *)*puVar5;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(puVar5 + 2) + -2;
  cVar7 = *pcVar15;
  if (((cVar7 == 's') && (pcVar15[1] == 't')) && (pcVar15[2] == '\0')) {
    d_type(param_1);
    goto LAB_006b92ee;
  }
  iVar8 = *(int *)((long)puVar5 + 0x14);
  if (iVar8 == 1) {
    cVar2 = *pcVar15;
    if (((cVar2 == 'p') || (cVar2 == 'm')) && (cVar2 == pcVar15[1])) {
      bVar6 = true;
      if (**(char **)(param_1 + 0x18) == '_') {
        bVar6 = false;
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        cVar7 = *pcVar15;
      }
    }
    else {
      bVar6 = false;
    }
    if (((cVar7 == 's') && (pcVar15[1] == 'P')) && (pcVar15[2] == '\0')) {
      uVar11 = d_template_args_1(param_1);
    }
    else {
      uVar11 = d_expression_1(param_1);
    }
    if (bVar6) {
      d_make_comp(param_1,0x39,uVar11);
    }
    goto LAB_006b92ee;
  }
  if (iVar8 < 2) {
    if (iVar8 != 0) {
      return (undefined4 *)0x0;
    }
    goto LAB_006b92ee;
  }
  if (iVar8 == 2) {
    if ((((char *)**(undefined8 **)(puVar10 + 4))[1] == 'c') &&
       ((cVar2 = *(char *)**(undefined8 **)(puVar10 + 4), (byte)(cVar2 + 0x9dU) < 2 ||
        ((byte)(cVar2 + 0x8eU) < 2)))) {
      uVar11 = d_type(param_1);
    }
    else if (*pcVar15 == 'f') {
      uVar11 = d_operator_name(param_1);
    }
    else if (((cVar7 == 'd') && (pcVar15[1] == 'i')) && (pcVar15[2] == '\0')) {
      uVar11 = d_unqualified_name(param_1);
    }
    else {
      uVar11 = d_expression_1(param_1);
    }
    cVar7 = *pcVar15;
    if (((cVar7 == 'c') && (pcVar15[1] == 'l')) && (pcVar15[2] == '\0')) {
      uVar13 = d_exprlist(param_1,0x45);
    }
    else {
      if ((((cVar7 == 'd') && (pcVar15[1] == 't')) && (pcVar15[2] == '\0')) ||
         (((cVar7 == 'p' && (pcVar15[1] == 't')) && (pcVar15[2] == '\0')))) {
        pcVar15 = *(char **)(param_1 + 0x18);
        if (*pcVar15 == 'g') {
          if (pcVar15[1] != 's') goto LAB_006b978c;
        }
        else if ((*pcVar15 != 's') || (pcVar15[1] != 'r')) {
LAB_006b978c:
          uVar13 = d_unqualified_name(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
            uVar14 = d_template_args_1(param_1);
            uVar13 = d_make_comp(param_1,4,uVar13,uVar14);
          }
          goto LAB_006b9683;
        }
      }
      uVar13 = d_expression_1(param_1);
    }
LAB_006b9683:
    d_make_comp(param_1,0x39,uVar11,uVar13);
    goto LAB_006b92ee;
  }
  if (iVar8 != 3) {
    return (undefined4 *)0x0;
  }
  if ((((cVar7 == 'q') && (pcVar15[1] == 'u')) && (pcVar15[2] == '\0')) ||
     (((cVar7 == 'd' && (pcVar15[1] == 'X')) && (pcVar15[2] == '\0')))) {
    d_expression_1(param_1);
LAB_006b936a:
    uVar11 = d_expression_1(param_1);
    lVar12 = d_expression_1(param_1);
    if (lVar12 == 0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    if (*pcVar15 == 'f') {
      d_operator_name(param_1);
      goto LAB_006b936a;
    }
    if (*pcVar15 != 'n') {
      return (undefined4 *)0x0;
    }
    if ((pcVar15[1] != 'w') && (pcVar15[1] != 'a')) {
      return (undefined4 *)0x0;
    }
    d_exprlist(param_1,0x5f);
    uVar11 = d_type(param_1);
    pcVar15 = *(char **)(param_1 + 0x18);
    cVar7 = *pcVar15;
    if (cVar7 == 'E') {
      lVar12 = 0;
      *(char **)(param_1 + 0x18) = pcVar15 + 1;
    }
    else if (cVar7 == 'p') {
      if (pcVar15[1] != 'i') {
        return (undefined4 *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar15 + 2;
      lVar12 = d_exprlist(param_1,0x45);
    }
    else {
      if (cVar7 != 'i') {
        return (undefined4 *)0x0;
      }
      if (pcVar15[1] != 'l') {
        return (undefined4 *)0x0;
      }
      lVar12 = d_expression_1(param_1);
    }
  }
  d_make_comp(param_1,0x3c,uVar11,lVar12);
  d_make_comp();
LAB_006b92ee:
  puVar9 = (undefined4 *)d_make_comp();
  return puVar9;
}

