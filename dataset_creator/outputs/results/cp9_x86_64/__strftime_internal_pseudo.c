
/* WARNING: Type propagation algorithm not settling */

wchar_t * __strftime_internal(wchar_t *param_1,long param_2,wchar_t *param_3,uint *param_4,
                             int param_5,char *param_6,__locale_t param_7)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  wint_t wVar4;
  __locale_t p_Var5;
  __locale_data *p_Var6;
  uint *puVar7;
  wchar_t **ppwVar8;
  int iVar9;
  wchar_t wVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int *piVar15;
  char **ppcVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  size_t sVar20;
  ulong uVar21;
  char **__n;
  wchar_t *pwVar22;
  wchar_t **ppwVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  wchar_t *pwVar28;
  int iVar29;
  int iVar30;
  wchar_t *pwVar31;
  undefined1 *puVar32;
  size_t sVar33;
  wchar_t *pwVar34;
  ulong uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  byte bVar37;
  wchar_t *local_148;
  wchar_t *local_140;
  char **local_138;
  long lStack_130;
  wchar_t *local_128;
  int local_120;
  uint local_11c;
  char *local_118;
  char *local_110;
  __locale_data *local_108;
  __locale_t local_100;
  uint *local_f8;
  wchar_t *local_f0;
  int local_e8;
  uint local_e4;
  long local_e0;
  tm local_d8;
  undefined8 local_98 [10];
  wchar_t local_44;
  long local_40 [2];
  
  ppwVar23 = &local_148;
  local_e0 = param_2;
  local_f8 = param_4;
  local_e8 = param_5;
  local_110 = param_6;
  local_100 = param_7;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = *(char **)(param_4 + 0xc);
  local_108 = param_7->__locales[2];
  uVar18 = param_4[2];
  if ((int)uVar18 < 0xd) {
    local_e4 = 0xc;
    if (uVar18 != 0) {
      local_e4 = uVar18;
    }
  }
  else {
    local_e4 = uVar18 - 0xc;
  }
  wVar10 = *param_3;
  pwVar34 = (wchar_t *)0x0;
  ppwVar8 = &local_148;
  if (wVar10 == L'\0') {
LAB_0075bf82:
    ppwVar23 = ppwVar8;
    if ((param_1 != (wchar_t *)0x0) && (local_e0 != 0)) {
      *param_1 = L'\0';
    }
LAB_0075bfa3:
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return pwVar34;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75e52e;
    __stack_chk_fail_local();
  }
  local_11c = ~local_e4 >> 0x1f;
  pwVar12 = param_1;
LAB_0075bf44:
  puVar7 = local_f8;
  p_Var6 = local_108;
  pwVar13 = local_128;
  if (wVar10 == L'%') {
    wVar10 = param_3[1];
    iVar25 = 0;
    iVar29 = 0;
    pwVar14 = param_3 + 1;
    local_f0 = (wchar_t *)((ulong)local_f0 & 0xffffffff00000000);
    iVar19 = wVar10 + L'\xffffffd0';
    bVar36 = wVar10 == L'0';
    pwVar31 = param_3;
    if (bVar36) goto LAB_0075c02e;
    do {
      param_1 = pwVar12;
      pwVar28 = pwVar12;
      if (bVar36 || SBORROW4(wVar10,0x30) != iVar19 < 0) {
        if (wVar10 == L'#') {
          iVar25 = 1;
          pwVar31 = pwVar14;
        }
        else {
          if (wVar10 != L'-') goto LAB_0075c078;
          iVar29 = 0x2d;
          pwVar31 = pwVar14;
        }
      }
      else if (wVar10 == L'^') {
        local_f0 = (wchar_t *)CONCAT44(local_f0._4_4_,1);
        pwVar31 = pwVar14;
      }
      else {
        if (wVar10 != L'_') {
          uVar18 = wVar10 + L'\xffffffd0';
          if (uVar18 < 10) {
            iVar19 = 0;
            pwVar22 = pwVar14;
            goto LAB_0075c0d7;
          }
          iVar19 = -1;
          goto LAB_0075c111;
        }
        iVar29 = 0x5f;
        pwVar31 = pwVar14;
      }
      while( true ) {
        wVar10 = pwVar31[1];
        pwVar14 = pwVar31 + 1;
        iVar19 = wVar10 + L'\xffffffd0';
        bVar36 = iVar19 == 0;
        if (!bVar36) break;
LAB_0075c02e:
        iVar29 = 0x30;
        pwVar31 = pwVar14;
      }
    } while( true );
  }
  if ((ulong)(local_e0 - (long)pwVar34) < 2) goto LAB_0075bfa0;
  if (pwVar12 != (wchar_t *)0x0) {
    *pwVar12 = wVar10;
    pwVar12 = pwVar12 + 1;
  }
  pwVar34 = (wchar_t *)((long)pwVar34 + 1);
  param_1 = pwVar12;
  goto LAB_0075bf71;
LAB_0075c0d7:
  do {
    pwVar14 = pwVar22 + 1;
    if ((iVar19 < 0xccccccd) && ((iVar19 != 0xccccccc || (wVar10 < L'8')))) {
      iVar19 = uVar18 + iVar19 * 10;
      pwVar11 = pwVar22;
    }
    else {
      iVar19 = 0x7fffffff;
      pwVar11 = pwVar14;
      pwVar31 = pwVar22;
      wVar10 = pwVar22[1];
      if (9 < (uint)(pwVar22[1] + L'\xffffffd0')) break;
    }
    wVar10 = pwVar11[1];
    pwVar14 = pwVar11 + 1;
    uVar18 = wVar10 + L'\xffffffd0';
    pwVar31 = pwVar11;
    pwVar22 = pwVar14;
  } while (uVar18 < 10);
LAB_0075c111:
  if (wVar10 != L'E') goto LAB_0075c07e;
  wVar10 = pwVar14[1];
  param_3 = pwVar14 + 1;
  switch(wVar10) {
  case L'\0':
    param_3 = pwVar14;
    break;
  default:
    goto switchD_0075c0c0_caseD_1;
  case L'A':
  case L'B':
  case L'D':
  case L'F':
  case L'G':
  case L'H':
  case L'I':
  case L'M':
  case L'S':
  case L'U':
  case L'V':
  case L'W':
  case L'a':
  case L'd':
  case L'e':
  case L'g':
  case L'j':
  case L'k':
  case L'l':
  case L'm':
  case L'w':
    break;
  case L'C':
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75db7b;
    local_138 = (char **)_nl_get_era_entry(puVar7);
    iVar29 = (uint)local_128;
    if (local_138 == (char **)0x0) goto switchD_0075c09c_caseD_43;
    pwVar13 = *(wchar_t **)((long)local_138 + 0x30);
    local_120 = (uint)local_128;
    local_148 = pwVar13;
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75dbac;
    local_140 = (wchar_t *)wcslen(pwVar13);
    iVar19 = iVar19 - (int)local_140;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    local_128 = (wchar_t *)(long)(iVar29 + (int)local_140);
    pwVar13 = local_128;
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= local_128) goto LAB_0075bfa0;
    if (pwVar12 != (wchar_t *)0x0) {
      pwVar14 = local_148;
      pwVar13 = pwVar12;
      if (0 < iVar19) {
        sVar20 = (size_t)iVar19;
        pwVar13 = pwVar12 + sVar20;
        if (local_120 == 0x30) {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75e4f3;
          wmemset(pwVar12,L'0',sVar20);
          pwVar14 = *(wchar_t **)((long)local_138 + 0x30);
        }
        else {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75dc1f;
          wmemset(pwVar12,L' ',sVar20);
          pwVar14 = *(wchar_t **)((long)local_138 + 0x30);
        }
      }
      sVar33 = (size_t)(int)local_140;
      sVar20 = sVar33;
      p_Var5 = local_100;
      if ((int)local_f0 == 0) {
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75dc4f;
        wmemcpy(pwVar13,pwVar14,sVar33);
      }
      else {
        for (; local_100 = p_Var5, sVar20 != 0; sVar20 = sVar20 - 1) {
          wVar10 = pwVar14[sVar20 - 1];
          local_f0 = param_3;
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75e3c3;
          wVar10 = towupper_l(wVar10,p_Var5);
          pwVar13[sVar20 - 1] = wVar10;
          param_3 = local_f0;
          p_Var5 = local_100;
        }
      }
      pwVar12 = pwVar13 + sVar33;
      pwVar13 = local_128;
    }
    goto LAB_0075cd77;
  case L'P':
    goto switchD_0075c0c0_caseD_50;
  case L'R':
    goto switchD_0075c0c0_caseD_52;
  case L'T':
    goto switchD_0075c0c0_caseD_54;
  case L'X':
    ppcVar16 = (char **)*(int **)(local_108 + 0x360);
    if (**(int **)(local_108 + 0x360) == 0) goto switchD_0075c09c_caseD_58;
    goto LAB_0075c9f8;
  case L'Y':
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75dab6;
    lVar17 = _nl_get_era_entry(puVar7,p_Var6);
    iVar29 = (uint)local_138;
    if (lVar17 != 0) {
      ppcVar16 = (char **)*(int **)(lVar17 + 0x38);
      if ((uint)local_138 != 0) {
        local_e8 = (uint)local_138;
      }
      goto LAB_0075c9f8;
    }
    goto switchD_0075c09c_caseD_59;
  case L'Z':
    goto switchD_0075c0c0_caseD_5a;
  case L'b':
  case L'h':
    if (iVar25 == 0) {
      iVar25 = (int)local_f0;
    }
    local_f0 = (wchar_t *)CONCAT44(local_f0._4_4_,iVar25);
    goto switchD_0075c09c_caseD_1;
  case L'c':
    ppcVar16 = (char **)*(int **)(local_108 + 0x358);
    if (**(int **)(local_108 + 0x358) != 0) goto LAB_0075c9f8;
    goto switchD_0075c09c_caseD_63;
  case L'n':
    goto switchD_0075c0c0_caseD_6e;
  case L'p':
    goto switchD_0075c0c0_caseD_70;
  case L'r':
    goto switchD_0075c0c0_caseD_72;
  case L's':
    goto switchD_0075c0c0_caseD_73;
  case L't':
    goto switchD_0075c0c0_caseD_74;
  case L'u':
    iVar25 = 0x45;
    goto LAB_0075d895;
  case L'x':
    ppcVar16 = (char **)*(int **)(local_108 + 0x348);
    if (**(int **)(local_108 + 0x348) != 0) goto LAB_0075c9f8;
    goto switchD_0075c09c_caseD_78;
  case L'y':
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75db13;
    lVar17 = _nl_get_era_entry(puVar7);
    iVar29 = (uint)local_138;
    if (lVar17 == 0) goto switchD_0075c09c_caseD_79;
    if (local_e8 != 0) {
      iVar29 = local_e8;
    }
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    uVar35 = (ulong)((local_f8[5] - *(int *)(lVar17 + 8)) * *(int *)(lVar17 + 0x40) +
                    *(int *)(lVar17 + 4));
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    goto LAB_0075d1b8;
  case L'z':
    iVar25 = 0x45;
    goto LAB_0075d782;
  }
  goto switchD_0075c0c0_caseD_41;
