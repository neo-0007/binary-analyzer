
/* WARNING: Removing unreachable block (ram,0x006e803a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ____strtold_l_internal(char *param_1,long *param_2,int param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [15];
  undefined1 auVar19 [14];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  uint5 uVar25;
  undefined1 auVar26 [13];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [13];
  undefined1 auVar30 [15];
  uint7 uVar31;
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  bool bVar42;
  undefined1 auVar43 [15];
  unkuint9 Var44;
  undefined1 auVar45 [11];
  undefined1 auVar46 [13];
  undefined1 auVar47 [14];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined4 uVar50;
  uint6 uVar51;
  char cVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  size_t sVar56;
  long lVar57;
  char *pcVar58;
  ulong uVar60;
  ulong uVar61;
  long lVar62;
  int iVar63;
  uint uVar64;
  char *pcVar65;
  byte bVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong *puVar71;
  long lVar72;
  char cVar73;
  long *plVar74;
  char *pcVar75;
  char cVar76;
  ulong uVar77;
  undefined8 uVar78;
  char *pcVar79;
  char *pcVar80;
  char *pcVar81;
  ulong *puVar82;
  uint uVar83;
  char *pcVar84;
  char *pcVar85;
  ulong *puVar86;
  ulong *puVar87;
  ulong uVar88;
  long in_FS_OFFSET;
  bool bVar89;
  bool bVar90;
  bool bVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  ulong *local_3688;
  char *local_3678;
  ulong local_3660;
  ulong *local_3640;
  char **local_3630;
  ulong local_3628;
  ulong local_3620;
  ulong local_3610;
  char *local_3608;
  ulong local_3600;
  ulong local_35f8 [860];
  ulong local_1b18 [859];
  long local_40;
  char *pcVar59;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar57 = *(long *)(param_4 + 8);
  pcVar75 = (char *)0x0;
  pcVar85 = (char *)0x0;
  if (param_3 != 0) {
    pcVar75 = *(char **)(lVar57 + 0x50);
    if ((byte)(*pcVar75 - 1U) < 0x7e) {
      pcVar85 = *(char **)(lVar57 + 0x48);
      if (**(char **)(lVar57 + 0x48) == '\0') {
        pcVar75 = (char *)0x0;
        pcVar85 = (char *)0x0;
      }
    }
    else {
      pcVar75 = (char *)0x0;
      pcVar85 = (char *)0x0;
    }
  }
  pcVar5 = *(char **)(lVar57 + 0x40);
  sVar56 = strlen(pcVar5);
  if (sVar56 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("decimal_len > 0","../stdlib/strtod_l.c",0x255,"____strtold_l_internal");
  }
  local_3610 = 0;
  pcVar80 = param_1 + -1;
  do {
    pcVar81 = pcVar80;
    cVar52 = pcVar81[1];
    lVar57 = (long)cVar52;
    pcVar80 = pcVar81 + 1;
  } while ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + lVar57 * 2) & 0x20) != 0);
  if (cVar52 == '-') {
    lVar57 = (long)pcVar81[2];
    uVar50 = 1;
    pcVar80 = pcVar81 + 2;
  }
  else {
    uVar50 = 0;
    if (cVar52 == '+') {
      lVar57 = (long)pcVar81[2];
      pcVar80 = pcVar81 + 2;
    }
  }
  cVar52 = *pcVar5;
  cVar76 = (char)lVar57;
  cVar73 = cVar76;
  if (cVar52 != '\0') {
    lVar68 = 0;
    cVar73 = cVar52;
    do {
      if (pcVar80[lVar68] != cVar73) goto LAB_006e6984;
      lVar68 = lVar68 + 1;
      cVar73 = pcVar5[lVar68];
    } while (cVar73 != '\0');
    cVar73 = pcVar80[lVar68];
  }
  if (9 < (byte)(cVar73 - 0x30U)) {
LAB_006e6984:
    if (9 < (byte)(cVar76 - 0x30U)) {
      cVar52 = (char)*(undefined4 *)(_nl_C_locobj._112_8_ + lVar57 * 4);
      if (cVar52 == 'i') {
        iVar54 = strncasecmp_l(pcVar80,"inf",3,(__locale_t)_nl_C_locobj);
        if (iVar54 == 0) {
          if (param_2 != (long *)0x0) {
            iVar54 = strncasecmp_l(pcVar80 + 3,"inity",5,(__locale_t)_nl_C_locobj);
            pcVar75 = pcVar80 + 3;
            if (iVar54 == 0) {
              pcVar75 = pcVar80 + 8;
            }
            *param_2 = (long)pcVar75;
          }
          goto LAB_006e69bd;
        }
      }
      else if ((cVar52 == 'n') &&
              (iVar54 = strncasecmp_l(pcVar80,"nan",3,(__locale_t)_nl_C_locobj), iVar54 == 0)) {
        pcVar75 = pcVar80 + 3;
        if (pcVar80[3] == '(') {
          __strtold_nan(pcVar80 + 4,&local_3608,0x29);
          if (*local_3608 == ')') {
            pcVar75 = local_3608 + 1;
          }
        }
        if (param_2 != (long *)0x0) {
          *param_2 = (long)pcVar75;
        }
        goto LAB_006e69bd;
      }
LAB_006e69ad:
      if (param_2 != (long *)0x0) {
        *param_2 = (long)param_1;
      }
      goto LAB_006e69bd;
    }
  }
  lVar68 = *(long *)(param_4 + 0x70);
  local_3678 = pcVar80;
  if (cVar76 == '0') {
    if (*(int *)(lVar68 + (long)pcVar80[1] * 4) == 0x78) {
      pcVar81 = pcVar80 + 2;
      lVar57 = (long)pcVar80[2];
      local_3678 = pcVar81;
      if (pcVar85 != (char *)0x0) {
        iVar54 = 0x10;
        pcVar75 = (char *)0x0;
        goto LAB_006e6a19;
      }
      pcVar75 = (char *)0x0;
      if (pcVar80[2] == '0') {
        iVar54 = 0x10;
        goto LAB_006e7420;
      }
      iVar54 = 0x10;
    }
    else {
      iVar54 = 10;
      pcVar81 = pcVar80;
      if (pcVar85 != (char *)0x0) {
LAB_006e6a19:
        cVar73 = (char)lVar57;
        pcVar81 = local_3678;
        do {
          if (cVar73 != '0') {
            if (*pcVar85 == '\0') {
              lVar72 = -1;
            }
            else {
              lVar62 = 0;
              cVar73 = *pcVar85;
              do {
                lVar72 = lVar62;
                if (pcVar81[lVar72] != cVar73) goto LAB_006e6a62;
                cVar73 = pcVar85[lVar72 + 1];
                lVar62 = lVar72 + 1;
              } while (cVar73 != '\0');
            }
            pcVar81 = pcVar81 + lVar72;
          }
          cVar73 = pcVar81[1];
          lVar57 = (long)cVar73;
          pcVar81 = pcVar81 + 1;
        } while( true );
      }
LAB_006e7420:
      do {
        pcVar80 = pcVar81 + 1;
        lVar57 = (long)*pcVar80;
        pcVar81 = pcVar81 + 1;
      } while (*pcVar80 == '0');
    }
LAB_006e6a62:
    cVar73 = (char)*(undefined4 *)(lVar68 + (long)(char)lVar57 * 4);
    pcVar80 = pcVar81;
    if ((byte)((char)lVar57 - 0x30U) < 10) goto LAB_006e6a98;
    bVar91 = iVar54 != 0x10;
    if ((5 < (byte)(cVar73 + 0x9fU)) || (bVar91)) goto LAB_006e6bc0;
  }
  else {
    if (pcVar85 != (char *)0x0) {
      iVar54 = 10;
      goto LAB_006e6a19;
    }
    iVar54 = 10;
    cVar73 = (char)*(undefined4 *)(lVar68 + (long)cVar76 * 4);
    bVar91 = true;
    if ((byte)(cVar76 - 0x30U) < 10) goto LAB_006e6a98;
LAB_006e6bc0:
    if (cVar52 != '\0') {
      lVar72 = 0;
      cVar76 = cVar52;
      do {
        if (pcVar80[lVar72] != cVar76) {
          if (bVar91) {
            if (cVar73 == 'e') goto LAB_006e6a98;
            goto LAB_006e7674;
          }
          if ((pcVar80 == local_3678) || (cVar73 != 'p')) goto LAB_006e7674;
          goto LAB_006e6a98;
        }
        lVar72 = lVar72 + 1;
        cVar76 = pcVar5[lVar72];
      } while (cVar76 != '\0');
    }
    if ((iVar54 != 0x10) || (pcVar80 != local_3678)) goto LAB_006e6a98;
    if ((9 < (byte)(pcVar80[sVar56] - 0x30U)) &&
       (5 < (byte)((char)*(undefined4 *)(lVar68 + (long)pcVar80[sVar56] * 4) + 0x9fU))) {
LAB_006e7674:
      pcVar75 = (char *)__correctly_grouped_prefixmb(local_3678,pcVar80,pcVar85);
      if (param_2 != (long *)0x0) {
        if ((pcVar75 == local_3678) && (pcVar75 = pcVar80 + -1, iVar54 != 0x10)) {
          pcVar75 = param_1;
        }
        *param_2 = (long)pcVar75;
      }
      goto LAB_006e69bd;
    }
  }
  iVar54 = 0x10;
LAB_006e6a98:
  pcVar79 = (char *)0x0;
  pcVar81 = pcVar80;
  do {
    if (((byte)((char)lVar57 - 0x30U) < 10) ||
       ((iVar54 == 0x10 &&
        ((byte)((char)*(undefined4 *)(lVar68 + (long)(char)lVar57 * 4) + 0x9fU) < 6)))) {
      pcVar79 = pcVar79 + 1;
    }
    else {
      if (pcVar85 == (char *)0x0) break;
      cVar73 = *pcVar85;
      if (cVar73 == '\0') {
        lVar72 = -1;
      }
      else {
        lVar62 = 0;
        do {
          lVar72 = lVar62;
          if (pcVar81[lVar72] != cVar73) goto LAB_006e6abd;
          cVar73 = pcVar85[lVar72 + 1];
          lVar62 = lVar72 + 1;
        } while (cVar73 != '\0');
      }
      pcVar81 = pcVar81 + lVar72;
    }
    lVar57 = (long)pcVar81[1];
    pcVar81 = pcVar81 + 1;
  } while( true );
LAB_006e6abd:
  if ((pcVar75 == (char *)0x0) || (pcVar81 <= local_3678)) {
LAB_006e6acd:
    pcVar65 = (char *)-(ulong)(pcVar79 == (char *)0x0);
    pcVar84 = pcVar79;
    if (cVar52 != '\0') {
      lVar68 = 0;
      do {
        if (pcVar81[lVar68] != cVar52) goto LAB_006e6afa;
        lVar68 = lVar68 + 1;
        cVar52 = pcVar5[lVar68];
      } while (cVar52 != '\0');
    }
    pcVar81 = pcVar81 + sVar56;
    lVar57 = (long)*pcVar81;
    if (iVar54 == 0x10) {
      pcVar75 = (char *)0x0;
      lVar68 = (long)pcVar79 - (long)pcVar81;
      while( true ) {
        cVar52 = (char)lVar57;
        pcVar84 = pcVar81 + lVar68;
        if ((9 < (byte)(cVar52 - 0x30U)) &&
           (5 < (byte)((char)*(undefined4 *)(*(long *)(param_4 + 0x70) + (long)cVar52 * 4) + 0x9fU))
           ) break;
        if ((cVar52 != '0') && (pcVar65 == (char *)0xffffffffffffffff)) {
          pcVar65 = pcVar75;
        }
        lVar57 = (long)pcVar81[1];
        pcVar81 = pcVar81 + 1;
        pcVar75 = pcVar75 + 1;
      }
LAB_006e6afa:
      if ((long)pcVar84 < 0) {
LAB_006e8b9e:
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no <= (uintmax_t) INTMAX_MAX","../stdlib/strtod_l.c",0x36a,
                      "____strtold_l_internal");
      }
      cVar52 = (char)*(undefined4 *)(*(long *)(param_4 + 0x70) + lVar57 * 4);
      pcVar75 = pcVar81;
      if (iVar54 != 0x10) goto LAB_006e6d4d;
      if (cVar52 != 'p') goto LAB_006e6d47;
LAB_006e6b1e:
      cVar52 = pcVar81[1];
      uVar60 = local_3610;
      pcVar75 = pcVar81;
      if (cVar52 == '-') {
        cVar52 = pcVar81[2];
        if ((byte)(cVar52 - 0x30U) < 10) {
          pcVar75 = pcVar81 + 2;
          if (iVar54 == 0x10) {
            if ((char *)0x1fffffffffffeff0 < pcVar79) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_EXP - MANT_DIG) / 4",
                            "../stdlib/strtod_l.c",0x388,"____strtold_l_internal");
            }
            local_3678 = (char *)((long)pcVar79 * 4 + 0x403d);
            bVar91 = true;
          }
          else {
            if ((char *)0x7fffffffffffec7c < pcVar79) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_10_EXP - MANT_DIG)",
                            "../stdlib/strtod_l.c",0x3a8,"____strtold_l_internal");
            }
            local_3678 = pcVar79 + 0x1383;
            bVar91 = true;
          }
          goto LAB_006e7707;
        }
      }
      else if (cVar52 == '+') {
        cVar52 = pcVar81[2];
        if ((byte)(cVar52 - 0x30U) < 10) {
          pcVar75 = pcVar81 + 2;
          if (iVar54 == 0x10) goto LAB_006e7453;
LAB_006e6b52:
          if (pcVar79 == (char *)0x0) {
            if (pcVar65 == (char *)0xffffffffffffffff) {
              local_3678 = (char *)0x3;
              uVar70 = 0x1ed;
              bVar91 = false;
              goto LAB_006e776d;
            }
            if ((char *)0x7fffffffffffecba < pcVar65) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_10_EXP - 1)",
                            "../stdlib/strtod_l.c",0x3bc,"____strtold_l_internal");
            }
            local_3678 = pcVar65 + 0x1345;
            bVar91 = false;
          }
          else {
            if ((pcVar65 != (char *)0x0) || ((long)pcVar79 < 0)) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX",
                            "../stdlib/strtod_l.c",0x3b0,"____strtold_l_internal");
            }
            bVar91 = false;
            local_3678 = (char *)(0x1345 - (long)pcVar79);
          }
          goto LAB_006e7707;
        }
      }
      else if ((byte)(cVar52 - 0x30U) < 10) {
        pcVar75 = pcVar81 + 1;
        if (iVar54 != 0x10) goto LAB_006e6b52;
LAB_006e7453:
        if (pcVar79 == (char *)0x0) {
          if (pcVar65 != (char *)0xffffffffffffffff) {
            if ((char *)0x1fffffffffffefff < pcVar65) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_EXP - 3) / 4",
                            "../stdlib/strtod_l.c",0x39c,"____strtold_l_internal");
            }
            local_3678 = (char *)((long)pcVar65 * 4 + 0x4003);
            bVar91 = false;
            goto LAB_006e7707;
          }
          local_3678 = (char *)0x7;
          uVar70 = 0x666;
          bVar91 = false;
        }
        else {
          if ((pcVar65 != (char *)0x0) || ((ulong)pcVar79 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX / 4",
                          "../stdlib/strtod_l.c",0x390,"____strtold_l_internal");
          }
          bVar91 = false;
          local_3678 = (char *)((0x1000 - (long)pcVar79) * 4 + 3);
LAB_006e7707:
          if ((long)local_3678 < 0) {
            local_3678 = (char *)0x0;
          }
          uVar70 = (ulong)local_3678 / 10;
          local_3678 = (char *)((ulong)local_3678 % 10);
        }
LAB_006e776d:
        do {
          if (((long)uVar70 < (long)uVar60) ||
             ((uVar60 == uVar70 && ((long)local_3678 < (long)(char)(cVar52 + -0x30))))) {
            if (pcVar65 != (char *)0xffffffffffffffff) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
            }
            do {
              pcVar85 = pcVar75 + 1;
              pcVar75 = pcVar75 + 1;
            } while ((byte)(*pcVar85 - 0x30U) < 10);
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pcVar75;
            }
            goto LAB_006e69bd;
          }
          pcVar75 = pcVar75 + 1;
          uVar60 = (long)(char)(cVar52 + -0x30) + uVar60 * 10;
          cVar52 = *pcVar75;
        } while ((byte)(cVar52 - 0x30U) < 10);
        local_3610 = uVar60;
        if (bVar91) {
          local_3610 = -uVar60;
        }
      }
    }
    else {
      pcVar75 = pcVar81;
      if ((byte)(*pcVar81 - 0x30U) < 10) {
        do {
          pcVar75 = pcVar75 + 1;
          if ((pcVar65 == (char *)0xffffffffffffffff) && ((char)lVar57 != '0')) {
            pcVar65 = pcVar75 + (-1 - (long)pcVar81);
          }
          lVar57 = (long)*pcVar75;
          pcVar84 = pcVar75 + ((long)pcVar79 - (long)pcVar81);
        } while ((byte)(*pcVar75 - 0x30U) < 10);
      }
      if ((long)pcVar84 < 0) goto LAB_006e8b9e;
      cVar52 = *(char *)(*(long *)(param_4 + 0x70) + lVar57 * 4);
LAB_006e6d47:
      pcVar81 = pcVar75;
      if (iVar54 != 0x10) {
LAB_006e6d4d:
        pcVar81 = pcVar75;
        if (cVar52 == 'e') goto LAB_006e6b1e;
      }
    }
    pcVar58 = pcVar81;
    if (pcVar79 < pcVar84) {
      pcVar59 = pcVar81;
      if (pcVar81[-1] != '0') goto LAB_006e6db8;
      do {
        pcVar58 = pcVar59 + -1;
        pcVar2 = pcVar58 + (long)pcVar84;
        pcVar1 = pcVar59 + -2;
        pcVar59 = pcVar58;
      } while (*pcVar1 == '0');
      pcVar84 = pcVar2 + -(long)pcVar81;
      if (pcVar2 + -(long)pcVar81 < pcVar79) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no >= int_no","../stdlib/strtod_l.c",0x3fc,"____strtold_l_internal");
      }
    }
    uVar60 = local_3610;
    if ((pcVar84 == pcVar79) && (pcVar84 != (char *)0x0)) {
      if ((long)local_3610 < 0) {
        pcVar58 = pcVar58 + -1;
        bVar66 = 0;
        if (iVar54 != 0x10) {
          do {
            if ((int)*pcVar58 - 0x30U < 10) {
              if (*pcVar58 != '0') goto LAB_006e7927;
              uVar60 = uVar60 + (ulong)(iVar54 == 0x10) * 3 + 1;
              pcVar79 = pcVar79 + -1;
              pcVar84 = pcVar84 + -1;
              bVar66 = pcVar84 != (char *)0x0 & (byte)(uVar60 >> 0x3f);
              if (bVar66 == 0) goto LAB_006e73e0;
            }
            pcVar58 = pcVar58 + -1;
          } while( true );
        }
        do {
          if ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + (long)*pcVar58 * 2) & 0x10) != 0) {
            if (*pcVar58 != '0') goto LAB_006e7927;
            uVar60 = uVar60 + 4;
            pcVar79 = pcVar79 + -1;
            pcVar84 = pcVar84 + -1;
            bVar66 = (byte)(uVar60 >> 0x3f) & pcVar84 != (char *)0x0;
            if (bVar66 == 0) goto LAB_006e73e0;
          }
          pcVar58 = pcVar58 + -1;
        } while( true );
      }
      goto LAB_006e6db8;
    }
  }
  else {
    pcVar75 = (char *)__correctly_grouped_prefixmb(local_3678,pcVar81,pcVar85);
    if (pcVar81 == pcVar75) {
      cVar52 = *pcVar5;
      goto LAB_006e6acd;
    }
    if (pcVar75 == local_3678) goto LAB_006e69ad;
    if ((pcVar75 < pcVar80) || (pcVar75 <= pcVar80)) {
      if (param_2 != (long *)0x0) {
        *param_2 = (long)pcVar75;
      }
      goto LAB_006e69bd;
    }
    uVar60 = (long)pcVar75 - (long)pcVar80;
    if (uVar60 - 1 < 0xf) {
      pcVar79 = (char *)0x0;
      pcVar81 = pcVar80;
LAB_006e834d:
      pcVar79 = pcVar79 + ((byte)(*pcVar81 - 0x30U) < 10);
      if (((((pcVar81 + 1 < pcVar75) &&
            (pcVar79 = pcVar79 + ((byte)(pcVar81[1] - 0x30U) < 10), pcVar81 + 2 < pcVar75)) &&
           (pcVar79 = pcVar79 + ((byte)(pcVar81[2] - 0x30U) < 10), pcVar81 + 3 < pcVar75)) &&
          ((pcVar79 = pcVar79 + ((byte)(pcVar81[3] - 0x30U) < 10), pcVar81 + 4 < pcVar75 &&
           (pcVar79 = pcVar79 + ((byte)(pcVar81[4] - 0x30U) < 10), pcVar81 + 5 < pcVar75)))) &&
         ((((pcVar79 = pcVar79 + ((byte)(pcVar81[5] - 0x30U) < 10), pcVar81 + 6 < pcVar75 &&
            ((pcVar79 = pcVar79 + ((byte)(pcVar81[6] - 0x30U) < 10), pcVar81 + 7 < pcVar75 &&
             (pcVar79 = pcVar79 + ((byte)(pcVar81[7] - 0x30U) < 10), pcVar81 + 8 < pcVar75)))) &&
           (pcVar79 = pcVar79 + ((byte)(pcVar81[8] - 0x30U) < 10), pcVar81 + 9 < pcVar75)) &&
          ((((pcVar79 = pcVar79 + ((byte)(pcVar81[9] - 0x30U) < 10), pcVar81 + 10 < pcVar75 &&
             (pcVar79 = pcVar79 + ((byte)(pcVar81[10] - 0x30U) < 10), pcVar81 + 0xb < pcVar75)) &&
            (pcVar79 = pcVar79 + ((byte)(pcVar81[0xb] - 0x30U) < 10), pcVar81 + 0xc < pcVar75)) &&
           ((pcVar79 = pcVar79 + ((byte)(pcVar81[0xc] - 0x30U) < 10), pcVar81 + 0xd < pcVar75 &&
            (pcVar79 = pcVar79 + ((byte)(pcVar81[0xd] - 0x30U) < 10), pcVar81 + 0xe < pcVar75)))))))
         ) {
        pcVar79 = pcVar79 + ((byte)(pcVar81[0xe] - 0x30U) < 10);
      }
    }
    else {
      lVar57 = 0;
      lVar68 = 0;
      pcVar81 = pcVar80;
      do {
        cVar52 = *pcVar81;
        pcVar79 = pcVar81 + 1;
        pcVar84 = pcVar81 + 2;
        pcVar65 = pcVar81 + 3;
        pcVar58 = pcVar81 + 4;
        pcVar59 = pcVar81 + 5;
        pcVar1 = pcVar81 + 6;
        pcVar2 = pcVar81 + 7;
        pcVar34 = pcVar81 + 8;
        pcVar35 = pcVar81 + 9;
        pcVar36 = pcVar81 + 10;
        pcVar37 = pcVar81 + 0xb;
        pcVar38 = pcVar81 + 0xc;
        pcVar39 = pcVar81 + 0xd;
        pcVar40 = pcVar81 + 0xe;
        pcVar41 = pcVar81 + 0xf;
        pcVar81 = pcVar81 + 0x10;
        auVar92[0] = cVar52 + DAT_0081b180;
        auVar92[1] = *pcVar79 + UNK_0081b181;
        auVar92[2] = *pcVar84 + UNK_0081b182;
        auVar92[3] = *pcVar65 + UNK_0081b183;
        auVar92[4] = *pcVar58 + UNK_0081b184;
        auVar92[5] = *pcVar59 + UNK_0081b185;
        auVar92[6] = *pcVar1 + UNK_0081b186;
        auVar92[7] = *pcVar2 + UNK_0081b187;
        auVar92[8] = *pcVar34 + UNK_0081b188;
        auVar92[9] = *pcVar35 + UNK_0081b189;
        auVar92[10] = *pcVar36 + UNK_0081b18a;
        auVar92[0xb] = *pcVar37 + UNK_0081b18b;
        auVar92[0xc] = *pcVar38 + UNK_0081b18c;
        auVar92[0xd] = *pcVar39 + UNK_0081b18d;
        auVar92[0xe] = *pcVar40 + UNK_0081b18e;
        auVar92[0xf] = *pcVar41 + UNK_0081b18f;
        auVar92 = psubusb(auVar92,_DAT_0081b190);
        auVar93[0] = -(auVar92[0] == '\0');
        auVar93[1] = -(auVar92[1] == '\0');
        auVar93[2] = -(auVar92[2] == '\0');
        auVar93[3] = -(auVar92[3] == '\0');
        auVar93[4] = -(auVar92[4] == '\0');
        auVar93[5] = -(auVar92[5] == '\0');
        auVar93[6] = -(auVar92[6] == '\0');
        auVar93[7] = -(auVar92[7] == '\0');
        auVar93[8] = -(auVar92[8] == '\0');
        auVar93[9] = -(auVar92[9] == '\0');
        auVar93[10] = -(auVar92[10] == '\0');
        auVar93[0xb] = -(auVar92[0xb] == '\0');
        auVar93[0xc] = -(auVar92[0xc] == '\0');
        auVar93[0xd] = -(auVar92[0xd] == '\0');
        auVar93[0xe] = -(auVar92[0xe] == '\0');
        auVar93[0xf] = -(auVar92[0xf] == '\0');
        auVar93 = auVar93 & _DAT_0081b1a0;
        uVar55 = CONCAT13(0,CONCAT12(auVar93[9],(ushort)auVar93[8]));
        auVar18[0xd] = 0;
        auVar18._0_13_ = auVar93._0_13_;
        auVar18[0xe] = auVar93[7];
        auVar20[0xc] = auVar93[6];
        auVar20._0_12_ = auVar93._0_12_;
        auVar20._13_2_ = auVar18._13_2_;
        auVar21[0xb] = 0;
        auVar21._0_11_ = auVar93._0_11_;
        auVar21._12_3_ = auVar20._12_3_;
        auVar22[10] = auVar93[5];
        auVar22._0_10_ = auVar93._0_10_;
        auVar22._11_4_ = auVar21._11_4_;
        auVar28[9] = 0;
        auVar28._0_9_ = auVar93._0_9_;
        auVar28._10_5_ = auVar22._10_5_;
        auVar30[8] = auVar93[4];
        auVar30._0_8_ = auVar93._0_8_;
        auVar30._9_6_ = auVar28._9_6_;
        uVar31 = auVar30._8_7_;
        auVar43._7_8_ = 0;
        auVar43._0_7_ = uVar31;
        Var44 = CONCAT81(SUB158(auVar43 << 0x40,7),auVar93[3]);
        auVar48._9_6_ = 0;
        auVar48._0_9_ = Var44;
        auVar45._1_10_ = SUB1510(auVar48 << 0x30,5);
        auVar45[0] = auVar93[2];
        auVar49._11_4_ = 0;
        auVar49._0_11_ = auVar45;
        auVar32[2] = auVar93[1];
        auVar32._0_2_ = auVar93._0_2_;
        auVar32._3_12_ = SUB1512(auVar49 << 0x20,3);
        auVar33._2_13_ = auVar32._2_13_;
        auVar33._0_2_ = auVar93._0_2_ & 0xff;
        auVar23[0xc] = auVar93[0xb];
        auVar23._0_12_ = ZEXT112(auVar93[0xc]) << 0x40;
        auVar24._10_3_ = auVar23._10_3_;
        auVar24._0_10_ = (unkuint10)auVar93[10] << 0x40;
        uVar25 = auVar24._8_5_;
        auVar46._5_8_ = 0;
        auVar46._0_5_ = uVar25;
        auVar26[4] = auVar93[9];
        auVar26._0_4_ = uVar55;
        auVar26[5] = 0;
        auVar26._6_7_ = SUB137(auVar46 << 0x40,6);
        auVar29._4_9_ = auVar26._4_9_;
        auVar29._0_4_ = uVar55 & 0xffff;
        auVar19._10_2_ = 0;
        auVar19._0_10_ = auVar33._0_10_;
        auVar19._12_2_ = (short)Var44;
        uVar51 = CONCAT42(auVar19._10_4_,auVar45._0_2_);
        auVar47._6_8_ = 0;
        auVar47._0_6_ = uVar51;
        auVar27._4_2_ = auVar32._2_2_;
        auVar27._0_4_ = auVar33._0_4_;
        auVar27._6_8_ = SUB148(auVar47 << 0x40,6);
        lVar57 = lVar57 + (ulong)auVar93[0xe] +
                 (ulong)(auVar33._0_4_ & 0xffff) + ((ulong)uVar51 & 0xffffffff) +
                 ((ulong)CONCAT24(auVar22._10_2_,(uint)auVar30._8_2_) & 0xffffffff) +
                 ((ulong)(uVar31 >> 0x20) & 0xffff) +
                 (auVar29._0_8_ & 0xffffffff) + ((ulong)uVar25 & 0xffffffff) +
                 ((ulong)CONCAT14(auVar93[0xd],(uint)auVar93[0xc]) & 0xffffffff);
        lVar68 = lVar68 + (ulong)auVar93[0xf] +
                 (ulong)auVar27._4_4_ + (ulong)(auVar19._10_4_ >> 0x10) +
                 (ulong)auVar22._10_2_ + (ulong)(uVar31 >> 0x30) +
                 (ulong)auVar26._4_4_ + (ulong)(uVar25 >> 0x20) + (ulong)auVar93[0xd];
      } while (pcVar80 + (uVar60 & 0xfffffffffffffff0) != pcVar81);
      pcVar79 = (char *)(lVar57 + lVar68);
      pcVar81 = pcVar80 + (uVar60 & 0xfffffffffffffff0);
      if ((uVar60 & 0xfffffffffffffff0) != uVar60) goto LAB_006e834d;
    }
    pcVar65 = (char *)0x0;
    pcVar84 = pcVar79;
    uVar60 = local_3610;
  }
LAB_006e73e0:
  local_3610 = uVar60;
  if (param_2 != (long *)0x0) {
LAB_006e6dbf:
    *param_2 = (long)pcVar75;
  }
  if (pcVar84 == (char *)0x0) goto LAB_006e69bd;
  goto LAB_006e6dcf;
LAB_006e6e13:
  pcVar80 = pcVar80 + (long)(pcVar65 + sVar56);
  if (iVar54 == 0x10) {
    if ((ulong)pcVar65 >> 0x3d != 0) goto LAB_006e89d5;
    if ((char *)(local_3610 + 0x8000000000000000 >> 2) < pcVar65) goto LAB_006e89b6;
    pcVar75 = (char *)((long)pcVar65 * 4);
  }
  else {
    if ((long)pcVar65 < 0) {
LAB_006e89d5:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? (uintmax_t) INTMAX_MAX / 4 : (uintmax_t) INTMAX_MAX)"
                    ,"../stdlib/strtod_l.c",0x42d,"____strtold_l_internal");
    }
    pcVar75 = pcVar65;
    if ((char *)(local_3610 + 0x8000000000000000) < pcVar65) {
LAB_006e89b6:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN) / 4 : ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN))"
                    ,"../stdlib/strtod_l.c",0x430,"____strtold_l_internal");
    }
  }
  local_3610 = local_3610 - (long)pcVar75;
  pcVar84 = pcVar84 + -(long)pcVar65;
  goto LAB_006e6e5a;
  while (pcVar80 = pcVar80 + 1, pcVar80 != pcVar84) {
LAB_006e760d:
    if (*pcVar80 != '0') {
      uVar78 = 1;
      goto LAB_006e7619;
    }
  }
LAB_006e8182:
  uVar78 = 0;
LAB_006e7619:
  round_and_return(&local_3600,local_3610,uVar50,uVar70 << (cVar52 + 0x3dU & 0x3f),0x3f,uVar78);
  goto LAB_006e69bd;
code_r0x006e7e4b:
  uVar67 = 0xffffffffffffffff;
LAB_006e7e56:
  if (bVar89) {
    local_3610 = uVar77;
  }
  if (bVar42) {
    local_3600 = local_3620;
  }
  iVar53 = 0x40 - iVar54;
  if (iVar53 != 0) {
    __mpn_lshift(&local_3600,&local_3600,1,iVar53);
    local_3688._0_1_ = (byte)iVar54;
    local_3600 = local_3600 | uVar67 >> ((byte)local_3688 & 0x3f);
  }
  uVar60 = uVar60 | uVar70;
  goto LAB_006e7e96;
LAB_006e7927:
  if (bVar66 != 0) {
    local_3610 = uVar60;
  }
LAB_006e6db8:
  if (param_2 != (long *)0x0) goto LAB_006e6dbf;
LAB_006e6dcf:
  if (pcVar65 != (char *)0x0) {
    do {
      if (*pcVar80 == *pcVar5) {
        if (pcVar5[1] == '\0') goto LAB_006e6e13;
        lVar57 = 1;
        cVar52 = pcVar5[1];
        while (pcVar80[lVar57] == cVar52) {
          lVar57 = lVar57 + 1;
          cVar52 = pcVar5[lVar57];
          if (cVar52 == '\0') goto LAB_006e6e13;
        }
      }
      pcVar80 = pcVar80 + 1;
    } while( true );
  }
LAB_006e6e5a:
  if (iVar54 == 0x10) {
    lVar68 = (long)*pcVar80;
    lVar57 = *(long *)(param_4 + 0x68);
    bVar66 = *(byte *)(lVar57 + 1 + lVar68 * 2);
    while ((bVar66 & 0x10) == 0) {
      lVar68 = (long)pcVar80[1];
      pcVar80 = pcVar80 + 1;
      bVar66 = *(byte *)(lVar57 + 1 + lVar68 * 2);
    }
    while( true ) {
      pcVar80 = pcVar80 + 1;
      if ((char)lVar68 != '0') break;
      lVar68 = (long)*pcVar80;
    }
    uVar55 = (int)(char)lVar68 - 0x30;
    if (9 < uVar55) {
      uVar55 = *(int *)(*(long *)(param_4 + 0x70) + lVar68 * 4) - 0x57;
    }
    iVar54 = *(int *)(nbits_1 + (long)(int)uVar55 * 4);
    if (iVar54 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("bits != 0","../stdlib/strtod_l.c",1099,"____strtold_l_internal");
    }
    iVar53 = 0x3f - iVar54;
    local_3600 = (long)(int)uVar55 << (0x40U - (char)iVar54 & 0x3f);
    if ((long)local_3610 < 0) {
      lVar68 = -0x8000000000000000 - (long)iVar54;
    }
    else {
      lVar68 = (0x7fffffffffffffff - local_3610) - (long)iVar54;
      lVar72 = lVar68 + 1;
      lVar68 = lVar68 + 4;
      if (-1 < lVar72) {
        lVar68 = lVar72;
      }
    }
    if ((char *)(lVar68 >> 2) < pcVar79) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("int_no <= (uintmax_t) (exponent < 0 ? (INTMAX_MAX - bits + 1) / 4 : (INTMAX_MAX - exponent - bits + 1) / 4)"
                    ,"../stdlib/strtod_l.c",0x45e,"____strtold_l_internal");
    }
    local_3610 = (long)(iVar54 + -1) + -4 + (long)pcVar79 * 4 + local_3610;
    pcVar84 = pcVar84 + -1;
    uVar60 = local_3600;
    if (pcVar84 != (char *)0x0) {
      bVar91 = false;
      do {
        lVar68 = (long)*pcVar80;
        if ((*(byte *)(lVar57 + 1 + lVar68 * 2) & 0x10) == 0) {
          pcVar80 = pcVar80 + sVar56;
          lVar68 = (long)*pcVar80;
        }
        pcVar80 = pcVar80 + 1;
        uVar55 = (int)(char)lVar68 - 0x30;
        if (9 < uVar55) {
          uVar55 = *(int *)(*(long *)(param_4 + 0x70) + lVar68 * 4) - 0x57;
        }
        uVar70 = (ulong)(int)uVar55;
        pcVar84 = pcVar84 + -1;
        cVar52 = (char)iVar53;
        if (iVar53 < 3) {
          if (!bVar91) {
            uVar60 = local_3600;
          }
          local_3600 = uVar70 >> (3U - cVar52 & 0x3f) | uVar60;
          if (pcVar84 == (char *)0x0) goto LAB_006e8182;
          pcVar84 = pcVar84 + (long)pcVar80;
          goto LAB_006e760d;
        }
        bVar91 = true;
        iVar53 = iVar53 + -4;
        uVar60 = uVar60 | uVar70 << (cVar52 - 3U & 0x3f);
      } while (pcVar84 != (char *)0x0);
    }
    local_3600 = uVar60;
    round_and_return(&local_3600,local_3610,uVar50,0,0,0);
    goto LAB_006e69bd;
  }
  uVar60 = -(long)pcVar79;
  if (-(long)pcVar79 < (long)local_3610) {
    uVar60 = local_3610;
  }
  uVar70 = (long)pcVar84 - (long)pcVar79;
  if ((long)local_3610 < (long)pcVar84 - (long)pcVar79) {
    uVar70 = local_3610;
  }
  if ((long)local_3610 < 0) {
    uVar70 = uVar60;
  }
  pcVar79 = pcVar79 + uVar70;
  local_3610 = local_3610 - uVar70;
  if (0x1345 - (long)pcVar79 < (long)local_3610) {
LAB_006e818a:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    goto LAB_006e69bd;
  }
  if ((long)local_3610 < -0x1357) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    goto LAB_006e69bd;
  }
  if (pcVar79 != (char *)0x0) {
    pcVar80 = (char *)str_to_mpn_constprop_0
                                (pcVar80,(ulong)pcVar79 & 0xffffffff,local_35f8,&local_3608,
                                 &local_3610,sVar56,pcVar85);
    uVar60 = local_3610;
    pcVar75 = local_3608;
    if (0 < (long)local_3610) {
      plVar74 = &_fpioconst_pow10;
      iVar54 = 1;
      puVar71 = local_1b18;
      local_3688 = local_35f8;
      do {
        uVar70 = (ulong)iVar54;
        uVar60 = uVar70 & local_3610;
        puVar87 = puVar71;
        while (puVar71 = puVar87, uVar60 != 0) {
          local_3610 = uVar70 ^ local_3610;
          lVar57 = plVar74[1] + -1;
          lVar68 = *plVar74 * 8 + 0x81b528;
          if ((long)pcVar75 < lVar57) {
            lVar68 = __mpn_mul(puVar71,lVar68,lVar57,local_3688,pcVar75);
          }
          else {
            lVar68 = __mpn_mul(puVar71,local_3688,pcVar75,lVar68,lVar57);
          }
          pcVar75 = local_3608 + lVar57;
          local_3608 = pcVar75;
          if (lVar68 == 0) {
            pcVar75 = pcVar75 + -1;
            local_3608 = pcVar75;
          }
          iVar54 = iVar54 * 2;
          plVar74 = plVar74 + 3;
          local_3608 = pcVar75;
          if (local_3610 == 0) {
            uVar60 = 0;
            if (puVar71 == local_1b18) {
              memcpy(local_35f8,puVar71,(long)pcVar75 * 8);
            }
            goto LAB_006e7cca;
          }
          uVar70 = (ulong)iVar54;
          puVar87 = local_3688;
          local_3688 = puVar71;
          uVar60 = uVar70 & local_3610;
        }
        iVar54 = iVar54 * 2;
        plVar74 = plVar74 + 3;
      } while( true );
    }
LAB_006e7cca:
    puVar71 = (ulong *)((long)local_35f8 + (long)(pcVar75 + -1) * 8);
    lVar57 = 0x3f;
    if (*puVar71 != 0) {
      for (; *puVar71 >> lVar57 == 0; lVar57 = lVar57 + -1) {
      }
    }
    iVar54 = (int)pcVar75 * 0x40 - ((uint)lVar57 ^ 0x3f);
    if (0x4000 < iVar54) goto LAB_006e818a;
    if (0x40 < iVar54) {
      iVar53 = (int)(iVar54 - 0x40U) >> 6;
      lVar57 = (long)iVar53;
      uVar55 = iVar54 - 0x40U & 0x3f;
      if (uVar55 == 0) {
        local_3600 = local_35f8[lVar57];
        lVar57 = lVar57 + -1;
        lVar68 = 0x3f;
      }
      else {
        lVar68 = (long)(int)(uVar55 - 1);
        local_3600 = local_35f8[lVar57] >> (sbyte)uVar55;
        if (lVar57 < (long)(pcVar75 + -1)) {
          local_3600 = local_35f8[iVar53 + 1] << (0x40U - (sbyte)uVar55 & 0x3f) | local_3600;
        }
        else {
        }
      }
      if (local_35f8[0] == 0) {
        lVar62 = 1;
        do {
          lVar72 = (long)(int)lVar62;
          lVar62 = lVar62 + 1;
        } while ((&local_3600)[lVar62] == 0);
      }
      else {
        lVar72 = 0;
      }
      round_and_return(&local_3600,(long)(iVar54 + -1),uVar50,local_35f8[lVar57],lVar68,
                       pcVar79 < pcVar84 || lVar72 < lVar57);
      goto LAB_006e69bd;
    }
    if (pcVar84 != pcVar79) {
      memcpy(&local_3600,local_35f8,(long)pcVar75 * 8);
      if ((pcVar84 <= pcVar79) || (0x1357 < uVar60 + 0x1357)) goto LAB_006e8b22;
      if (iVar54 < 1) goto LAB_006e88d6;
      if (uVar60 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("int_no > 0 && exponent == 0","../stdlib/strtod_l.c",0x559,
                      "____strtold_l_internal");
      }
      local_3660 = (ulong)iVar54;
      iVar63 = 0;
      iVar53 = 0x41 - iVar54;
      goto LAB_006e6f4d;
    }
    puVar71 = &local_3600 + (1 - (long)pcVar75);
    iVar53 = (iVar54 + -1) % 0x40;
    if (iVar53 == 0x3f) {
      memcpy(puVar71,local_35f8,(long)pcVar75 * 8);
      if (0 < 1 - (long)pcVar75) goto LAB_006e871a;
    }
    else {
      __mpn_lshift(puVar71,local_35f8,pcVar75,0x3f - iVar53);
      if ((long)local_3608 < 1) {
LAB_006e871a:
        local_3600 = 0;
      }
    }
    round_and_return(&local_3600,(long)(iVar54 + -1),uVar50,0,0,0);
    goto LAB_006e69bd;
  }
  if ((pcVar84 == (char *)0x0) || (0x1357 < local_3610 + 0x1357)) {
LAB_006e8b22:
                    /* WARNING: Subroutine does not return */
    __assert_fail("dig_no > int_no && exponent <= 0 && exponent >= MIN_10_EXP - (DIG + 2)",
                  "../stdlib/strtod_l.c",0x54d,"____strtold_l_internal");
  }
  if (*pcVar80 == '0') {
LAB_006e88d6:
                    /* WARNING: Subroutine does not return */
    __assert_fail("int_no == 0 && *startp != L_(\'0\')","../stdlib/strtod_l.c",0x55f,
                  "____strtold_l_internal");
  }
  iVar63 = (int)local_3610;
  iVar53 = (int)(((1 - local_3610) * 10) / 3) + 0x41;
  if (0x403f < iVar53) {
    iVar53 = 0x403f;
  }
  iVar53 = iVar53 + iVar63;
  if (iVar53 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("need_frac_digits > 0","../stdlib/strtod_l.c",0x574,"____strtold_l_internal");
  }
  iVar54 = 0;
  local_3660 = 0;
