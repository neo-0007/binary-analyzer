
/* WARNING: Removing unreachable block (ram,0x006e268d) */
/* WARNING: Removing unreachable block (ram,0x006e26a8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ____strtof_l_internal(char *param_1,long *param_2,int param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [13];
  undefined1 auVar22 [13];
  uint5 uVar23;
  undefined1 auVar24 [13];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [13];
  undefined1 auVar28 [15];
  uint7 uVar29;
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  undefined1 auVar40 [15];
  unkuint9 Var41;
  undefined1 auVar42 [11];
  undefined1 auVar43 [13];
  undefined1 auVar44 [14];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined4 uVar47;
  bool bVar48;
  uint6 uVar49;
  long lVar50;
  char cVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  size_t sVar55;
  long lVar56;
  char *pcVar57;
  ulong uVar58;
  ulong uVar59;
  int iVar60;
  char *pcVar61;
  byte bVar62;
  uint uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  char cVar67;
  char *pcVar68;
  char *pcVar69;
  char cVar70;
  int iVar71;
  ulong uVar72;
  undefined8 uVar73;
  long lVar74;
  long lVar75;
  ulong *puVar76;
  uint uVar77;
  char *pcVar78;
  char *pcVar79;
  ulong uVar80;
  char *pcVar81;
  char *pcVar82;
  char *pcVar83;
  ulong *puVar84;
  ulong *puVar85;
  ulong *puVar86;
  long *plVar87;
  long in_FS_OFFSET;
  bool bVar88;
  bool bVar89;
  bool bVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  ulong *local_168;
  ulong local_138;
  ulong *local_130;
  char **local_120;
  ulong local_118 [4];
  char *local_f8;
  ulong local_f0;
  ulong local_e8 [4];
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  ulong local_98 [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar56 = *(long *)(param_4 + 8);
  pcVar69 = (char *)0x0;
  pcVar79 = (char *)0x0;
  if (param_3 != 0) {
    pcVar69 = *(char **)(lVar56 + 0x50);
    if ((byte)(*pcVar69 - 1U) < 0x7e) {
      pcVar79 = *(char **)(lVar56 + 0x48);
      if (**(char **)(lVar56 + 0x48) == '\0') {
        pcVar69 = (char *)0x0;
        pcVar79 = (char *)0x0;
      }
    }
    else {
      pcVar69 = (char *)0x0;
      pcVar79 = (char *)0x0;
    }
  }
  pcVar3 = *(char **)(lVar56 + 0x40);
  sVar55 = strlen(pcVar3);
  if (sVar55 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("decimal_len > 0","strtod_l.c",0x255,"____strtof_l_internal");
  }
  local_118[3] = 0;
  pcVar81 = param_1 + -1;
  do {
    pcVar83 = pcVar81;
    cVar51 = pcVar83[1];
    lVar56 = (long)cVar51;
    pcVar81 = pcVar83 + 1;
  } while ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + lVar56 * 2) & 0x20) != 0);
  if (cVar51 == '-') {
    lVar56 = (long)pcVar83[2];
    uVar47 = 1;
    pcVar81 = pcVar83 + 2;
  }
  else {
    uVar47 = 0;
    if (cVar51 == '+') {
      lVar56 = (long)pcVar83[2];
      pcVar81 = pcVar83 + 2;
    }
  }
  cVar51 = *pcVar3;
  cVar70 = (char)lVar56;
  cVar67 = cVar70;
  if (cVar51 != '\0') {
    lVar74 = 0;
    cVar67 = cVar51;
    do {
      if (pcVar81[lVar74] != cVar67) goto LAB_006e0dc5;
      lVar74 = lVar74 + 1;
      cVar67 = pcVar3[lVar74];
    } while (cVar67 != '\0');
    cVar67 = pcVar81[lVar74];
  }
  if (9 < (byte)(cVar67 - 0x30U)) {
LAB_006e0dc5:
    if (9 < (byte)(cVar70 - 0x30U)) {
      cVar51 = (char)*(undefined4 *)(_nl_C_locobj._112_8_ + lVar56 * 4);
      if (cVar51 == 'i') {
        iVar54 = strncasecmp_l(pcVar81,"inf",3,(__locale_t)_nl_C_locobj);
        if (iVar54 == 0) {
          if (param_2 != (long *)0x0) {
            iVar54 = strncasecmp_l(pcVar81 + 3,"inity",5,(__locale_t)_nl_C_locobj);
            pcVar69 = pcVar81 + 3;
            if (iVar54 == 0) {
              pcVar69 = pcVar81 + 8;
            }
            *param_2 = (long)pcVar69;
          }
          goto LAB_006e0e00;
        }
      }
      else if ((cVar51 == 'n') &&
              (iVar54 = strncasecmp_l(pcVar81,"nan",3,(__locale_t)_nl_C_locobj), iVar54 == 0)) {
        pcVar69 = pcVar81 + 3;
        if (pcVar81[3] == '(') {
          __strtof_nan(pcVar81 + 4,&local_f8,0x29);
          if (*local_f8 == ')') {
            pcVar69 = local_f8 + 1;
          }
        }
        if (param_2 != (long *)0x0) {
          *param_2 = (long)pcVar69;
        }
        goto LAB_006e0e00;
      }
LAB_006e0dee:
      if (param_2 != (long *)0x0) {
        *param_2 = (long)param_1;
      }
      goto LAB_006e0e00;
    }
  }
  lVar74 = *(long *)(param_4 + 0x70);
  local_168 = (ulong *)pcVar81;
  if (cVar70 == '0') {
    if (*(int *)(lVar74 + (long)pcVar81[1] * 4) == 0x78) {
      pcVar83 = pcVar81 + 2;
      lVar56 = (long)pcVar81[2];
      local_168 = (ulong *)pcVar83;
      if (pcVar79 != (char *)0x0) {
        iVar54 = 0x10;
        pcVar69 = (char *)0x0;
        goto LAB_006e0e5a;
      }
      pcVar69 = (char *)0x0;
      if (pcVar81[2] == '0') {
        iVar54 = 0x10;
        goto LAB_006e1970;
      }
      iVar54 = 0x10;
    }
    else {
      iVar54 = 10;
      pcVar83 = pcVar81;
      if (pcVar79 != (char *)0x0) {
LAB_006e0e5a:
        cVar67 = (char)lVar56;
        pcVar83 = (char *)local_168;
        do {
          if (cVar67 != '0') {
            if (*pcVar79 == '\0') {
              lVar75 = -1;
            }
            else {
              lVar50 = 0;
              cVar67 = *pcVar79;
              do {
                lVar75 = lVar50;
                if (pcVar83[lVar75] != cVar67) goto LAB_006e0ea2;
                cVar67 = pcVar79[lVar75 + 1];
                lVar50 = lVar75 + 1;
              } while (cVar67 != '\0');
            }
            pcVar83 = pcVar83 + lVar75;
          }
          cVar67 = pcVar83[1];
          lVar56 = (long)cVar67;
          pcVar83 = pcVar83 + 1;
        } while( true );
      }
LAB_006e1970:
      do {
        pcVar81 = pcVar83 + 1;
        lVar56 = (long)*pcVar81;
        pcVar83 = pcVar83 + 1;
      } while (*pcVar81 == '0');
    }
LAB_006e0ea2:
    cVar67 = (char)*(undefined4 *)(lVar74 + (long)(char)lVar56 * 4);
    pcVar81 = pcVar83;
    if ((byte)((char)lVar56 - 0x30U) < 10) goto LAB_006e0ed8;
    bVar90 = iVar54 != 0x10;
    if ((5 < (byte)(cVar67 + 0x9fU)) || (bVar90)) goto LAB_006e1000;
  }
  else {
    if (pcVar79 != (char *)0x0) {
      iVar54 = 10;
      goto LAB_006e0e5a;
    }
    iVar54 = 10;
    cVar67 = (char)*(undefined4 *)(lVar74 + (long)cVar70 * 4);
    bVar90 = true;
    if ((byte)(cVar70 - 0x30U) < 10) goto LAB_006e0ed8;
LAB_006e1000:
    if (cVar51 != '\0') {
      lVar75 = 0;
      cVar70 = cVar51;
      do {
        if (pcVar81[lVar75] != cVar70) {
          if (bVar90) {
            if (cVar67 == 'e') goto LAB_006e0ed8;
            goto LAB_006e1bc4;
          }
          if (((ulong *)pcVar81 == local_168) || (cVar67 != 'p')) goto LAB_006e1bc4;
          goto LAB_006e0ed8;
        }
        lVar75 = lVar75 + 1;
        cVar70 = pcVar3[lVar75];
      } while (cVar70 != '\0');
    }
    if ((iVar54 != 0x10) || ((ulong *)pcVar81 != local_168)) goto LAB_006e0ed8;
    if ((9 < (byte)(pcVar81[sVar55] - 0x30U)) &&
       (5 < (byte)((char)*(undefined4 *)(lVar74 + (long)pcVar81[sVar55] * 4) + 0x9fU))) {
LAB_006e1bc4:
      pcVar69 = (char *)__correctly_grouped_prefixmb(local_168,pcVar81,pcVar79);
      if (param_2 != (long *)0x0) {
        if (((ulong *)pcVar69 == local_168) && (pcVar69 = pcVar81 + -1, iVar54 != 0x10)) {
          pcVar69 = param_1;
        }
        *param_2 = (long)pcVar69;
      }
      goto LAB_006e0e00;
    }
  }
  iVar54 = 0x10;
LAB_006e0ed8:
  pcVar78 = (char *)0x0;
  pcVar83 = pcVar81;
  do {
    if (((byte)((char)lVar56 - 0x30U) < 10) ||
       ((iVar54 == 0x10 &&
        ((byte)((char)*(undefined4 *)(lVar74 + (long)(char)lVar56 * 4) + 0x9fU) < 6)))) {
      pcVar78 = pcVar78 + 1;
    }
    else {
      if (pcVar79 == (char *)0x0) break;
      cVar67 = *pcVar79;
      if (cVar67 == '\0') {
        lVar75 = -1;
      }
      else {
        lVar50 = 0;
        do {
          lVar75 = lVar50;
          if (pcVar83[lVar75] != cVar67) goto LAB_006e0efd;
          cVar67 = pcVar79[lVar75 + 1];
          lVar50 = lVar75 + 1;
        } while (cVar67 != '\0');
      }
      pcVar83 = pcVar83 + lVar75;
    }
    lVar56 = (long)pcVar83[1];
    pcVar83 = pcVar83 + 1;
  } while( true );
LAB_006e0efd:
  if ((pcVar69 == (char *)0x0) || (pcVar83 <= local_168)) {
LAB_006e0f0d:
    pcVar61 = (char *)-(ulong)(pcVar78 == (char *)0x0);
    pcVar82 = pcVar78;
    if (cVar51 != '\0') {
      lVar74 = 0;
      do {
        if (pcVar83[lVar74] != cVar51) goto LAB_006e0f3a;
        lVar74 = lVar74 + 1;
        cVar51 = pcVar3[lVar74];
      } while (cVar51 != '\0');
    }
    pcVar83 = pcVar83 + sVar55;
    lVar56 = (long)*pcVar83;
    if (iVar54 == 0x10) {
      pcVar69 = (char *)0x0;
      lVar74 = (long)pcVar78 - (long)pcVar83;
      while( true ) {
        cVar51 = (char)lVar56;
        pcVar82 = pcVar83 + lVar74;
        if ((9 < (byte)(cVar51 - 0x30U)) &&
           (5 < (byte)((char)*(undefined4 *)(*(long *)(param_4 + 0x70) + (long)cVar51 * 4) + 0x9fU))
           ) break;
        if ((cVar51 != '0') && (pcVar61 == (char *)0xffffffffffffffff)) {
          pcVar61 = pcVar69;
        }
        lVar56 = (long)pcVar83[1];
        pcVar83 = pcVar83 + 1;
        pcVar69 = pcVar69 + 1;
      }
LAB_006e0f3a:
      if ((long)pcVar82 < 0) {
LAB_006e3278:
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no <= (uintmax_t) INTMAX_MAX","strtod_l.c",0x36a,"____strtof_l_internal")
        ;
      }
      cVar51 = (char)*(undefined4 *)(*(long *)(param_4 + 0x70) + lVar56 * 4);
      pcVar69 = pcVar83;
      if (iVar54 != 0x10) goto LAB_006e118b;
      if (cVar51 != 'p') goto LAB_006e1185;
LAB_006e0f5e:
      cVar51 = pcVar83[1];
      uVar58 = local_118[3];
      pcVar69 = pcVar83;
      if (cVar51 == '-') {
        cVar51 = pcVar83[2];
        if ((byte)(cVar51 - 0x30U) < 10) {
          pcVar69 = pcVar83 + 2;
          if (iVar54 == 0x10) {
            if ((char *)0x1fffffffffffffda < pcVar78) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_EXP - MANT_DIG) / 4",
                            "strtod_l.c",0x388,"____strtof_l_internal");
            }
            pcVar68 = (char *)((long)pcVar78 * 4 + 0x95);
            bVar90 = true;
          }
          else {
            if ((char *)0x7fffffffffffffc2 < pcVar78) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_10_EXP - MANT_DIG)",
                            "strtod_l.c",0x3a8,"____strtof_l_internal");
            }
            pcVar68 = pcVar78 + 0x3d;
            bVar90 = true;
          }
          goto LAB_006e1c5b;
        }
      }
      else if (cVar51 == '+') {
        cVar51 = pcVar83[2];
        if ((byte)(cVar51 - 0x30U) < 10) {
          pcVar69 = pcVar83 + 2;
          if (iVar54 == 0x10) goto LAB_006e19a1;
LAB_006e0f90:
          if (pcVar78 == (char *)0x0) {
            if (pcVar61 == (char *)0xffffffffffffffff) {
              local_168 = (ulong *)0x9;
              uVar64 = 3;
              bVar90 = false;
              goto LAB_006e1cbb;
            }
            if ((char *)0x7fffffffffffffd8 < pcVar61) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_10_EXP - 1)","strtod_l.c",
                            0x3bc,"____strtof_l_internal");
            }
            pcVar68 = pcVar61 + 0x27;
            bVar90 = false;
          }
          else {
            if ((pcVar61 != (char *)0x0) || ((long)pcVar78 < 0)) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX","strtod_l.c",0x3b0,
                            "____strtof_l_internal");
            }
            bVar90 = false;
            pcVar68 = (char *)(0x27 - (long)pcVar78);
          }
          goto LAB_006e1c5b;
        }
      }
      else if ((byte)(cVar51 - 0x30U) < 10) {
        pcVar69 = pcVar83 + 1;
        if (iVar54 != 0x10) goto LAB_006e0f90;
LAB_006e19a1:
        if (pcVar78 == (char *)0x0) {
          if (pcVar61 != (char *)0xffffffffffffffff) {
            if ((char *)0x1fffffffffffffdf < pcVar61) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_EXP - 3) / 4","strtod_l.c",
                            0x39c,"____strtof_l_internal");
            }
            pcVar68 = (char *)((long)pcVar61 * 4 + 0x83);
            bVar90 = false;
            goto LAB_006e1c5b;
          }
          local_168 = (ulong *)0x1;
          uVar64 = 0xd;
          bVar90 = false;
        }
        else {
          if ((pcVar61 != (char *)0x0) || ((ulong)pcVar78 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX / 4","strtod_l.c",
                          0x390,"____strtof_l_internal");
          }
          bVar90 = false;
          pcVar68 = (char *)((0x20 - (long)pcVar78) * 4 + 3);
LAB_006e1c5b:
          if ((long)pcVar68 < 0) {
            pcVar68 = (char *)0x0;
          }
          uVar64 = (ulong)pcVar68 / 10;
          local_168 = (ulong *)((ulong)pcVar68 % 10);
        }
LAB_006e1cbb:
        do {
          if (((long)uVar64 < (long)uVar58) ||
             ((uVar58 == uVar64 && ((long)local_168 < (long)(char)(cVar51 + -0x30))))) {
            if (pcVar61 != (char *)0xffffffffffffffff) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
            }
            do {
              pcVar79 = pcVar69 + 1;
              pcVar69 = pcVar69 + 1;
            } while ((byte)(*pcVar79 - 0x30U) < 10);
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pcVar69;
            }
            goto LAB_006e0e00;
          }
          pcVar69 = pcVar69 + 1;
          uVar58 = (long)(char)(cVar51 + -0x30) + uVar58 * 10;
          cVar51 = *pcVar69;
        } while ((byte)(cVar51 - 0x30U) < 10);
        local_118[3] = uVar58;
        if (bVar90) {
          local_118[3] = -uVar58;
        }
      }
    }
    else {
      pcVar69 = pcVar83;
      if ((byte)(*pcVar83 - 0x30U) < 10) {
        do {
          pcVar69 = pcVar69 + 1;
          if ((pcVar61 == (char *)0xffffffffffffffff) && ((char)lVar56 != '0')) {
            pcVar61 = pcVar69 + (-1 - (long)pcVar83);
          }
          lVar56 = (long)*pcVar69;
          pcVar82 = pcVar69 + ((long)pcVar78 - (long)pcVar83);
        } while ((byte)(*pcVar69 - 0x30U) < 10);
      }
      if ((long)pcVar82 < 0) goto LAB_006e3278;
      cVar51 = *(char *)(*(long *)(param_4 + 0x70) + lVar56 * 4);
LAB_006e1185:
      pcVar83 = pcVar69;
      if (iVar54 != 0x10) {
LAB_006e118b:
        pcVar83 = pcVar69;
        if (cVar51 == 'e') goto LAB_006e0f5e;
      }
    }
    pcVar68 = pcVar83;
    if (pcVar78 < pcVar82) {
      pcVar57 = pcVar83;
      if (pcVar83[-1] != '0') goto LAB_006e11f0;
      do {
        pcVar68 = pcVar57 + -1;
        pcVar2 = pcVar68 + (long)pcVar82;
        pcVar1 = pcVar57 + -2;
        pcVar57 = pcVar68;
      } while (*pcVar1 == '0');
      pcVar82 = pcVar2 + -(long)pcVar83;
      if (pcVar2 + -(long)pcVar83 < pcVar78) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no >= int_no","strtod_l.c",0x3fc,"____strtof_l_internal");
      }
    }
    uVar58 = local_118[3];
    if ((pcVar82 == pcVar78) && (pcVar82 != (char *)0x0)) {
      if ((long)local_118[3] < 0) {
        pcVar68 = pcVar68 + -1;
        bVar62 = 0;
        if (iVar54 != 0x10) {
          do {
            if ((int)*pcVar68 - 0x30U < 10) {
              if (*pcVar68 != '0') goto LAB_006e1e8c;
              uVar58 = uVar58 + (ulong)(iVar54 == 0x10) * 3 + 1;
              pcVar78 = pcVar78 + -1;
              pcVar82 = pcVar82 + -1;
              bVar62 = pcVar82 != (char *)0x0 & (byte)(uVar58 >> 0x3f);
              if (bVar62 == 0) goto LAB_006e1928;
            }
            pcVar68 = pcVar68 + -1;
          } while( true );
        }
        do {
          if ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + (long)*pcVar68 * 2) & 0x10) != 0) {
            if (*pcVar68 != '0') goto LAB_006e1e8c;
            uVar58 = uVar58 + 4;
            pcVar78 = pcVar78 + -1;
            pcVar82 = pcVar82 + -1;
            bVar62 = (byte)(uVar58 >> 0x3f) & pcVar82 != (char *)0x0;
            if (bVar62 == 0) goto LAB_006e1928;
          }
          pcVar68 = pcVar68 + -1;
        } while( true );
      }
      goto LAB_006e11f0;
    }
  }
  else {
    pcVar69 = (char *)__correctly_grouped_prefixmb(local_168,pcVar83,pcVar79);
    if (pcVar83 == pcVar69) {
      cVar51 = *pcVar3;
      goto LAB_006e0f0d;
    }
    if ((ulong *)pcVar69 == local_168) goto LAB_006e0dee;
    if ((pcVar69 < pcVar81) || (pcVar69 <= pcVar81)) {
      if (param_2 != (long *)0x0) {
        *param_2 = (long)pcVar69;
      }
      goto LAB_006e0e00;
    }
    uVar58 = (long)pcVar69 - (long)pcVar81;
    if (uVar58 - 1 < 0xf) {
      pcVar78 = (char *)0x0;
      pcVar83 = pcVar81;
LAB_006e29cb:
      pcVar78 = pcVar78 + ((byte)(*pcVar83 - 0x30U) < 10);
      if (((((pcVar83 + 1 < pcVar69) &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[1] - 0x30U) < 10), pcVar83 + 2 < pcVar69)) &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[2] - 0x30U) < 10), pcVar83 + 3 < pcVar69)) &&
          ((pcVar78 = pcVar78 + ((byte)(pcVar83[3] - 0x30U) < 10), pcVar83 + 4 < pcVar69 &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[4] - 0x30U) < 10), pcVar83 + 5 < pcVar69)))) &&
         ((((pcVar78 = pcVar78 + ((byte)(pcVar83[5] - 0x30U) < 10), pcVar83 + 6 < pcVar69 &&
            ((pcVar78 = pcVar78 + ((byte)(pcVar83[6] - 0x30U) < 10), pcVar83 + 7 < pcVar69 &&
             (pcVar78 = pcVar78 + ((byte)(pcVar83[7] - 0x30U) < 10), pcVar83 + 8 < pcVar69)))) &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[8] - 0x30U) < 10), pcVar83 + 9 < pcVar69)) &&
          ((((pcVar78 = pcVar78 + ((byte)(pcVar83[9] - 0x30U) < 10), pcVar83 + 10 < pcVar69 &&
             (pcVar78 = pcVar78 + ((byte)(pcVar83[10] - 0x30U) < 10), pcVar83 + 0xb < pcVar69)) &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[0xb] - 0x30U) < 10), pcVar83 + 0xc < pcVar69)) &&
           ((pcVar78 = pcVar78 + ((byte)(pcVar83[0xc] - 0x30U) < 10), pcVar83 + 0xd < pcVar69 &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[0xd] - 0x30U) < 10), pcVar83 + 0xe < pcVar69)))))))
         ) {
        pcVar78 = pcVar78 + ((byte)(pcVar83[0xe] - 0x30U) < 10);
      }
    }
    else {
      lVar56 = 0;
      lVar74 = 0;
      pcVar83 = pcVar81;
      do {
        cVar51 = *pcVar83;
        pcVar78 = pcVar83 + 1;
        pcVar82 = pcVar83 + 2;
        pcVar61 = pcVar83 + 3;
        pcVar68 = pcVar83 + 4;
        pcVar57 = pcVar83 + 5;
        pcVar1 = pcVar83 + 6;
        pcVar2 = pcVar83 + 7;
        pcVar32 = pcVar83 + 8;
        pcVar33 = pcVar83 + 9;
        pcVar34 = pcVar83 + 10;
        pcVar35 = pcVar83 + 0xb;
        pcVar36 = pcVar83 + 0xc;
        pcVar37 = pcVar83 + 0xd;
        pcVar38 = pcVar83 + 0xe;
        pcVar39 = pcVar83 + 0xf;
        pcVar83 = pcVar83 + 0x10;
        auVar91[0] = cVar51 + DAT_0081b180;
        auVar91[1] = *pcVar78 + UNK_0081b181;
        auVar91[2] = *pcVar82 + UNK_0081b182;
        auVar91[3] = *pcVar61 + UNK_0081b183;
        auVar91[4] = *pcVar68 + UNK_0081b184;
        auVar91[5] = *pcVar57 + UNK_0081b185;
        auVar91[6] = *pcVar1 + UNK_0081b186;
        auVar91[7] = *pcVar2 + UNK_0081b187;
        auVar91[8] = *pcVar32 + UNK_0081b188;
        auVar91[9] = *pcVar33 + UNK_0081b189;
        auVar91[10] = *pcVar34 + UNK_0081b18a;
        auVar91[0xb] = *pcVar35 + UNK_0081b18b;
        auVar91[0xc] = *pcVar36 + UNK_0081b18c;
        auVar91[0xd] = *pcVar37 + UNK_0081b18d;
        auVar91[0xe] = *pcVar38 + UNK_0081b18e;
        auVar91[0xf] = *pcVar39 + UNK_0081b18f;
        auVar91 = psubusb(auVar91,_DAT_0081b190);
        auVar92[0] = -(auVar91[0] == '\0');
        auVar92[1] = -(auVar91[1] == '\0');
        auVar92[2] = -(auVar91[2] == '\0');
        auVar92[3] = -(auVar91[3] == '\0');
        auVar92[4] = -(auVar91[4] == '\0');
        auVar92[5] = -(auVar91[5] == '\0');
        auVar92[6] = -(auVar91[6] == '\0');
        auVar92[7] = -(auVar91[7] == '\0');
        auVar92[8] = -(auVar91[8] == '\0');
        auVar92[9] = -(auVar91[9] == '\0');
        auVar92[10] = -(auVar91[10] == '\0');
        auVar92[0xb] = -(auVar91[0xb] == '\0');
        auVar92[0xc] = -(auVar91[0xc] == '\0');
        auVar92[0xd] = -(auVar91[0xd] == '\0');
        auVar92[0xe] = -(auVar91[0xe] == '\0');
        auVar92[0xf] = -(auVar91[0xf] == '\0');
        auVar92 = auVar92 & _DAT_0081b1a0;
        uVar63 = CONCAT13(0,CONCAT12(auVar92[9],(ushort)auVar92[8]));
        auVar16[0xd] = 0;
        auVar16._0_13_ = auVar92._0_13_;
        auVar16[0xe] = auVar92[7];
        auVar18[0xc] = auVar92[6];
        auVar18._0_12_ = auVar92._0_12_;
        auVar18._13_2_ = auVar16._13_2_;
        auVar19[0xb] = 0;
        auVar19._0_11_ = auVar92._0_11_;
        auVar19._12_3_ = auVar18._12_3_;
        auVar20[10] = auVar92[5];
        auVar20._0_10_ = auVar92._0_10_;
        auVar20._11_4_ = auVar19._11_4_;
        auVar26[9] = 0;
        auVar26._0_9_ = auVar92._0_9_;
        auVar26._10_5_ = auVar20._10_5_;
        auVar28[8] = auVar92[4];
        auVar28._0_8_ = auVar92._0_8_;
        auVar28._9_6_ = auVar26._9_6_;
        uVar29 = auVar28._8_7_;
        auVar40._7_8_ = 0;
        auVar40._0_7_ = uVar29;
        Var41 = CONCAT81(SUB158(auVar40 << 0x40,7),auVar92[3]);
        auVar45._9_6_ = 0;
        auVar45._0_9_ = Var41;
        auVar42._1_10_ = SUB1510(auVar45 << 0x30,5);
        auVar42[0] = auVar92[2];
        auVar46._11_4_ = 0;
        auVar46._0_11_ = auVar42;
        auVar30[2] = auVar92[1];
        auVar30._0_2_ = auVar92._0_2_;
        auVar30._3_12_ = SUB1512(auVar46 << 0x20,3);
        auVar31._2_13_ = auVar30._2_13_;
        auVar31._0_2_ = auVar92._0_2_ & 0xff;
        auVar21[0xc] = auVar92[0xb];
        auVar21._0_12_ = ZEXT112(auVar92[0xc]) << 0x40;
        auVar22._10_3_ = auVar21._10_3_;
        auVar22._0_10_ = (unkuint10)auVar92[10] << 0x40;
        uVar23 = auVar22._8_5_;
        auVar43._5_8_ = 0;
        auVar43._0_5_ = uVar23;
        auVar24[4] = auVar92[9];
        auVar24._0_4_ = uVar63;
        auVar24[5] = 0;
        auVar24._6_7_ = SUB137(auVar43 << 0x40,6);
        auVar27._4_9_ = auVar24._4_9_;
        auVar27._0_4_ = uVar63 & 0xffff;
        auVar17._10_2_ = 0;
        auVar17._0_10_ = auVar31._0_10_;
        auVar17._12_2_ = (short)Var41;
        uVar49 = CONCAT42(auVar17._10_4_,auVar42._0_2_);
        auVar44._6_8_ = 0;
        auVar44._0_6_ = uVar49;
        auVar25._4_2_ = auVar30._2_2_;
        auVar25._0_4_ = auVar31._0_4_;
        auVar25._6_8_ = SUB148(auVar44 << 0x40,6);
        lVar56 = lVar56 + (ulong)auVar92[0xe] +
                 (ulong)(auVar31._0_4_ & 0xffff) + ((ulong)uVar49 & 0xffffffff) +
                 ((ulong)CONCAT24(auVar20._10_2_,(uint)auVar28._8_2_) & 0xffffffff) +
                 ((ulong)(uVar29 >> 0x20) & 0xffff) +
                 (auVar27._0_8_ & 0xffffffff) + ((ulong)uVar23 & 0xffffffff) +
                 ((ulong)CONCAT14(auVar92[0xd],(uint)auVar92[0xc]) & 0xffffffff);
        lVar74 = lVar74 + (ulong)auVar92[0xf] +
                 (ulong)auVar25._4_4_ + (ulong)(auVar17._10_4_ >> 0x10) +
                 (ulong)auVar20._10_2_ + (ulong)(uVar29 >> 0x30) +
                 (ulong)auVar24._4_4_ + (ulong)(uVar23 >> 0x20) + (ulong)auVar92[0xd];
      } while (pcVar81 + (uVar58 & 0xfffffffffffffff0) != pcVar83);
      pcVar78 = (char *)(lVar56 + lVar74);
      pcVar83 = pcVar81 + (uVar58 & 0xfffffffffffffff0);
      if ((uVar58 & 0xfffffffffffffff0) != uVar58) goto LAB_006e29cb;
    }
    pcVar61 = (char *)0x0;
    pcVar82 = pcVar78;
    uVar58 = local_118[3];
  }
LAB_006e1928:
  local_118[3] = uVar58;
  if (param_2 != (long *)0x0) {
LAB_006e11f7:
    *param_2 = (long)pcVar69;
  }
  if (pcVar82 == (char *)0x0) goto LAB_006e0e00;
  goto LAB_006e1207;
LAB_006e1253:
  pcVar81 = pcVar81 + (long)(pcVar61 + sVar55);
  if (iVar54 == 0x10) {
    if ((ulong)pcVar61 >> 0x3d != 0) goto LAB_006e33ae;
    if ((char *)(local_118[3] + 0x8000000000000000 >> 2) < pcVar61) goto LAB_006e3370;
    pcVar69 = (char *)((long)pcVar61 * 4);
  }
  else {
    if ((long)pcVar61 < 0) {
LAB_006e33ae:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? (uintmax_t) INTMAX_MAX / 4 : (uintmax_t) INTMAX_MAX)"
                    ,"strtod_l.c",0x42d,"____strtof_l_internal");
    }
    pcVar69 = pcVar61;
    if ((char *)(local_118[3] + 0x8000000000000000) < pcVar61) {
LAB_006e3370:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN) / 4 : ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN))"
                    ,"strtod_l.c",0x430,"____strtof_l_internal");
    }
  }
  local_118[3] = local_118[3] - (long)pcVar69;
  pcVar82 = pcVar82 + -(long)pcVar61;
  goto LAB_006e129a;
  while (pcVar81 = pcVar81 + 1, pcVar81 != pcVar82) {
LAB_006e1b5d:
    if (*pcVar81 != '0') {
      uVar73 = 1;
      goto LAB_006e1b69;
    }
  }
LAB_006e2815:
  uVar73 = 0;
LAB_006e1b69:
  round_and_return(&local_f0,local_118[3],uVar47,uVar64 << (cVar51 + 0x3dU & 0x3f),0x3f,uVar73);
  goto LAB_006e0e00;
code_r0x006e27ee:
  local_f0 = uVar65 >> (-(char)(uVar63 + 0x18) & 0x3fU);
  lVar56 = (long)(int)(0x3f - (uVar63 + 0x18));
  local_118[3] = uVar72;
LAB_006e2489:
  uVar58 = uVar58 | uVar64;
  goto LAB_006e248c;
LAB_006e2078:
  if (iVar54 == 0x18) {
    lVar56 = 0x3f;
  }
  else {
    __mpn_lshift(&local_f0,&local_f0,1);
    lVar56 = (long)(iVar54 + 0x27);
    local_f0 = local_f0 | uVar80 >> ((char)iVar54 + 0x28U & 0x3f);
  }
  goto LAB_006e17e9;
LAB_006e1e8c:
  if (bVar62 != 0) {
    local_118[3] = uVar58;
  }
LAB_006e11f0:
  if (param_2 != (long *)0x0) goto LAB_006e11f7;
LAB_006e1207:
  if (pcVar61 != (char *)0x0) {
    do {
      if (*pcVar81 == *pcVar3) {
        if (pcVar3[1] == '\0') goto LAB_006e1253;
        lVar56 = 1;
        cVar51 = pcVar3[1];
        while (cVar51 == pcVar81[lVar56]) {
          lVar56 = lVar56 + 1;
          cVar51 = pcVar3[lVar56];
          if (cVar51 == '\0') goto LAB_006e1253;
        }
      }
      pcVar81 = pcVar81 + 1;
    } while( true );
  }
LAB_006e129a:
  if (iVar54 == 0x10) {
    lVar74 = (long)*pcVar81;
    lVar56 = *(long *)(param_4 + 0x68);
    bVar62 = *(byte *)(lVar56 + 1 + lVar74 * 2);
    while ((bVar62 & 0x10) == 0) {
      lVar74 = (long)pcVar81[1];
      pcVar81 = pcVar81 + 1;
      bVar62 = *(byte *)(lVar56 + 1 + lVar74 * 2);
    }
    while( true ) {
      pcVar81 = pcVar81 + 1;
      if ((char)lVar74 != '0') break;
      lVar74 = (long)*pcVar81;
    }
    uVar63 = (int)(char)lVar74 - 0x30;
    if (9 < uVar63) {
      uVar63 = *(int *)(*(long *)(param_4 + 0x70) + lVar74 * 4) - 0x57;
    }
    iVar54 = *(int *)(nbits_1 + (long)(int)uVar63 * 4);
    if (iVar54 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("bits != 0","strtod_l.c",1099,"____strtof_l_internal");
    }
    iVar52 = 0x17 - iVar54;
    local_f0 = (long)(int)uVar63 << (0x18U - (char)iVar54 & 0x3f);
    if ((long)local_118[3] < 0) {
      lVar74 = -0x8000000000000000 - (long)iVar54;
    }
    else {
      lVar74 = (0x7fffffffffffffff - local_118[3]) - (long)iVar54;
      lVar75 = lVar74 + 1;
      lVar74 = lVar74 + 4;
      if (-1 < lVar75) {
        lVar74 = lVar75;
      }
    }
    if ((char *)(lVar74 >> 2) < pcVar78) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("int_no <= (uintmax_t) (exponent < 0 ? (INTMAX_MAX - bits + 1) / 4 : (INTMAX_MAX - exponent - bits + 1) / 4)"
                    ,"strtod_l.c",0x45e,"____strtof_l_internal");
    }
    local_118[3] = (long)(iVar54 + -1) + -4 + (long)pcVar78 * 4 + local_118[3];
    pcVar82 = pcVar82 + -1;
    uVar58 = local_f0;
    if (pcVar82 != (char *)0x0) {
      bVar90 = false;
      do {
        lVar74 = (long)*pcVar81;
        if ((*(byte *)(lVar56 + 1 + lVar74 * 2) & 0x10) == 0) {
          pcVar81 = pcVar81 + sVar55;
          lVar74 = (long)*pcVar81;
        }
        pcVar81 = pcVar81 + 1;
        uVar63 = (int)(char)lVar74 - 0x30;
        if (9 < uVar63) {
          uVar63 = *(int *)(*(long *)(param_4 + 0x70) + lVar74 * 4) - 0x57;
        }
        uVar64 = (ulong)(int)uVar63;
        pcVar82 = pcVar82 + -1;
        cVar51 = (char)iVar52;
        if (iVar52 < 3) {
          if (!bVar90) {
            uVar58 = local_f0;
          }
          local_f0 = uVar64 >> (3U - cVar51 & 0x3f) | uVar58;
          if (pcVar82 == (char *)0x0) goto LAB_006e2815;
          pcVar82 = pcVar82 + (long)pcVar81;
          goto LAB_006e1b5d;
        }
        bVar90 = true;
        iVar52 = iVar52 + -4;
        uVar58 = uVar58 | uVar64 << (cVar51 - 3U & 0x3f);
      } while (pcVar82 != (char *)0x0);
    }
    local_f0 = uVar58;
    round_and_return(&local_f0,local_118[3],uVar47,0,0,0);
    goto LAB_006e0e00;
  }
  uVar58 = -(long)pcVar78;
  if (-(long)pcVar78 < (long)local_118[3]) {
    uVar58 = local_118[3];
  }
  uVar64 = (long)pcVar82 - (long)pcVar78;
  if ((long)local_118[3] < (long)pcVar82 - (long)pcVar78) {
    uVar64 = local_118[3];
  }
  if ((long)local_118[3] < 0) {
    uVar64 = uVar58;
  }
  pcVar78 = pcVar78 + uVar64;
  local_118[3] = local_118[3] - uVar64;
  if (0x27 - (long)pcVar78 < (long)local_118[3]) {
LAB_006e281d:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    goto LAB_006e0e00;
  }
  if ((long)local_118[3] < -0x2d) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    goto LAB_006e0e00;
  }
  if (pcVar78 == (char *)0x0) {
    if ((pcVar82 == (char *)0x0) || (0x2d < local_118[3] + 0x2d)) {
LAB_006e338f:
                    /* WARNING: Subroutine does not return */
      __assert_fail("dig_no > int_no && exponent <= 0 && exponent >= MIN_10_EXP - (DIG + 2)",
                    "strtod_l.c",0x54d,"____strtof_l_internal");
    }
    if (*pcVar81 == '0') {
LAB_006e30c3:
                    /* WARNING: Subroutine does not return */
      __assert_fail("int_no == 0 && *startp != L_(\'0\')","strtod_l.c",0x55f,"____strtof_l_internal"
                   );
    }
    iVar60 = (int)local_118[3];
    iVar52 = (int)(((1 - local_118[3]) * 10) / 3) + 0x19;
    if (0x97 < iVar52) {
      iVar52 = 0x97;
    }
    iVar52 = iVar52 + iVar60;
    if (iVar52 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("need_frac_digits > 0","strtod_l.c",0x574,"____strtof_l_internal");
    }
    iVar54 = 0;
    local_168 = (ulong *)0x0;