LAB_0075c078:
  iVar19 = -1;
LAB_0075c07e:
  param_3 = pwVar14;
  if (wVar10 == L'O') {
    wVar10 = pwVar14[1];
    param_3 = pwVar14 + 1;
    bVar37 = (byte)local_11c;
    switch(wVar10) {
    case L'\0':
      param_3 = pwVar14;
      goto switchD_0075c0c0_caseD_41;
    default:
      goto switchD_0075c0c0_caseD_1;
    case L'A':
    case L'D':
    case L'F':
    case L'X':
    case L'Y':
    case L'a':
    case L'c':
    case L'x':
      goto switchD_0075c0c0_caseD_41;
    case L'B':
      if (iVar25 == 0) {
        iVar25 = (int)local_f0;
      }
      pwVar13 = (wchar_t *)&DAT_007c6ae9;
      uVar18 = local_f8[4];
      if (uVar18 < 0xc) {
        pwVar13 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x7b) * 8 + 0x40);
      }
      local_148 = (wchar_t *)CONCAT44(local_148._4_4_,uVar18);
      local_140 = (wchar_t *)CONCAT44(local_140._4_4_,iVar25);
      local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
      *(undefined8 *)((long)ppwVar23 + -8) = 0x75d9a8;
      local_f0 = (wchar_t *)wcslen(pwVar13);
      iVar19 = iVar19 - (int)local_f0;
      iVar29 = 0;
      if (-1 < iVar19) {
        iVar29 = iVar19;
      }
      local_138 = (char **)(long)(iVar29 + (int)local_f0);
      pwVar13 = local_128;
      if ((int *)(local_e0 - (long)pwVar34) <= local_138) goto LAB_0075bfa0;
      if (pwVar12 != (wchar_t *)0x0) {
        pwVar13 = pwVar12;
        uVar18 = (uint)local_148;
        iVar29 = (int)local_140;
        if (0 < iVar19) {
          iVar29 = (uint)local_128;
          local_128 = (wchar_t *)CONCAT44(local_128._4_4_,(int)local_140);
          wVar10 = L'0';
          pwVar13 = pwVar12 + iVar19;
          if (iVar29 != 0x30) {
            wVar10 = L' ';
          }
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75da29;
          wmemset(pwVar12,wVar10,(long)iVar19);
          uVar18 = local_f8[4];
          iVar29 = (uint)local_128;
        }
        sVar20 = (size_t)(int)local_f0;
        if (iVar29 == 0) {
          pwVar12 = (wchar_t *)&DAT_007c6ae9;
          if (uVar18 < 0xc) {
            pwVar12 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x7b) * 8 + 0x40);
          }
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75da76;
          wmemcpy(pwVar13,pwVar12,sVar20);
        }
        else {
          puVar32 = &DAT_007c6ae9;
          sVar33 = sVar20;
          p_Var5 = local_100;
          if (uVar18 < 0xc) {
            puVar32 = *(undefined1 **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x7b) * 8 + 0x40)
            ;
          }
          for (; local_100 = p_Var5, sVar33 != 0; sVar33 = sVar33 - 1) {
            wVar4 = *(wint_t *)(puVar32 + sVar33 * 4 + -4);
            local_f0 = pwVar34;
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75e428;
            wVar10 = towupper_l(wVar4,p_Var5);
            pwVar13[sVar33 - 1] = wVar10;
            pwVar34 = local_f0;
            p_Var5 = local_100;
          }
        }
        pwVar12 = pwVar13 + sVar20;
      }
      goto LAB_0075c247;
    case L'C':
      bVar37 = 1;
      goto LAB_0075d42d;
    case L'G':
    case L'V':
    case L'g':
      bVar37 = true;
      goto LAB_0075c255;
    case L'H':
      bVar37 = 1;
      goto LAB_0075d558;
    case L'I':
      goto LAB_0075d538;
    case L'M':
      bVar37 = 1;
      goto LAB_0075d4ca;
    case L'P':
switchD_0075c0c0_caseD_50:
      pwVar14 = param_3;
      goto switchD_0075c09c_caseD_50;
    case L'R':
switchD_0075c0c0_caseD_52:
      pwVar14 = param_3;
      goto switchD_0075c09c_caseD_52;
    case L'S':
      bVar37 = 1;
      goto LAB_0075d4f8;
    case L'T':
switchD_0075c0c0_caseD_54:
      pwVar14 = param_3;
      goto switchD_0075c09c_caseD_54;
    case L'U':
      bVar37 = 1;
      goto LAB_0075d47d;
    case L'W':
      bVar37 = 1;
      goto LAB_0075d586;
    case L'Z':
switchD_0075c0c0_caseD_5a:
      goto switchD_0075c09c_caseD_5a;
    case L'b':
    case L'h':
      if (iVar25 == 0) {
        iVar25 = (int)local_f0;
      }
      pwVar13 = (wchar_t *)&DAT_007c6ae9;
      uVar18 = local_f8[4];
      local_f0 = (wchar_t *)CONCAT44(local_f0._4_4_,iVar25);
      if (uVar18 < 0xc) {
        pwVar13 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x93) * 8 + 0x40);
      }
      local_148 = (wchar_t *)CONCAT44(local_148._4_4_,uVar18);
      local_140 = (wchar_t *)CONCAT44(local_140._4_4_,iVar29);
      *(undefined8 *)((long)ppwVar23 + -8) = 0x75c647;
      local_138 = (char **)wcslen(pwVar13);
      iVar19 = iVar19 - (int)local_138;
      iVar29 = 0;
      if (-1 < iVar19) {
        iVar29 = iVar19;
      }
      local_128 = (wchar_t *)(long)(iVar29 + (int)local_138);
      pwVar13 = local_128;
      if ((wchar_t *)(local_e0 - (long)pwVar34) <= local_128) goto LAB_0075bfa0;
      if (pwVar12 != (wchar_t *)0x0) {
        pwVar13 = pwVar12;
        uVar18 = (uint)local_148;
        if (0 < iVar19) {
          sVar20 = (size_t)iVar19;
          pwVar13 = pwVar12 + sVar20;
          if ((int)local_140 == 0x30) {
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75e4ae;
            wmemset(pwVar12,L'0',sVar20);
            uVar18 = local_f8[4];
          }
          else {
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75c6b9;
            wmemset(pwVar12,L' ',sVar20);
            uVar18 = local_f8[4];
          }
        }
        sVar20 = (size_t)(int)(uint)local_138;
        if ((int)local_f0 == 0) {
          pwVar12 = (wchar_t *)&DAT_007c6ae9;
          if (uVar18 < 0xc) {
            pwVar12 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x93) * 8 + 0x40);
          }
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75c706;
          wmemcpy(pwVar13,pwVar12,sVar20);
        }
        else {
          puVar32 = &DAT_007c6ae9;
          sVar33 = sVar20;
          p_Var5 = local_100;
          if (uVar18 < 0xc) {
            puVar32 = *(undefined1 **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x93) * 8 + 0x40)
            ;
          }
          for (; local_100 = p_Var5, sVar33 != 0; sVar33 = sVar33 - 1) {
            wVar4 = *(wint_t *)(puVar32 + sVar33 * 4 + -4);
            local_f0 = param_3;
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75e48a;
            wVar10 = towupper_l(wVar4,p_Var5);
            pwVar13[sVar33 - 1] = wVar10;
            param_3 = local_f0;
            p_Var5 = local_100;
          }
        }
        pwVar12 = pwVar13 + sVar20;
      }
      pwVar34 = (wchar_t *)((long)pwVar34 + (long)local_128);
      param_1 = pwVar12;
      goto LAB_0075bf71;
    case L'd':
      bVar37 = 1;
      goto LAB_0075d754;
    case L'e':
      bVar37 = 1;
      goto LAB_0075d726;
    case L'j':
      bVar37 = 1;
      goto LAB_0075d706;
    case L'k':
      bVar37 = 1;
      goto LAB_0075d6a4;
    case L'l':
      goto LAB_0075d66d;
    case L'm':
      bVar37 = 1;
      goto LAB_0075d6cf;
    case L'n':
