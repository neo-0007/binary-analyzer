
/* WARNING: Removing unreachable block (ram,0x0078a7ba) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ____strtof128_l_internal(char *param_1,long *param_2,int param_3,long param_4)

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
  int iVar50;
  uint6 uVar51;
  undefined8 uVar52;
  long lVar53;
  char cVar54;
  int iVar55;
  int iVar56;
  uint uVar57;
  size_t sVar58;
  long lVar59;
  char *pcVar60;
  ulong uVar61;
  sbyte sVar62;
  int iVar63;
  uint uVar64;
  char *pcVar65;
  byte bVar66;
  long lVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  char cVar71;
  char *pcVar72;
  ulong *puVar73;
  ulong *puVar74;
  long lVar75;
  char *pcVar76;
  char cVar77;
  ulong *puVar78;
  undefined4 uVar79;
  char *pcVar80;
  char *pcVar81;
  ulong uVar82;
  uint uVar83;
  char *pcVar84;
  char *pcVar85;
  ulong uVar86;
  char *pcVar87;
  ulong *puVar88;
  ulong *puVar89;
  long *plVar90;
  long in_FS_OFFSET;
  bool bVar91;
  bool bVar92;
  bool bVar93;
  undefined8 uVar94;
  ulong uVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  ulong *local_36b8;
  ulong *local_36a8;
  ulong *local_3670;
  char **local_3660;
  ulong local_3658;
  ulong local_3650;
  ulong local_3648;
  char *local_3640;
  ulong local_3638 [864];
  ulong local_1b38 [863];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar59 = *(long *)(param_4 + 8);
  pcVar76 = (char *)0x0;
  pcVar81 = (char *)0x0;
  if (param_3 != 0) {
    pcVar76 = *(char **)(lVar59 + 0x50);
    if ((byte)(*pcVar76 - 1U) < 0x7e) {
      pcVar81 = *(char **)(lVar59 + 0x48);
      if (**(char **)(lVar59 + 0x48) == '\0') {
        pcVar76 = (char *)0x0;
        pcVar81 = (char *)0x0;
      }
    }
    else {
      pcVar76 = (char *)0x0;
      pcVar81 = (char *)0x0;
    }
  }
  pcVar5 = *(char **)(lVar59 + 0x40);
  sVar58 = strlen(pcVar5);
  if (sVar58 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("decimal_len > 0","../stdlib/strtod_l.c",0x255,"____strtof128_l_internal");
  }
  local_3648 = 0;
  pcVar84 = param_1 + -1;
  do {
    pcVar87 = pcVar84;
    cVar54 = pcVar87[1];
    lVar59 = (long)cVar54;
    pcVar84 = pcVar87 + 1;
  } while ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + lVar59 * 2) & 0x20) != 0);
  if (cVar54 == '-') {
    lVar59 = (long)pcVar87[2];
    iVar50 = 1;
    pcVar84 = pcVar87 + 2;
  }
  else {
    iVar50 = 0;
    if (cVar54 == '+') {
      lVar59 = (long)pcVar87[2];
      pcVar84 = pcVar87 + 2;
    }
  }
  cVar54 = *pcVar5;
  cVar77 = (char)lVar59;
  cVar71 = cVar77;
  if (cVar54 != '\0') {
    lVar67 = 0;
    cVar71 = cVar54;
    do {
      if (pcVar84[lVar67] != cVar71) goto LAB_00789255;
      lVar67 = lVar67 + 1;
      cVar71 = pcVar5[lVar67];
    } while (cVar71 != '\0');
    cVar71 = pcVar84[lVar67];
  }
  if ((byte)(cVar71 - 0x30U) < 10) {
LAB_007892ce:
    lVar67 = *(long *)(param_4 + 0x70);
    local_36a8 = (ulong *)pcVar84;
    if (cVar77 == '0') {
      if (*(int *)(lVar67 + (long)pcVar84[1] * 4) == 0x78) {
        pcVar87 = pcVar84 + 2;
        lVar59 = (long)pcVar84[2];
        local_36a8 = (ulong *)pcVar87;
        if (pcVar81 != (char *)0x0) {
          iVar56 = 0x10;
          pcVar76 = (char *)0x0;
          goto LAB_007892ea;
        }
        pcVar76 = (char *)0x0;
        if (pcVar84[2] == '0') {
          iVar56 = 0x10;
          goto LAB_00789d00;
        }
        iVar56 = 0x10;
      }
      else {
        iVar56 = 10;
        pcVar87 = pcVar84;
        if (pcVar81 != (char *)0x0) {
LAB_007892ea:
          cVar71 = (char)lVar59;
          pcVar87 = (char *)local_36a8;
          do {
            if (cVar71 != '0') {
              if (*pcVar81 == '\0') {
                lVar75 = -1;
              }
              else {
                lVar53 = 0;
                cVar71 = *pcVar81;
                do {
                  lVar75 = lVar53;
                  if (pcVar87[lVar75] != cVar71) goto LAB_00789332;
                  cVar71 = pcVar81[lVar75 + 1];
                  lVar53 = lVar75 + 1;
                } while (cVar71 != '\0');
              }
              pcVar87 = pcVar87 + lVar75;
            }
            cVar71 = pcVar87[1];
            lVar59 = (long)cVar71;
            pcVar87 = pcVar87 + 1;
          } while( true );
        }
LAB_00789d00:
        do {
          pcVar84 = pcVar87 + 1;
          lVar59 = (long)*pcVar84;
          pcVar87 = pcVar87 + 1;
        } while (*pcVar84 == '0');
      }
LAB_00789332:
      cVar71 = (char)*(undefined4 *)(lVar67 + (long)(char)lVar59 * 4);
      pcVar84 = pcVar87;
      if ((byte)((char)lVar59 - 0x30U) < 10) goto LAB_00789368;
      bVar93 = iVar56 != 0x10;
      if ((5 < (byte)(cVar71 + 0x9fU)) || (bVar93)) goto LAB_00789490;
    }
    else {
      if (pcVar81 != (char *)0x0) {
        iVar56 = 10;
        goto LAB_007892ea;
      }
      iVar56 = 10;
      cVar71 = (char)*(undefined4 *)(lVar67 + (long)cVar77 * 4);
      bVar93 = true;
      if ((byte)(cVar77 - 0x30U) < 10) goto LAB_00789368;
LAB_00789490:
      if (cVar54 != '\0') {
        lVar75 = 0;
        cVar77 = cVar54;
        do {
          if (pcVar84[lVar75] != cVar77) {
            if (bVar93) {
              if (cVar71 != 'e') goto LAB_00789f34;
            }
            else if (((ulong *)pcVar84 == local_36a8) || (cVar71 != 'p')) goto LAB_00789f34;
            goto LAB_00789368;
          }
          lVar75 = lVar75 + 1;
          cVar77 = pcVar5[lVar75];
        } while (cVar77 != '\0');
      }
      if ((iVar56 != 0x10) || ((ulong *)pcVar84 != local_36a8)) goto LAB_00789368;
      if ((9 < (byte)(pcVar84[sVar58] - 0x30U)) &&
         (5 < (byte)((char)*(undefined4 *)(lVar67 + (long)pcVar84[sVar58] * 4) + 0x9fU))) {
LAB_00789f34:
        pcVar76 = (char *)__correctly_grouped_prefixmb(local_36a8,pcVar84,pcVar81);
        if (param_2 != (long *)0x0) {
          if (((ulong *)pcVar76 == local_36a8) && (pcVar76 = pcVar84 + -1, iVar56 != 0x10)) {
            pcVar76 = param_1;
          }
          *param_2 = (long)pcVar76;
        }
        goto LAB_00789f70;
      }
    }
    iVar56 = 0x10;
LAB_00789368:
    pcVar80 = (char *)0x0;
    pcVar87 = pcVar84;
    do {
      if (((byte)((char)lVar59 - 0x30U) < 10) ||
         ((iVar56 == 0x10 &&
          ((byte)((char)*(undefined4 *)(lVar67 + (long)(char)lVar59 * 4) + 0x9fU) < 6)))) {
        pcVar80 = pcVar80 + 1;
      }
      else {
        if (pcVar81 == (char *)0x0) goto LAB_0078938d;
        cVar71 = *pcVar81;
        if (cVar71 == '\0') {
          lVar75 = -1;
        }
        else {
          lVar53 = 0;
          do {
            lVar75 = lVar53;
            if (pcVar87[lVar75] != cVar71) goto LAB_0078938d;
            cVar71 = pcVar81[lVar75 + 1];
            lVar53 = lVar75 + 1;
          } while (cVar71 != '\0');
        }
        pcVar87 = pcVar87 + lVar75;
      }
      lVar59 = (long)pcVar87[1];
      pcVar87 = pcVar87 + 1;
    } while( true );
  }
LAB_00789255:
  if ((byte)(cVar77 - 0x30U) < 10) goto LAB_007892ce;
  cVar54 = (char)*(undefined4 *)(_nl_C_locobj._112_8_ + lVar59 * 4);
  if (cVar54 == 'i') {
    iVar56 = strncasecmp_l(pcVar84,"inf",3,(__locale_t)_nl_C_locobj);
    if (iVar56 == 0) {
      if (param_2 != (long *)0x0) {
        iVar56 = strncasecmp_l(pcVar84 + 3,"inity",5,(__locale_t)_nl_C_locobj);
        pcVar76 = pcVar84 + 3;
        if (iVar56 == 0) {
          pcVar76 = pcVar84 + 8;
        }
        *param_2 = (long)pcVar76;
      }
      uVar95 = _DAT_00834c60;
      if (iVar50 == 0) {
        uVar95 = _DAT_00834c50;
      }
      goto LAB_00789290;
    }
  }
  else if ((cVar54 == 'n') &&
          (iVar56 = strncasecmp_l(pcVar84,"nan",3,(__locale_t)_nl_C_locobj), iVar56 == 0)) {
    pcVar76 = pcVar84 + 3;
    uVar95 = _DAT_00834c30;
    if (pcVar84[3] == '(') {
      uVar95 = __strtof128_nan(pcVar84 + 4,&local_3640,0x29);
      if (*local_3640 == ')') {
        pcVar76 = local_3640 + 1;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = (long)pcVar76;
    }
    if (iVar50 != 0) {
      uVar95 = uVar95 ^ _DAT_00834c40;
    }
    goto LAB_00789290;
  }
LAB_0078927e:
  if (param_2 != (long *)0x0) {
    *param_2 = (long)param_1;
  }
LAB_0078928c:
  uVar95 = 0;
LAB_00789290:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar95;
LAB_0078938d:
  if ((pcVar76 == (char *)0x0) || (pcVar87 <= local_36a8)) {
LAB_0078939d:
    pcVar65 = (char *)-(ulong)(pcVar80 == (char *)0x0);
    pcVar85 = pcVar80;
    if (cVar54 != '\0') {
      lVar67 = 0;
      do {
        if (pcVar87[lVar67] != cVar54) goto LAB_007893ca;
        lVar67 = lVar67 + 1;
        cVar54 = pcVar5[lVar67];
      } while (cVar54 != '\0');
    }
    pcVar87 = pcVar87 + sVar58;
    lVar59 = (long)*pcVar87;
    if (iVar56 == 0x10) {
      pcVar76 = (char *)0x0;
      lVar67 = (long)pcVar80 - (long)pcVar87;
      while( true ) {
        cVar54 = (char)lVar59;
        pcVar85 = pcVar87 + lVar67;
        if ((9 < (byte)(cVar54 - 0x30U)) &&
           (5 < (byte)((char)*(undefined4 *)(*(long *)(param_4 + 0x70) + (long)cVar54 * 4) + 0x9fU))
           ) break;
        if ((cVar54 != '0') && (pcVar65 == (char *)0xffffffffffffffff)) {
          pcVar65 = pcVar76;
        }
        lVar59 = (long)pcVar87[1];
        pcVar87 = pcVar87 + 1;
        pcVar76 = pcVar76 + 1;
      }
LAB_007893ca:
      if ((long)pcVar85 < 0) {
LAB_0078b611:
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no <= (uintmax_t) INTMAX_MAX","../stdlib/strtod_l.c",0x36a,
                      "____strtof128_l_internal");
      }
      cVar54 = (char)*(undefined4 *)(*(long *)(param_4 + 0x70) + lVar59 * 4);
      pcVar76 = pcVar87;
      if (iVar56 != 0x10) goto LAB_0078961b;
      if (cVar54 != 'p') goto LAB_00789615;
LAB_007893ee:
      cVar54 = pcVar87[1];
      uVar95 = local_3648;
      pcVar76 = pcVar87;
      if (cVar54 == '-') {
        cVar54 = pcVar87[2];
        if ((byte)(cVar54 - 0x30U) < 10) {
          pcVar76 = pcVar87 + 2;
          if (iVar56 == 0x10) {
            if ((char *)0x1fffffffffffefe4 < pcVar80) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_EXP - MANT_DIG) / 4",
                            "../stdlib/strtod_l.c",0x388,"____strtof128_l_internal");
            }
            pcVar72 = (char *)((long)pcVar80 * 4 + 0x406e);
            bVar93 = true;
          }
          else {
            if ((char *)0x7fffffffffffec4b < pcVar80) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_10_EXP - MANT_DIG)",
                            "../stdlib/strtod_l.c",0x3a8,"____strtof128_l_internal");
            }
            pcVar72 = pcVar80 + 0x13b4;
            bVar93 = true;
          }
          goto LAB_00789fce;
        }
      }
      else if (cVar54 == '+') {
        cVar54 = pcVar87[2];
        if ((byte)(cVar54 - 0x30U) < 10) {
          pcVar76 = pcVar87 + 2;
          if (iVar56 != 0x10) goto LAB_00789420;
LAB_00789d31:
          if (pcVar80 == (char *)0x0) {
            if (pcVar65 == (char *)0xffffffffffffffff) {
              local_36a8 = (ulong *)0x7;
              uVar70 = 0x666;
              bVar93 = false;
              goto LAB_0078a033;
            }
            if ((char *)0x1fffffffffffefff < pcVar65) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_EXP - 3) / 4",
                            "../stdlib/strtod_l.c",0x39c,"____strtof128_l_internal");
            }
            pcVar72 = (char *)((long)pcVar65 * 4 + 0x4003);
            bVar93 = false;
          }
          else {
            if ((pcVar65 != (char *)0x0) || ((ulong)pcVar80 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX / 4",
                            "../stdlib/strtod_l.c",0x390,"____strtof128_l_internal");
            }
            bVar93 = false;
            pcVar72 = (char *)((0x1000 - (long)pcVar80) * 4 + 3);
          }
          goto LAB_00789fce;
        }
      }
      else if ((byte)(cVar54 - 0x30U) < 10) {
        pcVar76 = pcVar87 + 1;
        if (iVar56 == 0x10) goto LAB_00789d31;
LAB_00789420:
        if (pcVar80 == (char *)0x0) {
          if (pcVar65 != (char *)0xffffffffffffffff) {
            if ((char *)0x7fffffffffffecba < pcVar65) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_10_EXP - 1)",
                            "../stdlib/strtod_l.c",0x3bc,"____strtof128_l_internal");
            }
            pcVar72 = pcVar65 + 0x1345;
            bVar93 = false;
            goto LAB_00789fce;
          }
          local_36a8 = (ulong *)0x3;
          uVar70 = 0x1ed;
          bVar93 = false;
        }
        else {
          if ((pcVar65 != (char *)0x0) || ((long)pcVar80 < 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX",
                          "../stdlib/strtod_l.c",0x3b0,"____strtof128_l_internal");
          }
          bVar93 = false;
          pcVar72 = (char *)(0x1345 - (long)pcVar80);
LAB_00789fce:
          if ((long)pcVar72 < 0) {
            pcVar72 = (char *)0x0;
          }
          uVar70 = (ulong)pcVar72 / 10;
          local_36a8 = (ulong *)((ulong)pcVar72 % 10);
        }
LAB_0078a033:
        do {
          if (((long)uVar70 < (long)uVar95) ||
             ((uVar95 == uVar70 && ((long)local_36a8 < (long)(char)(cVar54 + -0x30))))) {
            if (pcVar65 == (char *)0xffffffffffffffff) {
              uVar95 = 0;
              if (iVar50 != 0) {
                uVar95 = _DAT_00834c40;
              }
            }
            else {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
              if (bVar93) {
                uVar94 = _DAT_00834be0;
                if (iVar50 == 0) {
                  uVar94 = _DAT_00834bf0;
                }
                uVar95 = __multf3(uVar94,_DAT_00834bf0);
              }
              else {
                uVar94 = _DAT_00834c00;
                if (iVar50 == 0) {
                  uVar94 = _DAT_00834c10;
                }
                uVar95 = __multf3(uVar94,_DAT_00834c10);
              }
            }
            do {
              pcVar81 = pcVar76 + 1;
              pcVar76 = pcVar76 + 1;
            } while ((byte)(*pcVar81 - 0x30U) < 10);
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pcVar76;
            }
            goto LAB_00789290;
          }
          pcVar76 = pcVar76 + 1;
          uVar95 = (long)(char)(cVar54 + -0x30) + uVar95 * 10;
          cVar54 = *pcVar76;
        } while ((byte)(cVar54 - 0x30U) < 10);
        local_3648 = uVar95;
        if (bVar93) {
          local_3648 = -uVar95;
        }
      }
    }
    else {
      pcVar76 = pcVar87;
      if ((byte)(*pcVar87 - 0x30U) < 10) {
        do {
          pcVar76 = pcVar76 + 1;
          if (((char)lVar59 != '0') && (pcVar65 == (char *)0xffffffffffffffff)) {
            pcVar65 = pcVar76 + (-1 - (long)pcVar87);
          }
          lVar59 = (long)*pcVar76;
          pcVar85 = pcVar76 + ((long)pcVar80 - (long)pcVar87);
        } while ((byte)(*pcVar76 - 0x30U) < 10);
      }
      if ((long)pcVar85 < 0) goto LAB_0078b611;
      cVar54 = *(char *)(*(long *)(param_4 + 0x70) + lVar59 * 4);
LAB_00789615:
      pcVar87 = pcVar76;
      if (iVar56 != 0x10) {
LAB_0078961b:
        pcVar87 = pcVar76;
        if (cVar54 == 'e') goto LAB_007893ee;
      }
    }
    pcVar72 = pcVar87;
    if (pcVar80 < pcVar85) {
      pcVar60 = pcVar87;
      if (pcVar87[-1] != '0') goto LAB_00789680;
      do {
        pcVar72 = pcVar60 + -1;
        pcVar2 = pcVar72 + (long)pcVar85;
        pcVar1 = pcVar60 + -2;
        pcVar60 = pcVar72;
      } while (*pcVar1 == '0');
      pcVar85 = pcVar2 + -(long)pcVar87;
      if (pcVar2 + -(long)pcVar87 < pcVar80) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no >= int_no","../stdlib/strtod_l.c",0x3fc,"____strtof128_l_internal");
      }
    }
    uVar95 = local_3648;
    if ((pcVar85 == pcVar80) && (pcVar85 != (char *)0x0)) {
      if ((long)local_3648 < 0) {
        pcVar72 = pcVar72 + -1;
        bVar66 = 0;
        if (iVar56 != 0x10) {
          do {
            if ((int)*pcVar72 - 0x30U < 10) {
              if (*pcVar72 != '0') goto LAB_0078a214;
              uVar95 = uVar95 + (ulong)(iVar56 == 0x10) * 3 + 1;
              pcVar80 = pcVar80 + -1;
              pcVar85 = pcVar85 + -1;
              bVar66 = pcVar85 != (char *)0x0 & (byte)(uVar95 >> 0x3f);
              if (bVar66 == 0) goto LAB_00789cc0;
            }
            pcVar72 = pcVar72 + -1;
          } while( true );
        }
        do {
          if ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + (long)*pcVar72 * 2) & 0x10) != 0) {
            if (*pcVar72 != '0') goto LAB_0078a214;
            uVar95 = uVar95 + 4;
            pcVar80 = pcVar80 + -1;
            pcVar85 = pcVar85 + -1;
            bVar66 = (byte)(uVar95 >> 0x3f) & pcVar85 != (char *)0x0;
            if (bVar66 == 0) goto LAB_00789cc0;
          }
          pcVar72 = pcVar72 + -1;
        } while( true );
      }
      goto LAB_00789680;
    }
LAB_00789cc0:
    local_3648 = uVar95;
    if (param_2 != (long *)0x0) goto LAB_00789687;
    goto LAB_0078968e;
  }
  pcVar76 = (char *)__correctly_grouped_prefixmb(local_36a8,pcVar87,pcVar81);
  if (pcVar87 == pcVar76) {
    cVar54 = *pcVar5;
    goto LAB_0078939d;
  }
  if ((ulong *)pcVar76 == local_36a8) goto LAB_0078927e;
  if ((pcVar84 <= pcVar76) && (pcVar84 < pcVar76)) {
    uVar95 = (long)pcVar76 - (long)pcVar84;
    if (uVar95 - 1 < 0xf) {
      pcVar80 = (char *)0x0;
      pcVar87 = pcVar84;
LAB_0078acf5:
      pcVar80 = pcVar80 + ((byte)(*pcVar87 - 0x30U) < 10);
      if (((((pcVar87 + 1 < pcVar76) &&
            (pcVar80 = pcVar80 + ((byte)(pcVar87[1] - 0x30U) < 10), pcVar87 + 2 < pcVar76)) &&
           (pcVar80 = pcVar80 + ((byte)(pcVar87[2] - 0x30U) < 10), pcVar87 + 3 < pcVar76)) &&
          ((pcVar80 = pcVar80 + ((byte)(pcVar87[3] - 0x30U) < 10), pcVar87 + 4 < pcVar76 &&
           (pcVar80 = pcVar80 + ((byte)(pcVar87[4] - 0x30U) < 10), pcVar87 + 5 < pcVar76)))) &&
         ((((pcVar80 = pcVar80 + ((byte)(pcVar87[5] - 0x30U) < 10), pcVar87 + 6 < pcVar76 &&
            ((pcVar80 = pcVar80 + ((byte)(pcVar87[6] - 0x30U) < 10), pcVar87 + 7 < pcVar76 &&
             (pcVar80 = pcVar80 + ((byte)(pcVar87[7] - 0x30U) < 10), pcVar87 + 8 < pcVar76)))) &&
           (pcVar80 = pcVar80 + ((byte)(pcVar87[8] - 0x30U) < 10), pcVar87 + 9 < pcVar76)) &&
          ((((pcVar80 = pcVar80 + ((byte)(pcVar87[9] - 0x30U) < 10), pcVar87 + 10 < pcVar76 &&
             (pcVar80 = pcVar80 + ((byte)(pcVar87[10] - 0x30U) < 10), pcVar87 + 0xb < pcVar76)) &&
            (pcVar80 = pcVar80 + ((byte)(pcVar87[0xb] - 0x30U) < 10), pcVar87 + 0xc < pcVar76)) &&
           ((pcVar80 = pcVar80 + ((byte)(pcVar87[0xc] - 0x30U) < 10), pcVar87 + 0xd < pcVar76 &&
            (pcVar80 = pcVar80 + ((byte)(pcVar87[0xd] - 0x30U) < 10), pcVar87 + 0xe < pcVar76)))))))
         ) {
        pcVar80 = pcVar80 + ((byte)(pcVar87[0xe] - 0x30U) < 10);
      }
    }
    else {
      lVar59 = 0;
      lVar67 = 0;
      pcVar87 = pcVar84;
      do {
        cVar54 = *pcVar87;
        pcVar80 = pcVar87 + 1;
        pcVar85 = pcVar87 + 2;
        pcVar65 = pcVar87 + 3;
        pcVar72 = pcVar87 + 4;
        pcVar60 = pcVar87 + 5;
        pcVar1 = pcVar87 + 6;
        pcVar2 = pcVar87 + 7;
        pcVar34 = pcVar87 + 8;
        pcVar35 = pcVar87 + 9;
        pcVar36 = pcVar87 + 10;
        pcVar37 = pcVar87 + 0xb;
        pcVar38 = pcVar87 + 0xc;
        pcVar39 = pcVar87 + 0xd;
        pcVar40 = pcVar87 + 0xe;
        pcVar41 = pcVar87 + 0xf;
        pcVar87 = pcVar87 + 0x10;
        auVar96[0] = cVar54 + DAT_0081b180;
        auVar96[1] = *pcVar80 + UNK_0081b181;
        auVar96[2] = *pcVar85 + UNK_0081b182;
        auVar96[3] = *pcVar65 + UNK_0081b183;
        auVar96[4] = *pcVar72 + UNK_0081b184;
        auVar96[5] = *pcVar60 + UNK_0081b185;
        auVar96[6] = *pcVar1 + UNK_0081b186;
        auVar96[7] = *pcVar2 + UNK_0081b187;
        auVar96[8] = *pcVar34 + UNK_0081b188;
        auVar96[9] = *pcVar35 + UNK_0081b189;
        auVar96[10] = *pcVar36 + UNK_0081b18a;
        auVar96[0xb] = *pcVar37 + UNK_0081b18b;
        auVar96[0xc] = *pcVar38 + UNK_0081b18c;
        auVar96[0xd] = *pcVar39 + UNK_0081b18d;
        auVar96[0xe] = *pcVar40 + UNK_0081b18e;
        auVar96[0xf] = *pcVar41 + UNK_0081b18f;
        auVar96 = psubusb(auVar96,_DAT_0081b190);
        auVar97[0] = -(auVar96[0] == '\0');
        auVar97[1] = -(auVar96[1] == '\0');
        auVar97[2] = -(auVar96[2] == '\0');
        auVar97[3] = -(auVar96[3] == '\0');
        auVar97[4] = -(auVar96[4] == '\0');
        auVar97[5] = -(auVar96[5] == '\0');
        auVar97[6] = -(auVar96[6] == '\0');
        auVar97[7] = -(auVar96[7] == '\0');
        auVar97[8] = -(auVar96[8] == '\0');
        auVar97[9] = -(auVar96[9] == '\0');
        auVar97[10] = -(auVar96[10] == '\0');
        auVar97[0xb] = -(auVar96[0xb] == '\0');
        auVar97[0xc] = -(auVar96[0xc] == '\0');
        auVar97[0xd] = -(auVar96[0xd] == '\0');
        auVar97[0xe] = -(auVar96[0xe] == '\0');
        auVar97[0xf] = -(auVar96[0xf] == '\0');
        auVar97 = auVar97 & _DAT_0081b1a0;
        uVar57 = CONCAT13(0,CONCAT12(auVar97[9],(ushort)auVar97[8]));
        auVar18[0xd] = 0;
        auVar18._0_13_ = auVar97._0_13_;
        auVar18[0xe] = auVar97[7];
        auVar20[0xc] = auVar97[6];
        auVar20._0_12_ = auVar97._0_12_;
        auVar20._13_2_ = auVar18._13_2_;
        auVar21[0xb] = 0;
        auVar21._0_11_ = auVar97._0_11_;
        auVar21._12_3_ = auVar20._12_3_;
        auVar22[10] = auVar97[5];
        auVar22._0_10_ = auVar97._0_10_;
        auVar22._11_4_ = auVar21._11_4_;
        auVar28[9] = 0;
        auVar28._0_9_ = auVar97._0_9_;
        auVar28._10_5_ = auVar22._10_5_;
        auVar30[8] = auVar97[4];
        auVar30._0_8_ = auVar97._0_8_;
        auVar30._9_6_ = auVar28._9_6_;
        uVar31 = auVar30._8_7_;
        auVar43._7_8_ = 0;
        auVar43._0_7_ = uVar31;
        Var44 = CONCAT81(SUB158(auVar43 << 0x40,7),auVar97[3]);
        auVar48._9_6_ = 0;
        auVar48._0_9_ = Var44;
        auVar45._1_10_ = SUB1510(auVar48 << 0x30,5);
        auVar45[0] = auVar97[2];
        auVar49._11_4_ = 0;
        auVar49._0_11_ = auVar45;
        auVar32[2] = auVar97[1];
        auVar32._0_2_ = auVar97._0_2_;
        auVar32._3_12_ = SUB1512(auVar49 << 0x20,3);
        auVar33._2_13_ = auVar32._2_13_;
        auVar33._0_2_ = auVar97._0_2_ & 0xff;
        auVar23[0xc] = auVar97[0xb];
        auVar23._0_12_ = ZEXT112(auVar97[0xc]) << 0x40;
        auVar24._10_3_ = auVar23._10_3_;
        auVar24._0_10_ = (unkuint10)auVar97[10] << 0x40;
        uVar25 = auVar24._8_5_;
        auVar46._5_8_ = 0;
        auVar46._0_5_ = uVar25;
        auVar26[4] = auVar97[9];
        auVar26._0_4_ = uVar57;
        auVar26[5] = 0;
        auVar26._6_7_ = SUB137(auVar46 << 0x40,6);
        auVar29._4_9_ = auVar26._4_9_;
        auVar29._0_4_ = uVar57 & 0xffff;
        auVar19._10_2_ = 0;
        auVar19._0_10_ = auVar33._0_10_;
        auVar19._12_2_ = (short)Var44;
        uVar51 = CONCAT42(auVar19._10_4_,auVar45._0_2_);
        auVar47._6_8_ = 0;
        auVar47._0_6_ = uVar51;
        auVar27._4_2_ = auVar32._2_2_;
        auVar27._0_4_ = auVar33._0_4_;
        auVar27._6_8_ = SUB148(auVar47 << 0x40,6);
        lVar59 = lVar59 + (ulong)auVar97[0xe] +
                 (ulong)(auVar33._0_4_ & 0xffff) + ((ulong)uVar51 & 0xffffffff) +
                 ((ulong)CONCAT24(auVar22._10_2_,(uint)auVar30._8_2_) & 0xffffffff) +
                 ((ulong)(uVar31 >> 0x20) & 0xffff) +
                 (auVar29._0_8_ & 0xffffffff) + ((ulong)uVar25 & 0xffffffff) +
                 ((ulong)CONCAT14(auVar97[0xd],(uint)auVar97[0xc]) & 0xffffffff);
        lVar67 = lVar67 + (ulong)auVar97[0xf] +
                 (ulong)auVar27._4_4_ + (ulong)(auVar19._10_4_ >> 0x10) +
                 (ulong)auVar22._10_2_ + (ulong)(uVar31 >> 0x30) +
                 (ulong)auVar26._4_4_ + (ulong)(uVar25 >> 0x20) + (ulong)auVar97[0xd];
      } while (pcVar87 != pcVar84 + (uVar95 & 0xfffffffffffffff0));
      pcVar80 = (char *)(lVar59 + lVar67);
      pcVar87 = pcVar84 + (uVar95 & 0xfffffffffffffff0);
      if ((uVar95 & 0xfffffffffffffff0) != uVar95) goto LAB_0078acf5;
    }
    pcVar65 = (char *)0x0;
    pcVar85 = pcVar80;
    uVar95 = local_3648;
    goto LAB_00789cc0;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = (long)pcVar76;
  }
LAB_00789f70:
  uVar95 = _DAT_00834c40;
  if (iVar50 != 0) goto LAB_00789290;
  goto LAB_0078928c;
LAB_0078a214:
  if (bVar66 != 0) {
    local_3648 = uVar95;
  }
LAB_00789680:
  if (param_2 != (long *)0x0) {
LAB_00789687:
    *param_2 = (long)pcVar76;
LAB_0078968e:
    if (pcVar85 == (char *)0x0) goto LAB_00789f70;
  }
  if (pcVar65 != (char *)0x0) {
    do {
      if (*pcVar84 == *pcVar5) {
        if (pcVar5[1] == '\0') goto LAB_007896e3;
        lVar59 = 1;
        cVar54 = pcVar5[1];
        while (pcVar84[lVar59] == cVar54) {
          lVar59 = lVar59 + 1;
          cVar54 = pcVar5[lVar59];
          if (cVar54 == '\0') goto LAB_007896e3;
        }
      }
      pcVar84 = pcVar84 + 1;
    } while( true );
  }
LAB_0078972a:
  if (iVar56 != 0x10) {
    uVar95 = -(long)pcVar80;
    if (-(long)pcVar80 < (long)local_3648) {
      uVar95 = local_3648;
    }
    uVar70 = (long)pcVar85 - (long)pcVar80;
    if ((long)local_3648 < (long)pcVar85 - (long)pcVar80) {
      uVar70 = local_3648;
    }
    if ((long)local_3648 < 0) {
      uVar70 = uVar95;
    }
    pcVar80 = pcVar80 + uVar70;
    local_3648 = local_3648 - uVar70;
    if (0x1345 - (long)pcVar80 < (long)local_3648) {
LAB_0078ab41:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar94 = _DAT_00834c00;
      if (iVar50 == 0) {
        uVar94 = _DAT_00834c10;
      }
      uVar95 = __multf3(uVar94,_DAT_00834c10);
      goto LAB_00789290;
    }
    if ((long)local_3648 < -0x1366) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar94 = _DAT_00834be0;
      if (iVar50 == 0) {
        uVar94 = _DAT_00834bf0;
      }
      uVar95 = __multf3(uVar94,_DAT_00834bf0);
      goto LAB_00789290;
    }
    if (pcVar80 != (char *)0x0) {
      puVar78 = local_3638 + 2;
      pcVar84 = (char *)str_to_mpn_constprop_0
                                  (pcVar84,(ulong)pcVar80 & 0xffffffff,puVar78,&local_3640,
                                   &local_3648,sVar58,pcVar81);
      uVar95 = local_3648;
      pcVar76 = local_3640;
      if (0 < (long)local_3648) {
        plVar90 = &_fpioconst_pow10;
        iVar56 = 1;
        puVar73 = local_1b38;
        local_36a8 = puVar78;
        do {
          uVar70 = (ulong)iVar56;
          uVar95 = uVar70 & local_3648;
          puVar89 = puVar73;
          while (puVar73 = puVar89, uVar95 != 0) {
            local_3648 = uVar70 ^ local_3648;
            lVar59 = plVar90[1] + -1;
            lVar67 = *plVar90 * 8 + 0x81b528;
            if ((long)pcVar76 < lVar59) {
              lVar67 = __mpn_mul(puVar73,lVar67,lVar59,local_36a8,pcVar76);
            }
            else {
              lVar67 = __mpn_mul(puVar73,local_36a8,pcVar76,lVar67,lVar59);
            }
            pcVar76 = local_3640 + lVar59;
            if (lVar67 == 0) {
              pcVar76 = pcVar76 + -1;
            }
            iVar56 = iVar56 * 2;
            plVar90 = plVar90 + 3;
            local_3640 = pcVar76;
            if (local_3648 == 0) {
              uVar95 = 0;
              if (puVar73 == local_1b38) {
                memcpy(puVar78,puVar73,(long)pcVar76 * 8);
              }
              goto LAB_0078a613;
            }
            uVar70 = (ulong)iVar56;
            puVar89 = local_36a8;
            local_36a8 = puVar73;
            uVar95 = uVar70 & local_3648;
          }
          iVar56 = iVar56 * 2;
          plVar90 = plVar90 + 3;
        } while( true );
      }
LAB_0078a613:
      pcVar5 = pcVar76 + -1;
      puVar78 = local_3638 + 2;
      lVar59 = 0x3f;
      if (puVar78[(long)pcVar5] != 0) {
        for (; puVar78[(long)pcVar5] >> lVar59 == 0; lVar59 = lVar59 + -1) {
        }
      }
      iVar56 = (int)pcVar76 * 0x40 - ((uint)lVar59 ^ 0x3f);
      if (0x4000 < iVar56) goto LAB_0078ab41;
      if (0x71 < iVar56) {
        iVar55 = (int)(iVar56 - 0x71U) >> 6;
        lVar59 = (long)iVar55;
        uVar57 = iVar56 - 0x71U & 0x3f;
        if (uVar57 == 0) {
          uVar94 = lVar59 + 2;
          uVar52 = lVar59 + 3;
          local_36b8 = (ulong *)0x3f;
          lVar59 = lVar59 + -1;
          local_3638[0] = local_3638[uVar94];
          local_3638[1] = local_3638[uVar52];
        }
        else {
          local_36b8 = (ulong *)(long)(int)(uVar57 - 1);
          sVar62 = (sbyte)uVar57;
          lVar67 = lVar59;
          if (lVar59 < (long)pcVar5) {
            iVar63 = iVar55 + 1;
            local_3638[0] =
                 local_3638[lVar59 + 2] >> sVar62 |
                 local_3638[(long)iVar63 + 2] << (0x40U - sVar62 & 0x3f);
            if ((long)iVar63 < (long)pcVar5) {
              local_3638[1] =
                   local_3638[(long)(iVar55 + 2) + 2] << (0x40U - sVar62 & 0x3f) |
                   local_3638[(long)iVar63 + 2] >> sVar62;
            }
            if (1 < (long)pcVar5 - lVar59) goto LAB_0078b00d;
            lVar67 = (long)((((int)pcVar76 + -2) - iVar55) + iVar63);
          }
          local_3638[1] = local_3638[lVar67 + 2] >> sVar62;
        }
LAB_0078b00d:
        if (local_3638[2] == 0) {
          lVar75 = 1;
          do {
            lVar67 = (long)(int)lVar75;
            uVar94 = lVar75 + 2;
            lVar75 = lVar75 + 1;
          } while (local_3638[uVar94] == 0);
        }
        else {
          lVar67 = 0;
        }
        uVar95 = round_and_return(local_3638,(long)(iVar56 + -1),iVar50,local_3638[lVar59 + 2],
                                  local_36b8,pcVar80 < pcVar85 || lVar67 < lVar59);
        goto LAB_00789290;
      }
      if (pcVar85 != pcVar80) {
        memcpy(local_3638,puVar78,(long)pcVar76 * 8);
        if ((long)pcVar76 < 2) {
          local_3638[(long)pcVar76] = 0;
        }
        if ((pcVar85 <= pcVar80) || (0x1366 < uVar95 + 0x1366)) goto LAB_0078b5ea;
        if (iVar56 < 1) goto LAB_0078b369;
        if (uVar95 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("int_no > 0 && exponent == 0","../stdlib/strtod_l.c",0x559,
                        "____strtof128_l_internal");
        }
        local_36a8 = (ulong *)(long)iVar56;
        iVar63 = 0;
        iVar55 = 0x72 - iVar56;
        goto LAB_00789814;
      }
      iVar55 = (iVar56 + -1) % 0x40;
      if (iVar55 == 0x30) {
        lVar59 = 2 - (long)pcVar76;
        memcpy(local_3638 + lVar59,puVar78,(long)pcVar76 * 8);
joined_r0x0078b4d1:
        if ((0 < lVar59) && (local_3638[0] = 0, lVar59 != 1)) {
          local_3638[0] = 0;
          local_3638[1] = 0;
        }
      }
      else {
        if (0x2f < iVar55) {
          if (1 < (long)pcVar76) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("numsize < RETURN_LIMB_SIZE","../stdlib/strtod_l.c",0x523,
                          "____strtof128_l_internal");
          }
          uVar95 = __mpn_rshift(local_3638 + (2 - (long)pcVar76),puVar78,pcVar76,iVar55 + -0x30);
          lVar59 = 1 - (long)local_3640;
          local_3638[lVar59] = uVar95;
          goto joined_r0x0078b4d1;
        }
        __mpn_lshift(local_3638 + (2 - (long)pcVar76),puVar78,pcVar76,0x30 - iVar55);
        if (0 < 2 - (long)local_3640) {
          memset(local_3638,0,(2 - (long)local_3640) * 8);
        }
      }
      local_36b8 = local_3638;
      uVar95 = round_and_return(local_36b8,(long)(iVar56 + -1),iVar50,0,0,0);
      goto LAB_00789290;
    }
    if ((pcVar85 == (char *)0x0) || (0x1366 < local_3648 + 0x1366)) {
LAB_0078b5ea:
                    /* WARNING: Subroutine does not return */
      __assert_fail("dig_no > int_no && exponent <= 0 && exponent >= MIN_10_EXP - (DIG + 2)",
                    "../stdlib/strtod_l.c",0x54d,"____strtof128_l_internal");
    }
    if (*pcVar84 == '0') {
LAB_0078b369:
                    /* WARNING: Subroutine does not return */
      __assert_fail("int_no == 0 && *startp != L_(\'0\')","../stdlib/strtod_l.c",0x55f,
                    "____strtof128_l_internal");
    }
    iVar63 = (int)local_3648;
    iVar55 = (int)(((1 - local_3648) * 10) / 3) + 0x72;
    if (0x4070 < iVar55) {
      iVar55 = 0x4070;
    }
    iVar55 = iVar55 + iVar63;
    if (iVar55 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("need_frac_digits > 0","../stdlib/strtod_l.c",0x574,"____strtof128_l_internal");
    }
    iVar56 = 0;
    local_36a8 = (ulong *)0x0;
