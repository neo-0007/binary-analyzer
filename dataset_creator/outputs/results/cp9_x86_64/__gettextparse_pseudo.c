
undefined8 __gettextparse(long *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  void *__dest;
  char *pcVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  char *__src;
  long lVar16;
  long in_FS_OFFSET;
  ulong *local_7a0;
  int local_78c;
  ulong local_770;
  ulong local_768;
  ulong uStack_760;
  ulong local_758;
  ulong local_748;
  ulong local_740 [198];
  char local_109 [201];
  long local_40;
  
  iVar6 = -2;
  lVar16 = 200;
  lVar14 = 0;
  puVar12 = &local_748;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = local_109 + 1;
  local_109[1] = 0;
  local_78c = 0;
  pcVar11 = pcVar1;
  __src = pcVar1;
  local_7a0 = puVar12;
LAB_006ddf56:
  uVar3 = (uint)(char)(&yypact)[lVar14];
  pcVar4 = __src;
  if (uVar3 == 0xfffffffc) goto LAB_006de030;
  uVar13 = uVar3;
  if (iVar6 != -2) {
    if (0 < iVar6) {
      if (iVar6 == 0x100) {
        iVar6 = 0x101;
        goto LAB_006de0d7;
      }
      goto LAB_006ddf83;
    }
LAB_006de290:
    iVar7 = 0;
    iVar6 = 0;
    goto LAB_006ddf94;
  }
  pcVar9 = (char *)*param_1;
  do {
    pcVar8 = pcVar9;
    cVar2 = *pcVar8;
    if (cVar2 == '\0') {
      *param_1 = (long)pcVar8;
      iVar7 = 0;
      iVar6 = 0;
      goto LAB_006ddf94;
    }
    pcVar9 = pcVar8 + 1;
  } while ((cVar2 == ' ') || (cVar2 == '\t'));
  iVar6 = (int)cVar2;
  switch(cVar2) {
  case '\n':
  case ';':
    iVar7 = 0;
    *param_1 = (long)pcVar8;
    iVar6 = 0;
    goto LAB_006ddf94;
  default:
    goto switchD_006de2ff_caseD_b;
  case '!':
    if (pcVar8[1] == '=') {
      local_770 = local_770 & 0xffffffff00000000 | 0xd;
LAB_006de66f:
      iVar7 = 7;
      *param_1 = (long)(pcVar8 + 2);
      iVar6 = 0x102;
    }
    else {
      *param_1 = (long)pcVar9;
      iVar7 = 6;
      iVar6 = 0x21;
    }
    break;
  case '%':
    local_770 = local_770 & 0xffffffff00000000 | 5;
    goto LAB_006de56a;
  case '&':
  case '|':
    if (pcVar8[1] == cVar2) {
      pcVar9 = pcVar8 + 2;
      goto switchD_006de2ff_caseD_28;
    }
    goto switchD_006de2ff_caseD_b;
  case '(':
  case ')':
  case ':':
  case '?':
  case 'n':
switchD_006de2ff_caseD_28:
    *param_1 = (long)pcVar9;
    if (iVar6 < 1) goto LAB_006de290;
LAB_006ddf83:
    iVar7 = (int)(char)yytranslate[iVar6];
    break;
  case '*':
    local_770 = local_770 & 0xffffffff00000000 | 3;
    goto LAB_006de56a;
  case '+':
    local_770 = local_770 & 0xffffffff00000000 | 6;
    goto LAB_006de599;
  case '-':
    local_770 = local_770 & 0xffffffff00000000 | 7;
LAB_006de599:
    *param_1 = (long)pcVar9;
    iVar7 = 9;
    iVar6 = 0x104;
    break;
  case '/':
    local_770 = local_770 & 0xffffffff00000000 | 4;
LAB_006de56a:
    *param_1 = (long)pcVar9;
    iVar7 = 10;
    iVar6 = 0x105;
    break;
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
    local_770 = (ulong)(iVar6 + -0x30);
    cVar2 = pcVar8[1];
    while ((byte)(cVar2 - 0x30U) < 10) {
      pcVar9 = pcVar9 + 1;
      local_770 = (long)(char)(cVar2 + -0x30) + local_770 * 10;
      cVar2 = *pcVar9;
    }
    *param_1 = (long)pcVar9;
    iVar7 = 0xb;
    iVar6 = 0x106;
    break;
  case '<':
    if (pcVar8[1] == '=') {
      local_770 = local_770 & 0xffffffff00000000 | 10;
      goto LAB_006de6d9;
    }
    local_770 = local_770 & 0xffffffff00000000 | 8;
LAB_006de5fd:
    *param_1 = (long)pcVar9;
    iVar7 = 8;
    iVar6 = 0x103;
    break;
  case '=':
    if (pcVar8[1] == '=') {
      local_770 = local_770 & 0xffffffff00000000 | 0xc;
      goto LAB_006de66f;
    }
switchD_006de2ff_caseD_b:
    *param_1 = (long)pcVar9;
    iVar7 = 2;
    iVar6 = 0x101;
    break;
  case '>':
    if (pcVar8[1] != '=') {
      local_770 = local_770 & 0xffffffff00000000 | 9;
      goto LAB_006de5fd;
    }
    local_770 = local_770 & 0xffffffff00000000 | 0xb;
LAB_006de6d9:
    iVar7 = 8;
    *param_1 = (long)(pcVar8 + 2);
    iVar6 = 0x103;
  }
  uVar13 = uVar3 + iVar7;
LAB_006ddf94:
  if ((uVar13 < 0x39) && ((char)yycheck[(int)uVar13] == iVar7)) {
    cVar2 = yytable[(int)uVar13];
    lVar14 = (long)cVar2;
    iVar7 = -(int)cVar2;
    if (cVar2 < '\x01') goto LAB_006ddff0;
    local_78c = local_78c + -1 + (uint)(local_78c == 0);
    puVar12 = puVar12 + 1;
    *puVar12 = local_770;
    iVar6 = -2;
    goto LAB_006de184;
  }
LAB_006de030:
  iVar7 = (int)(char)(&yydefact)[lVar14];
  if ((&yydefact)[lVar14] == '\0') {
    if (local_78c != 3) {
LAB_006de0d7:
      do {
        if (((uVar3 != 0xfffffffc) && (uVar3 = uVar3 + 1, uVar3 < 0x39)) &&
           (yycheck[(int)uVar3] == '\x01')) {
          cVar2 = yytable[(int)uVar3];
          lVar14 = (long)cVar2;
          if ('\0' < cVar2) goto LAB_006de334;
        }
        if (pcVar11 == __src) goto LAB_006de060;
        pcVar9 = pcVar11 + -1;
        pcVar11 = pcVar11 + -1;
        puVar12 = puVar12 + -1;
        uVar3 = (uint)(char)(&yypact)[*pcVar9];
      } while( true );
    }
    if (0 < iVar6) {
      iVar6 = -2;
      goto LAB_006de0d7;
    }
    if (iVar6 != 0) goto LAB_006de0d7;
LAB_006de060:
    uVar15 = 1;
    goto LAB_006de066;
  }
LAB_006ddff0:
  lVar14 = (long)(char)yyr2[iVar7];
  uVar5 = puVar12[1 - (char)yyr2[iVar7]];
  switch(iVar7) {
  case 2:
    if (*puVar12 == 0) goto LAB_006de060;
    param_1[1] = *puVar12;
    break;
  case 3:
    local_768 = puVar12[-4];
    uStack_760 = puVar12[-2];
    local_758 = *puVar12;
    uVar5 = new_exp(3,0x10,&local_768);
    break;
  case 4:
    local_768 = puVar12[-2];
    uStack_760 = *puVar12;
    uVar5 = new_exp_constprop_1(0xf,&local_768);
    break;
  case 5:
    local_768 = puVar12[-2];
    uStack_760 = *puVar12;
    uVar5 = new_exp_constprop_1(0xe,&local_768);
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    local_768 = puVar12[-2];
    uStack_760 = *puVar12;
    uVar5 = new_exp_constprop_1((int)puVar12[-1],&local_768);
    break;
  case 10:
    local_768 = *puVar12;
    uVar5 = new_exp(1,2,&local_768);
    break;
  case 0xb:
    uVar5 = new_exp_constprop_0(0);
    break;
  case 0xc:
    uVar5 = new_exp_constprop_0(1);
    if (uVar5 != 0) {
      *(ulong *)(uVar5 + 8) = *puVar12;
    }
    break;
  case 0xd:
    uVar5 = puVar12[-1];
  }
  puVar12[1 - lVar14] = uVar5;
  pcVar11 = pcVar11 + -lVar14;
  puVar12 = puVar12 + (1 - lVar14);
  uVar3 = (int)(char)(&yypgoto)[(char)yyr1[iVar7] + -0x10] + (int)*pcVar11;
  if ((uVar3 < 0x39) && (*pcVar11 == yycheck[(int)uVar3])) {
    cVar2 = yytable[(int)uVar3];
    lVar14 = (long)cVar2;
  }
  else {
    cVar2 = *(char *)((long)&yydefgoto + (long)((char)yyr1[iVar7] + -0x10));
    lVar14 = (long)cVar2;
  }
LAB_006de184:
  pcVar11[1] = cVar2;
  pcVar11 = pcVar11 + 1;
  if (pcVar11 < __src + lVar16 + -1) {
LAB_006de25f:
    __src = pcVar4;
    if ((int)lVar14 == 9) {
      uVar15 = 0;
LAB_006de066:
      if (pcVar4 != pcVar1) {
LAB_006de06d:
        free(pcVar4);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return uVar15;
    }
    goto LAB_006ddf56;
  }
  lVar10 = (long)pcVar11 - (long)__src;
  if (lVar16 < 10000) {
    lVar16 = lVar16 * 2;
    if (10000 < lVar16) {
      lVar16 = 10000;
    }
    __dest = malloc(lVar16 * 9 + 7);
    if (__dest != (void *)0x0) {
      pcVar4 = (char *)memcpy(__dest,__src,lVar10 + 1U);
      local_7a0 = (ulong *)memcpy(pcVar4 + lVar16,local_7a0,(lVar10 + 1U) * 8);
      if (__src != pcVar1) {
        free(__src);
      }
      pcVar11 = pcVar4 + lVar10;
      puVar12 = local_7a0 + lVar10;
      if (pcVar4 + lVar16 + -1 <= pcVar11) {
        uVar15 = 1;
        goto LAB_006de06d;
      }
      goto LAB_006de25f;
    }
  }
  uVar15 = 2;
  goto LAB_006de066;
LAB_006de334:
  local_78c = 3;
  puVar12 = puVar12 + 1;
  *puVar12 = local_770;
  goto LAB_006de184;
}