switchD_0075c0c0_caseD_6e:
      pwVar14 = param_3;
      goto switchD_0075c09c_caseD_6e;
    case L'p':
switchD_0075c0c0_caseD_70:
      pwVar14 = param_3;
      goto switchD_0075c09c_caseD_70;
    case L'r':
switchD_0075c0c0_caseD_72:
      goto switchD_0075c09c_caseD_72;
    case L's':
switchD_0075c0c0_caseD_73:
      goto switchD_0075c09c_caseD_73;
    case L't':
switchD_0075c0c0_caseD_74:
      pwVar14 = param_3;
      goto switchD_0075c09c_caseD_74;
    case L'u':
      iVar25 = 0x4f;
LAB_0075d895:
      bVar37 = iVar25 == 0x4f;
      goto LAB_0075d60a;
    case L'w':
      bVar37 = 1;
      goto LAB_0075d5dc;
    case L'y':
      bVar37 = true;
      goto LAB_0075d3f1;
    case L'z':
      iVar25 = 0x4f;
      goto LAB_0075d782;
    }
  }
  switch(wVar10) {
  case L'\0':
    wVar10 = pwVar14[-1];
    param_3 = pwVar31;
switchD_0075c0c0_caseD_1:
    if (wVar10 != L'%') goto switchD_0075c0c0_caseD_41;
    iVar25 = 1;
    pwVar31 = (wchar_t *)0x0;
    pwVar22 = param_3;
    goto LAB_0075c1a0;
  default:
    goto switchD_0075c09c_caseD_1;
  case L'%':
    iVar19 = iVar19 + -1;
    iVar25 = 0;
    if (-1 < iVar19) {
      iVar25 = iVar19;
    }
    uVar35 = (ulong)(iVar25 + 1);
    if ((ulong)(local_e0 - (long)pwVar34) <= uVar35) goto LAB_0075bfa0;
    if (pwVar12 != (wchar_t *)0x0) {
      pwVar13 = pwVar12;
      if (0 < iVar19) {
        sVar20 = (size_t)iVar19;
        pwVar13 = pwVar12 + sVar20;
        if (iVar29 == 0x30) {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75e2d0;
          wmemset(pwVar12,L'0',sVar20);
          wVar10 = *pwVar14;
        }
        else {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75cf07;
          wmemset(pwVar12,L' ',sVar20);
          wVar10 = *pwVar14;
        }
      }
      *pwVar13 = wVar10;
      pwVar12 = pwVar13 + 1;
    }
    goto LAB_0075c777;
  case L'A':
    if (iVar25 == 0) {
      iVar25 = (int)local_f0;
    }
    pwVar13 = (wchar_t *)&DAT_007c6ae9;
    uVar18 = local_f8[6];
    local_f0 = (wchar_t *)CONCAT44(local_f0._4_4_,iVar25);
    if (uVar18 < 7) {
      pwVar13 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x3b) * 8 + 0x40);
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,uVar18);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75cf65;
    ppcVar16 = (char **)wcslen(pwVar13);
    iVar19 = iVar19 - (int)ppcVar16;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    pwVar31 = (wchar_t *)(long)(iVar29 + (int)ppcVar16);
    pwVar13 = local_128;
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= pwVar31) goto LAB_0075bfa0;
    if (pwVar12 == (wchar_t *)0x0) goto LAB_0075c4aa;
    uVar18 = (uint)local_138;
    if (0 < iVar19) {
      wVar10 = L'0';
      pwVar28 = pwVar12 + iVar19;
      if ((uint)local_128 != 0x30) {
        wVar10 = L' ';
      }
      local_138 = ppcVar16;
      *(undefined8 *)((long)ppwVar23 + -8) = 0x75cfd1;
      wmemset(pwVar12,wVar10,(long)iVar19);
      uVar18 = local_f8[6];
      ppcVar16 = local_138;
    }
    p_Var5 = local_100;
    local_138 = (char **)(long)(int)ppcVar16;
    if ((int)local_f0 == 0) {
      pwVar12 = (wchar_t *)&DAT_007c6ae9;
      if (uVar18 < 7) {
        pwVar12 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x3b) * 8 + 0x40);
      }
LAB_0075cea0:
      ppcVar16 = local_138;
      *(undefined8 *)((long)ppwVar23 + -8) = 0x75ceaf;
      wmemcpy(pwVar28,pwVar12,(size_t)ppcVar16);
      pwVar12 = local_128;
      pwVar13 = local_f0;
    }
    else {
      puVar32 = &DAT_007c6ae9;
      piVar15 = (int *)local_138;
      pwVar12 = local_128;
      pwVar13 = local_f0;
      if (uVar18 < 7) {
        puVar32 = *(undefined1 **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x3b) * 8 + 0x40);
      }
      for (; local_128 = pwVar14, local_f0 = pwVar31, param_3 = local_128, pwVar31 = local_f0,
          piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
        wVar4 = *(wint_t *)(puVar32 + (long)piVar15 * 4 + -4);
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75e207;
        wVar10 = towupper_l(wVar4,p_Var5);
        pwVar28[(long)((long)piVar15 + -1)] = wVar10;
        pwVar31 = local_f0;
        pwVar14 = local_128;
        pwVar12 = local_128;
        pwVar13 = local_f0;
      }
    }
    goto LAB_0075c49e;
  case L'B':
    pwVar13 = (wchar_t *)&DAT_007c6ae9;
    if (iVar25 == 0) {
      iVar25 = (int)local_f0;
    }
    uVar18 = local_f8[4];
    if (uVar18 < 0xc) {
      pwVar13 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x4e) * 8 + 0x40);
    }
    local_140 = (wchar_t *)CONCAT44(local_140._4_4_,iVar25);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,uVar18);
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75d2ee;
    sVar20 = wcslen(pwVar13);
    iVar25 = (int)sVar20;
    iVar19 = iVar19 - iVar25;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    local_f0 = (wchar_t *)(long)(iVar29 + iVar25);
    pwVar13 = local_128;
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= local_f0) goto LAB_0075bfa0;
    if (pwVar12 != (wchar_t *)0x0) {
      uVar18 = (uint)local_128;
      iVar29 = (int)local_140;
      if (0 < iVar19) {
        iVar29 = (uint)local_138;
        local_138 = (char **)CONCAT44(local_138._4_4_,(int)local_140);
        wVar10 = L'0';
        pwVar28 = pwVar12 + iVar19;
        if (iVar29 != 0x30) {
          wVar10 = L' ';
        }
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75d36a;
        wmemset(pwVar12,wVar10,(long)iVar19);
        uVar18 = local_f8[4];
        iVar29 = (uint)local_138;
      }
      p_Var5 = local_100;
      local_138 = (char **)(long)iVar25;
      if (iVar29 == 0) {
        pwVar12 = (wchar_t *)&DAT_007c6ae9;
        if (uVar18 < 0xc) {
          pwVar12 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x4e) * 8 + 0x40);
        }