LAB_00789814:
    puVar78 = local_3638 + 2;
    local_3660 = &local_3640;
    local_3670 = &local_3648;
    lVar59 = (long)iVar55;
    if ((long)pcVar85 - (long)pcVar80 < (long)iVar55) {
      lVar59 = (long)((int)pcVar85 - (int)pcVar80);
    }
    bVar93 = (long)(pcVar80 + lVar59) < (long)pcVar85;
    if (bVar93) {
      pcVar85 = pcVar80 + lVar59;
    }
    pcVar76 = (char *)0x0;
    iVar55 = (int)pcVar85 - (int)pcVar80;
    uVar57 = 1;
    uVar83 = iVar55 - iVar63;
    plVar90 = &_fpioconst_pow10;
    puVar73 = puVar78;
    puVar89 = local_1b38;
    do {
      while (puVar74 = puVar73, puVar73 = puVar74, puVar88 = puVar89, (uVar57 & uVar83) == 0) {
LAB_007898b8:
        uVar57 = uVar57 * 2;
        plVar90 = plVar90 + 3;
        puVar89 = puVar88;
        if (uVar83 == 0) goto LAB_0078991f;
      }
      uVar83 = uVar83 ^ uVar57;
      if (pcVar76 == (char *)0x0) {
        pcVar76 = (char *)(plVar90[1] + -1);
        memcpy(puVar89,__tens + *plVar90 * 8 + 8,(long)pcVar76 * 8);
        goto LAB_007898b8;
      }
      lVar59 = __mpn_mul(puVar74,*plVar90 * 8 + 0x81b528,plVar90[1] + -1,puVar89,pcVar76);
      pcVar76 = pcVar76 + plVar90[1] + -1;
      puVar73 = puVar89;
      puVar88 = puVar74;
      if (lVar59 != 0) goto LAB_007898b8;
      pcVar76 = pcVar76 + -1;
      uVar57 = uVar57 * 2;
      plVar90 = plVar90 + 3;
      puVar89 = puVar74;
    } while (uVar83 != 0);
