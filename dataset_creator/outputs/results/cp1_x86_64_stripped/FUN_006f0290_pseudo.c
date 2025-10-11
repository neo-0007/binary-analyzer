
/* WARNING: Removing unreachable block (ram,0x006f1a4a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f0290(char *param_1,long *param_2,int param_3,long param_4)

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
  long lVar52;
  char cVar53;
  int iVar54;
  int iVar55;
  uint uVar56;
  long lVar57;
  long lVar58;
  char *pcVar59;
  ulong uVar61;
  ulong uVar62;
  long lVar63;
  long lVar64;
  int iVar65;
  uint uVar66;
  char *pcVar67;
  byte bVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong *puVar72;
  char cVar73;
  long *plVar74;
  char cVar75;
  char *pcVar76;
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
  char *pcVar60;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar57 = *(long *)(param_4 + 8);
  pcVar76 = (char *)0x0;
  pcVar85 = (char *)0x0;
  if (param_3 != 0) {
    pcVar76 = *(char **)(lVar57 + 0x50);
    if ((byte)(*pcVar76 - 1U) < 0x7e) {
      pcVar85 = *(char **)(lVar57 + 0x48);
      if (**(char **)(lVar57 + 0x48) == '\0') {
        pcVar76 = (char *)0x0;
        pcVar85 = (char *)0x0;
      }
    }
    else {
      pcVar76 = (char *)0x0;
      pcVar85 = (char *)0x0;
    }
  }
  pcVar5 = *(char **)(lVar57 + 0x40);
  lVar57 = thunk_FUN_007129d0(pcVar5);
  if (lVar57 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("decimal_len > 0","../stdlib/strtod_l.c",0x255,"____strtold_l_internal");
  }
  local_3610 = 0;
  pcVar80 = param_1 + -1;
  do {
    pcVar81 = pcVar80;
    cVar53 = pcVar81[1];
    lVar58 = (long)cVar53;
    pcVar80 = pcVar81 + 1;
  } while ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + lVar58 * 2) & 0x20) != 0);
  if (cVar53 == '-') {
    lVar58 = (long)pcVar81[2];
    uVar50 = 1;
    pcVar80 = pcVar81 + 2;
  }
  else {
    uVar50 = 0;
    if (cVar53 == '+') {
      lVar58 = (long)pcVar81[2];
      pcVar80 = pcVar81 + 2;
    }
  }
  cVar53 = *pcVar5;
  cVar73 = (char)lVar58;
  cVar75 = cVar73;
  if (cVar53 != '\0') {
    lVar63 = 0;
    cVar75 = cVar53;
    do {
      if (pcVar80[lVar63] != cVar75) goto LAB_006f0394;
      lVar63 = lVar63 + 1;
      cVar75 = pcVar5[lVar63];
    } while (cVar75 != '\0');
    cVar75 = pcVar80[lVar63];
  }
  if (9 < (byte)(cVar75 - 0x30U)) {
LAB_006f0394:
    if (9 < (byte)(cVar73 - 0x30U)) {
      if ((char)*(undefined4 *)(PTR_DAT_00939cb0 + lVar58 * 4) == 'i') {
        iVar55 = thunk_FUN_00713a00(pcVar80,&DAT_00824f44,3,&PTR_PTR_00939c40);
        if (iVar55 == 0) {
          if (param_2 != (long *)0x0) {
            iVar55 = thunk_FUN_00713a00(pcVar80 + 3,"inity",5,&PTR_PTR_00939c40);
            pcVar76 = pcVar80 + 3;
            if (iVar55 == 0) {
              pcVar76 = pcVar80 + 8;
            }
            *param_2 = (long)pcVar76;
          }
          goto LAB_006f03cd;
        }
      }
      else if (((char)*(undefined4 *)(PTR_DAT_00939cb0 + lVar58 * 4) == 'n') &&
              (iVar55 = thunk_FUN_00713a00(pcVar80,&DAT_00824f48,3,&PTR_PTR_00939c40), iVar55 == 0))
      {
        pcVar76 = pcVar80 + 3;
        if (pcVar80[3] == '(') {
          FUN_006f2760(pcVar80 + 4,&local_3608,0x29);
          if (*local_3608 == ')') {
            pcVar76 = local_3608 + 1;
          }
        }
        if (param_2 != (long *)0x0) {
          *param_2 = (long)pcVar76;
        }
        goto LAB_006f03cd;
      }
LAB_006f03bd:
      if (param_2 != (long *)0x0) {
        *param_2 = (long)param_1;
      }
      goto LAB_006f03cd;
    }
  }
  lVar63 = *(long *)(param_4 + 0x70);
  local_3678 = pcVar80;
  if (cVar73 == '0') {
    if (*(int *)(lVar63 + (long)pcVar80[1] * 4) == 0x78) {
      pcVar81 = pcVar80 + 2;
      lVar58 = (long)pcVar80[2];
      local_3678 = pcVar81;
      if (pcVar85 != (char *)0x0) {
        iVar55 = 0x10;
        pcVar76 = (char *)0x0;
        goto LAB_006f0429;
      }
      pcVar76 = (char *)0x0;
      if (pcVar80[2] == '0') {
        iVar55 = 0x10;
        goto LAB_006f0e30;
      }
      iVar55 = 0x10;
    }
    else {
      iVar55 = 10;
      pcVar81 = pcVar80;
      if (pcVar85 != (char *)0x0) {
LAB_006f0429:
        cVar73 = (char)lVar58;
        pcVar81 = local_3678;
        do {
          if (cVar73 != '0') {
            if (*pcVar85 == '\0') {
              lVar64 = -1;
            }
            else {
              lVar52 = 0;
              cVar73 = *pcVar85;
              do {
                lVar64 = lVar52;
                if (pcVar81[lVar64] != cVar73) goto LAB_006f0472;
                cVar73 = pcVar85[lVar64 + 1];
                lVar52 = lVar64 + 1;
              } while (cVar73 != '\0');
            }
            pcVar81 = pcVar81 + lVar64;
          }
          cVar73 = pcVar81[1];
          lVar58 = (long)cVar73;
          pcVar81 = pcVar81 + 1;
        } while( true );
      }
LAB_006f0e30:
      do {
        pcVar80 = pcVar81 + 1;
        lVar58 = (long)*pcVar80;
        pcVar81 = pcVar81 + 1;
      } while (*pcVar80 == '0');
    }
LAB_006f0472:
    cVar75 = (char)*(undefined4 *)(lVar63 + (long)(char)lVar58 * 4);
    pcVar80 = pcVar81;
    if ((byte)((char)lVar58 - 0x30U) < 10) goto LAB_006f04a8;
    bVar91 = iVar55 != 0x10;
    if ((5 < (byte)(cVar75 + 0x9fU)) || (bVar91)) goto LAB_006f05d0;
  }
  else {
    if (pcVar85 != (char *)0x0) {
      iVar55 = 10;
      goto LAB_006f0429;
    }
    iVar55 = 10;
    cVar75 = (char)*(undefined4 *)(lVar63 + (long)cVar73 * 4);
    bVar91 = true;
    if ((byte)(cVar73 - 0x30U) < 10) goto LAB_006f04a8;
LAB_006f05d0:
    if (cVar53 != '\0') {
      lVar64 = 0;
      cVar73 = cVar53;
      do {
        if (pcVar80[lVar64] != cVar73) {
          if (bVar91) {
            if (cVar75 == 'e') goto LAB_006f04a8;
            goto LAB_006f1084;
          }
          if ((pcVar80 == local_3678) || (cVar75 != 'p')) goto LAB_006f1084;
          goto LAB_006f04a8;
        }
        lVar64 = lVar64 + 1;
        cVar73 = pcVar5[lVar64];
      } while (cVar73 != '\0');
    }
    if ((iVar55 != 0x10) || (pcVar80 != local_3678)) goto LAB_006f04a8;
    if ((9 < (byte)(pcVar80[lVar57] - 0x30U)) &&
       (5 < (byte)((char)*(undefined4 *)(lVar63 + (long)pcVar80[lVar57] * 4) + 0x9fU))) {
LAB_006f1084:
      pcVar76 = (char *)FUN_006f4720(local_3678,pcVar80,pcVar85);
      if (param_2 != (long *)0x0) {
        if ((pcVar76 == local_3678) && (pcVar76 = pcVar80 + -1, iVar55 != 0x10)) {
          pcVar76 = param_1;
        }
        *param_2 = (long)pcVar76;
      }
      goto LAB_006f03cd;
    }
  }
  iVar55 = 0x10;
LAB_006f04a8:
  pcVar79 = (char *)0x0;
  pcVar81 = pcVar80;
  do {
    if (((byte)((char)lVar58 - 0x30U) < 10) ||
       ((iVar55 == 0x10 &&
        ((byte)((char)*(undefined4 *)(lVar63 + (long)(char)lVar58 * 4) + 0x9fU) < 6)))) {
      pcVar79 = pcVar79 + 1;
    }
    else {
      if (pcVar85 == (char *)0x0) break;
      cVar73 = *pcVar85;
      if (cVar73 == '\0') {
        lVar64 = -1;
      }
      else {
        lVar52 = 0;
        do {
          lVar64 = lVar52;
          if (pcVar81[lVar64] != cVar73) goto LAB_006f04cd;
          cVar73 = pcVar85[lVar64 + 1];
          lVar52 = lVar64 + 1;
        } while (cVar73 != '\0');
      }
      pcVar81 = pcVar81 + lVar64;
    }
    lVar58 = (long)pcVar81[1];
    pcVar81 = pcVar81 + 1;
  } while( true );
LAB_006f04cd:
  if ((pcVar76 == (char *)0x0) || (pcVar81 <= local_3678)) {
LAB_006f04dd:
    pcVar67 = (char *)-(ulong)(pcVar79 == (char *)0x0);
    pcVar84 = pcVar79;
    if (cVar53 != '\0') {
      lVar63 = 0;
      do {
        if (pcVar81[lVar63] != cVar53) goto LAB_006f050a;
        lVar63 = lVar63 + 1;
        cVar53 = pcVar5[lVar63];
      } while (cVar53 != '\0');
    }
    pcVar81 = pcVar81 + lVar57;
    lVar58 = (long)*pcVar81;
    if (iVar55 == 0x10) {
      pcVar76 = (char *)0x0;
      lVar63 = (long)pcVar79 - (long)pcVar81;
      while( true ) {
        cVar53 = (char)lVar58;
        pcVar84 = pcVar81 + lVar63;
        if ((9 < (byte)(cVar53 - 0x30U)) &&
           (5 < (byte)((char)*(undefined4 *)(*(long *)(param_4 + 0x70) + (long)cVar53 * 4) + 0x9fU))
           ) break;
        if ((cVar53 != '0') && (pcVar67 == (char *)0xffffffffffffffff)) {
          pcVar67 = pcVar76;
        }
        lVar58 = (long)pcVar81[1];
        pcVar81 = pcVar81 + 1;
        pcVar76 = pcVar76 + 1;
      }
LAB_006f050a:
      if ((long)pcVar84 < 0) {
LAB_006f25ae:
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("dig_no <= (uintmax_t) INTMAX_MAX","../stdlib/strtod_l.c",0x36a,
                     "____strtold_l_internal");
      }
      cVar53 = (char)*(undefined4 *)(*(long *)(param_4 + 0x70) + lVar58 * 4);
      pcVar76 = pcVar81;
      if (iVar55 != 0x10) goto LAB_006f075d;
      if (cVar53 != 'p') goto LAB_006f0757;
LAB_006f052e:
      cVar53 = pcVar81[1];
      uVar61 = local_3610;
      pcVar76 = pcVar81;
      if (cVar53 == '-') {
        cVar53 = pcVar81[2];
        if ((byte)(cVar53 - 0x30U) < 10) {
          pcVar76 = pcVar81 + 2;
          if (iVar55 == 0x10) {
            if ((char *)0x1fffffffffffeff0 < pcVar79) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("int_no <= (uintmax_t) (INTMAX_MAX + MIN_EXP - MANT_DIG) / 4",
                           "../stdlib/strtod_l.c",0x388,"____strtold_l_internal");
            }
            local_3678 = (char *)((long)pcVar79 * 4 + 0x403d);
            bVar91 = true;
          }
          else {
            if ((char *)0x7fffffffffffec7c < pcVar79) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("int_no <= (uintmax_t) (INTMAX_MAX + MIN_10_EXP - MANT_DIG)",
                           "../stdlib/strtod_l.c",0x3a8,"____strtold_l_internal");
            }
            local_3678 = pcVar79 + 0x1383;
            bVar91 = true;
          }
          goto LAB_006f1117;
        }
      }
      else if (cVar53 == '+') {
        cVar53 = pcVar81[2];
        if ((byte)(cVar53 - 0x30U) < 10) {
          pcVar76 = pcVar81 + 2;
          if (iVar55 == 0x10) goto LAB_006f0e63;
LAB_006f0562:
          if (pcVar79 == (char *)0x0) {
            if (pcVar67 == (char *)0xffffffffffffffff) {
              local_3678 = (char *)0x3;
              uVar71 = 0x1ed;
              bVar91 = false;
              goto LAB_006f117d;
            }
            if ((char *)0x7fffffffffffecba < pcVar67) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_10_EXP - 1)",
                           "../stdlib/strtod_l.c",0x3bc,"____strtold_l_internal");
            }
            local_3678 = pcVar67 + 0x1345;
            bVar91 = false;
          }
          else {
            if ((pcVar67 != (char *)0x0) || ((long)pcVar79 < 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX",
                           "../stdlib/strtod_l.c",0x3b0,"____strtold_l_internal");
            }
            bVar91 = false;
            local_3678 = (char *)(0x1345 - (long)pcVar79);
          }
          goto LAB_006f1117;
        }
      }
      else if ((byte)(cVar53 - 0x30U) < 10) {
        pcVar76 = pcVar81 + 1;
        if (iVar55 != 0x10) goto LAB_006f0562;
LAB_006f0e63:
        if (pcVar79 == (char *)0x0) {
          if (pcVar67 != (char *)0xffffffffffffffff) {
            if ((char *)0x1fffffffffffefff < pcVar67) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_EXP - 3) / 4",
                           "../stdlib/strtod_l.c",0x39c,"____strtold_l_internal");
            }
            local_3678 = (char *)((long)pcVar67 * 4 + 0x4003);
            bVar91 = false;
            goto LAB_006f1117;
          }
          local_3678 = (char *)0x7;
          uVar71 = 0x666;
          bVar91 = false;
        }
        else {
          if ((pcVar67 != (char *)0x0) || ((ulong)pcVar79 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX / 4",
                         "../stdlib/strtod_l.c",0x390,"____strtold_l_internal");
          }
          bVar91 = false;
          local_3678 = (char *)((0x1000 - (long)pcVar79) * 4 + 3);
LAB_006f1117:
          if ((long)local_3678 < 0) {
            local_3678 = (char *)0x0;
          }
          uVar71 = (ulong)local_3678 / 10;
          local_3678 = (char *)((ulong)local_3678 % 10);
        }
LAB_006f117d:
        do {
          if (((long)uVar71 < (long)uVar61) ||
             ((uVar61 == uVar71 && ((long)local_3678 < (long)(char)(cVar53 + -0x30))))) {
            if (pcVar67 != (char *)0xffffffffffffffff) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
            }
            do {
              pcVar85 = pcVar76 + 1;
              pcVar76 = pcVar76 + 1;
            } while ((byte)(*pcVar85 - 0x30U) < 10);
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pcVar76;
            }
            goto LAB_006f03cd;
          }
          pcVar76 = pcVar76 + 1;
          uVar61 = (long)(char)(cVar53 + -0x30) + uVar61 * 10;
          cVar53 = *pcVar76;
        } while ((byte)(cVar53 - 0x30U) < 10);
        local_3610 = uVar61;
        if (bVar91) {
          local_3610 = -uVar61;
        }
      }
    }
    else {
      pcVar76 = pcVar81;
      if ((byte)(*pcVar81 - 0x30U) < 10) {
        do {
          pcVar76 = pcVar76 + 1;
          if ((pcVar67 == (char *)0xffffffffffffffff) && ((char)lVar58 != '0')) {
            pcVar67 = pcVar76 + (-1 - (long)pcVar81);
          }
          lVar58 = (long)*pcVar76;
          pcVar84 = pcVar76 + ((long)pcVar79 - (long)pcVar81);
        } while ((byte)(*pcVar76 - 0x30U) < 10);
      }
      if ((long)pcVar84 < 0) goto LAB_006f25ae;
      cVar53 = *(char *)(*(long *)(param_4 + 0x70) + lVar58 * 4);
LAB_006f0757:
      pcVar81 = pcVar76;
      if (iVar55 != 0x10) {
LAB_006f075d:
        pcVar81 = pcVar76;
        if (cVar53 == 'e') goto LAB_006f052e;
      }
    }
    pcVar59 = pcVar81;
    if (pcVar79 < pcVar84) {
      pcVar60 = pcVar81;
      if (pcVar81[-1] != '0') goto LAB_006f07c8;
      do {
        pcVar59 = pcVar60 + -1;
        pcVar2 = pcVar59 + (long)pcVar84;
        pcVar1 = pcVar60 + -2;
        pcVar60 = pcVar59;
      } while (*pcVar1 == '0');
      pcVar84 = pcVar2 + -(long)pcVar81;
      if (pcVar2 + -(long)pcVar81 < pcVar79) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("dig_no >= int_no","../stdlib/strtod_l.c",0x3fc,"____strtold_l_internal");
      }
    }
    uVar61 = local_3610;
    if ((pcVar84 == pcVar79) && (pcVar84 != (char *)0x0)) {
      if ((long)local_3610 < 0) {
        pcVar59 = pcVar59 + -1;
        bVar68 = 0;
        if (iVar55 != 0x10) {
          do {
            if ((int)*pcVar59 - 0x30U < 10) {
              if (*pcVar59 != '0') goto LAB_006f1337;
              uVar61 = uVar61 + (ulong)(iVar55 == 0x10) * 3 + 1;
              pcVar79 = pcVar79 + -1;
              pcVar84 = pcVar84 + -1;
              bVar68 = pcVar84 != (char *)0x0 & (byte)(uVar61 >> 0x3f);
              if (bVar68 == 0) goto LAB_006f0df0;
            }
            pcVar59 = pcVar59 + -1;
          } while( true );
        }
        do {
          if ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + (long)*pcVar59 * 2) & 0x10) != 0) {
            if (*pcVar59 != '0') goto LAB_006f1337;
            uVar61 = uVar61 + 4;
            pcVar79 = pcVar79 + -1;
            pcVar84 = pcVar84 + -1;
            bVar68 = (byte)(uVar61 >> 0x3f) & pcVar84 != (char *)0x0;
            if (bVar68 == 0) goto LAB_006f0df0;
          }
          pcVar59 = pcVar59 + -1;
        } while( true );
      }
      goto LAB_006f07c8;
    }
  }
  else {
    pcVar76 = (char *)FUN_006f4720(local_3678,pcVar81,pcVar85);
    if (pcVar81 == pcVar76) {
      cVar53 = *pcVar5;
      goto LAB_006f04dd;
    }
    if (pcVar76 == local_3678) goto LAB_006f03bd;
    if ((pcVar76 < pcVar80) || (pcVar76 <= pcVar80)) {
      if (param_2 != (long *)0x0) {
        *param_2 = (long)pcVar76;
      }
      goto LAB_006f03cd;
    }
    uVar61 = (long)pcVar76 - (long)pcVar80;
    if (uVar61 - 1 < 0xf) {
      pcVar79 = (char *)0x0;
      pcVar81 = pcVar80;
LAB_006f1d5d:
      pcVar79 = pcVar79 + ((byte)(*pcVar81 - 0x30U) < 10);
      if (((((pcVar81 + 1 < pcVar76) &&
            (pcVar79 = pcVar79 + ((byte)(pcVar81[1] - 0x30U) < 10), pcVar81 + 2 < pcVar76)) &&
           (pcVar79 = pcVar79 + ((byte)(pcVar81[2] - 0x30U) < 10), pcVar81 + 3 < pcVar76)) &&
          ((pcVar79 = pcVar79 + ((byte)(pcVar81[3] - 0x30U) < 10), pcVar81 + 4 < pcVar76 &&
           (pcVar79 = pcVar79 + ((byte)(pcVar81[4] - 0x30U) < 10), pcVar81 + 5 < pcVar76)))) &&
         ((((pcVar79 = pcVar79 + ((byte)(pcVar81[5] - 0x30U) < 10), pcVar81 + 6 < pcVar76 &&
            ((pcVar79 = pcVar79 + ((byte)(pcVar81[6] - 0x30U) < 10), pcVar81 + 7 < pcVar76 &&
             (pcVar79 = pcVar79 + ((byte)(pcVar81[7] - 0x30U) < 10), pcVar81 + 8 < pcVar76)))) &&
           (pcVar79 = pcVar79 + ((byte)(pcVar81[8] - 0x30U) < 10), pcVar81 + 9 < pcVar76)) &&
          ((((pcVar79 = pcVar79 + ((byte)(pcVar81[9] - 0x30U) < 10), pcVar81 + 10 < pcVar76 &&
             (pcVar79 = pcVar79 + ((byte)(pcVar81[10] - 0x30U) < 10), pcVar81 + 0xb < pcVar76)) &&
            (pcVar79 = pcVar79 + ((byte)(pcVar81[0xb] - 0x30U) < 10), pcVar81 + 0xc < pcVar76)) &&
           ((pcVar79 = pcVar79 + ((byte)(pcVar81[0xc] - 0x30U) < 10), pcVar81 + 0xd < pcVar76 &&
            (pcVar79 = pcVar79 + ((byte)(pcVar81[0xd] - 0x30U) < 10), pcVar81 + 0xe < pcVar76)))))))
         ) {
        pcVar79 = pcVar79 + ((byte)(pcVar81[0xe] - 0x30U) < 10);
      }
    }
    else {
      lVar58 = 0;
      lVar63 = 0;
      pcVar81 = pcVar80;
      do {
        cVar53 = *pcVar81;
        pcVar79 = pcVar81 + 1;
        pcVar84 = pcVar81 + 2;
        pcVar67 = pcVar81 + 3;
        pcVar59 = pcVar81 + 4;
        pcVar60 = pcVar81 + 5;
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
        auVar92[0] = cVar53 + DAT_008253a0;
        auVar92[1] = *pcVar79 + UNK_008253a1;
        auVar92[2] = *pcVar84 + UNK_008253a2;
        auVar92[3] = *pcVar67 + UNK_008253a3;
        auVar92[4] = *pcVar59 + UNK_008253a4;
        auVar92[5] = *pcVar60 + UNK_008253a5;
        auVar92[6] = *pcVar1 + UNK_008253a6;
        auVar92[7] = *pcVar2 + UNK_008253a7;
        auVar92[8] = *pcVar34 + UNK_008253a8;
        auVar92[9] = *pcVar35 + UNK_008253a9;
        auVar92[10] = *pcVar36 + UNK_008253aa;
        auVar92[0xb] = *pcVar37 + UNK_008253ab;
        auVar92[0xc] = *pcVar38 + UNK_008253ac;
        auVar92[0xd] = *pcVar39 + UNK_008253ad;
        auVar92[0xe] = *pcVar40 + UNK_008253ae;
        auVar92[0xf] = *pcVar41 + UNK_008253af;
        auVar92 = psubusb(auVar92,_DAT_008253b0);
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
        auVar93 = auVar93 & _DAT_008253c0;
        uVar56 = CONCAT13(0,CONCAT12(auVar93[9],(ushort)auVar93[8]));
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
        auVar26._0_4_ = uVar56;
        auVar26[5] = 0;
        auVar26._6_7_ = SUB137(auVar46 << 0x40,6);
        auVar29._4_9_ = auVar26._4_9_;
        auVar29._0_4_ = uVar56 & 0xffff;
        auVar19._10_2_ = 0;
        auVar19._0_10_ = auVar33._0_10_;
        auVar19._12_2_ = (short)Var44;
        uVar51 = CONCAT42(auVar19._10_4_,auVar45._0_2_);
        auVar47._6_8_ = 0;
        auVar47._0_6_ = uVar51;
        auVar27._4_2_ = auVar32._2_2_;
        auVar27._0_4_ = auVar33._0_4_;
        auVar27._6_8_ = SUB148(auVar47 << 0x40,6);
        lVar58 = lVar58 + (ulong)auVar93[0xe] +
                 (ulong)(auVar33._0_4_ & 0xffff) + ((ulong)uVar51 & 0xffffffff) +
                 ((ulong)CONCAT24(auVar22._10_2_,(uint)auVar30._8_2_) & 0xffffffff) +
                 ((ulong)(uVar31 >> 0x20) & 0xffff) +
                 (auVar29._0_8_ & 0xffffffff) + ((ulong)uVar25 & 0xffffffff) +
                 ((ulong)CONCAT14(auVar93[0xd],(uint)auVar93[0xc]) & 0xffffffff);
        lVar63 = lVar63 + (ulong)auVar93[0xf] +
                 (ulong)auVar27._4_4_ + (ulong)(auVar19._10_4_ >> 0x10) +
                 (ulong)auVar22._10_2_ + (ulong)(uVar31 >> 0x30) +
                 (ulong)auVar26._4_4_ + (ulong)(uVar25 >> 0x20) + (ulong)auVar93[0xd];
      } while (pcVar80 + (uVar61 & 0xfffffffffffffff0) != pcVar81);
      pcVar79 = (char *)(lVar58 + lVar63);
      pcVar81 = pcVar80 + (uVar61 & 0xfffffffffffffff0);
      if ((uVar61 & 0xfffffffffffffff0) != uVar61) goto LAB_006f1d5d;
    }
    pcVar67 = (char *)0x0;
    pcVar84 = pcVar79;
    uVar61 = local_3610;
  }
LAB_006f0df0:
  local_3610 = uVar61;
  if (param_2 != (long *)0x0) {
LAB_006f07cf:
    *param_2 = (long)pcVar76;
  }
  if (pcVar84 == (char *)0x0) goto LAB_006f03cd;
  goto LAB_006f07df;
LAB_006f0823:
  pcVar80 = pcVar80 + (long)(pcVar67 + lVar57);
  if (iVar55 == 0x10) {
    if ((ulong)pcVar67 >> 0x3d != 0) goto LAB_006f23e5;
    if ((char *)(local_3610 + 0x8000000000000000 >> 2) < pcVar67) goto LAB_006f23c6;
    pcVar76 = (char *)((long)pcVar67 * 4);
  }
  else {
    if ((long)pcVar67 < 0) {
LAB_006f23e5:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("lead_zero <= (base == 16 ? (uintmax_t) INTMAX_MAX / 4 : (uintmax_t) INTMAX_MAX)"
                   ,"../stdlib/strtod_l.c",0x42d,"____strtold_l_internal");
    }
    pcVar76 = pcVar67;
    if ((char *)(local_3610 + 0x8000000000000000) < pcVar67) {
LAB_006f23c6:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("lead_zero <= (base == 16 ? ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN) / 4 : ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN))"
                   ,"../stdlib/strtod_l.c",0x430,"____strtold_l_internal");
    }
  }
  local_3610 = local_3610 - (long)pcVar76;
  pcVar84 = pcVar84 + -(long)pcVar67;
  goto LAB_006f086a;
  while (pcVar80 = pcVar80 + 1, pcVar80 != pcVar84) {
LAB_006f101d:
    if (*pcVar80 != '0') {
      uVar78 = 1;
      goto LAB_006f1029;
    }
  }
LAB_006f1b92:
  uVar78 = 0;
LAB_006f1029:
  FUN_006efd80(&local_3600,local_3610,uVar50,uVar71 << (cVar53 + 0x3dU & 0x3f),0x3f,uVar78);
  goto LAB_006f03cd;
code_r0x006f185b:
  uVar69 = 0xffffffffffffffff;
LAB_006f1866:
  if (bVar89) {
    local_3610 = uVar77;
  }
  if (bVar42) {
    local_3600 = local_3620;
  }
  iVar54 = 0x40 - iVar55;
  if (iVar54 != 0) {
    FUN_006f2f20(&local_3600,&local_3600,1,iVar54);
    local_3688._0_1_ = (byte)iVar55;
    local_3600 = local_3600 | uVar69 >> ((byte)local_3688 & 0x3f);
  }
  uVar61 = uVar61 | uVar71;
  goto LAB_006f18a6;
LAB_006f1337:
  if (bVar68 != 0) {
    local_3610 = uVar61;
  }
LAB_006f07c8:
  if (param_2 != (long *)0x0) goto LAB_006f07cf;
LAB_006f07df:
  if (pcVar67 != (char *)0x0) {
    do {
      if (*pcVar80 == *pcVar5) {
        if (pcVar5[1] == '\0') goto LAB_006f0823;
        lVar58 = 1;
        cVar53 = pcVar5[1];
        while (pcVar80[lVar58] == cVar53) {
          lVar58 = lVar58 + 1;
          cVar53 = pcVar5[lVar58];
          if (cVar53 == '\0') goto LAB_006f0823;
        }
      }
      pcVar80 = pcVar80 + 1;
    } while( true );
  }
LAB_006f086a:
  if (iVar55 == 0x10) {
    lVar63 = (long)*pcVar80;
    lVar58 = *(long *)(param_4 + 0x68);
    bVar68 = *(byte *)(lVar58 + 1 + lVar63 * 2);
    while ((bVar68 & 0x10) == 0) {
      lVar63 = (long)pcVar80[1];
      pcVar80 = pcVar80 + 1;
      bVar68 = *(byte *)(lVar58 + 1 + lVar63 * 2);
    }
    while( true ) {
      pcVar80 = pcVar80 + 1;
      if ((char)lVar63 != '0') break;
      lVar63 = (long)*pcVar80;
    }
    uVar56 = (int)(char)lVar63 - 0x30;
    if (9 < uVar56) {
      uVar56 = *(int *)(*(long *)(param_4 + 0x70) + lVar63 * 4) - 0x57;
    }
    iVar55 = *(int *)(&DAT_00825480 + (long)(int)uVar56 * 4);
    if (iVar55 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("bits != 0","../stdlib/strtod_l.c",1099,"____strtold_l_internal");
    }
    iVar54 = 0x3f - iVar55;
    local_3600 = (long)(int)uVar56 << (0x40U - (char)iVar55 & 0x3f);
    if ((long)local_3610 < 0) {
      lVar63 = -0x8000000000000000 - (long)iVar55;
    }
    else {
      lVar63 = (0x7fffffffffffffff - local_3610) - (long)iVar55;
      lVar64 = lVar63 + 1;
      lVar63 = lVar63 + 4;
      if (-1 < lVar64) {
        lVar63 = lVar64;
      }
    }
    if ((char *)(lVar63 >> 2) < pcVar79) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("int_no <= (uintmax_t) (exponent < 0 ? (INTMAX_MAX - bits + 1) / 4 : (INTMAX_MAX - exponent - bits + 1) / 4)"
                   ,"../stdlib/strtod_l.c",0x45e,"____strtold_l_internal");
    }
    local_3610 = (long)(iVar55 + -1) + -4 + (long)pcVar79 * 4 + local_3610;
    pcVar84 = pcVar84 + -1;
    uVar61 = local_3600;
    if (pcVar84 != (char *)0x0) {
      bVar91 = false;
      do {
        lVar63 = (long)*pcVar80;
        if ((*(byte *)(lVar58 + 1 + lVar63 * 2) & 0x10) == 0) {
          pcVar80 = pcVar80 + lVar57;
          lVar63 = (long)*pcVar80;
        }
        pcVar80 = pcVar80 + 1;
        uVar56 = (int)(char)lVar63 - 0x30;
        if (9 < uVar56) {
          uVar56 = *(int *)(*(long *)(param_4 + 0x70) + lVar63 * 4) - 0x57;
        }
        uVar71 = (ulong)(int)uVar56;
        pcVar84 = pcVar84 + -1;
        cVar53 = (char)iVar54;
        if (iVar54 < 3) {
          if (!bVar91) {
            uVar61 = local_3600;
          }
          local_3600 = uVar71 >> (3U - cVar53 & 0x3f) | uVar61;
          if (pcVar84 == (char *)0x0) goto LAB_006f1b92;
          pcVar84 = pcVar84 + (long)pcVar80;
          goto LAB_006f101d;
        }
        bVar91 = true;
        iVar54 = iVar54 + -4;
        uVar61 = uVar61 | uVar71 << (cVar53 - 3U & 0x3f);
      } while (pcVar84 != (char *)0x0);
    }
    local_3600 = uVar61;
    FUN_006efd80(&local_3600,local_3610,uVar50,0,0,0);
    goto LAB_006f03cd;
  }
  uVar61 = -(long)pcVar79;
  if (-(long)pcVar79 < (long)local_3610) {
    uVar61 = local_3610;
  }
  uVar71 = (long)pcVar84 - (long)pcVar79;
  if ((long)local_3610 < (long)pcVar84 - (long)pcVar79) {
    uVar71 = local_3610;
  }
  if ((long)local_3610 < 0) {
    uVar71 = uVar61;
  }
  pcVar79 = pcVar79 + uVar71;
  local_3610 = local_3610 - uVar71;
  if (0x1345 - (long)pcVar79 < (long)local_3610) {
LAB_006f1b9a:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    goto LAB_006f03cd;
  }
  if ((long)local_3610 < -0x1357) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    goto LAB_006f03cd;
  }
  if (pcVar79 != (char *)0x0) {
    pcVar80 = (char *)FUN_006efad0(pcVar80,(ulong)pcVar79 & 0xffffffff,local_35f8,&local_3608,
                                   &local_3610,lVar57,pcVar85);
    uVar61 = local_3610;
    pcVar76 = local_3608;
    if (0 < (long)local_3610) {
      plVar74 = &DAT_008255c0;
      iVar55 = 1;
      puVar72 = local_1b18;
      local_3688 = local_35f8;
      do {
        uVar71 = (ulong)iVar55;
        uVar61 = uVar71 & local_3610;
        puVar87 = puVar72;
        while (puVar72 = puVar87, uVar61 != 0) {
          local_3610 = uVar71 ^ local_3610;
          lVar58 = plVar74[1] + -1;
          if ((long)pcVar76 < lVar58) {
            lVar63 = FUN_006f3150(puVar72,&UNK_00825748 + *plVar74 * 8,lVar58,local_3688,pcVar76);
          }
          else {
            lVar63 = FUN_006f3150(puVar72,local_3688,pcVar76,&UNK_00825748 + *plVar74 * 8,lVar58);
          }
          pcVar76 = local_3608 + lVar58;
          local_3608 = pcVar76;
          if (lVar63 == 0) {
            pcVar76 = pcVar76 + -1;
            local_3608 = pcVar76;
          }
          iVar55 = iVar55 * 2;
          plVar74 = plVar74 + 3;
          local_3608 = pcVar76;
          if (local_3610 == 0) {
            uVar61 = 0;
            if (puVar72 == local_1b18) {
              thunk_FUN_00713a50(local_35f8,puVar72,(long)pcVar76 * 8);
            }
            goto LAB_006f16da;
          }
          uVar71 = (ulong)iVar55;
          puVar87 = local_3688;
          local_3688 = puVar72;
          uVar61 = uVar71 & local_3610;
        }
        iVar55 = iVar55 * 2;
        plVar74 = plVar74 + 3;
      } while( true );
    }
LAB_006f16da:
    puVar72 = (ulong *)((long)local_35f8 + (long)(pcVar76 + -1) * 8);
    lVar58 = 0x3f;
    if (*puVar72 != 0) {
      for (; *puVar72 >> lVar58 == 0; lVar58 = lVar58 + -1) {
      }
    }
    iVar55 = (int)pcVar76 * 0x40 - ((uint)lVar58 ^ 0x3f);
    if (0x4000 < iVar55) goto LAB_006f1b9a;
    if (0x40 < iVar55) {
      iVar54 = (int)(iVar55 - 0x40U) >> 6;
      lVar57 = (long)iVar54;
      uVar56 = iVar55 - 0x40U & 0x3f;
      if (uVar56 == 0) {
        local_3600 = local_35f8[lVar57];
        lVar57 = lVar57 + -1;
        lVar58 = 0x3f;
      }
      else {
        lVar58 = (long)(int)(uVar56 - 1);
        local_3600 = local_35f8[lVar57] >> (sbyte)uVar56;
        if (lVar57 < (long)(pcVar76 + -1)) {
          local_3600 = local_35f8[iVar54 + 1] << (0x40U - (sbyte)uVar56 & 0x3f) | local_3600;
        }
        else {
        }
      }
      if (local_35f8[0] == 0) {
        lVar64 = 1;
        do {
          lVar63 = (long)(int)lVar64;
          lVar64 = lVar64 + 1;
        } while ((&local_3600)[lVar64] == 0);
      }
      else {
        lVar63 = 0;
      }
      FUN_006efd80(&local_3600,(long)(iVar55 + -1),uVar50,local_35f8[lVar57],lVar58,
                   pcVar79 < pcVar84 || lVar63 < lVar57);
      goto LAB_006f03cd;
    }
    if (pcVar84 != pcVar79) {
      thunk_FUN_00713a50(&local_3600,local_35f8,(long)pcVar76 * 8);
      if ((pcVar84 <= pcVar79) || (0x1357 < uVar61 + 0x1357)) goto LAB_006f2532;
      if (iVar55 < 1) goto LAB_006f22e6;
      if (uVar61 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("int_no > 0 && exponent == 0","../stdlib/strtod_l.c",0x559,
                     "____strtold_l_internal");
      }
      local_3660 = (ulong)iVar55;
      iVar65 = 0;
      iVar54 = 0x41 - iVar55;
      goto LAB_006f095d;
    }
    puVar72 = &local_3600 + (1 - (long)pcVar76);
    iVar54 = (iVar55 + -1) % 0x40;
    if (iVar54 == 0x3f) {
      thunk_FUN_00713a50(puVar72,local_35f8,(long)pcVar76 * 8);
      if (0 < 1 - (long)pcVar76) goto LAB_006f212a;
    }
    else {
      FUN_006f2f20(puVar72,local_35f8,pcVar76,0x3f - iVar54);
      if ((long)local_3608 < 1) {
LAB_006f212a:
        local_3600 = 0;
      }
    }
    FUN_006efd80(&local_3600,(long)(iVar55 + -1),uVar50,0,0,0);
    goto LAB_006f03cd;
  }
  if ((pcVar84 == (char *)0x0) || (0x1357 < local_3610 + 0x1357)) {
LAB_006f2532:
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("dig_no > int_no && exponent <= 0 && exponent >= MIN_10_EXP - (DIG + 2)",
                 "../stdlib/strtod_l.c",0x54d,"____strtold_l_internal");
  }
  if (*pcVar80 == '0') {
LAB_006f22e6:
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("int_no == 0 && *startp != L_(\'0\')","../stdlib/strtod_l.c",0x55f,
                 "____strtold_l_internal");
  }
  iVar65 = (int)local_3610;
  iVar54 = (int)(((1 - local_3610) * 10) / 3) + 0x41;
  if (0x403f < iVar54) {
    iVar54 = 0x403f;
  }
  iVar54 = iVar54 + iVar65;
  if (iVar54 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("need_frac_digits > 0","../stdlib/strtod_l.c",0x574,"____strtold_l_internal");
  }
  iVar55 = 0;
  local_3660 = 0;
LAB_006f095d:
  local_3630 = &local_3608;
  local_3640 = &local_3610;
  lVar58 = (long)iVar54;
  if ((long)pcVar84 - (long)pcVar79 < (long)iVar54) {
    lVar58 = (long)((int)pcVar84 - (int)pcVar79);
  }
  bVar91 = (long)(pcVar79 + lVar58) < (long)pcVar84;
  if (bVar91) {
    pcVar84 = pcVar79 + lVar58;
  }
  iVar54 = (int)pcVar84 - (int)pcVar79;
  pcVar76 = (char *)0x0;
  plVar74 = &DAT_008255c0;
  uVar83 = iVar54 - iVar65;
  uVar56 = 1;
  puVar72 = local_35f8;
  puVar87 = local_1b18;
LAB_006f0a03:
  do {
    puVar82 = puVar72;
    puVar72 = puVar82;
    puVar86 = puVar87;
    if ((uVar56 & uVar83) != 0) {
      uVar83 = uVar83 ^ uVar56;
      if (pcVar76 == (char *)0x0) {
        pcVar76 = (char *)(plVar74[1] + -1);
        thunk_FUN_00713a50(puVar87,&UNK_00825748 + *plVar74 * 8,(long)pcVar76 * 8);
      }
      else {
        lVar58 = FUN_006f3150(puVar82,&UNK_00825748 + *plVar74 * 8,plVar74[1] + -1,puVar87,pcVar76);
        pcVar76 = pcVar76 + plVar74[1] + -1;
        puVar72 = puVar87;
        puVar86 = puVar82;
        if (lVar58 == 0) {
          pcVar76 = pcVar76 + -1;
          uVar56 = uVar56 * 2;
          plVar74 = plVar74 + 3;
          puVar87 = puVar82;
          if (uVar83 == 0) break;
          goto LAB_006f0a03;
        }
      }
    }
    uVar56 = uVar56 * 2;
    plVar74 = plVar74 + 3;
    puVar87 = puVar86;
  } while (uVar83 != 0);
  if (puVar86 == local_35f8) {
    thunk_FUN_00713a50(local_1b18,local_35f8,(long)pcVar76 * 8);
  }
  FUN_006efad0(pcVar80,iVar54,local_35f8,local_3630,local_3640,lVar57,pcVar85);
  pcVar85 = pcVar76 + -1;
  uVar61 = 0x3f;
  if (local_1b18[(long)pcVar85] != 0) {
    for (; local_1b18[(long)pcVar85] >> uVar61 == 0; uVar61 = uVar61 - 1) {
    }
  }
  uVar61 = uVar61 ^ 0x3f;
  if ((int)uVar61 != 0) {
    FUN_006f2f20(local_1b18,local_1b18,pcVar76,uVar61 & 0xffffffff);
    lVar57 = FUN_006f2f20(local_35f8,local_35f8,local_3608,uVar61 & 0xffffffff);
    if (lVar57 != 0) {
      local_35f8[(long)local_3608] = lVar57;
      local_3608 = local_3608 + 1;
    }
  }
  local_3610 = local_3660;
  if (pcVar76 == (char *)0x1) {
    if (local_35f8[0] >= local_1b18[0] || local_3608 != (char *)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("numsize == 1 && n < d","../stdlib/strtod_l.c",0x5d8,"____strtold_l_internal");
    }
    uVar61 = local_35f8[0];
    uVar71 = local_3660;
    bVar89 = false;
    while( true ) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_1b18[0];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar61;
      uVar69 = 0;
      uVar61 = SUB168((auVar17 << 0x40) % auVar8,0);
      if (iVar55 != 0) break;
      uVar71 = uVar71 - 0x40;
      local_3628 = uVar69;
      bVar89 = local_35f8[0] < local_1b18[0] && local_3608 == (char *)0x1;
    }
    if (bVar89) {
      local_3600 = local_3628;
      local_3610 = uVar71;
    }
    if (iVar55 != 0x40) {
      FUN_006f2f20(&local_3600,&local_3600,1);
      local_3688._0_1_ = (byte)iVar55;
      local_3600 = local_3600 | 0UL >> ((byte)local_3688 & 0x3f);
    }
    iVar54 = iVar55 + -1;
  }
  else {
    if (pcVar76 != (char *)0x2) {
      uVar61 = local_1b18[(long)pcVar85];
      uVar71 = local_1b18[(long)(pcVar76 + -2)];
      iVar54 = FUN_006f2ee0(local_35f8,local_1b18 + ((long)pcVar76 - (long)local_3608));
      if (-1 < iVar54) {
        local_35f8[(long)local_3608] = 0;
        local_3608 = local_3608 + 1;
      }
      pcVar5 = local_3608;
      uVar56 = (uint)pcVar76;
      if ((long)local_3608 < (long)pcVar76) {
        lVar57 = (long)pcVar76 - (long)local_3608;
        if (iVar55 == 0) {
          local_3610 = local_3610 + lVar57 * -0x40;
          uVar83 = 0;
        }
        else {
          if (lVar57 * 0x40 + local_3660 == 0x40) {
            if (lVar57 != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("empty == 1","../stdlib/strtod_l.c",0x686,"____strtold_l_internal");
            }
            local_3600 = 0;
          }
          else {
            uVar83 = 0x40 - iVar55;
            if (uVar83 != 0) {
              FUN_006f2f20(&local_3600,&local_3600,1,uVar83);
            }
          }
          iVar55 = iVar55 + (int)lVar57 * 0x40;
        }
        uVar66 = (uint)local_3608;
        if (0 < (int)uVar66) {
          uVar69 = (long)pcVar76 - (long)pcVar5;
          if (((uVar69 & 0x1fffffffffffffff) == 0x1ffffffffffffffe) || (uVar66 - 1 < 3)) {
            puVar72 = (ulong *)((long)local_35f8 + (long)(int)uVar66 * 8);
            do {
              puVar72[uVar69] = puVar72[-1];
              puVar72 = puVar72 + -1;
            } while (&local_3600 + ((long)(int)uVar66 - (ulong)(uVar66 - 1)) != puVar72);
          }
          else {
            lVar58 = 0;
            do {
              puVar3 = (undefined8 *)((long)&local_3608 + lVar58 + (long)(int)uVar66 * 8);
              uVar78 = puVar3[1];
              puVar4 = (undefined8 *)((long)&local_3600 + lVar58 + ((long)(int)uVar66 + uVar69) * 8)
              ;
              *puVar4 = *puVar3;
              puVar4[1] = uVar78;
              lVar58 = lVar58 + -0x10;
            } while (lVar58 != ((ulong)local_3608 >> 1 & 0x7fffffff) * -0x10);
            iVar54 = uVar66 - (uVar66 & 0xfffffffe);
            if ((uVar66 & 0xfffffffe) != uVar66) {
              local_35f8[iVar54 + lVar57] = local_35f8[iVar54 + -1];
            }
          }
        }
        thunk_FUN_00713720(local_35f8,0,lVar57 * 8 + 8);
        local_1b18[(long)pcVar76] = 0;
        uVar69 = local_35f8[(long)pcVar76];
        if (iVar55 < 0x41) goto LAB_006f0c5e;
        uVar88 = 0;
      }
      else {
        if (pcVar76 != local_3608) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("numsize == densize","../stdlib/strtod_l.c",0x6ab,"____strtold_l_internal");
        }
        if (0 < (int)uVar56) {
          lVar57 = (long)(int)uVar56;
          thunk_FUN_00713610((ulong *)((long)local_35f8 + (lVar57 - (int)(uVar56 - 1)) * 8),
                             (ulong *)((long)local_35f8 +
                                      (lVar57 + (-1 - (long)(int)(uVar56 - 1))) * 8),lVar57 * 8);
        }
        local_35f8[0] = 0;
        uVar69 = local_35f8[(long)pcVar76];
        local_1b18[(long)pcVar76] = 0;
LAB_006f0c5e:
        iVar54 = uVar56 - 1;
        uVar77 = (ulong)(uVar56 - 2);
joined_r0x006f0cae:
        uVar88 = 0xffffffffffffffff;
        if (uVar61 != uVar69) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar61;
          auVar9._8_8_ = uVar69;
          auVar9._0_8_ = local_35f8[(long)pcVar85];
          uVar88 = SUB168(auVar9 / auVar6,0);
          uVar69 = SUB168(auVar9 % auVar6,0);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar71;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar88;
          auVar15 = auVar11 * auVar13;
          while( true ) {
            uVar70 = auVar15._8_8_;
            uVar62 = auVar15._0_8_;
            if ((uVar70 <= uVar69) &&
               ((uVar70 != uVar69 || (uVar62 <= local_35f8[(long)(pcVar76 + -2)])))) break;
            uVar88 = uVar88 - 1;
            bVar89 = CARRY8(uVar69,uVar61);
            uVar69 = uVar69 + uVar61;
            if (bVar89) break;
            auVar15._8_8_ = uVar70 - (uVar62 < uVar71);
            auVar15._0_8_ = uVar62 - uVar71;
          }
        }
        lVar57 = FUN_006f4590(local_35f8,local_1b18,pcVar76 + 1,uVar88);
        if (local_35f8[(long)pcVar76] != lVar57) {
          lVar57 = FUN_006f2e30(local_35f8,local_35f8,local_1b18,pcVar76);
          if (lVar57 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("cy != 0","../stdlib/strtod_l.c",0x6d5,"____strtold_l_internal");
          }
          uVar88 = uVar88 - 1;
        }
        uVar69 = local_35f8[(long)pcVar85];
        local_35f8[(long)pcVar76] = uVar69;
        if (0 < iVar54) {
          thunk_FUN_00713610((ulong *)((long)local_35f8 + ((long)iVar54 - uVar77) * 8),
                             (ulong *)((long)local_35f8 + ((long)iVar54 + (-1 - uVar77)) * 8),
                             uVar77 * 8 + 8);
        }
        local_35f8[0] = 0;
        if (iVar55 == 0) {
          lVar57 = 0x40;
          if (uVar88 != 0) {
            lVar57 = 0x3f;
            if (uVar88 != 0) {
              for (; uVar88 >> lVar57 == 0; lVar57 = lVar57 + -1) {
              }
            }
            uVar83 = (uint)lVar57 ^ 0x3f;
            iVar55 = 0x40 - uVar83;
            lVar57 = (long)(int)uVar83;
          }
          local_3600 = uVar88;
          local_3610 = local_3610 - lVar57;
          goto joined_r0x006f0cae;
        }
        if (iVar55 < 1) {
          iVar55 = iVar55 + 0x40;
          local_3600 = uVar88;
          goto joined_r0x006f0cae;
        }
        uVar83 = 0x40 - iVar55;
        if (uVar83 != 0) {
          FUN_006f2f20(&local_3600,&local_3600,1,uVar83);
          local_3688._0_1_ = (byte)iVar55;
          local_3600 = local_3600 | uVar88 >> ((byte)local_3688 & 0x3f);
        }
      }
      uVar61 = (ulong)pcVar76 & 0xffffffff;
      if (-1 < (int)uVar56) {
        puVar72 = (ulong *)((long)local_35f8 + (long)(int)uVar56 * 8);
        do {
          uVar56 = (uint)uVar61;
          if (*puVar72 != 0) break;
          uVar56 = uVar56 - 1;
          uVar61 = (ulong)uVar56;
          puVar72 = puVar72 + -1;
        } while (uVar56 != 0xffffffff);
      }
      FUN_006efd80(&local_3600,local_3610 - 1,uVar50,uVar88,(long)(int)(0x3f - uVar83),
                   (byte)~(byte)(uVar56 >> 0x18) >> 7 | bVar91);
      goto LAB_006f03cd;
    }
    uVar71 = local_35f8[1];
    uVar61 = local_35f8[0];
    if (1 < (long)local_3608) {
LAB_006f1813:
      bVar89 = false;
      bVar42 = false;
      uVar77 = local_3610;
      do {
        if (uVar71 == local_1b18[1]) {
          uVar88 = uVar61 + uVar71;
          if (!CARRY8(uVar61,uVar71)) {
            uVar69 = 0xffffffffffffffff;
            auVar16._8_8_ = (local_1b18[0] - 1) + (ulong)(local_1b18[0] == 0);
            auVar16._0_8_ = -local_1b18[0];
            goto LAB_006f1900;
          }
          uVar71 = uVar88 - local_1b18[0];
          uVar61 = local_1b18[0];
          if (iVar55 != 0) goto code_r0x006f185b;
          local_3620 = 0xffffffffffffffff;
          iVar55 = 0x40;
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_1b18[1];
          auVar10._8_8_ = uVar71;
          auVar10._0_8_ = uVar61;
          uVar69 = SUB168(auVar10 / auVar7,0);
          uVar88 = SUB168(auVar10 % auVar7,0);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_1b18[0];
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar69;
          auVar16 = auVar12 * auVar14;
LAB_006f1900:
          do {
            uVar61 = auVar16._8_8_;
            uVar71 = auVar16._0_8_;
            if ((uVar61 <= uVar88) && ((uVar61 != uVar88 || (uVar71 == 0)))) break;
            uVar69 = uVar69 - 1;
            auVar16._8_8_ = uVar61 - (uVar71 < local_1b18[0]);
            auVar16._0_8_ = uVar71 - local_1b18[0];
            bVar90 = CARRY8(uVar88,local_1b18[1]);
            uVar88 = uVar88 + local_1b18[1];
          } while (!bVar90);
          uVar61 = -auVar16._0_8_;
          uVar71 = (uVar88 - auVar16._8_8_) - (ulong)(auVar16._0_8_ != 0);
          if (iVar55 != 0) goto LAB_006f1866;
          if (uVar69 == 0) {
            local_3620 = 0;
            uVar77 = uVar77 - 0x40;
          }
          else {
            lVar57 = 0x3f;
            if (uVar69 != 0) {
              for (; uVar69 >> lVar57 == 0; lVar57 = lVar57 + -1) {
              }
            }
            uVar56 = (uint)lVar57 ^ 0x3f;
            iVar55 = 0x40 - uVar56;
            uVar77 = uVar77 - (long)(int)uVar56;
            local_3620 = uVar69;
          }
        }
        bVar89 = true;
        bVar42 = true;
      } while( true );
    }
    if (local_1b18[1] <= local_35f8[0]) {
      uVar71 = 0;
      goto LAB_006f1813;
    }
    if (iVar55 == 0) {
      local_3610 = local_3660 - 0x40;
      uVar71 = local_35f8[0];
      uVar61 = 0;
      goto LAB_006f1813;
    }
    iVar54 = 0x40 - iVar55;
    if (iVar54 != 0) {
      FUN_006f2f20(&local_3600,&local_3600,1,iVar54);
    }
    uVar69 = 0;
    uVar61 = local_35f8[0];
LAB_006f18a6:
    iVar54 = 0x3f - iVar54;
  }
  FUN_006efd80(&local_3600,local_3610 - 1,uVar50,uVar69,(long)iVar54,uVar61 != 0 || bVar91);
LAB_006f03cd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