LAB_0075c5c2:
        ppcVar16 = local_138;
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75c5d1;
        wmemcpy(pwVar28,pwVar12,(size_t)ppcVar16);
      }
      else {
        puVar32 = &DAT_007c6ae9;
        piVar15 = (int *)local_138;
        if (uVar18 < 0xc) {
          puVar32 = *(undefined1 **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x4e) * 8 + 0x40);
        }
        for (; piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
          wVar4 = *(wint_t *)(puVar32 + (long)piVar15 * 4 + -4);
          local_128 = pwVar14;
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75e326;
          wVar10 = towupper_l(wVar4,p_Var5);
          pwVar28[(long)((long)piVar15 + -1)] = wVar10;
          pwVar14 = local_128;
        }
      }
LAB_0075c5d1:
      pwVar12 = pwVar28 + (long)local_138;
      param_3 = pwVar14;
    }
    goto LAB_0075c5dd;
  case L'C':
switchD_0075c09c_caseD_43:
    bVar37 = 0;
LAB_0075d42d:
    iVar25 = 1;
    if (0 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar18 = (int)(local_f8[5] + 0x76c) / 100 + ((int)(local_f8[5] + 0x76c) % 100 >> 0x1f);
    uVar35 = (ulong)uVar18;
    bVar37 = bVar37 & (byte)~(byte)(uVar18 >> 0x18) >> 7;
    break;
  case L'D':
    local_138 = (char **)&DAT_00816eb0;
    ppcVar16 = local_138;
    goto LAB_0075c9f8;
  case L'F':
    local_138 = (char **)&DAT_00822738;
    ppcVar16 = local_138;
    goto LAB_0075c9f8;
  case L'G':
  case L'V':
  case L'g':
    bVar37 = false;
LAB_0075c255:
    uVar18 = local_f8[7];
    uVar3 = local_f8[6];
    uVar26 = local_f8[5];
    iVar25 = (uVar18 - uVar3) + 0x17e;
    iVar27 = (uVar18 - iVar25) + 3 + (iVar25 / 7) * 7;
    if (iVar27 < 0) {
      uVar26 = uVar26 + 0x76b;
      iVar25 = 0x16d;
      uVar35 = (ulong)uVar26;
      if (((uVar26 & 3) == 0) &&
         (iVar25 = 0x16e, (uVar26 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar26 * 0x40000000) < 0x28f5c29)
         ) {
        iVar25 = 0x16e - (uint)((int)uVar26 % 400 != 0);
      }
      iVar27 = ((iVar25 + uVar18) - uVar3) + 0x17e;
      iVar27 = ((iVar25 + uVar18) - iVar27) + 3 + (iVar27 / 7) * 7;
    }
    else {
      uVar1 = uVar26 + 0x76c;
      uVar35 = (ulong)uVar1;
      iVar25 = 0x16d;
      if ((uVar26 & 3) == 0) {
        iVar25 = 0x16e;
        uVar24 = uVar1 * -0x3d70a3d7 + 0x51eb850;
        if ((uVar24 >> 2 | uVar26 * 0x40000000) < 0x28f5c29) {
          iVar25 = ((uVar24 >> 4 | uVar1 * -0x70000000) < 0xa3d70b) + 0x16d;
        }
      }
      iVar9 = ((uVar18 - iVar25) - uVar3) + 0x17e;
      iVar25 = ((uVar18 - iVar25) - iVar9) + 3 + (iVar9 / 7) * 7;
      if (-1 < iVar25) {
        uVar35 = (ulong)(uVar26 + 0x76d);
        iVar27 = iVar25;
      }
    }
    uVar18 = (uint)uVar35;
    if (wVar10 != L'G') {
      if (wVar10 != L'g') {
        iVar25 = 2;
        if (1 < iVar19) {
          iVar25 = iVar19;
        }
        iVar27 = iVar27 / 7;
        goto LAB_0075d658;
      }
      iVar25 = 2;
      if (1 < iVar19) {
        iVar25 = iVar19;
      }
      local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
      goto LAB_0075c38e;
    }
    iVar25 = 1;
    if (0 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    bVar37 = bVar37 & (byte)~(byte)(uVar35 >> 0x18) >> 7;
    break;
  case L'H':
    bVar37 = 0;
LAB_0075d558:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)local_f8[2];
    bVar37 = bVar37 & (byte)~(byte)(local_f8[2] >> 0x18) >> 7;
    break;
  case L'I':
    bVar37 = 0;
LAB_0075d538:
    uVar35 = (ulong)local_e4;
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    break;
  case L'M':
    bVar37 = 0;
LAB_0075d4ca:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)local_f8[1];
    bVar37 = bVar37 & (byte)~(byte)(local_f8[1] >> 0x18) >> 7;
    break;
  case L'P':
switchD_0075c09c_caseD_50:
    iVar27 = 1;
    param_3 = pwVar14;
    goto LAB_0075d067;
  case L'R':
switchD_0075c09c_caseD_52:
    local_138 = (char **)&DAT_00822790;
    param_3 = pwVar14;
    ppcVar16 = local_138;
    goto LAB_0075c9f8;
  case L'S':
    bVar37 = 0;
LAB_0075d4f8:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)*local_f8;
    bVar37 = bVar37 & (byte)~(byte)(*local_f8 >> 0x18) >> 7;
    break;
  case L'T':
switchD_0075c09c_caseD_54:
    local_138 = (char **)&DAT_00816ed8;
    param_3 = pwVar14;
    ppcVar16 = local_138;
    goto LAB_0075c9f8;
  case L'U':
    bVar37 = 0;
LAB_0075d47d:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    iVar27 = local_f8[7] - local_f8[6];
    goto LAB_0075d49c;
  case L'W':
    bVar37 = 0;
LAB_0075d586:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,local_f8[7]);
    iVar27 = local_f8[7] - (int)(local_f8[6] + 6) % 7;
LAB_0075d49c:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)(uint)((iVar27 + 7) / 7);
    bVar37 = -0xe < iVar27 & bVar37;
    break;
  case L'X':
switchD_0075c09c_caseD_58:
    ppcVar16 = (char **)*(int **)(local_108 + 0x330);
    goto LAB_0075c9f8;
  case L'Y':
switchD_0075c09c_caseD_59:
    iVar25 = 1;
    if (0 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,local_f8[5]);
    uVar35 = (ulong)(local_f8[5] + 0x76c);
    goto LAB_0075d1b8;
  case L'Z':
switchD_0075c09c_caseD_5a:
    iVar27 = 0;
    if (iVar25 == 0) {
      iVar27 = (int)local_f0;
    }
    local_f0 = (wchar_t *)CONCAT44(local_f0._4_4_,iVar27);
    if (local_118 == (char *)0x0) {
      uVar18 = local_f8[8];
      if (-1 < (int)uVar18) goto LAB_0075cb94;
LAB_0075dfb2:
      local_118 = "";
    }
    else if ((*local_118 == '\0') && (uVar18 = local_f8[8], -1 < (int)uVar18)) {
LAB_0075cb94:
      if (*local_110 == '\0') {
        local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
        local_118 = (char *)CONCAT44(local_118._4_4_,iVar29);
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75e24b;
        tzset();
        *local_110 = '\x01';
        uVar18 = local_f8[8];
        iVar29 = (int)local_118;
        iVar25 = (uint)local_138;
      }
      local_118 = &DAT_007c6ae9;
      if (((int)uVar18 < 2) && (local_118 = (&tzname)[(int)uVar18], local_118 == (char *)0x0))
      goto LAB_0075dfb2;
    }
    p_Var5 = local_100;
    local_d8._0_8_ = local_118;
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
    local_98[0] = 0;
    local_148 = (wchar_t *)local_98;
    local_138 = (char **)&local_d8;
    local_140._0_4_ = iVar25;
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75cc11;
    pwVar13 = (wchar_t *)__mbsrtowcs_l(0,&local_d8,0,local_98,p_Var5);
    ppcVar16 = local_138;
    uVar35 = (long)pwVar13 * 4 + 0x1b;
    for (puVar32 = (undefined1 *)ppwVar23;
        puVar32 != (undefined1 *)((long)ppwVar23 + -(uVar35 & 0xfffffffffffff000));
        puVar32 = puVar32 + -0x1000) {
      *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + -8);
    }
    uVar35 = (ulong)((uint)uVar35 & 0xff0);
    lVar17 = -uVar35;
    ppwVar23 = (wchar_t **)(puVar32 + lVar17);
    if (uVar35 != 0) {
      *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + -8);
    }
    pwVar14 = (wchar_t *)((ulong)(puVar32 + lVar17 + 0xf) & 0xfffffffffffffff0);
    local_138 = (char **)CONCAT44(local_138._4_4_,(int)local_140);
    local_140 = (wchar_t *)CONCAT44(local_140._4_4_,(uint)local_128);
    *(undefined8 *)(puVar32 + lVar17 + -8) = 0x75ccae;
    local_128 = pwVar13;
    __mbsrtowcs_l(pwVar14,ppcVar16,pwVar13,local_148,local_100);
    iVar19 = iVar19 - (int)local_128;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    pwVar13 = (wchar_t *)(long)(iVar29 + (int)local_128);
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= pwVar13) goto LAB_0075bfa0;
    ppwVar23 = (wchar_t **)(puVar32 + lVar17);
    if (pwVar12 != (wchar_t *)0x0) {
      iVar29 = (int)local_138;
      pwVar28 = local_128;
      pwVar31 = pwVar12;
      if (0 < iVar19) {
        iVar29 = (int)local_140;
        sVar20 = (size_t)iVar19;
        local_140 = local_128;
        pwVar31 = pwVar12 + sVar20;
        local_128 = pwVar13;
        if (iVar29 == 0x30) {
          *(undefined8 *)(puVar32 + lVar17 + -8) = 0x75e283;
          wmemset(pwVar12,L'0',sVar20);
          iVar29 = (int)local_138;
          pwVar28 = local_140;
          pwVar13 = local_128;
        }
        else {
          *(undefined8 *)(puVar32 + lVar17 + -8) = 0x75cd2e;
          wmemset(pwVar12,L' ',sVar20);
          iVar29 = (int)local_138;
          pwVar28 = local_140;
          pwVar13 = local_128;
        }
      }
      local_128 = pwVar13;
      p_Var5 = local_100;
      local_138 = (char **)(long)(int)pwVar28;
      piVar15 = (int *)local_138;
      if (iVar29 == 0) {
        if ((int)local_f0 == 0) {
          *(undefined8 *)(puVar32 + lVar17 + -8) = 0x75cd6b;
          wmemcpy(pwVar31,pwVar14,(size_t)local_138);
        }
        else {
          for (; piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
            wVar10 = pwVar14[(long)((long)piVar15 + -1)];
            *(undefined8 *)(puVar32 + lVar17 + -8) = 0x75e0dd;
            local_f0 = param_3;
            wVar10 = towupper_l(wVar10,p_Var5);
            pwVar31[(long)((long)piVar15 + -1)] = wVar10;
            param_3 = local_f0;
          }
        }
      }
      else {
        for (; piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
          wVar10 = pwVar14[(long)((long)piVar15 + -1)];
          *(undefined8 *)(puVar32 + lVar17 + -8) = 0x75e11b;
          local_f0 = param_3;
          wVar10 = towlower_l(wVar10,p_Var5);
          pwVar31[(long)((long)piVar15 + -1)] = wVar10;
          param_3 = local_f0;
        }
      }
      pwVar12 = pwVar31 + (long)local_138;
      ppwVar23 = (wchar_t **)(puVar32 + lVar17);
      pwVar13 = local_128;
    }