LAB_006e6f4d:
  local_3630 = &local_3608;
  local_3640 = &local_3610;
  lVar57 = (long)iVar53;
  if ((long)pcVar84 - (long)pcVar79 < (long)iVar53) {
    lVar57 = (long)((int)pcVar84 - (int)pcVar79);
  }
  bVar91 = (long)(pcVar79 + lVar57) < (long)pcVar84;
  if (bVar91) {
    pcVar84 = pcVar79 + lVar57;
  }
  iVar53 = (int)pcVar84 - (int)pcVar79;
  pcVar75 = (char *)0x0;
  plVar74 = &_fpioconst_pow10;
  uVar83 = iVar53 - iVar63;
  uVar55 = 1;
  puVar71 = local_35f8;
  puVar87 = local_1b18;
LAB_006e6ff3:
  do {
    puVar82 = puVar71;
    puVar71 = puVar82;
    puVar86 = puVar87;
    if ((uVar55 & uVar83) != 0) {
      uVar83 = uVar83 ^ uVar55;
      if (pcVar75 == (char *)0x0) {
        pcVar75 = (char *)(plVar74[1] + -1);
        memcpy(puVar87,__tens + *plVar74 * 8 + 8,(long)pcVar75 * 8);
      }
      else {
        lVar57 = __mpn_mul(puVar82,*plVar74 * 8 + 0x81b528,plVar74[1] + -1,puVar87,pcVar75);
        pcVar75 = pcVar75 + plVar74[1] + -1;
        puVar71 = puVar87;
        puVar86 = puVar82;
        if (lVar57 == 0) {
          pcVar75 = pcVar75 + -1;
          uVar55 = uVar55 * 2;
          plVar74 = plVar74 + 3;
          puVar87 = puVar82;
          if (uVar83 == 0) break;
          goto LAB_006e6ff3;
        }
      }
    }
    uVar55 = uVar55 * 2;
    plVar74 = plVar74 + 3;
    puVar87 = puVar86;
  } while (uVar83 != 0);
  if (puVar86 == local_35f8) {
    memcpy(local_1b18,local_35f8,(long)pcVar75 * 8);
  }
  str_to_mpn_constprop_0(pcVar80,iVar53,local_35f8,local_3630,local_3640,sVar56,pcVar85);
  pcVar85 = pcVar75 + -1;
  uVar60 = 0x3f;
  if (local_1b18[(long)pcVar85] != 0) {
    for (; local_1b18[(long)pcVar85] >> uVar60 == 0; uVar60 = uVar60 - 1) {
    }
  }
  uVar60 = uVar60 ^ 0x3f;
  if ((int)uVar60 != 0) {
    __mpn_lshift(local_1b18,local_1b18,pcVar75,uVar60 & 0xffffffff);
    lVar57 = __mpn_lshift(local_35f8,local_35f8,local_3608,uVar60 & 0xffffffff);
    if (lVar57 != 0) {
      local_35f8[(long)local_3608] = lVar57;
      local_3608 = local_3608 + 1;
    }
  }
  local_3610 = local_3660;
  if (pcVar75 == (char *)0x1) {
    if (local_35f8[0] >= local_1b18[0] || local_3608 != (char *)0x1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("numsize == 1 && n < d","../stdlib/strtod_l.c",0x5d8,"____strtold_l_internal");
    }
    uVar60 = local_35f8[0];
    uVar70 = local_3660;
    bVar89 = false;
    while( true ) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_1b18[0];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar60;
      uVar67 = 0;
      uVar60 = SUB168((auVar17 << 0x40) % auVar8,0);
      if (iVar54 != 0) break;
      uVar70 = uVar70 - 0x40;
      local_3628 = uVar67;
      bVar89 = local_35f8[0] < local_1b18[0] && local_3608 == (char *)0x1;
    }
    if (bVar89) {
      local_3600 = local_3628;
      local_3610 = uVar70;
    }
    if (iVar54 != 0x40) {
      __mpn_lshift(&local_3600,&local_3600,1);
      local_3688._0_1_ = (byte)iVar54;
      local_3600 = local_3600 | 0UL >> ((byte)local_3688 & 0x3f);
    }
    iVar53 = iVar54 + -1;
  }
  else {
    if (pcVar75 != &_nl_current_LC_PAPER_used) {
      uVar60 = local_1b18[(long)pcVar85];
      uVar70 = local_1b18[(long)(pcVar75 + -2)];
      iVar53 = __mpn_cmp(local_35f8);
      if (-1 < iVar53) {
        local_35f8[(long)local_3608] = 0;
        local_3608 = local_3608 + 1;
      }
      pcVar5 = local_3608;
      uVar55 = (uint)pcVar75;
      if ((long)local_3608 < (long)pcVar75) {
        lVar57 = (long)pcVar75 - (long)local_3608;
        if (iVar54 == 0) {
          local_3610 = local_3610 + lVar57 * -0x40;
          uVar64 = (uint)local_3608;
          uVar83 = 0;
        }
        else {
          if (lVar57 * 0x40 + local_3660 == 0x40) {
            if (lVar57 != 1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("empty == 1","../stdlib/strtod_l.c",0x686,"____strtold_l_internal");
            }
            local_3600 = 0;
          }
          else {
            uVar83 = 0x40 - iVar54;
            if (uVar83 != 0) {
              __mpn_lshift(&local_3600,&local_3600,1,uVar83);
            }
          }
          uVar64 = (uint)local_3608;
          iVar54 = iVar54 + (int)lVar57 * 0x40;
        }
        if (0 < (int)uVar64) {
          uVar67 = (long)pcVar75 - (long)pcVar5;
          if (((uVar67 & 0x1fffffffffffffff) == 0x1ffffffffffffffe) || (uVar64 - 1 < 3)) {
            puVar71 = (ulong *)((long)local_35f8 + (long)(int)uVar64 * 8);
            do {
              puVar71[uVar67] = puVar71[-1];
              puVar71 = puVar71 + -1;
            } while (&local_3600 + ((long)(int)uVar64 - (ulong)(uVar64 - 1)) != puVar71);
          }
          else {
            lVar68 = 0;
            do {
              puVar3 = (undefined8 *)((long)&local_3608 + lVar68 + (long)(int)uVar64 * 8);
              uVar78 = puVar3[1];
              puVar4 = (undefined8 *)((long)&local_3600 + lVar68 + ((long)(int)uVar64 + uVar67) * 8)
              ;
              *puVar4 = *puVar3;
              puVar4[1] = uVar78;
              lVar68 = lVar68 + -0x10;
            } while (lVar68 != (ulong)(uVar64 >> 1) * -0x10);
            iVar53 = uVar64 - (uVar64 & 0xfffffffe);
            if ((uVar64 & 0xfffffffe) != uVar64) {
              local_35f8[iVar53 + lVar57] = local_35f8[iVar53 + -1];
            }
          }
        }
        memset(local_35f8,0,lVar57 * 8 + 8);
        local_1b18[(long)pcVar75] = 0;
        uVar67 = local_35f8[(long)pcVar75];
        if (iVar54 < 0x41) goto LAB_006e724e;
        uVar88 = 0;
      }
      else {
        if (pcVar75 != local_3608) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("numsize == densize","../stdlib/strtod_l.c",0x6ab,"____strtold_l_internal");
        }
        if (0 < (int)uVar55) {
          lVar57 = (long)(int)uVar55;
          memmove((ulong *)((long)local_35f8 + (lVar57 - (int)(uVar55 - 1)) * 8),
                  (ulong *)((long)local_35f8 + (lVar57 + (-1 - (long)(int)(uVar55 - 1))) * 8),
                  lVar57 * 8);
        }
        local_35f8[0] = 0;
        uVar67 = local_35f8[(long)pcVar75];
        local_1b18[(long)pcVar75] = 0;
LAB_006e724e:
        iVar53 = uVar55 - 1;
        uVar77 = (ulong)(uVar55 - 2);
joined_r0x006e729e:
        uVar88 = 0xffffffffffffffff;
        if (uVar60 != uVar67) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar60;
          auVar9._8_8_ = uVar67;
          auVar9._0_8_ = local_35f8[(long)pcVar85];
          uVar88 = SUB168(auVar9 / auVar6,0);
          uVar67 = SUB168(auVar9 % auVar6,0);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar70;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar88;
          auVar15 = auVar11 * auVar13;
          while( true ) {
            uVar69 = auVar15._8_8_;
            uVar61 = auVar15._0_8_;
            if ((uVar69 <= uVar67) &&
               ((uVar69 != uVar67 || (uVar61 <= local_35f8[(long)(pcVar75 + -2)])))) break;
            uVar88 = uVar88 - 1;
            bVar89 = CARRY8(uVar67,uVar60);
            uVar67 = uVar67 + uVar60;
            if (bVar89) break;
            auVar15._8_8_ = uVar69 - (uVar61 < uVar70);
            auVar15._0_8_ = uVar61 - uVar70;
          }
        }
        lVar57 = __mpn_submul_1(local_35f8,local_1b18,pcVar75 + 1,uVar88);
        if (local_35f8[(long)pcVar75] != lVar57) {
          lVar57 = __mpn_add_n(local_35f8,local_35f8,local_1b18,pcVar75);
          if (lVar57 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("cy != 0","../stdlib/strtod_l.c",0x6d5,"____strtold_l_internal");
          }
          uVar88 = uVar88 - 1;
        }
        uVar67 = local_35f8[(long)pcVar85];
        local_35f8[(long)pcVar75] = uVar67;
        if (0 < iVar53) {
          memmove((ulong *)((long)local_35f8 + ((long)iVar53 - uVar77) * 8),
                  (ulong *)((long)local_35f8 + ((long)iVar53 + (-1 - uVar77)) * 8),uVar77 * 8 + 8);
        }
        local_35f8[0] = 0;
        if (iVar54 == 0) {
          lVar57 = 0x40;
          if (uVar88 != 0) {
            lVar57 = 0x3f;
            if (uVar88 != 0) {
              for (; uVar88 >> lVar57 == 0; lVar57 = lVar57 + -1) {
              }
            }
            uVar83 = (uint)lVar57 ^ 0x3f;
            iVar54 = 0x40 - uVar83;
            lVar57 = (long)(int)uVar83;
          }
          local_3600 = uVar88;
          local_3610 = local_3610 - lVar57;
          goto joined_r0x006e729e;
        }
        if (iVar54 < 1) {
          iVar54 = iVar54 + 0x40;
          local_3600 = uVar88;
          goto joined_r0x006e729e;
        }
        uVar83 = 0x40 - iVar54;
        if (uVar83 != 0) {
          __mpn_lshift(&local_3600,&local_3600,1,uVar83);
          local_3688._0_1_ = (byte)iVar54;
          local_3600 = local_3600 | uVar88 >> ((byte)local_3688 & 0x3f);
        }
      }
      uVar60 = (ulong)pcVar75 & 0xffffffff;
      if (-1 < (int)uVar55) {
        puVar71 = (ulong *)((long)local_35f8 + (long)(int)uVar55 * 8);
        do {
          uVar55 = (uint)uVar60;
          if (*puVar71 != 0) break;
          uVar55 = uVar55 - 1;
          uVar60 = (ulong)uVar55;
          puVar71 = puVar71 + -1;
        } while (uVar55 != 0xffffffff);
      }
      round_and_return(&local_3600,local_3610 - 1,uVar50,uVar88,(long)(int)(0x3f - uVar83),
                       (byte)~(byte)(uVar55 >> 0x18) >> 7 | bVar91);
      goto LAB_006e69bd;
    }
    uVar70 = local_35f8[1];
    uVar60 = local_35f8[0];
    if (1 < (long)local_3608) {
LAB_006e7e03:
      bVar89 = false;
      bVar42 = false;
      uVar77 = local_3610;
      do {
        if (uVar70 == local_1b18[1]) {
          uVar88 = uVar60 + uVar70;
          if (!CARRY8(uVar60,uVar70)) {
            uVar67 = 0xffffffffffffffff;
            auVar16._8_8_ = (local_1b18[0] - 1) + (ulong)(local_1b18[0] == 0);
            auVar16._0_8_ = -local_1b18[0];
            goto LAB_006e7ef0;
          }
          uVar70 = uVar88 - local_1b18[0];
          uVar60 = local_1b18[0];
          if (iVar54 != 0) goto code_r0x006e7e4b;
          local_3620 = 0xffffffffffffffff;
          iVar54 = 0x40;
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_1b18[1];
          auVar10._8_8_ = uVar70;
          auVar10._0_8_ = uVar60;
          uVar67 = SUB168(auVar10 / auVar7,0);
          uVar88 = SUB168(auVar10 % auVar7,0);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_1b18[0];
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar67;
          auVar16 = auVar12 * auVar14;
LAB_006e7ef0:
          do {
            uVar60 = auVar16._8_8_;
            uVar70 = auVar16._0_8_;
            if ((uVar60 <= uVar88) && ((uVar60 != uVar88 || (uVar70 == 0)))) break;
            uVar67 = uVar67 - 1;
            auVar16._8_8_ = uVar60 - (uVar70 < local_1b18[0]);
            auVar16._0_8_ = uVar70 - local_1b18[0];
            bVar90 = CARRY8(uVar88,local_1b18[1]);
            uVar88 = uVar88 + local_1b18[1];
          } while (!bVar90);
          uVar60 = -auVar16._0_8_;
          uVar70 = (uVar88 - auVar16._8_8_) - (ulong)(auVar16._0_8_ != 0);
          if (iVar54 != 0) goto LAB_006e7e56;
          if (uVar67 == 0) {
            local_3620 = 0;
            uVar77 = uVar77 - 0x40;
          }
          else {
            lVar57 = 0x3f;
            if (uVar67 != 0) {
              for (; uVar67 >> lVar57 == 0; lVar57 = lVar57 + -1) {
              }
            }
            uVar55 = (uint)lVar57 ^ 0x3f;
            iVar54 = 0x40 - uVar55;
            uVar77 = uVar77 - (long)(int)uVar55;
            local_3620 = uVar67;
          }
        }
        bVar89 = true;
        bVar42 = true;
      } while( true );
    }
    if (local_1b18[1] <= local_35f8[0]) {
      uVar70 = 0;
      goto LAB_006e7e03;
    }
    if (iVar54 == 0) {
      local_3610 = local_3660 - 0x40;
      uVar70 = local_35f8[0];
      uVar60 = 0;
      goto LAB_006e7e03;
    }
    iVar53 = 0x40 - iVar54;
    if (iVar53 != 0) {
      __mpn_lshift(&local_3600,&local_3600,1,iVar53);
    }
    uVar67 = 0;
    uVar60 = local_35f8[0];
LAB_006e7e96:
    iVar53 = 0x3f - iVar53;
  }
  round_and_return(&local_3600,local_3610 - 1,uVar50,uVar67,(long)iVar53,uVar60 != 0 || bVar91);
LAB_006e69bd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