LAB_0078991f:
    if (puVar88 == puVar78) {
      memcpy(local_1b38,puVar78,(long)pcVar76 * 8);
    }
    str_to_mpn_constprop_0(pcVar84,iVar55,puVar78,local_3660,local_3670,sVar58,pcVar81);
    pcVar81 = pcVar76 + -1;
    uVar95 = 0x3f;
    if (local_1b38[(long)pcVar81] != 0) {
      for (; local_1b38[(long)pcVar81] >> uVar95 == 0; uVar95 = uVar95 - 1) {
      }
    }
    if ((int)(uVar95 ^ 0x3f) != 0) {
      __mpn_lshift(local_1b38,local_1b38,pcVar76,(uVar95 ^ 0x3f) & 0xffffffff);
      lVar59 = __mpn_lshift(puVar78,puVar78,local_3640);
      if (lVar59 != 0) {
        local_3638[(long)local_3640 + 2] = lVar59;
        local_3640 = local_3640 + 1;
      }
    }
    local_3648 = (ulong)local_36a8;
    if (pcVar76 == (char *)0x1) {
      bVar91 = local_3638[2] < local_1b38[0] && local_3640 == (char *)0x1;
      if (local_3638[2] >= local_1b38[0] || local_3640 != (char *)0x1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("numsize == 1 && n < d","../stdlib/strtod_l.c",0x5d8,
                      "____strtof128_l_internal");
      }
      uVar70 = local_3638[2];
      puVar78 = local_36a8;
      uVar95 = local_3638[0];
      bVar42 = false;
      bVar92 = false;
      while( true ) {
        while( true ) {
          uVar82 = uVar95;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_1b38[0];
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar70;
          uVar95 = 0;
          uVar70 = SUB168((auVar17 << 0x40) % auVar7,0);
          if (iVar56 != 0) break;
          puVar78 = (ulong *)((long)puVar78 - 0x40);
          local_3658 = 0;
          bVar42 = bVar91;
          bVar92 = bVar91;
        }
        if (0x31 < iVar56) break;
        iVar56 = iVar56 + 0x40;
        local_3658 = uVar82;
        bVar42 = bVar91;
      }
      if (bVar42) {
        local_3648 = (ulong)local_36a8;
        local_3638[0] = uVar82;
        local_3638[1] = local_3658;
        if (bVar92) {
          local_3648 = (ulong)puVar78;
        }
      }
      else if (bVar92) {
        local_3648 = (ulong)puVar78;
      }
      if (iVar56 != 0x71) {
        __mpn_lshift(local_3638,local_3638,2);
        local_3638[0] = local_3638[0] | 0UL >> ((char)iVar56 - 0x31U & 0x3f);
      }
      iVar56 = iVar56 + -0x32;
      bVar93 = uVar70 != 0 || bVar93;
      lVar59 = local_3648 - 1;
    }
    else if (pcVar76 == &_nl_current_LC_PAPER_used) {
      uVar82 = local_3638[3];
      uVar70 = local_3638[2];
      if (1 < (long)local_3640) {
LAB_0078a906:
        local_36b8 = local_3638;
        bVar42 = false;
        bVar91 = false;
        uVar68 = local_3638[0];
        uVar95 = local_3638[0];
        uVar86 = local_3648;
        if (local_1b38[1] != uVar82) goto LAB_0078a976;
LAB_0078a930:
        uVar82 = uVar70 + local_1b38[1];
        if (!CARRY8(uVar70,local_1b38[1])) {
          uVar70 = 0xffffffffffffffff;
          auVar16._8_8_ = (local_1b38[0] - 1) + (ulong)(local_1b38[0] == 0);
          auVar16._0_8_ = -local_1b38[0];
          goto LAB_0078a990;
        }
        uVar82 = uVar82 - local_1b38[0];
        uVar95 = 0xffffffffffffffff;
        uVar70 = local_1b38[0];
        if (iVar56 != 0) goto LAB_0078a9d0;
        iVar56 = 0x40;
        uVar95 = 0xffffffffffffffff;
LAB_0078a963:
        bVar42 = true;
        local_3650 = 0;
        do {
          bVar91 = true;
          uVar68 = uVar95;
          if (local_1b38[1] == uVar82) goto LAB_0078a930;
LAB_0078a976:
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_1b38[1];
          auVar10._8_8_ = uVar82;
          auVar10._0_8_ = uVar70;
          uVar70 = SUB168(auVar10 / auVar8,0);
          uVar82 = SUB168(auVar10 % auVar8,0);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_1b38[0];
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar70;
          auVar16 = auVar12 * auVar14;
          uVar68 = uVar95;
LAB_0078a990:
          do {
            uVar61 = auVar16._8_8_;
            uVar69 = auVar16._0_8_;
            if ((uVar61 <= uVar82) && ((uVar95 = uVar70, uVar61 != uVar82 || (uVar69 == 0)))) break;
            uVar70 = uVar70 - 1;
            auVar16._8_8_ = uVar61 - (uVar69 < local_1b38[0]);
            auVar16._0_8_ = uVar69 - local_1b38[0];
            bVar92 = CARRY8(uVar82,local_1b38[1]);
            uVar82 = uVar82 + local_1b38[1];
            uVar95 = uVar70;
          } while (!bVar92);
          uVar70 = -auVar16._0_8_;
          uVar82 = (uVar82 - auVar16._8_8_) - (ulong)(auVar16._0_8_ != 0);
          if (iVar56 == 0) goto code_r0x0078a9bc;
LAB_0078a9d0:
          if (0x31 < iVar56) {
            if (bVar91) {
              local_3638[0] = uVar68;
              local_3638[1] = local_3650;
              if (bVar42) {
                local_3648 = uVar86;
              }
            }
            else if (bVar42) {
              local_3648 = uVar86;
            }
            uVar83 = 0x71 - iVar56;
            if (uVar83 != 0) {
              __mpn_lshift(local_36b8,local_36b8,2,uVar83);
              local_3638[0] = local_3638[0] | uVar95 >> ((char)iVar56 - 0x31U & 0x3f);
            }
            uVar82 = uVar82 | uVar70;
            goto LAB_0078aa06;
          }
          iVar56 = iVar56 + 0x40;
          local_3650 = uVar68;
        } while( true );
      }
      if (local_1b38[1] <= local_3638[2]) {
        uVar82 = 0;
        goto LAB_0078a906;
      }
      if (iVar56 == 0) {
        local_3648 = (long)local_36a8 - 0x40;
        uVar82 = local_3638[2];
        uVar70 = 0;
        goto LAB_0078a906;
      }
      if (iVar56 < 0x32) {
        local_3638[1] = local_3638[0];
        local_3638[0] = 0;
      }
      else {
        uVar83 = 0x71 - iVar56;
        if (uVar83 != 0) {
          __mpn_lshift(local_3638,local_3638,2);
        }
      }
      iVar56 = iVar56 + 0x40;
      uVar95 = 0;
      uVar82 = local_3638[2];
      uVar70 = uVar95;
      if (iVar56 < 0x72) goto LAB_0078a906;
LAB_0078aa06:
      iVar56 = 0x3f - uVar83;
      bVar93 = uVar82 != 0 || bVar93;
      lVar59 = local_3648 - 1;
    }
    else {
      uVar70 = local_1b38[(long)pcVar81];
      uVar82 = local_1b38[(long)(pcVar76 + -2)];
      iVar55 = __mpn_cmp(puVar78);
      uVar95 = local_3638[0];
      if (-1 < iVar55) {
        local_3638[(long)local_3640 + 2] = 0;
        local_3640 = local_3640 + 1;
      }
      pcVar5 = local_3640;
      uVar57 = (uint)pcVar76;
      if ((long)local_3640 < (long)pcVar76) {
        lVar59 = (long)pcVar76 - (long)local_3640;
        if (iVar56 == 0) {
          local_3648 = local_3648 + lVar59 * -0x40;
          uVar64 = (uint)local_3640;
          uVar83 = 0;
        }
        else {
          if (lVar59 * 0x40 + (long)local_36a8 < 0x72) {
            if (lVar59 != 1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("empty == 1","../stdlib/strtod_l.c",0x686,"____strtof128_l_internal");
            }
            local_3638[0] = 0;
            local_3638[1] = uVar95;
          }
          else {
            uVar83 = 0x71 - iVar56;
            if ((int)uVar83 < 0x40) {
              if (uVar83 != 0) {
                __mpn_lshift(local_3638,local_3638,2,uVar83);
              }
            }
            else {
              __mpn_lshift(local_3638 + 1,local_3638,1,uVar83 & 0x3f);
              local_3638[0] = 0;
            }
          }
          uVar64 = (uint)local_3640;
          iVar56 = iVar56 + (int)lVar59 * 0x40;
        }
        if (0 < (int)uVar64) {
          uVar95 = (long)pcVar76 - (long)pcVar5;
          if (((uVar95 & 0x1fffffffffffffff) == 0x1ffffffffffffffe) || (uVar64 - 1 < 3)) {
            puVar73 = puVar78 + (int)uVar64;
            do {
              puVar73[uVar95] = puVar73[-1];
              puVar73 = puVar73 + -1;
            } while (local_3638 + (long)(int)uVar64 + (1 - (ulong)(uVar64 - 1)) != puVar73);
          }
          else {
            lVar67 = 0;
            do {
              puVar3 = (undefined8 *)((long)local_3638 + lVar67 + (long)(int)uVar64 * 8);
              uVar94 = puVar3[1];
              puVar4 = (undefined8 *)
                       ((long)local_3638 + lVar67 + ((long)(int)uVar64 + uVar95) * 8 + 8);
              *puVar4 = *puVar3;
              puVar4[1] = uVar94;
              lVar67 = lVar67 + -0x10;
            } while (lVar67 != (ulong)(uVar64 >> 1) * -0x10);
            iVar55 = uVar64 - (uVar64 & 0xfffffffe);
            if ((uVar64 & 0xfffffffe) != uVar64) {
              local_3638[iVar55 + lVar59 + 2] = local_3638[(long)(iVar55 + -1) + 2];
            }
          }
        }
        memset(puVar78,0,lVar59 * 8 + 8);
        local_1b38[(long)pcVar76] = 0;
        uVar68 = local_3638[(long)pcVar76 + 2];
        if (iVar56 < 0x72) goto LAB_00789b2f;
        uVar95 = 0;
      }
      else {
        if (pcVar76 != local_3640) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("numsize == densize","../stdlib/strtod_l.c",0x6ab,"____strtof128_l_internal"
                       );
        }
        if (0 < (int)uVar57) {
          lVar59 = (long)(int)uVar57;
          memmove(puVar78 + (lVar59 - (int)(uVar57 - 1)),
                  puVar78 + lVar59 + (-1 - (long)(int)(uVar57 - 1)),lVar59 * 8);
        }
        local_3638[2] = 0;
        uVar68 = local_3638[(long)pcVar76 + 2];
        local_1b38[(long)pcVar76] = 0;
LAB_00789b2f:
        iVar55 = uVar57 - 1;
        uVar86 = (ulong)(uVar57 - 2);
joined_r0x00789b82:
        uVar95 = 0xffffffffffffffff;
        if (uVar70 != uVar68) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar70;
          auVar9._8_8_ = uVar68;
          auVar9._0_8_ = local_3638[(long)pcVar81 + 2];
          uVar95 = SUB168(auVar9 / auVar6,0);
          uVar68 = SUB168(auVar9 % auVar6,0);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar82;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar95;
          auVar15 = auVar11 * auVar13;
          while( true ) {
            uVar69 = auVar15._8_8_;
            uVar61 = auVar15._0_8_;
            if ((uVar69 <= uVar68) &&
               ((uVar69 != uVar68 || (uVar61 <= local_3638[(long)(pcVar76 + -2) + 2])))) break;
            uVar95 = uVar95 - 1;
            bVar91 = CARRY8(uVar68,uVar70);
            uVar68 = uVar68 + uVar70;
            if (bVar91) break;
            auVar15._8_8_ = uVar69 - (uVar61 < uVar82);
            auVar15._0_8_ = uVar61 - uVar82;
          }
        }
        lVar59 = __mpn_submul_1(puVar78,local_1b38,pcVar76 + 1,uVar95);
        if (local_3638[(long)pcVar76 + 2] != lVar59) {
          lVar59 = __mpn_add_n(puVar78,puVar78,local_1b38,pcVar76);
          if (lVar59 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("cy != 0","../stdlib/strtod_l.c",0x6d5,"____strtof128_l_internal");
          }
          uVar95 = uVar95 - 1;
        }
        uVar68 = local_3638[(long)pcVar81 + 2];
        local_3638[(long)pcVar76 + 2] = uVar68;
        if (0 < iVar55) {
          memmove(puVar78 + ((long)iVar55 - uVar86),puVar78 + (long)iVar55 + (-1 - uVar86),
                  uVar86 * 8 + 8);
        }
        uVar61 = local_3638[0];
        local_3638[2] = 0;
        if (iVar56 == 0) {
          lVar59 = 0x40;
          if (uVar95 != 0) {
            lVar59 = 0x3f;
            if (uVar95 != 0) {
              for (; uVar95 >> lVar59 == 0; lVar59 = lVar59 + -1) {
              }
            }
            uVar83 = (uint)lVar59 ^ 0x3f;
            iVar56 = 0x40 - uVar83;
            lVar59 = (long)(int)uVar83;
          }
          local_3638[0] = uVar95;
          local_3648 = local_3648 - lVar59;
          local_3638[1] = 0;
          goto joined_r0x00789b82;
        }
        if (iVar56 < 0x32) {
          iVar56 = iVar56 + 0x40;
          local_3638[0] = uVar95;
          local_3638[1] = uVar61;
          goto joined_r0x00789b82;
        }
        uVar83 = 0x71 - iVar56;
        if (uVar83 != 0) {
          __mpn_lshift(local_3638,local_3638,2,uVar83);
          local_3638[0] = local_3638[0] | uVar95 >> ((char)iVar56 - 0x31U & 0x3f);
        }
      }
      uVar70 = (ulong)pcVar76 & 0xffffffff;
      if (-1 < (int)uVar57) {
        puVar78 = puVar78 + (int)uVar57;
        do {
          uVar57 = (uint)uVar70;
          if (*puVar78 != 0) break;
          uVar57 = uVar57 - 1;
          uVar70 = (ulong)uVar57;
          puVar78 = puVar78 + -1;
        } while (uVar57 != 0xffffffff);
      }
      iVar56 = 0x3f - uVar83;
      bVar93 = (bool)((byte)~(byte)(uVar57 >> 0x18) >> 7 | bVar93);
      lVar59 = local_3648 - 1;
    }
    local_36b8 = local_3638;
    uVar95 = round_and_return(local_36b8,lVar59,iVar50,uVar95,(long)iVar56,bVar93);
    goto LAB_00789290;
  }
  lVar67 = (long)*pcVar84;
  lVar59 = *(long *)(param_4 + 0x68);
  bVar66 = *(byte *)(lVar59 + 1 + lVar67 * 2);
  while ((bVar66 & 0x10) == 0) {
    lVar67 = (long)pcVar84[1];
    pcVar84 = pcVar84 + 1;
    bVar66 = *(byte *)(lVar59 + 1 + lVar67 * 2);
  }
  while( true ) {
    pcVar84 = pcVar84 + 1;
    if ((char)lVar67 != '0') break;
    lVar67 = (long)*pcVar84;
  }
  uVar57 = (int)(char)lVar67 - 0x30;
  if (9 < uVar57) {
    uVar57 = *(int *)(*(long *)(param_4 + 0x70) + lVar67 * 4) - 0x57;
  }
  iVar56 = *(int *)(nbits_1 + (long)(int)uVar57 * 4);
  if (iVar56 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("bits != 0","../stdlib/strtod_l.c",1099,"____strtof128_l_internal");
  }
  iVar55 = 0x30 - iVar56;
  uVar95 = (long)(int)uVar57 << (0x31U - (char)iVar56 & 0x3f);
  if ((long)local_3648 < 0) {
    lVar67 = -0x8000000000000000 - (long)iVar56;
  }
  else {
    lVar67 = (0x7fffffffffffffff - local_3648) - (long)iVar56;
    lVar75 = lVar67 + 1;
    lVar67 = lVar67 + 4;
    if (-1 < lVar75) {
      lVar67 = lVar75;
    }
  }
  local_3638[1] = uVar95;
  if ((char *)(lVar67 >> 2) < pcVar80) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("int_no <= (uintmax_t) (exponent < 0 ? (INTMAX_MAX - bits + 1) / 4 : (INTMAX_MAX - exponent - bits + 1) / 4)"
                  ,"../stdlib/strtod_l.c",0x45e,"____strtof128_l_internal");
  }
  iVar63 = 1;
  local_3648 = (long)(iVar56 + -1) + -4 + (long)pcVar80 * 4 + local_3648;
  pcVar85 = pcVar85 + -1;
  if (pcVar85 == (char *)0x0) {
LAB_0078a299:
    local_3638[0] = 0;
  }
  else {
    do {
      lVar67 = (long)*pcVar84;
      if ((*(byte *)(lVar59 + 1 + lVar67 * 2) & 0x10) == 0) {
        pcVar84 = pcVar84 + sVar58;
        lVar67 = (long)*pcVar84;
      }
      pcVar84 = pcVar84 + 1;
      uVar57 = (int)(char)lVar67 - 0x30;
      if (9 < uVar57) {
        uVar57 = *(int *)(*(long *)(param_4 + 0x70) + lVar67 * 4) - 0x57;
      }
      uVar70 = (ulong)(int)uVar57;
      cVar54 = (char)iVar55;
      if (iVar55 < 3) {
        uVar82 = uVar70 >> (3U - cVar54 & 0x3f) | uVar95;
        uVar95 = uVar70 << (cVar54 + 0x3dU & 0x3f);
        local_3638[iVar63] = uVar82;
        if (iVar63 == 0) {
          uVar79 = 0;
          if (pcVar85 + -1 == (char *)0x0) goto LAB_0078aac5;
          pcVar76 = pcVar84 + (long)(pcVar85 + -1);
          goto LAB_0078aab9;
        }
        iVar55 = iVar55 + 0x3c;
        iVar63 = 0;
        local_3638[0] = uVar95;
      }
      else {
        iVar55 = iVar55 + -4;
        uVar95 = uVar95 | uVar70 << (cVar54 - 3U & 0x3f);
        local_3638[iVar63] = uVar95;
      }
      pcVar85 = pcVar85 + -1;
    } while (pcVar85 != (char *)0x0);
    if (iVar63 == 1) goto LAB_0078a299;
  }
  uVar95 = round_and_return(local_3638,local_3648,iVar50,0,0,0);
  goto LAB_00789290;