LAB_0075cd77:
    local_128 = pwVar13;
    pwVar34 = (wchar_t *)((long)pwVar34 + (long)local_128);
    param_1 = pwVar12;
    goto LAB_0075bf71;
  case L'a':
    if (iVar25 == 0) {
      iVar25 = (int)local_f0;
    }
    pwVar13 = (wchar_t *)&DAT_007c6ae9;
    uVar18 = local_f8[6];
    local_f0 = (wchar_t *)CONCAT44(local_f0._4_4_,iVar25);
    if (uVar18 < 7) {
      pwVar13 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x34) * 8 + 0x40);
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,uVar18);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75cde8;
    ppcVar16 = (char **)wcslen(pwVar13);
    iVar19 = iVar19 - (int)ppcVar16;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    pwVar31 = (wchar_t *)(long)(iVar29 + (int)ppcVar16);
    pwVar13 = local_128;
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= pwVar31) goto LAB_0075bfa0;
    if (pwVar12 != (wchar_t *)0x0) {
      uVar18 = (uint)local_138;
      if (0 < iVar19) {
        wVar10 = L'0';
        pwVar28 = pwVar12 + iVar19;
        if ((uint)local_128 != 0x30) {
          wVar10 = L' ';
        }
        local_138 = ppcVar16;
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75ce54;
        wmemset(pwVar12,wVar10,(long)iVar19);
        uVar18 = local_f8[6];
        ppcVar16 = local_138;
      }
      p_Var5 = local_100;
      local_138 = (char **)(long)(int)ppcVar16;
      if ((int)local_f0 == 0) {
        pwVar12 = (wchar_t *)&DAT_007c6ae9;
        if (uVar18 < 7) {
          pwVar12 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x34) * 8 + 0x40);
        }
        goto LAB_0075cea0;
      }
      puVar32 = &DAT_007c6ae9;
      piVar15 = (int *)local_138;
      pwVar12 = local_128;
      pwVar13 = local_f0;
      if (uVar18 < 7) {
        puVar32 = *(undefined1 **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x34) * 8 + 0x40);
      }
      for (; local_128 = pwVar14, local_f0 = pwVar31, param_3 = local_128, pwVar31 = local_f0,
          piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
        wVar4 = *(wint_t *)(puVar32 + (long)piVar15 * 4 + -4);
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75e18a;
        wVar10 = towupper_l(wVar4,p_Var5);
        pwVar28[(long)((long)piVar15 + -1)] = wVar10;
        pwVar31 = local_f0;
        pwVar14 = local_128;
        pwVar12 = local_128;
        pwVar13 = local_f0;
      }
      goto LAB_0075c49e;
    }
    goto LAB_0075c4aa;
  case L'b':
  case L'h':
    pwVar13 = (wchar_t *)&DAT_007c6ae9;
    if (iVar25 == 0) {
      iVar25 = (int)local_f0;
    }
    uVar18 = local_f8[4];
    if (uVar18 < 0xc) {
      pwVar13 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x42) * 8 + 0x40);
    }
    local_140 = (wchar_t *)CONCAT44(local_140._4_4_,iVar25);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,uVar18);
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75c501;
    sVar20 = wcslen(pwVar13);
    iVar25 = (int)sVar20;
    iVar19 = iVar19 - iVar25;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    local_f0 = (wchar_t *)(long)(iVar29 + iVar25);
    pwVar13 = local_128;
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= local_f0) goto LAB_0075bfa0;
    if (pwVar12 != (wchar_t *)0x0) {
      uVar18 = (uint)local_128;
      iVar29 = (int)local_140;
      if (0 < iVar19) {
        iVar29 = (uint)local_138;
        local_138 = (char **)CONCAT44(local_138._4_4_,(int)local_140);
        wVar10 = L'0';
        pwVar28 = pwVar12 + iVar19;
        if (iVar29 != 0x30) {
          wVar10 = L' ';
        }
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75c57d;
        wmemset(pwVar12,wVar10,(long)iVar19);
        uVar18 = local_f8[4];
        iVar29 = (uint)local_138;
      }
      p_Var5 = local_100;
      local_138 = (char **)(long)iVar25;
      if (iVar29 == 0) {
        pwVar12 = (wchar_t *)&DAT_007c6ae9;
        if (uVar18 < 0xc) {
          pwVar12 = *(wchar_t **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x42) * 8 + 0x40);
        }
        goto LAB_0075c5c2;
      }
      puVar32 = &DAT_007c6ae9;
      piVar15 = (int *)local_138;
      if (uVar18 < 0xc) {
        puVar32 = *(undefined1 **)(local_108 + (ulong)(ushort)((short)uVar18 + 0x42) * 8 + 0x40);
      }
      for (; piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
        wVar4 = *(wint_t *)(puVar32 + (long)piVar15 * 4 + -4);
        local_128 = pwVar14;
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75e38c;
        wVar10 = towupper_l(wVar4,p_Var5);
        pwVar28[(long)((long)piVar15 + -1)] = wVar10;
        pwVar14 = local_128;
      }
      goto LAB_0075c5d1;
    }
LAB_0075c5dd:
    pwVar34 = (wchar_t *)((long)pwVar34 + (long)local_f0);
    param_1 = pwVar12;
    goto LAB_0075bf71;
  case L'c':
switchD_0075c09c_caseD_63:
    ppcVar16 = (char **)*(int **)(local_108 + 800);
    goto LAB_0075c9f8;
  case L'd':
    bVar37 = 0;
LAB_0075d754:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)local_f8[3];
    bVar37 = bVar37 & (byte)~(byte)(local_f8[3] >> 0x18) >> 7;
    break;
  case L'e':
    bVar37 = 0;
LAB_0075d726:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)local_f8[3];
    bVar37 = bVar37 & (byte)~(byte)(local_f8[3] >> 0x18) >> 7;
    goto LAB_0075d686;
  case L'j':
    bVar37 = 0;
LAB_0075d706:
    iVar25 = 3;
    if (2 < iVar19) {
      iVar25 = iVar19;
    }
    uVar18 = local_f8[7];
    goto LAB_0075d6eb;
  case L'k':
    bVar37 = 0;
LAB_0075d6a4:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)local_f8[2];
    bVar37 = bVar37 & (byte)~(byte)(local_f8[2] >> 0x18) >> 7;
    goto LAB_0075d686;
  case L'l':
    bVar37 = 0;
