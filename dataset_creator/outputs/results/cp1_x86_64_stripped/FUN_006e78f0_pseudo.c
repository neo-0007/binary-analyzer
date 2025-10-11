
undefined8 FUN_006e78f0(long *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
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
  
  iVar7 = -2;
  lVar18 = 200;
  lVar15 = 0;
  puVar13 = &local_748;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = local_109 + 1;
  local_109[1] = 0;
  local_78c = 0;
  pcVar12 = pcVar1;
  pcVar17 = pcVar1;
  local_7a0 = puVar13;
LAB_006e7966:
  uVar3 = (uint)(char)(&DAT_00824cf0)[lVar15];
  pcVar5 = pcVar17;
  if (uVar3 == 0xfffffffc) goto LAB_006e7a40;
  uVar14 = uVar3;
  if (iVar7 != -2) {
    if (0 < iVar7) {
      if (iVar7 == 0x100) {
        iVar7 = 0x101;
        goto LAB_006e7ae7;
      }
      goto LAB_006e7993;
    }
LAB_006e7ca0:
    iVar8 = 0;
    iVar7 = 0;
    goto LAB_006e79a4;
  }
  pcVar10 = (char *)*param_1;
  do {
    pcVar9 = pcVar10;
    cVar2 = *pcVar9;
    if (cVar2 == '\0') {
      *param_1 = (long)pcVar9;
      iVar8 = 0;
      iVar7 = 0;
      goto LAB_006e79a4;
    }
    pcVar10 = pcVar9 + 1;
  } while ((cVar2 == ' ') || (cVar2 == '\t'));
  iVar7 = (int)cVar2;
  switch(cVar2) {
  case '\n':
  case ';':
    iVar8 = 0;
    *param_1 = (long)pcVar9;
    iVar7 = 0;
    goto LAB_006e79a4;
  default:
    goto switchD_006e7d0f_caseD_b;
  case '!':
    if (pcVar9[1] == '=') {
      local_770 = local_770 & 0xffffffff00000000 | 0xd;
LAB_006e807f:
      iVar8 = 7;
      *param_1 = (long)(pcVar9 + 2);
      iVar7 = 0x102;
    }
    else {
      *param_1 = (long)pcVar10;
      iVar8 = 6;
      iVar7 = 0x21;
    }
    break;
  case '%':
    local_770 = local_770 & 0xffffffff00000000 | 5;
    goto LAB_006e7f7a;
  case '&':
  case '|':
    if (pcVar9[1] == cVar2) {
      pcVar10 = pcVar9 + 2;
      goto switchD_006e7d0f_caseD_28;
    }
    goto switchD_006e7d0f_caseD_b;
  case '(':
  case ')':
  case ':':
  case '?':
  case 'n':
switchD_006e7d0f_caseD_28:
    *param_1 = (long)pcVar10;
    if (iVar7 < 1) goto LAB_006e7ca0;
LAB_006e7993:
    iVar8 = (int)(char)(&DAT_00824be0)[iVar7];
    break;
  case '*':
    local_770 = local_770 & 0xffffffff00000000 | 3;
    goto LAB_006e7f7a;
  case '+':
    local_770 = local_770 & 0xffffffff00000000 | 6;
    goto LAB_006e7fa9;
  case '-':
    local_770 = local_770 & 0xffffffff00000000 | 7;
LAB_006e7fa9:
    *param_1 = (long)pcVar10;
    iVar8 = 9;
    iVar7 = 0x104;
    break;
  case '/':
    local_770 = local_770 & 0xffffffff00000000 | 4;
LAB_006e7f7a:
    *param_1 = (long)pcVar10;
    iVar8 = 10;
    iVar7 = 0x105;
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
    local_770 = (ulong)(iVar7 + -0x30);
    cVar2 = pcVar9[1];
    while ((byte)(cVar2 - 0x30U) < 10) {
      pcVar10 = pcVar10 + 1;
      local_770 = (long)(char)(cVar2 + -0x30) + local_770 * 10;
      cVar2 = *pcVar10;
    }
    *param_1 = (long)pcVar10;
    iVar8 = 0xb;
    iVar7 = 0x106;
    break;
  case '<':
    if (pcVar9[1] == '=') {
      local_770 = local_770 & 0xffffffff00000000 | 10;
      goto LAB_006e80e9;
    }
    local_770 = local_770 & 0xffffffff00000000 | 8;
LAB_006e800d:
    *param_1 = (long)pcVar10;
    iVar8 = 8;
    iVar7 = 0x103;
    break;
  case '=':
    if (pcVar9[1] == '=') {
      local_770 = local_770 & 0xffffffff00000000 | 0xc;
      goto LAB_006e807f;
    }
switchD_006e7d0f_caseD_b:
    *param_1 = (long)pcVar10;
    iVar8 = 2;
    iVar7 = 0x101;
    break;
  case '>':
    if (pcVar9[1] != '=') {
      local_770 = local_770 & 0xffffffff00000000 | 9;
      goto LAB_006e800d;
    }
    local_770 = local_770 & 0xffffffff00000000 | 0xb;
LAB_006e80e9:
    iVar8 = 8;
    *param_1 = (long)(pcVar9 + 2);
    iVar7 = 0x103;
  }
  uVar14 = uVar3 + iVar8;
LAB_006e79a4:
  if ((uVar14 < 0x39) && ((char)(&DAT_00824b40)[(int)uVar14] == iVar8)) {
    cVar2 = (&DAT_00824b80)[(int)uVar14];
    lVar15 = (long)cVar2;
    iVar8 = -(int)cVar2;
    if (cVar2 < '\x01') goto LAB_006e7a00;
    local_78c = local_78c + -1 + (uint)(local_78c == 0);
    puVar13 = puVar13 + 1;
    *puVar13 = local_770;
    iVar7 = -2;
    goto LAB_006e7b94;
  }
LAB_006e7a40:
  iVar8 = (int)(char)(&DAT_00824bc0)[lVar15];
  if (iVar8 == 0) {
    if (local_78c != 3) {
LAB_006e7ae7:
      do {
        if (((uVar3 != 0xfffffffc) && (uVar3 = uVar3 + 1, uVar3 < 0x39)) &&
           ((&DAT_00824b40)[(int)uVar3] == '\x01')) {
          cVar2 = (&DAT_00824b80)[(int)uVar3];
          lVar15 = (long)cVar2;
          if ('\0' < cVar2) goto LAB_006e7d44;
        }
        if (pcVar12 == pcVar17) goto LAB_006e7a70;
        pcVar10 = pcVar12 + -1;
        pcVar12 = pcVar12 + -1;
        puVar13 = puVar13 + -1;
        uVar3 = (uint)(char)(&DAT_00824cf0)[*pcVar10];
      } while( true );
    }
    if (0 < iVar7) {
      iVar7 = -2;
      goto LAB_006e7ae7;
    }
    if (iVar7 != 0) goto LAB_006e7ae7;
LAB_006e7a70:
    uVar16 = 1;
    goto LAB_006e7a76;
  }
LAB_006e7a00:
  lVar15 = (long)(char)(&DAT_00824b08)[iVar8];
  uVar6 = puVar13[1 - (char)(&DAT_00824b08)[iVar8]];
  switch(iVar8) {
  case 2:
    if (*puVar13 == 0) goto LAB_006e7a70;
    param_1[1] = *puVar13;
    break;
  case 3:
    local_768 = puVar13[-4];
    uStack_760 = puVar13[-2];
    local_758 = *puVar13;
    uVar6 = FUN_006e7110(3,0x10,&local_768);
    break;
  case 4:
    local_768 = puVar13[-2];
    uStack_760 = *puVar13;
    uVar6 = FUN_006e69c0(0xf,&local_768);
    break;
  case 5:
    local_768 = puVar13[-2];
    uStack_760 = *puVar13;
    uVar6 = FUN_006e69c0(0xe,&local_768);
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    local_768 = puVar13[-2];
    uStack_760 = *puVar13;
    uVar6 = FUN_006e69c0((int)puVar13[-1],&local_768);
    break;
  case 10:
    local_768 = *puVar13;
    uVar6 = FUN_006e7110(1,2,&local_768);
    break;
  case 0xb:
    uVar6 = FUN_006e70f0(0);
    break;
  case 0xc:
    uVar6 = FUN_006e70f0(1);
    if (uVar6 != 0) {
      *(ulong *)(uVar6 + 8) = *puVar13;
    }
    break;
  case 0xd:
    uVar6 = puVar13[-1];
  }
  puVar13[1 - lVar15] = uVar6;
  pcVar12 = pcVar12 + -lVar15;
  puVar13 = puVar13 + (1 - lVar15);
  uVar3 = (int)(char)(&DAT_00824ce7)[(char)(&DAT_00824b18)[iVar8] + -0x10] + (int)*pcVar12;
  if ((uVar3 < 0x39) && (*pcVar12 == (&DAT_00824b40)[(int)uVar3])) {
    cVar2 = (&DAT_00824b80)[(int)uVar3];
    lVar15 = (long)cVar2;
  }
  else {
    cVar2 = (&DAT_00824bb9)[(char)(&DAT_00824b18)[iVar8] + -0x10];
    lVar15 = (long)cVar2;
  }
LAB_006e7b94:
  pcVar12[1] = cVar2;
  pcVar12 = pcVar12 + 1;
  if (pcVar12 < pcVar17 + lVar18 + -1) {
LAB_006e7c6f:
    pcVar17 = pcVar5;
    if ((int)lVar15 == 9) {
      uVar16 = 0;
LAB_006e7a76:
      if (pcVar5 != pcVar1) {
LAB_006e7a7d:
        FUN_007104f0(pcVar5);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar16;
    }
    goto LAB_006e7966;
  }
  lVar11 = (long)pcVar12 - (long)pcVar17;
  if (lVar18 < 10000) {
    lVar18 = lVar18 * 2;
    if (10000 < lVar18) {
      lVar18 = 10000;
    }
    lVar4 = FUN_007101b0(lVar18 * 9 + 7);
    if (lVar4 != 0) {
      pcVar5 = (char *)thunk_FUN_00713a50(lVar4,pcVar17,lVar11 + 1);
      local_7a0 = (ulong *)thunk_FUN_00713a50(pcVar5 + lVar18,local_7a0,(lVar11 + 1) * 8);
      if (pcVar17 != pcVar1) {
        FUN_007104f0(pcVar17);
      }
      pcVar12 = pcVar5 + lVar11;
      puVar13 = local_7a0 + lVar11;
      if (pcVar5 + lVar18 + -1 <= pcVar12) {
        uVar16 = 1;
        goto LAB_006e7a7d;
      }
      goto LAB_006e7c6f;
    }
  }
  uVar16 = 2;
  goto LAB_006e7a76;
LAB_006e7d44:
  local_78c = 3;
  puVar13 = puVar13 + 1;
  *puVar13 = local_770;
  goto LAB_006e7b94;
}