LAB_007896e3:
  pcVar84 = pcVar84 + (long)(pcVar65 + sVar58);
  if (iVar56 == 0x10) {
    if ((ulong)pcVar65 >> 0x3d != 0) goto LAB_0078b76c;
    if ((char *)(local_3648 + 0x8000000000000000 >> 2) < pcVar65) goto LAB_0078b4f2;
    pcVar76 = (char *)((long)pcVar65 * 4);
  }
  else {
    if ((long)pcVar65 < 0) {
LAB_0078b76c:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? (uintmax_t) INTMAX_MAX / 4 : (uintmax_t) INTMAX_MAX)"
                    ,"../stdlib/strtod_l.c",0x42d,"____strtof128_l_internal");
    }
    pcVar76 = pcVar65;
    if ((char *)(local_3648 + 0x8000000000000000) < pcVar65) {
LAB_0078b4f2:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN) / 4 : ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN))"
                    ,"../stdlib/strtod_l.c",0x430,"____strtof128_l_internal");
    }
  }
  local_3648 = local_3648 - (long)pcVar76;
  pcVar85 = pcVar85 + -(long)pcVar65;
  goto LAB_0078972a;
code_r0x0078a9bc:
  if (uVar95 == 0) {
    uVar86 = uVar86 - 0x40;
    uVar95 = 0;
  }
  else {
    lVar59 = 0x3f;
    if (uVar95 != 0) {
      for (; uVar95 >> lVar59 == 0; lVar59 = lVar59 + -1) {
      }
    }
    uVar57 = (uint)lVar59 ^ 0x3f;
    iVar56 = 0x40 - uVar57;
    uVar86 = uVar86 - (long)(int)uVar57;
  }
  goto LAB_0078a963;
  while (pcVar84 = pcVar84 + 1, pcVar84 != pcVar76) {
LAB_0078aab9:
    if (*pcVar84 != '0') {
      uVar79 = 1;
      break;
    }
  }
LAB_0078aac5:
  uVar95 = round_and_return(local_3638,local_3648,iVar50,uVar95,0x3f,uVar79);
  goto LAB_00789290;
}