LAB_0075d66d:
    uVar35 = (ulong)local_e4;
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
LAB_0075d686:
    if ((iVar29 != 0x30) && (iVar29 != 0x2d)) {
      iVar29 = 0x5f;
    }
    break;
  case L'm':
    bVar37 = 0;
LAB_0075d6cf:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    uVar18 = local_f8[4];
LAB_0075d6eb:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)(uVar18 + 1);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,uVar18);
    bVar37 = bVar37 & (byte)~(byte)(uVar18 + 1 >> 0x18) >> 7;
    break;
  case L'n':
switchD_0075c09c_caseD_6e:
    iVar19 = iVar19 + -1;
    iVar25 = 0;
    if (-1 < iVar19) {
      iVar25 = iVar19;
    }
    uVar35 = (ulong)(iVar25 + 1);
    if ((ulong)(local_e0 - (long)pwVar34) <= uVar35) goto LAB_0075bfa0;
    param_3 = pwVar14;
    if (pwVar12 != (wchar_t *)0x0) {
      pwVar13 = pwVar12;
      if (0 < iVar19) {
        sVar20 = (size_t)iVar19;
        pwVar13 = pwVar12 + sVar20;
        if (iVar29 == 0x30) {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75e2a6;
          wmemset(pwVar12,L'0',sVar20);
        }
        else {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75cb4a;
          wmemset(pwVar12,L' ',sVar20);
        }
      }
      *pwVar13 = L'\n';
      pwVar12 = pwVar13 + 1;
    }
    goto LAB_0075c777;
  case L'p':
switchD_0075c09c_caseD_70:
    iVar27 = 0;
    param_3 = pwVar14;
LAB_0075d067:
    if (iVar25 != 0) {
      iVar27 = iVar25;
      local_f0._0_4_ = 0;
    }
    local_140 = (wchar_t *)CONCAT44(local_140._4_4_,iVar29);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,local_f8[2]);
    pwVar13 = *(wchar_t **)(local_108 + (long)(int)((0xb < (int)local_f8[2]) + 0x5a) * 8 + 0x40);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75d0b6;
    pwVar14 = (wchar_t *)wcslen(pwVar13);
    iVar19 = iVar19 - (int)pwVar14;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    local_138 = (char **)(long)(iVar29 + (int)pwVar14);
    pwVar13 = local_128;
    if ((int *)(local_e0 - (long)pwVar34) <= local_138) goto LAB_0075bfa0;
    if (pwVar12 != (wchar_t *)0x0) {
      uVar18 = (uint)local_128;
      if (0 < iVar19) {
        wVar10 = L'0';
        pwVar28 = pwVar12 + iVar19;
        if ((int)local_140 != 0x30) {
          wVar10 = L' ';
        }
        local_128 = pwVar14;
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75d12a;
        wmemset(pwVar12,wVar10,(long)iVar19);
        uVar18 = local_f8[2];
        pwVar14 = local_128;
      }
      p_Var5 = local_100;
      pwVar12 = (wchar_t *)(long)(int)pwVar14;
      lVar17 = (long)(int)((0xb < (int)uVar18) + 0x5a);
      local_128 = pwVar12;
      pwVar13 = local_f0;
      if (iVar27 == 0) {
        if ((int)local_f0 == 0) {
          pwVar13 = *(wchar_t **)(local_108 + lVar17 * 8 + 0x40);
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75d186;
          wmemcpy(pwVar28,pwVar13,(size_t)pwVar12);
          pwVar13 = local_f0;
        }
        else {
          lVar17 = *(long *)(local_108 + lVar17 * 8 + 0x40);
          pwVar14 = param_3;
          for (; local_f0 = pwVar14, param_3 = local_f0, pwVar12 != (wchar_t *)0x0;
              pwVar12 = (wchar_t *)((long)pwVar12 + -1)) {
            wVar4 = *(wint_t *)(lVar17 + -4 + (long)pwVar12 * 4);
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75e02d;
            wVar10 = towupper_l(wVar4,p_Var5);
            pwVar28[(long)((long)pwVar12 + -1)] = wVar10;
            pwVar14 = local_f0;
            pwVar13 = local_f0;
          }
        }
      }
      else {
        lVar17 = *(long *)(local_108 + lVar17 * 8 + 0x40);
        pwVar14 = param_3;
        for (; local_f0 = pwVar14, param_3 = local_f0, pwVar12 != (wchar_t *)0x0;
            pwVar12 = (wchar_t *)((long)pwVar12 + -1)) {
          wVar4 = *(wint_t *)(lVar17 + -4 + (long)pwVar12 * 4);
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75dedd;
          wVar10 = towlower_l(wVar4,p_Var5);
          pwVar28[(long)((long)pwVar12 + -1)] = wVar10;
          pwVar14 = local_f0;
          pwVar13 = local_f0;
        }
      }
LAB_0075c23b:
      local_f0 = pwVar13;
      pwVar12 = pwVar28 + (long)local_128;
    }
LAB_0075c247:
    pwVar34 = (wchar_t *)((long)pwVar34 + (long)local_138);
    param_1 = pwVar12;
    goto LAB_0075bf71;
  case L'r':
switchD_0075c09c_caseD_72:
    ppcVar16 = (char **)&DAT_00822760;
    if (**(int **)(local_108 + 0x338) != 0) {
      ppcVar16 = (char **)*(int **)(local_108 + 0x338);
    }
    goto LAB_0075c9f8;
  case L's':
switchD_0075c09c_caseD_73:
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
    local_138._0_4_ = local_f8[8];
    local_138._4_4_ = local_f8[9];
    lStack_130 = *(long *)(local_f8 + 10);
    local_d8._0_8_ = *(undefined8 *)local_f8;
    local_d8.tm_hour = local_f8[2];
    local_d8.tm_mday = local_f8[3];
    local_d8.tm_mon = local_f8[4];
    local_d8.tm_year = local_f8[5];
    local_d8.tm_wday = local_f8[6];
    local_d8.tm_yday = local_f8[7];
    local_d8.tm_zone = *(char **)(local_f8 + 0xc);
    local_d8._32_8_ = local_138;
    local_d8.tm_gmtoff = lStack_130;
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75c7d1;
    uVar35 = timelocal(&local_d8);
    ppcVar16 = (char **)local_40;
    iVar29 = (uint)local_128;
    if ((long)uVar35 < 0) {
      do {
        ppcVar16 = (char **)((long)ppcVar16 + -4);
        uVar21 = (long)uVar35 / 10;
        *(wchar_t *)ppcVar16 = L'0' - ((int)uVar35 + (int)uVar21 * -10);
        uVar35 = uVar21;
      } while (uVar21 != 0);
      local_138 = (char **)CONCAT44(local_138._4_4_,1);
      goto LAB_0075d210;
    }
    do {
      pwVar14 = (wchar_t *)ppcVar16;
      uVar21 = uVar35 / 10;
      ppcVar16 = (char **)(pwVar14 + -1);
      *(wchar_t *)ppcVar16 = (int)uVar35 + (int)uVar21 * -10 + L'0';
      uVar35 = uVar21;
    } while (uVar21 != 0);
    local_138 = (char **)CONCAT44(local_138._4_4_,1);
    bVar36 = false;
    goto LAB_0075c830;
  case L't':
switchD_0075c09c_caseD_74:
    iVar19 = iVar19 + -1;
    iVar25 = 0;
    if (-1 < iVar19) {
      iVar25 = iVar19;
    }
    uVar35 = (ulong)(iVar25 + 1);
    if ((ulong)(local_e0 - (long)pwVar34) <= uVar35) goto LAB_0075bfa0;
    param_3 = pwVar14;
    if (pwVar12 != (wchar_t *)0x0) {
      pwVar13 = pwVar12;
      if (0 < iVar19) {
        sVar20 = (size_t)iVar19;
        pwVar13 = pwVar12 + sVar20;
        if (iVar29 == 0x30) {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75e2bb;
          wmemset(pwVar12,L'0',sVar20);
        }
        else {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75c76b;
          wmemset(pwVar12,L' ',sVar20);
        }
      }
      *pwVar13 = L'\t';
      pwVar12 = pwVar13 + 1;
    }
LAB_0075c777:
    pwVar34 = (wchar_t *)((long)pwVar34 + uVar35);
    param_1 = pwVar12;
    goto LAB_0075bf71;
  case L'u':
    bVar37 = false;
LAB_0075d60a:
    iVar25 = 1;
    if (0 < iVar19) {
      iVar25 = iVar19;
    }
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,local_f8[6]);
    iVar27 = (int)(local_f8[6] + 6) % 7;
LAB_0075d658:
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)(iVar27 + 1U);
    bVar37 = bVar37 & (byte)~(byte)(iVar27 + 1U >> 0x18) >> 7;
    break;
  case L'w':
    bVar37 = 0;