LAB_006e137f:
    local_120 = &local_f8;
    local_130 = local_118 + 3;
    lVar56 = (long)iVar52;
    if ((long)pcVar82 - (long)pcVar78 < (long)iVar52) {
      lVar56 = (long)((int)pcVar82 - (int)pcVar78);
    }
    bVar90 = (long)(pcVar78 + lVar56) < (long)pcVar82;
    if (bVar90) {
      pcVar82 = pcVar78 + lVar56;
    }
    pcVar69 = (char *)0x0;
    iVar52 = (int)pcVar82 - (int)pcVar78;
    plVar87 = &_fpioconst_pow10;
    uVar77 = iVar52 - iVar60;
    uVar63 = 1;
    puVar76 = local_e8;
    puVar85 = local_98;
LAB_006e142b:
    do {
      puVar86 = puVar76;
      puVar76 = puVar86;
      puVar84 = puVar85;
      if ((uVar63 & uVar77) != 0) {
        uVar77 = uVar77 ^ uVar63;
        if (pcVar69 == (char *)0x0) {
          pcVar69 = (char *)(plVar87[1] + -1);
          memcpy(puVar85,__tens + *plVar87 * 8 + 8,(long)pcVar69 * 8);
        }
        else {
          lVar56 = __mpn_mul(puVar86,*plVar87 * 8 + 0x81b528,plVar87[1] + -1,puVar85,pcVar69);
          pcVar69 = pcVar69 + plVar87[1] + -1;
          puVar76 = puVar85;
          puVar84 = puVar86;
          if (lVar56 == 0) {
            pcVar69 = pcVar69 + -1;
            uVar63 = uVar63 * 2;
            plVar87 = plVar87 + 3;
            puVar85 = puVar86;
            if (uVar77 == 0) break;
            goto LAB_006e142b;
          }
        }
      }
      uVar63 = uVar63 * 2;
      plVar87 = plVar87 + 3;
      puVar85 = puVar84;
      puVar86 = puVar84;
    } while (uVar77 != 0);
    if (puVar86 == local_e8) {
      memcpy(local_98,local_e8,(long)pcVar69 * 8);
    }
    str_to_mpn_constprop_0(pcVar81,iVar52,local_e8,local_120,local_130,sVar55,pcVar79);
    pcVar79 = pcVar69 + -1;
    uVar58 = 0x3f;
    if (local_98[(long)pcVar79] != 0) {
      for (; local_98[(long)pcVar79] >> uVar58 == 0; uVar58 = uVar58 - 1) {
      }
    }
    uVar58 = uVar58 ^ 0x3f;
    if ((int)uVar58 != 0) {
      __mpn_lshift(local_98,local_98,pcVar69,uVar58 & 0xffffffff);
      lVar56 = __mpn_lshift(local_e8,local_e8,local_f8,uVar58 & 0xffffffff);
      if (lVar56 != 0) {
        local_e8[(long)local_f8] = lVar56;
        local_f8 = local_f8 + 1;
      }
    }
    local_118[3] = (ulong)local_168;
    if (pcVar69 != (char *)0x1) {
      if (pcVar69 == &_nl_current_LC_PAPER_used) {
        uVar64 = local_e8[1];
        uVar58 = local_e8[0];
        if ((long)local_f8 < 2) {
          if (local_e8[0] < local_98[1]) {
            if (iVar54 != 0) {
              if (0x18 - iVar54 != 0) {
                __mpn_lshift(&local_f0,&local_f0,1,0x18 - iVar54);
              }
              uVar65 = 0;
              lVar56 = (long)(iVar54 + 0x27);
              uVar58 = local_e8[0];
LAB_006e248c:
              round_and_return(&local_f0,local_118[3] - 1,uVar47,uVar65,lVar56,uVar58 != 0 || bVar90
                              );
              goto LAB_006e0e00;
            }
            local_118[3] = (long)local_168 - 0x40;
            uVar64 = local_e8[0];
            uVar58 = 0;
          }
          else {
            uVar64 = 0;
          }
        }
        bVar48 = false;
        bVar88 = false;
        uVar72 = local_118[3];
        do {
          if (uVar64 == local_98[1]) {
            uVar80 = uVar58 + uVar64;
            if (!CARRY8(uVar58,uVar64)) {
              uVar65 = 0xffffffffffffffff;
              auVar14._8_8_ = (local_98[0] - 1) + (ulong)(local_98[0] == 0);
              auVar14._0_8_ = -local_98[0];
              goto LAB_006e24e0;
            }
            uVar64 = uVar80 - local_98[0];
            uVar65 = 0xffffffffffffffff;
            uVar58 = local_98[0];
            if (iVar54 == 0) {
              if (bVar48) {
                local_118[3] = uVar72;
              }
              lVar56 = 0x27;
              local_f0 = 0xffffff;
              uVar65 = 0xffffffffffffffff;
            }
            else {
LAB_006e2533:
              if (bVar48) {
                local_118[3] = uVar72;
              }
              if (bVar88) {
                local_f0 = local_118[1];
              }
              lVar56 = (long)(iVar54 + 0x27);
              if (iVar54 != 0x18) {
                __mpn_lshift(&local_f0,&local_f0,1);
                local_f0 = local_f0 | uVar65 >> ((char)iVar54 + 0x28U & 0x3f);
              }
            }
            goto LAB_006e2489;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_98[1];
          auVar8._8_8_ = uVar64;
          auVar8._0_8_ = uVar58;
          uVar65 = SUB168(auVar8 / auVar5,0);
          uVar80 = SUB168(auVar8 % auVar5,0);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = local_98[0];
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar65;
          auVar14 = auVar10 * auVar12;
LAB_006e24e0:
          do {
            uVar64 = auVar14._8_8_;
            uVar58 = auVar14._0_8_;
            if ((uVar64 <= uVar80) && ((uVar64 != uVar80 || (uVar58 == 0)))) break;
            uVar65 = uVar65 - 1;
            auVar14._8_8_ = uVar64 - (uVar58 < local_98[0]);
            auVar14._0_8_ = uVar58 - local_98[0];
            bVar89 = CARRY8(uVar80,local_98[1]);
            uVar80 = uVar80 + local_98[1];
          } while (!bVar89);
          uVar58 = -auVar14._0_8_;
          uVar64 = (uVar80 - auVar14._8_8_) - (ulong)(auVar14._0_8_ != 0);
          if (iVar54 != 0) goto LAB_006e2533;
          if (uVar65 == 0) {
            local_118[1] = 0;
            uVar72 = uVar72 - 0x40;
          }
          else {
            lVar56 = 0x3f;
            if (uVar65 != 0) {
              for (; uVar65 >> lVar56 == 0; lVar56 = lVar56 + -1) {
              }
            }
            uVar63 = (uint)lVar56 ^ 0x3f;
            iVar54 = 0x40 - uVar63;
            uVar72 = uVar72 - (long)(int)uVar63;
            local_118[1] = uVar65;
            if (0x18 < iVar54) goto code_r0x006e27ee;
          }
          bVar48 = true;
          bVar88 = true;
        } while( true );
      }
      uVar58 = local_98[(long)pcVar79];
      uVar64 = local_98[(long)(pcVar69 + -2)];
      iVar52 = __mpn_cmp(local_e8);
      if (-1 < iVar52) {
        local_e8[(long)local_f8] = 0;
        local_f8 = local_f8 + 1;
      }
      pcVar3 = local_f8;
      iVar52 = (int)pcVar69;
      if ((long)local_f8 < (long)pcVar69) {
        lVar56 = (long)pcVar69 - (long)local_f8;
        if (iVar54 == 0) {
          local_118[3] = local_118[3] + lVar56 * -0x40;
          iVar60 = 0;
        }
        else {
          iVar60 = 0x18 - iVar54;
          if (iVar60 != 0) {
            __mpn_lshift(&local_f0,&local_f0,1);
          }
          iVar54 = iVar54 + (int)lVar56 * 0x40;
        }
        uVar63 = (uint)local_f8;
        if (0 < (int)uVar63) {
          uVar77 = uVar63 - 1;
          if ((((long)pcVar69 - (long)pcVar3 & 0x1fffffffffffffffU) == 0x1ffffffffffffffe) ||
             (uVar77 < 3)) {
            local_e8[(int)uVar63 + lVar56] = local_e8[(int)uVar77];
            if (uVar77 != 0) {
              iVar53 = uVar63 - 2;
              local_e8[(int)uVar77 + lVar56] = local_e8[iVar53];
              if (iVar53 != 0) {
                iVar71 = uVar63 - 3;
                local_e8[iVar53 + lVar56] = local_e8[iVar71];
                if (iVar71 != 0) {
                  iVar53 = uVar63 - 4;
                  local_e8[iVar71 + lVar56] = local_e8[iVar53];
                  if (iVar53 != 0) {
                    iVar71 = uVar63 - 5;
                    local_e8[iVar53 + lVar56] = local_e8[iVar71];
                    if (iVar71 != 0) {
                      iVar53 = uVar63 - 6;
                      local_e8[iVar71 + lVar56] = local_e8[iVar53];
                      if (iVar53 != 0) {
                        iVar71 = uVar63 - 7;
                        local_e8[iVar53 + lVar56] = local_e8[iVar71];
                        if (iVar71 != 0) {
                          iVar53 = uVar63 - 8;
                          local_e8[iVar71 + lVar56] = local_e8[iVar53];
                          if (iVar53 != 0) {
                            iVar71 = uVar63 - 9;
                            local_e8[iVar53 + lVar56] = local_e8[iVar71];
                            if (iVar71 != 0) {
                              local_e8[iVar71 + lVar56] = local_e8[(int)(uVar63 - 10)];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar74 = (long)(int)uVar63;
            lVar75 = lVar74 + ((long)pcVar69 - (long)pcVar3);
            uVar77 = (uint)((ulong)local_f8 >> 1) & 0x7fffffff;
            uVar65 = (&local_f0)[lVar74];
            (&local_f0)[lVar75] = (ulong)(&local_f8)[lVar74];
            local_e8[lVar75] = uVar65;
            if (uVar77 != 1) {
              pcVar3 = (char *)local_118[lVar74 + 3];
              local_118[lVar75 + 3] = local_118[lVar74 + 2];
              (&local_f8)[lVar75] = pcVar3;
              if (uVar77 != 2) {
                uVar65 = local_118[lVar74 + 1];
                local_118[lVar75 + 1] = local_118[lVar74];
                local_118[lVar75 + 2] = uVar65;
                if (uVar77 != 3) {
                  uVar65 = (&local_138)[lVar74 + 3];
                  (&local_138)[lVar75 + 3] = (&local_138)[lVar74 + 2];
                  local_118[lVar75] = uVar65;
                  if (uVar77 != 4) {
                    uVar65 = (&local_138)[lVar74 + 1];
                    (&local_138)[lVar75 + 1] = (&local_138)[lVar74];
                    (&local_138)[lVar75 + 2] = uVar65;
                  }
                }
              }
            }
            iVar53 = uVar63 - (uVar63 & 0xfffffffe);
            if ((uVar63 & 0xfffffffe) != uVar63) {
              local_e8[iVar53 + lVar56] = local_e8[iVar53 + -1];
            }
          }
        }
        memset(local_e8,0,lVar56 * 8 + 8);
        local_98[(long)pcVar69] = 0;
        uVar65 = local_e8[(long)pcVar69];
        if (0x18 < iVar54) {
          uVar80 = 0;
          lVar56 = (long)(0x3f - iVar60);
LAB_006e17e9:
          if ((-1 < iVar52) && (local_e8[iVar52] == 0)) {
            pcVar69 = (char *)(ulong)(iVar52 - 1U);
            if ((iVar52 != 0) && (local_e8[(int)(iVar52 - 1U)] == 0)) {
              pcVar69 = (char *)(ulong)(iVar52 - 2U);
              if ((iVar52 != 1) && (local_e8[(int)(iVar52 - 2U)] == 0)) {
                pcVar69 = (char *)(ulong)(iVar52 - 3U);
                if ((iVar52 != 2) && (local_e8[(int)(iVar52 - 3U)] == 0)) {
                  pcVar69 = (char *)(ulong)(iVar52 - 4U);
                  if ((iVar52 != 3) && (local_e8[(int)(iVar52 - 4U)] == 0)) {
                    pcVar69 = (char *)(ulong)(iVar52 - 5U);
                    if ((iVar52 != 4) && (local_e8[(int)(iVar52 - 5U)] == 0)) {
                      pcVar69 = (char *)(ulong)(iVar52 - 6U);
                      if ((iVar52 != 5) && (local_e8[(int)(iVar52 - 6U)] == 0)) {
                        pcVar69 = (char *)(ulong)(iVar52 - 7U);
                        if ((iVar52 != 6) && (local_e8[(int)(iVar52 - 7U)] == 0)) {
                          pcVar69 = (char *)(ulong)(iVar52 - 8U);
                          if ((iVar52 != 7) && (local_e8[(int)(iVar52 - 8U)] == 0)) {
                            pcVar69 = (char *)(ulong)(iVar52 - 9U);
                            if ((iVar52 != 8) && (local_e8[(int)(iVar52 - 9U)] == 0)) {
                              pcVar69 = (char *)(ulong)(iVar52 - 10);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          round_and_return(&local_f0,local_118[3] - 1,uVar47,uVar80,lVar56,
                           (byte)~(byte)((ulong)pcVar69 >> 0x18) >> 7 | bVar90);
          goto LAB_006e0e00;
        }
      }
      else {
        if (pcVar69 != local_f8) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("numsize == densize","strtod_l.c",0x6ab,"____strtof_l_internal");
        }
        if (0 < iVar52) {
          lVar56 = (long)iVar52;
          memmove((ulong *)((long)local_e8 + (lVar56 - (iVar52 + -1)) * 8),
                  (ulong *)((long)local_e8 + (lVar56 + (-1 - (long)(iVar52 + -1))) * 8),lVar56 * 8);
        }
        local_e8[0] = 0;
        uVar65 = local_e8[(long)pcVar69];
        local_98[(long)pcVar69] = 0;
      }
      iVar60 = iVar52 + -1;
      uVar72 = (ulong)(iVar52 - 2);
joined_r0x006e16fa:
      do {
        uVar80 = 0xffffffffffffffff;
        if (uVar65 != uVar58) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar58;
          auVar7._8_8_ = uVar65;
          auVar7._0_8_ = local_e8[(long)pcVar79];
          uVar80 = SUB168(auVar7 / auVar4,0);
          uVar65 = SUB168(auVar7 % auVar4,0);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar64;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar80;
          auVar13 = auVar9 * auVar11;
          while( true ) {
            uVar66 = auVar13._8_8_;
            uVar59 = auVar13._0_8_;
            if ((uVar66 <= uVar65) &&
               ((uVar66 != uVar65 || (uVar59 <= local_e8[(long)(pcVar69 + -2)])))) break;
            uVar80 = uVar80 - 1;
            bVar88 = CARRY8(uVar65,uVar58);
            uVar65 = uVar65 + uVar58;
            if (bVar88) break;
            auVar13._8_8_ = uVar66 - (uVar59 < uVar64);
            auVar13._0_8_ = uVar59 - uVar64;
          }
        }
        lVar56 = __mpn_submul_1(local_e8,local_98,pcVar69 + 1,uVar80);
        if (local_e8[(long)pcVar69] != lVar56) {
          lVar56 = __mpn_add_n(local_e8,local_e8,local_98,pcVar69);
          if (lVar56 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("cy != 0","strtod_l.c",0x6d5,"____strtof_l_internal");
          }
          uVar80 = uVar80 - 1;
        }
        uVar65 = local_e8[(long)pcVar79];
        local_e8[(long)pcVar69] = uVar65;
        if (0 < iVar60) {
          memmove((ulong *)((long)local_e8 + ((long)iVar60 - uVar72) * 8),
                  (ulong *)((long)local_e8 + ((long)iVar60 + (-1 - uVar72)) * 8),uVar72 * 8 + 8);
        }
        local_e8[0] = 0;
        if (iVar54 == 0) {
          if (uVar80 == 0) {
            local_f0 = 0;
            local_118[3] = local_118[3] - 0x40;
          }
          else {
            lVar56 = 0x3f;
            if (uVar80 != 0) {
              for (; uVar80 >> lVar56 == 0; lVar56 = lVar56 + -1) {
              }
            }
            uVar63 = (uint)lVar56 ^ 0x3f;
            iVar54 = 0x40 - uVar63;
            local_118[3] = local_118[3] - (long)(int)uVar63;
            if (0x18 < iVar54) {
              lVar56 = (long)(int)(0x3f - (uVar63 + 0x18));
              local_f0 = uVar80 >> (0x40U - (char)(uVar63 + 0x18) & 0x3f);
              goto LAB_006e17e9;
            }
            local_f0 = uVar80;
          }
          goto joined_r0x006e16fa;
        }
        if (-0x28 < iVar54) goto LAB_006e2078;
        local_f0 = uVar80;
        iVar54 = iVar54 + 0x40;
      } while( true );
    }
    if (local_e8[0] >= local_98[0] || local_f8 != (char *)0x1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("numsize == 1 && n < d","strtod_l.c",0x5d8,"____strtof_l_internal");
    }
    uVar58 = local_e8[0];
    puVar76 = local_168;
    bVar88 = false;
    while( true ) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_98[0];
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar58;
      uVar58 = SUB168((auVar15 << 0x40) % auVar6,0);
      if (iVar54 != 0) break;
      puVar76 = (ulong *)((long)puVar76 - 0x40);
      local_118[0] = 0;
      bVar88 = local_e8[0] < local_98[0] && local_f8 == (char *)0x1;
    }
    if (bVar88) {
      local_f0 = local_118[0];
      local_118[3] = (ulong)puVar76;
    }
    iVar52 = 0x18 - iVar54;
    if (iVar52 != 0) {
      __mpn_lshift(&local_f0,&local_f0,1,iVar52);
      local_f0 = local_f0 | 0UL >> ((char)iVar54 + 0x28U & 0x3f);
    }
    round_and_return(&local_f0,local_118[3] - 1,uVar47,0,(long)(0x3f - iVar52),uVar58 != 0 || bVar90
                    );
    goto LAB_006e0e00;
  }
  pcVar81 = (char *)str_to_mpn_constprop_0
                              (pcVar81,(ulong)pcVar78 & 0xffffffff,local_e8,&local_f8,local_118 + 3,
                               sVar55,pcVar79);
  uVar58 = local_118[3];
  pcVar69 = local_f8;
  if (0 < (long)local_118[3]) {
    plVar87 = &_fpioconst_pow10;
    iVar54 = 1;
    puVar76 = local_98;
    local_168 = local_e8;
    do {
      uVar64 = (ulong)iVar54;
      uVar58 = uVar64 & local_118[3];
      puVar85 = puVar76;
      while (puVar76 = puVar85, uVar58 != 0) {
        local_118[3] = uVar64 ^ local_118[3];
        lVar56 = plVar87[1] + -1;
        lVar74 = *plVar87 * 8 + 0x81b528;
        if ((long)pcVar69 < lVar56) {
          lVar74 = __mpn_mul(puVar76,lVar74,lVar56,local_168,pcVar69);
        }
        else {
          lVar74 = __mpn_mul(puVar76,local_168,pcVar69,lVar74,lVar56);
        }
        pcVar69 = local_f8 + lVar56;
        local_f8 = pcVar69;
        if (lVar74 == 0) {
          pcVar69 = pcVar69 + -1;
          local_f8 = pcVar69;
        }
        iVar54 = iVar54 * 2;
        plVar87 = plVar87 + 3;
        local_f8 = pcVar69;
        if (local_118[3] == 0) {
          uVar58 = 0;
          if (puVar76 == local_98) {
            memcpy(local_e8,puVar76,(long)pcVar69 * 8);
          }
          goto LAB_006e22b4;
        }
        uVar64 = (ulong)iVar54;
        puVar85 = local_168;
        local_168 = puVar76;
        uVar58 = uVar64 & local_118[3];
      }
      iVar54 = iVar54 * 2;
      plVar87 = plVar87 + 3;
    } while( true );
  }
LAB_006e22b4:
  puVar76 = (ulong *)((long)local_e8 + (long)(pcVar69 + -1) * 8);
  lVar56 = 0x3f;
  if (*puVar76 != 0) {
    for (; *puVar76 >> lVar56 == 0; lVar56 = lVar56 + -1) {
    }
  }
  iVar54 = (int)pcVar69 * 0x40 - ((uint)lVar56 ^ 0x3f);
  if (0x80 < iVar54) goto LAB_006e281d;
  if (0x18 < iVar54) {
    iVar52 = (int)(iVar54 - 0x18U) >> 6;
    lVar56 = (long)iVar52;
    uVar63 = iVar54 - 0x18U & 0x3f;
    if (uVar63 == 0) {
      local_f0 = local_e8[lVar56];
      lVar56 = lVar56 + -1;
      lVar74 = 0x3f;
    }
    else {
      lVar74 = (long)(int)(uVar63 - 1);
      local_f0 = local_e8[lVar56] >> (sbyte)uVar63;
      if (lVar56 < (long)(pcVar69 + -1)) {
        local_f0 = local_e8[iVar52 + 1] << (0x40U - (sbyte)uVar63 & 0x3f) | local_f0;
      }
      else {
      }
    }
    if (local_e8[0] == 0) {
      if (local_e8[1] == 0) {
        if (local_e8[2] == 0) {
          if (local_e8[3] == 0) {
            if (local_c8 == 0) {
              if (local_c0 == 0) {
                if (local_b8 == 0) {
                  if (local_b0 == 0) {
                    iVar52 = (local_a8 == 0) + 8;
                  }
                  else {
                    iVar52 = 7;
                  }
                }
                else {
                  iVar52 = 6;
                }
              }
              else {
                iVar52 = 5;
              }
            }
            else {
              iVar52 = 4;
            }
          }
          else {
            iVar52 = 3;
          }
        }
        else {
          iVar52 = 2;
        }
      }
      else {
        iVar52 = 1;
      }
    }
    else {
      iVar52 = 0;
    }
    round_and_return(&local_f0,(long)(iVar54 + -1),uVar47,local_e8[lVar56],lVar74,
                     pcVar78 < pcVar82 || iVar52 < lVar56);
    goto LAB_006e0e00;
  }
  if (pcVar82 != pcVar78) {
    memcpy(&local_f0,local_e8,(long)pcVar69 * 8);
    if ((pcVar82 <= pcVar78) || (0x2d < uVar58 + 0x2d)) goto LAB_006e338f;
    if (iVar54 < 1) goto LAB_006e30c3;
    if (uVar58 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("int_no > 0 && exponent == 0","strtod_l.c",0x559,"____strtof_l_internal");
    }
    local_168 = (ulong *)(long)iVar54;
    iVar60 = 0;
    iVar52 = 0x19 - iVar54;
    goto LAB_006e137f;
  }
  puVar76 = &local_f0 + (1 - (long)pcVar69);
  iVar52 = (iVar54 + -1) % 0x40;
  if (iVar52 == 0x17) {
    memcpy(puVar76,local_e8,(long)pcVar69 * 8);
    if (0 < 1 - (long)pcVar69) goto LAB_006e2e0b;
  }
  else {
    __mpn_lshift(puVar76,local_e8,pcVar69,0x17 - iVar52);
    if ((long)local_f8 < 1) {
LAB_006e2e0b:
      local_f0 = 0;
    }
  }
  round_and_return(&local_f0,(long)(iVar54 + -1),uVar47,0,0,0);
LAB_006e0e00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