LAB_0075d5dc:
    iVar25 = 1;
    if (0 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar35 = (ulong)local_f8[6];
    bVar37 = bVar37 & (byte)~(byte)(local_f8[6] >> 0x18) >> 7;
    break;
  case L'x':
switchD_0075c09c_caseD_78:
    ppcVar16 = (char **)*(int **)(local_108 + 0x328);
LAB_0075c9f8:
    local_138 = ppcVar16;
    *(__locale_t *)((long)ppwVar23 + -0x10) = local_100;
    iVar25 = local_e8;
    puVar7 = local_f8;
    ppcVar16 = local_138;
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -0x18) = 0x75ca33;
    iVar25 = __strftime_internal(0,0xffffffffffffffff,ppcVar16,puVar7,iVar25);
    iVar19 = iVar19 - iVar25;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    pwVar14 = (wchar_t *)(local_e0 - (long)pwVar34);
    pwVar13 = local_128;
    if (pwVar14 <= (wchar_t *)(long)(iVar29 + iVar25)) goto LAB_0075bfa0;
    pwVar34 = (wchar_t *)((long)pwVar34 + (long)(iVar29 + iVar25));
    if (pwVar12 != (wchar_t *)0x0) {
      pwVar13 = pwVar12;
      if (0 < iVar19) {
        sVar20 = (size_t)iVar19;
        pwVar13 = pwVar12 + sVar20;
        local_128 = pwVar14;
        if ((uint)local_128 == 0x30) {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75dde3;
          wmemset(pwVar12,L'0',sVar20);
          pwVar14 = local_128;
        }
        else {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75ca9d;
          wmemset(pwVar12,L' ',sVar20);
          pwVar14 = local_128;
        }
      }
      *(__locale_t *)((long)ppwVar23 + -0x10) = local_100;
      iVar19 = local_e8;
      puVar7 = local_f8;
      ppcVar16 = local_138;
      param_1 = pwVar13 + iVar25;
      *(undefined8 *)((long)ppwVar23 + -0x18) = 0x75cadc;
      __strftime_internal(pwVar13,pwVar14,ppcVar16,puVar7,iVar19);
      p_Var5 = local_100;
      if ((int)local_f0 != 0) {
        for (; pwVar12 < param_1; pwVar12 = pwVar12 + 1) {
          wVar10 = *pwVar12;
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75ddc8;
          wVar10 = towupper_l(wVar10,p_Var5);
          *pwVar12 = wVar10;
        }
      }
    }
    goto LAB_0075bf71;
  case L'y':
switchD_0075c09c_caseD_79:
    bVar37 = false;
LAB_0075d3f1:
    iVar25 = 2;
    if (1 < iVar19) {
      iVar25 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar25);
    uVar18 = local_f8[5];
LAB_0075c38e:
    uVar35 = (ulong)(((int)uVar18 % 100 + 100U) % 100);
    break;
  case L'z':
    iVar25 = 0;
LAB_0075d782:
    if ((int)local_f8[8] < 0) goto LAB_0075bf71;
    iVar9 = iVar19 + -1;
    iVar30 = (int)*(ulong *)(local_f8 + 10);
    uVar35 = *(ulong *)(local_f8 + 10) & 0xffffffff;
    iVar27 = 0;
    if (-1 < iVar9) {
      iVar27 = iVar9;
    }
    local_138 = (char **)(long)(iVar27 + 1);
    if (iVar30 < 0) {
      if ((int *)(local_e0 - (long)pwVar34) <= local_138) goto LAB_0075bfa0;
      if (pwVar12 != (wchar_t *)0x0) {
        if (0 < iVar9) {
          sVar20 = (size_t)iVar9;
          local_140 = (wchar_t *)CONCAT44(local_140._4_4_,iVar29);
          local_148 = pwVar12 + sVar20;
          local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar25);
          if (iVar29 == 0x30) {
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75e510;
            wmemset(pwVar12,L'0',sVar20);
            pwVar12 = local_148;
            iVar25 = (uint)local_128;
            iVar29 = (int)local_140;
          }
          else {
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75e085;
            wmemset(pwVar12,L' ',sVar20);
            pwVar12 = local_148;
            iVar25 = (uint)local_128;
            iVar29 = (int)local_140;
          }
        }
        *pwVar12 = L'-';
        pwVar12 = pwVar12 + 1;
      }
      uVar35 = (ulong)(uint)-iVar30;
    }
    else {
      if ((int *)(local_e0 - (long)pwVar34) <= local_138) goto LAB_0075bfa0;
      if (pwVar12 != (wchar_t *)0x0) {
        pwVar13 = pwVar12;
        if (0 < iVar9) {
          sVar20 = (size_t)iVar9;
          local_148 = (wchar_t *)CONCAT44(local_148._4_4_,iVar30);
          local_140 = (wchar_t *)CONCAT44(local_140._4_4_,iVar29);
          pwVar13 = pwVar12 + sVar20;
          local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar25);
          if (iVar29 == 0x30) {
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75e4cd;
            wmemset(pwVar12,L'0',sVar20);
            uVar35 = (ulong)local_148 & 0xffffffff;
            iVar25 = (uint)local_128;
            iVar29 = (int)local_140;
          }
          else {
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75d812;
            wmemset(pwVar12,L' ',sVar20);
            uVar35 = (ulong)local_148 & 0xffffffff;
            iVar25 = (uint)local_128;
            iVar29 = (int)local_140;
          }
        }
        *pwVar13 = L'+';
        pwVar12 = pwVar13 + 1;
      }
    }
    pwVar34 = (wchar_t *)((long)pwVar34 + (long)local_138);
    iVar27 = 4;
    if (3 < iVar19) {
      iVar27 = iVar19;
    }
    local_138 = (char **)CONCAT44(local_138._4_4_,iVar27);
    bVar37 = iVar25 == 0x4f;
    uVar35 = (ulong)(uint)((int)(uVar35 / 0xe10) * 0x28 + (int)(uVar35 / 0x3c));
  }
  if (bVar37 == 0) {
LAB_0075d1b8:
    bVar36 = false;
    if ((int)uVar35 < 0) {
      uVar35 = (ulong)(uint)-(int)uVar35;
      bVar36 = true;
    }
LAB_0075d1c7:
    ppcVar16 = (char **)local_40;
    do {
      pwVar14 = (wchar_t *)ppcVar16;
      ppcVar16 = (char **)(pwVar14 + -1);
      uVar18 = (uint)uVar35;
      *(wchar_t *)ppcVar16 = uVar18 + (int)(uVar35 / 10) * -10 + L'0';
      uVar35 = uVar35 / 10;
    } while (9 < uVar18);
    if (bVar36) {
LAB_0075d210:
      pwVar14 = (wchar_t *)ppcVar16;
      pwVar14[-1] = L'-';
      bVar36 = true;
      ppcVar16 = (char **)(pwVar14 + -1);
    }
LAB_0075c830:
    lVar17 = (long)local_40 - (long)ppcVar16;
    iVar25 = iVar19;
    if (iVar29 != 0x2d) {
      iVar27 = (uint)local_138 - (int)(lVar17 >> 2);
      if (0 < iVar27) {
        pwVar13 = local_128;
        if (iVar29 == 0x5f) {
          __n = (char **)(long)iVar27;
          if ((int *)(local_e0 - (long)pwVar34) <= __n) goto LAB_0075bfa0;
          if (pwVar12 != (wchar_t *)0x0) {
            local_148 = (wchar_t *)CONCAT44(local_148._4_4_,iVar27);
            local_128 = (wchar_t *)CONCAT44(local_128._4_4_,0x5f);
            local_140 = (wchar_t *)ppcVar16;
            local_138 = __n;
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75dd5a;
            wmemset(pwVar12,L' ',(size_t)__n);
            pwVar12 = pwVar12 + (long)local_138;
            __n = local_138;
            ppcVar16 = (char **)local_140;
            iVar29 = (uint)local_128;
            iVar27 = (uint)local_148;
          }
          pwVar34 = (wchar_t *)((long)pwVar34 + (long)__n);
          iVar25 = 0;
          if (iVar27 < iVar19) {
            iVar25 = iVar19 - iVar27;
          }
        }
        else {
          if ((int *)(local_e0 - (long)pwVar34) <= (int *)(long)(int)(uint)local_138)
          goto LAB_0075bfa0;
          sVar20 = (size_t)iVar27;
          if (bVar36) {
            lVar17 = (long)local_40 - (long)pwVar14;
            pwVar34 = (wchar_t *)((long)pwVar34 + 1);
            ppcVar16 = (char **)pwVar14;
            if (pwVar12 != (wchar_t *)0x0) {
              *pwVar12 = L'-';
              pwVar12 = pwVar12 + 1;
LAB_0075c8a7:
              local_138 = (char **)CONCAT44(local_138._4_4_,iVar29);
              local_128 = (wchar_t *)ppcVar16;
              *(undefined8 *)((long)ppwVar23 + -8) = 0x75c8ca;
              wmemset(pwVar12,L'0',sVar20);
              ppcVar16 = (char **)local_128;
              pwVar12 = pwVar12 + sVar20;
              iVar29 = (uint)local_138;
            }
          }
          else if (pwVar12 != (wchar_t *)0x0) goto LAB_0075c8a7;
          pwVar34 = (wchar_t *)((long)pwVar34 + sVar20);
          iVar25 = 0;
        }
      }
    }
    pwVar14 = (wchar_t *)(lVar17 >> 2);
    iVar25 = iVar25 - (int)pwVar14;
    iVar19 = 0;
    if (-1 < iVar25) {
      iVar19 = iVar25;
    }
    pwVar31 = (wchar_t *)(long)(iVar19 + (int)pwVar14);
    pwVar13 = local_128;
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= pwVar31) {
LAB_0075bfa0:
      local_128 = pwVar13;
      pwVar34 = (wchar_t *)0x0;
      goto LAB_0075bfa3;
    }
    if (pwVar12 != (wchar_t *)0x0) {
      pwVar28 = pwVar12;
      if (0 < iVar25) {
        sVar20 = (size_t)iVar25;
        pwVar28 = pwVar12 + sVar20;
        local_138 = ppcVar16;
        local_128 = pwVar14;
        if (iVar29 == 0x30) {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75dd0d;
          wmemset(pwVar12,L'0',sVar20);
          pwVar14 = local_128;
          ppcVar16 = local_138;
        }
        else {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75c94a;
          wmemset(pwVar12,L' ',sVar20);
          pwVar14 = local_128;
          ppcVar16 = local_138;
        }
      }
      p_Var5 = local_100;
      piVar15 = (int *)(long)(int)pwVar14;
      local_138 = (char **)piVar15;
      if ((int)local_f0 == 0) {
LAB_0075c490:
        local_138 = (char **)piVar15;
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75c49e;
        wmemcpy(pwVar28,(wchar_t *)ppcVar16,(size_t)piVar15);
        pwVar12 = local_128;
        pwVar13 = local_f0;
      }
      else {
        pwVar12 = local_128;
        pwVar13 = local_f0;
        if (piVar15 != (int *)0x0) {
          local_f0 = pwVar31;
          local_128 = param_3;
          do {
            wVar10 = *(wchar_t *)((long)ppcVar16 + (undefined *)((long)piVar15 + -1) * 4);
            *(undefined8 *)((long)ppwVar23 + -8) = 0x75c9ad;
            wVar10 = towupper_l(wVar10,p_Var5);
            pwVar28[(long)((long)piVar15 + -1)] = wVar10;
            piVar15 = (int *)((long)piVar15 + -1);
            param_3 = local_128;
            pwVar31 = local_f0;
            pwVar12 = local_128;
            pwVar13 = local_f0;
          } while (piVar15 != (int *)0x0);
        }
      }
LAB_0075c49e:
      local_f0 = pwVar13;
      local_128 = pwVar12;
      pwVar12 = pwVar28 + (long)local_138;
    }
  }
  else {
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar29);
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75c3cf;
    pwVar13 = (wchar_t *)_nl_get_walt_digit(uVar35);
    iVar29 = (uint)local_128;
    if (pwVar13 == (wchar_t *)0x0) {
LAB_0075dc70:
      bVar36 = false;
      goto LAB_0075d1c7;
    }
    local_140 = pwVar13;
    *(undefined8 *)((long)ppwVar23 + -8) = 0x75c3ee;
    pwVar14 = (wchar_t *)wcslen(pwVar13);
    iVar29 = (uint)local_128;
    if (pwVar14 == (wchar_t *)0x0) goto LAB_0075dc70;
    iVar19 = iVar19 - (int)pwVar14;
    iVar29 = 0;
    if (-1 < iVar19) {
      iVar29 = iVar19;
    }
    pwVar31 = (wchar_t *)(long)(iVar29 + (int)pwVar14);
    pwVar13 = local_128;
    if ((wchar_t *)(local_e0 - (long)pwVar34) <= pwVar31) goto LAB_0075bfa0;
    if (pwVar12 != (wchar_t *)0x0) {
      ppcVar16 = (char **)local_140;
      pwVar28 = pwVar12;
      if (0 < iVar19) {
        sVar20 = (size_t)iVar19;
        local_138 = (char **)local_140;
        pwVar28 = pwVar12 + sVar20;
        local_128 = pwVar14;
        if ((uint)local_128 == 0x30) {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75de2f;
          wmemset(pwVar12,L'0',sVar20);
          pwVar14 = local_128;
          ppcVar16 = local_138;
        }
        else {
          *(undefined8 *)((long)ppwVar23 + -8) = 0x75c468;
          wmemset(pwVar12,L' ',sVar20);
          pwVar14 = local_128;
          ppcVar16 = local_138;
        }
      }
      p_Var5 = local_100;
      piVar15 = (int *)(long)(int)pwVar14;
      local_138 = (char **)piVar15;
      pwVar14 = param_3;
      pwVar12 = local_128;
      pwVar13 = local_f0;
      if ((int)local_f0 == 0) goto LAB_0075c490;
      for (; local_128 = pwVar14, local_f0 = pwVar31, param_3 = local_128, pwVar31 = local_f0,
          piVar15 != (int *)0x0; piVar15 = (int *)((long)piVar15 + -1)) {
        wVar10 = *(wchar_t *)((long)ppcVar16 + (undefined *)((long)piVar15 + -1) * 4);
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75dced;
        wVar10 = towupper_l(wVar10,p_Var5);
        pwVar28[(long)((long)piVar15 + -1)] = wVar10;
        pwVar31 = local_f0;
        pwVar14 = local_128;
        pwVar12 = local_128;
        pwVar13 = local_f0;
      }
      goto LAB_0075c49e;
    }
  }
LAB_0075c4aa:
  pwVar34 = (wchar_t *)((long)pwVar34 + (long)pwVar31);
  param_1 = pwVar12;
LAB_0075bf71:
  wVar10 = param_3[1];
  param_3 = param_3 + 1;
  ppwVar8 = ppwVar23;
  pwVar12 = param_1;
  if (wVar10 == L'\0') goto LAB_0075bf82;
  goto LAB_0075bf44;
switchD_0075c0c0_caseD_41:
switchD_0075c09c_caseD_1:
  iVar25 = 1;
  pwVar14 = (wchar_t *)0xfffffffffffffffc;
  do {
    pwVar31 = pwVar14;
    iVar25 = iVar25 + 1;
    pwVar14 = pwVar31 + -1;
    pwVar22 = (wchar_t *)((long)param_3 + (long)pwVar31);
  } while (*(int *)((long)param_3 + (long)pwVar31) != 0x25);
LAB_0075c1a0:
  iVar19 = iVar19 - iVar25;
  iVar27 = 0;
  if (-1 < iVar19) {
    iVar27 = iVar19;
  }
  local_138 = (char **)(long)(iVar27 + iVar25);
  if ((int *)(local_e0 - (long)pwVar34) <= local_138) goto LAB_0075bfa0;
  if (pwVar12 != (wchar_t *)0x0) {
    local_128._0_4_ = iVar25;
    if (0 < iVar19) {
      sVar20 = (size_t)iVar19;
      local_128 = (wchar_t *)CONCAT44(local_128._4_4_,iVar25);
      pwVar28 = pwVar12 + sVar20;
      local_140 = pwVar31;
      if (iVar29 == 0x30) {
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75ddff;
        wmemset(pwVar12,L'0',sVar20);
        pwVar31 = local_140;
      }
      else {
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75c207;
        wmemset(pwVar12,L' ',sVar20);
        pwVar31 = local_140;
      }
    }
    p_Var5 = local_100;
    pwVar12 = (wchar_t *)(long)(int)(uint)local_128;
    local_128 = pwVar12;
    if ((int)local_f0 == 0) {
      *(undefined8 *)((long)ppwVar23 + -8) = 0x75c23b;
      wmemcpy(pwVar28,pwVar22,(size_t)pwVar12);
      pwVar13 = local_f0;
    }
    else {
      puVar2 = (undefined *)((long)param_3 + (long)pwVar31);
      local_f0 = param_3;
      do {
        wVar4 = *(wint_t *)(puVar2 + (long)pwVar12 * 4 + -4);
        *(undefined8 *)((long)ppwVar23 + -8) = 0x75dc9d;
        wVar10 = towupper_l(wVar4,p_Var5);
        pwVar28[(long)((long)pwVar12 + -1)] = wVar10;
        pwVar12 = (wchar_t *)((long)pwVar12 + -1);
        param_3 = local_f0;
        pwVar13 = local_f0;
      } while (pwVar12 != (wchar_t *)0x0);
    }
    goto LAB_0075c23b;
  }
  goto LAB_0075c247;
}

