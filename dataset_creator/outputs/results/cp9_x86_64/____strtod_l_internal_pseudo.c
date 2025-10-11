
/* WARNING: Removing unreachable block (ram,0x006e54dd) */
/* WARNING: Removing unreachable block (ram,0x006e54f8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double ____strtod_l_internal(char *param_1,long *param_2,int param_3,long param_4)

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
  undefined1 auVar42 [15];
  unkuint9 Var43;
  undefined1 auVar44 [11];
  undefined1 auVar45 [13];
  undefined1 auVar46 [14];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  int iVar49;
  bool bVar50;
  uint6 uVar51;
  char cVar52;
  int iVar53;
  int iVar54;
  size_t sVar55;
  long lVar56;
  char *pcVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  long lVar61;
  char *pcVar62;
  byte bVar63;
  uint uVar64;
  ulong uVar65;
  long lVar66;
  ulong uVar67;
  ulong uVar68;
  long lVar69;
  char cVar70;
  int iVar71;
  char *pcVar72;
  char *pcVar73;
  char cVar74;
  undefined8 uVar75;
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
  double dVar91;
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  ulong *local_478;
  ulong *local_440;
  char **local_430;
  ulong local_428;
  ulong local_420;
  ulong local_410;
  char *local_408;
  ulong local_400;
  ulong local_3f8 [60];
  ulong local_218 [59];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar56 = *(long *)(param_4 + 8);
  pcVar73 = (char *)0x0;
  pcVar79 = (char *)0x0;
  if (param_3 != 0) {
    pcVar73 = *(char **)(lVar56 + 0x50);
    if ((byte)(*pcVar73 - 1U) < 0x7e) {
      pcVar79 = *(char **)(lVar56 + 0x48);
      if (**(char **)(lVar56 + 0x48) == '\0') {
        pcVar73 = (char *)0x0;
        pcVar79 = (char *)0x0;
      }
    }
    else {
      pcVar73 = (char *)0x0;
      pcVar79 = (char *)0x0;
    }
  }
  pcVar5 = *(char **)(lVar56 + 0x40);
  sVar55 = strlen(pcVar5);
  if (sVar55 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("decimal_len > 0","strtod_l.c",0x255,"____strtod_l_internal");
  }
  local_410 = 0;
  pcVar81 = param_1 + -1;
  do {
    pcVar83 = pcVar81;
    cVar52 = pcVar83[1];
    lVar56 = (long)cVar52;
    pcVar81 = pcVar83 + 1;
  } while ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + lVar56 * 2) & 0x20) != 0);
  if (cVar52 == '-') {
    lVar56 = (long)pcVar83[2];
    iVar49 = 1;
    pcVar81 = pcVar83 + 2;
  }
  else {
    iVar49 = 0;
    if (cVar52 == '+') {
      lVar56 = (long)pcVar83[2];
      pcVar81 = pcVar83 + 2;
    }
  }
  cVar52 = *pcVar5;
  cVar74 = (char)lVar56;
  cVar70 = cVar74;
  if (cVar52 != '\0') {
    lVar66 = 0;
    cVar70 = cVar52;
    do {
      if (pcVar81[lVar66] != cVar70) goto LAB_006e3cf5;
      lVar66 = lVar66 + 1;
      cVar70 = pcVar5[lVar66];
    } while (cVar70 != '\0');
    cVar70 = pcVar81[lVar66];
  }
  if ((byte)(cVar70 - 0x30U) < 10) {
LAB_006e3d6e:
    lVar66 = *(long *)(param_4 + 0x70);
    local_478 = (ulong *)pcVar81;
    if (cVar74 == '0') {
      if (*(int *)(lVar66 + (long)pcVar81[1] * 4) == 0x78) {
        pcVar83 = pcVar81 + 2;
        lVar56 = (long)pcVar81[2];
        local_478 = (ulong *)pcVar83;
        if (pcVar79 != (char *)0x0) {
          iVar54 = 0x10;
          pcVar73 = (char *)0x0;
          goto LAB_006e3d8a;
        }
        pcVar73 = (char *)0x0;
        if (pcVar81[2] == '0') {
          iVar54 = 0x10;
          goto LAB_006e47b0;
        }
        iVar54 = 0x10;
      }
      else {
        iVar54 = 10;
        pcVar83 = pcVar81;
        if (pcVar79 != (char *)0x0) {
LAB_006e3d8a:
          cVar70 = (char)lVar56;
          pcVar83 = (char *)local_478;
          do {
            if (cVar70 != '0') {
              if (*pcVar79 == '\0') {
                lVar69 = -1;
              }
              else {
                lVar61 = 0;
                cVar70 = *pcVar79;
                do {
                  lVar69 = lVar61;
                  if (pcVar83[lVar69] != cVar70) goto LAB_006e3dd2;
                  cVar70 = pcVar79[lVar69 + 1];
                  lVar61 = lVar69 + 1;
                } while (cVar70 != '\0');
              }
              pcVar83 = pcVar83 + lVar69;
            }
            cVar70 = pcVar83[1];
            lVar56 = (long)cVar70;
            pcVar83 = pcVar83 + 1;
          } while( true );
        }
LAB_006e47b0:
        do {
          pcVar81 = pcVar83 + 1;
          lVar56 = (long)*pcVar81;
          pcVar83 = pcVar83 + 1;
        } while (*pcVar81 == '0');
      }
LAB_006e3dd2:
      cVar70 = (char)*(undefined4 *)(lVar66 + (long)(char)lVar56 * 4);
      pcVar81 = pcVar83;
      if ((byte)((char)lVar56 - 0x30U) < 10) goto LAB_006e3e08;
      bVar90 = iVar54 != 0x10;
      if ((5 < (byte)(cVar70 + 0x9fU)) || (bVar90)) goto LAB_006e3f30;
    }
    else {
      if (pcVar79 != (char *)0x0) {
        iVar54 = 10;
        goto LAB_006e3d8a;
      }
      iVar54 = 10;
      cVar70 = (char)*(undefined4 *)(lVar66 + (long)cVar74 * 4);
      bVar90 = true;
      if ((byte)(cVar74 - 0x30U) < 10) goto LAB_006e3e08;
LAB_006e3f30:
      if (cVar52 != '\0') {
        lVar69 = 0;
        cVar74 = cVar52;
        do {
          if (pcVar81[lVar69] != cVar74) {
            if (bVar90) {
              if (cVar70 != 'e') goto LAB_006e4a04;
            }
            else if (((ulong *)pcVar81 == local_478) || (cVar70 != 'p')) goto LAB_006e4a04;
            goto LAB_006e3e08;
          }
          lVar69 = lVar69 + 1;
          cVar74 = pcVar5[lVar69];
        } while (cVar74 != '\0');
      }
      if ((iVar54 != 0x10) || ((ulong *)pcVar81 != local_478)) goto LAB_006e3e08;
      if ((9 < (byte)(pcVar81[sVar55] - 0x30U)) &&
         (5 < (byte)((char)*(undefined4 *)(lVar66 + (long)pcVar81[sVar55] * 4) + 0x9fU))) {
LAB_006e4a04:
        pcVar73 = (char *)__correctly_grouped_prefixmb(local_478,pcVar81,pcVar79);
        if (param_2 != (long *)0x0) {
          if (((ulong *)pcVar73 == local_478) && (pcVar73 = pcVar81 + -1, iVar54 != 0x10)) {
            pcVar73 = param_1;
          }
          *param_2 = (long)pcVar73;
        }
        goto LAB_006e4a40;
      }
    }
    iVar54 = 0x10;
LAB_006e3e08:
    pcVar78 = (char *)0x0;
    pcVar83 = pcVar81;
    do {
      if (((byte)((char)lVar56 - 0x30U) < 10) ||
         ((iVar54 == 0x10 &&
          ((byte)((char)*(undefined4 *)(lVar66 + (long)(char)lVar56 * 4) + 0x9fU) < 6)))) {
        pcVar78 = pcVar78 + 1;
      }
      else {
        if (pcVar79 == (char *)0x0) goto LAB_006e3e2d;
        cVar70 = *pcVar79;
        if (cVar70 == '\0') {
          lVar69 = -1;
        }
        else {
          lVar61 = 0;
          do {
            lVar69 = lVar61;
            if (pcVar83[lVar69] != cVar70) goto LAB_006e3e2d;
            cVar70 = pcVar79[lVar69 + 1];
            lVar61 = lVar69 + 1;
          } while (cVar70 != '\0');
        }
        pcVar83 = pcVar83 + lVar69;
      }
      lVar56 = (long)pcVar83[1];
      pcVar83 = pcVar83 + 1;
    } while( true );
  }
LAB_006e3cf5:
  if ((byte)(cVar74 - 0x30U) < 10) goto LAB_006e3d6e;
  cVar52 = (char)*(undefined4 *)(_nl_C_locobj._112_8_ + lVar56 * 4);
  if (cVar52 == 'i') {
    iVar54 = strncasecmp_l(pcVar81,"inf",3,(__locale_t)_nl_C_locobj);
    if (iVar54 == 0) {
      if (param_2 != (long *)0x0) {
        iVar54 = strncasecmp_l(pcVar81 + 3,"inity",5,(__locale_t)_nl_C_locobj);
        pcVar73 = pcVar81 + 3;
        if (iVar54 == 0) {
          pcVar73 = pcVar81 + 8;
        }
        *param_2 = (long)pcVar73;
      }
      dVar91 = DAT_00816b20;
      if (iVar49 == 0) {
        dVar91 = DAT_00816b10;
      }
      goto LAB_006e3d30;
    }
  }
  else if ((cVar52 == 'n') &&
          (iVar54 = strncasecmp_l(pcVar81,"nan",3,(__locale_t)_nl_C_locobj), iVar54 == 0)) {
    pcVar73 = pcVar81 + 3;
    dVar91 = DAT_0081b228;
    if (pcVar81[3] == '(') {
      dVar91 = (double)__strtod_nan(pcVar81 + 4,&local_408,0x29);
      if (*local_408 == ')') {
        pcVar73 = local_408 + 1;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = (long)pcVar73;
    }
    if (iVar49 != 0) {
      dVar91 = (double)((ulong)dVar91 ^ (ulong)DAT_007de6c0);
    }
    goto LAB_006e3d30;
  }
LAB_006e3d1e:
  if (param_2 != (long *)0x0) {
    *param_2 = (long)param_1;
  }
LAB_006e3d2c:
  dVar91 = 0.0;
LAB_006e3d30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return dVar91;
LAB_006e3e2d:
  if ((pcVar73 == (char *)0x0) || (pcVar83 <= local_478)) {
LAB_006e3e3d:
    pcVar62 = (char *)-(ulong)(pcVar78 == (char *)0x0);
    pcVar82 = pcVar78;
    if (cVar52 != '\0') {
      lVar66 = 0;
      do {
        if (pcVar83[lVar66] != cVar52) goto LAB_006e3e6a;
        lVar66 = lVar66 + 1;
        cVar52 = pcVar5[lVar66];
      } while (cVar52 != '\0');
    }
    pcVar83 = pcVar83 + sVar55;
    lVar56 = (long)*pcVar83;
    if (iVar54 == 0x10) {
      pcVar73 = (char *)0x0;
      lVar66 = (long)pcVar78 - (long)pcVar83;
      while( true ) {
        cVar52 = (char)lVar56;
        pcVar82 = pcVar83 + lVar66;
        if ((9 < (byte)(cVar52 - 0x30U)) &&
           (5 < (byte)((char)*(undefined4 *)(*(long *)(param_4 + 0x70) + (long)cVar52 * 4) + 0x9fU))
           ) break;
        if ((cVar52 != '0') && (pcVar62 == (char *)0xffffffffffffffff)) {
          pcVar62 = pcVar73;
        }
        lVar56 = (long)pcVar83[1];
        pcVar83 = pcVar83 + 1;
        pcVar73 = pcVar73 + 1;
      }
LAB_006e3e6a:
      if ((long)pcVar82 < 0) {
LAB_006e606a:
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no <= (uintmax_t) INTMAX_MAX","strtod_l.c",0x36a,"____strtod_l_internal")
        ;
      }
      cVar52 = (char)*(undefined4 *)(*(long *)(param_4 + 0x70) + lVar56 * 4);
      pcVar73 = pcVar83;
      if (iVar54 != 0x10) goto LAB_006e40bb;
      if (cVar52 != 'p') goto LAB_006e40b5;
LAB_006e3e8e:
      cVar52 = pcVar83[1];
      uVar58 = local_410;
      pcVar73 = pcVar83;
      if (cVar52 == '-') {
        cVar52 = pcVar83[2];
        if ((byte)(cVar52 - 0x30U) < 10) {
          pcVar73 = pcVar83 + 2;
          if (iVar54 == 0x10) {
            if ((char *)0x1ffffffffffffef3 < pcVar78) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_EXP - MANT_DIG) / 4",
                            "strtod_l.c",0x388,"____strtod_l_internal");
            }
            pcVar72 = (char *)((long)pcVar78 * 4 + 0x432);
            bVar90 = true;
          }
          else {
            if ((char *)0x7ffffffffffffe97 < pcVar78) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("int_no <= (uintmax_t) (INTMAX_MAX + MIN_10_EXP - MANT_DIG)",
                            "strtod_l.c",0x3a8,"____strtod_l_internal");
            }
            pcVar72 = pcVar78 + 0x168;
            bVar90 = true;
          }
          goto LAB_006e4a9e;
        }
      }
      else if (cVar52 == '+') {
        cVar52 = pcVar83[2];
        if ((byte)(cVar52 - 0x30U) < 10) {
          pcVar73 = pcVar83 + 2;
          if (iVar54 != 0x10) goto LAB_006e3ec0;
LAB_006e47e1:
          if (pcVar78 == (char *)0x0) {
            if (pcVar62 == (char *)0xffffffffffffffff) {
              local_478 = (ulong *)0x7;
              uVar67 = 0x66;
              bVar90 = false;
              goto LAB_006e4b03;
            }
            if ((char *)0x1ffffffffffffeff < pcVar62) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_EXP - 3) / 4","strtod_l.c",
                            0x39c,"____strtod_l_internal");
            }
            pcVar72 = (char *)((long)pcVar62 * 4 + 0x403);
            bVar90 = false;
          }
          else {
            if ((pcVar62 != (char *)0x0) || ((ulong)pcVar78 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX / 4","strtod_l.c",
                            0x390,"____strtod_l_internal");
            }
            bVar90 = false;
            pcVar72 = (char *)((0x100 - (long)pcVar78) * 4 + 3);
          }
          goto LAB_006e4a9e;
        }
      }
      else if ((byte)(cVar52 - 0x30U) < 10) {
        pcVar73 = pcVar83 + 1;
        if (iVar54 == 0x10) goto LAB_006e47e1;
LAB_006e3ec0:
        if (pcVar78 == (char *)0x0) {
          if (pcVar62 != (char *)0xffffffffffffffff) {
            if ((char *)0x7ffffffffffffeca < pcVar62) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_10_EXP - 1)","strtod_l.c",
                            0x3bc,"____strtod_l_internal");
            }
            pcVar72 = pcVar62 + 0x135;
            bVar90 = false;
            goto LAB_006e4a9e;
          }
          local_478 = (ulong *)0x9;
          uVar67 = 0x1e;
          bVar90 = false;
        }
        else {
          if ((pcVar62 != (char *)0x0) || ((long)pcVar78 < 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX","strtod_l.c",0x3b0,
                          "____strtod_l_internal");
          }
          bVar90 = false;
          pcVar72 = (char *)(0x135 - (long)pcVar78);
LAB_006e4a9e:
          if ((long)pcVar72 < 0) {
            pcVar72 = (char *)0x0;
          }
          uVar67 = (ulong)pcVar72 / 10;
          local_478 = (ulong *)((ulong)pcVar72 % 10);
        }
LAB_006e4b03:
        do {
          if (((long)uVar67 < (long)uVar58) ||
             ((uVar58 == uVar67 && ((long)local_478 < (long)(char)(cVar52 + -0x30))))) {
            if (pcVar62 == (char *)0xffffffffffffffff) {
              dVar91 = DAT_007de6c0;
              if (iVar49 == 0) {
                dVar91 = 0.0;
              }
            }
            else {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
              if (bVar90) {
                dVar91 = DAT_0081b220;
                dVar92 = DAT_0081b218;
                if (iVar49 == 0) {
                  dVar92 = DAT_0081b220;
                }
              }
              else {
                dVar91 = DAT_00816b18;
                dVar92 = DAT_00816b18;
                if (iVar49 != 0) {
                  dVar91 = DAT_00816b18;
                  dVar92 = DAT_00816b28;
                }
              }
              dVar91 = dVar91 * dVar92;
            }
            do {
              pcVar79 = pcVar73 + 1;
              pcVar73 = pcVar73 + 1;
            } while ((byte)(*pcVar79 - 0x30U) < 10);
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pcVar73;
            }
            goto LAB_006e3d30;
          }
          pcVar73 = pcVar73 + 1;
          uVar58 = (long)(char)(cVar52 + -0x30) + uVar58 * 10;
          cVar52 = *pcVar73;
        } while ((byte)(cVar52 - 0x30U) < 10);
        local_410 = uVar58;
        if (bVar90) {
          local_410 = -uVar58;
        }
      }
    }
    else {
      pcVar73 = pcVar83;
      if ((byte)(*pcVar83 - 0x30U) < 10) {
        do {
          pcVar73 = pcVar73 + 1;
          if ((pcVar62 == (char *)0xffffffffffffffff) && ((char)lVar56 != '0')) {
            pcVar62 = pcVar73 + (-1 - (long)pcVar83);
          }
          lVar56 = (long)*pcVar73;
          pcVar82 = pcVar73 + ((long)pcVar78 - (long)pcVar83);
        } while ((byte)(*pcVar73 - 0x30U) < 10);
      }
      if ((long)pcVar82 < 0) goto LAB_006e606a;
      cVar52 = *(char *)(*(long *)(param_4 + 0x70) + lVar56 * 4);
LAB_006e40b5:
      pcVar83 = pcVar73;
      if (iVar54 != 0x10) {
LAB_006e40bb:
        pcVar83 = pcVar73;
        if (cVar52 == 'e') goto LAB_006e3e8e;
      }
    }
    pcVar72 = pcVar83;
    if (pcVar78 < pcVar82) {
      pcVar57 = pcVar83;
      if (pcVar83[-1] != '0') goto LAB_006e4120;
      do {
        pcVar72 = pcVar57 + -1;
        pcVar2 = pcVar72 + (long)pcVar82;
        pcVar1 = pcVar57 + -2;
        pcVar57 = pcVar72;
      } while (*pcVar1 == '0');
      pcVar82 = pcVar2 + -(long)pcVar83;
      if (pcVar2 + -(long)pcVar83 < pcVar78) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no >= int_no","strtod_l.c",0x3fc,"____strtod_l_internal");
      }
    }
    uVar58 = local_410;
    if ((pcVar82 == pcVar78) && (pcVar82 != (char *)0x0)) {
      if ((long)local_410 < 0) {
        pcVar72 = pcVar72 + -1;
        bVar63 = 0;
        if (iVar54 != 0x10) {
          do {
            if ((int)*pcVar72 - 0x30U < 10) {
              if (*pcVar72 != '0') goto LAB_006e4cdc;
              uVar58 = uVar58 + (ulong)(iVar54 == 0x10) * 3 + 1;
              pcVar78 = pcVar78 + -1;
              pcVar82 = pcVar82 + -1;
              bVar63 = pcVar82 != (char *)0x0 & (byte)(uVar58 >> 0x3f);
              if (bVar63 == 0) goto LAB_006e4768;
            }
            pcVar72 = pcVar72 + -1;
          } while( true );
        }
        do {
          if ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + (long)*pcVar72 * 2) & 0x10) != 0) {
            if (*pcVar72 != '0') goto LAB_006e4cdc;
            uVar58 = uVar58 + 4;
            pcVar78 = pcVar78 + -1;
            pcVar82 = pcVar82 + -1;
            bVar63 = (byte)(uVar58 >> 0x3f) & pcVar82 != (char *)0x0;
            if (bVar63 == 0) goto LAB_006e4768;
          }
          pcVar72 = pcVar72 + -1;
        } while( true );
      }
      goto LAB_006e4120;
    }
LAB_006e4768:
    local_410 = uVar58;
    if (param_2 != (long *)0x0) goto LAB_006e4127;
    goto LAB_006e412e;
  }
  pcVar73 = (char *)__correctly_grouped_prefixmb(local_478,pcVar83,pcVar79);
  if (pcVar83 == pcVar73) {
    cVar52 = *pcVar5;
    goto LAB_006e3e3d;
  }
  if ((ulong *)pcVar73 == local_478) goto LAB_006e3d1e;
  if ((pcVar81 <= pcVar73) && (pcVar81 < pcVar73)) {
    uVar58 = (long)pcVar73 - (long)pcVar81;
    if (uVar58 - 1 < 0xf) {
      pcVar78 = (char *)0x0;
      pcVar83 = pcVar81;
LAB_006e581c:
      pcVar78 = pcVar78 + ((byte)(*pcVar83 - 0x30U) < 10);
      if (((((pcVar83 + 1 < pcVar73) &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[1] - 0x30U) < 10), pcVar83 + 2 < pcVar73)) &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[2] - 0x30U) < 10), pcVar83 + 3 < pcVar73)) &&
          ((pcVar78 = pcVar78 + ((byte)(pcVar83[3] - 0x30U) < 10), pcVar83 + 4 < pcVar73 &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[4] - 0x30U) < 10), pcVar83 + 5 < pcVar73)))) &&
         ((((pcVar78 = pcVar78 + ((byte)(pcVar83[5] - 0x30U) < 10), pcVar83 + 6 < pcVar73 &&
            ((pcVar78 = pcVar78 + ((byte)(pcVar83[6] - 0x30U) < 10), pcVar83 + 7 < pcVar73 &&
             (pcVar78 = pcVar78 + ((byte)(pcVar83[7] - 0x30U) < 10), pcVar83 + 8 < pcVar73)))) &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[8] - 0x30U) < 10), pcVar83 + 9 < pcVar73)) &&
          ((((pcVar78 = pcVar78 + ((byte)(pcVar83[9] - 0x30U) < 10), pcVar83 + 10 < pcVar73 &&
             (pcVar78 = pcVar78 + ((byte)(pcVar83[10] - 0x30U) < 10), pcVar83 + 0xb < pcVar73)) &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[0xb] - 0x30U) < 10), pcVar83 + 0xc < pcVar73)) &&
           ((pcVar78 = pcVar78 + ((byte)(pcVar83[0xc] - 0x30U) < 10), pcVar83 + 0xd < pcVar73 &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[0xd] - 0x30U) < 10), pcVar83 + 0xe < pcVar73)))))))
         ) {
        pcVar78 = pcVar78 + ((byte)(pcVar83[0xe] - 0x30U) < 10);
      }
    }
    else {
      lVar56 = 0;
      lVar66 = 0;
      pcVar83 = pcVar81;
      do {
        cVar52 = *pcVar83;
        pcVar78 = pcVar83 + 1;
        pcVar82 = pcVar83 + 2;
        pcVar62 = pcVar83 + 3;
        pcVar72 = pcVar83 + 4;
        pcVar57 = pcVar83 + 5;
        pcVar1 = pcVar83 + 6;
        pcVar2 = pcVar83 + 7;
        pcVar34 = pcVar83 + 8;
        pcVar35 = pcVar83 + 9;
        pcVar36 = pcVar83 + 10;
        pcVar37 = pcVar83 + 0xb;
        pcVar38 = pcVar83 + 0xc;
        pcVar39 = pcVar83 + 0xd;
        pcVar40 = pcVar83 + 0xe;
        pcVar41 = pcVar83 + 0xf;
        pcVar83 = pcVar83 + 0x10;
        auVar93[0] = cVar52 + DAT_0081b180;
        auVar93[1] = *pcVar78 + UNK_0081b181;
        auVar93[2] = *pcVar82 + UNK_0081b182;
        auVar93[3] = *pcVar62 + UNK_0081b183;
        auVar93[4] = *pcVar72 + UNK_0081b184;
        auVar93[5] = *pcVar57 + UNK_0081b185;
        auVar93[6] = *pcVar1 + UNK_0081b186;
        auVar93[7] = *pcVar2 + UNK_0081b187;
        auVar93[8] = *pcVar34 + UNK_0081b188;
        auVar93[9] = *pcVar35 + UNK_0081b189;
        auVar93[10] = *pcVar36 + UNK_0081b18a;
        auVar93[0xb] = *pcVar37 + UNK_0081b18b;
        auVar93[0xc] = *pcVar38 + UNK_0081b18c;
        auVar93[0xd] = *pcVar39 + UNK_0081b18d;
        auVar93[0xe] = *pcVar40 + UNK_0081b18e;
        auVar93[0xf] = *pcVar41 + UNK_0081b18f;
        auVar93 = psubusb(auVar93,_DAT_0081b190);
        auVar94[0] = -(auVar93[0] == '\0');
        auVar94[1] = -(auVar93[1] == '\0');
        auVar94[2] = -(auVar93[2] == '\0');
        auVar94[3] = -(auVar93[3] == '\0');
        auVar94[4] = -(auVar93[4] == '\0');
        auVar94[5] = -(auVar93[5] == '\0');
        auVar94[6] = -(auVar93[6] == '\0');
        auVar94[7] = -(auVar93[7] == '\0');
        auVar94[8] = -(auVar93[8] == '\0');
        auVar94[9] = -(auVar93[9] == '\0');
        auVar94[10] = -(auVar93[10] == '\0');
        auVar94[0xb] = -(auVar93[0xb] == '\0');
        auVar94[0xc] = -(auVar93[0xc] == '\0');
        auVar94[0xd] = -(auVar93[0xd] == '\0');
        auVar94[0xe] = -(auVar93[0xe] == '\0');
        auVar94[0xf] = -(auVar93[0xf] == '\0');
        auVar94 = auVar94 & _DAT_0081b1a0;
        uVar64 = CONCAT13(0,CONCAT12(auVar94[9],(ushort)auVar94[8]));
        auVar18[0xd] = 0;
        auVar18._0_13_ = auVar94._0_13_;
        auVar18[0xe] = auVar94[7];
        auVar20[0xc] = auVar94[6];
        auVar20._0_12_ = auVar94._0_12_;
        auVar20._13_2_ = auVar18._13_2_;
        auVar21[0xb] = 0;
        auVar21._0_11_ = auVar94._0_11_;
        auVar21._12_3_ = auVar20._12_3_;
        auVar22[10] = auVar94[5];
        auVar22._0_10_ = auVar94._0_10_;
        auVar22._11_4_ = auVar21._11_4_;
        auVar28[9] = 0;
        auVar28._0_9_ = auVar94._0_9_;
        auVar28._10_5_ = auVar22._10_5_;
        auVar30[8] = auVar94[4];
        auVar30._0_8_ = auVar94._0_8_;
        auVar30._9_6_ = auVar28._9_6_;
        uVar31 = auVar30._8_7_;
        auVar42._7_8_ = 0;
        auVar42._0_7_ = uVar31;
        Var43 = CONCAT81(SUB158(auVar42 << 0x40,7),auVar94[3]);
        auVar47._9_6_ = 0;
        auVar47._0_9_ = Var43;
        auVar44._1_10_ = SUB1510(auVar47 << 0x30,5);
        auVar44[0] = auVar94[2];
        auVar48._11_4_ = 0;
        auVar48._0_11_ = auVar44;
        auVar32[2] = auVar94[1];
        auVar32._0_2_ = auVar94._0_2_;
        auVar32._3_12_ = SUB1512(auVar48 << 0x20,3);
        auVar33._2_13_ = auVar32._2_13_;
        auVar33._0_2_ = auVar94._0_2_ & 0xff;
        auVar23[0xc] = auVar94[0xb];
        auVar23._0_12_ = ZEXT112(auVar94[0xc]) << 0x40;
        auVar24._10_3_ = auVar23._10_3_;
        auVar24._0_10_ = (unkuint10)auVar94[10] << 0x40;
        uVar25 = auVar24._8_5_;
        auVar45._5_8_ = 0;
        auVar45._0_5_ = uVar25;
        auVar26[4] = auVar94[9];
        auVar26._0_4_ = uVar64;
        auVar26[5] = 0;
        auVar26._6_7_ = SUB137(auVar45 << 0x40,6);
        auVar29._4_9_ = auVar26._4_9_;
        auVar29._0_4_ = uVar64 & 0xffff;
        auVar19._10_2_ = 0;
        auVar19._0_10_ = auVar33._0_10_;
        auVar19._12_2_ = (short)Var43;
        uVar51 = CONCAT42(auVar19._10_4_,auVar44._0_2_);
        auVar46._6_8_ = 0;
        auVar46._0_6_ = uVar51;
        auVar27._4_2_ = auVar32._2_2_;
        auVar27._0_4_ = auVar33._0_4_;
        auVar27._6_8_ = SUB148(auVar46 << 0x40,6);
        lVar56 = lVar56 + (ulong)auVar94[0xe] +
                 (ulong)(auVar33._0_4_ & 0xffff) + ((ulong)uVar51 & 0xffffffff) +
                 ((ulong)CONCAT24(auVar22._10_2_,(uint)auVar30._8_2_) & 0xffffffff) +
                 ((ulong)(uVar31 >> 0x20) & 0xffff) +
                 (auVar29._0_8_ & 0xffffffff) + ((ulong)uVar25 & 0xffffffff) +
                 ((ulong)CONCAT14(auVar94[0xd],(uint)auVar94[0xc]) & 0xffffffff);
        lVar66 = lVar66 + (ulong)auVar94[0xf] +
                 (ulong)auVar27._4_4_ + (ulong)(auVar19._10_4_ >> 0x10) +
                 (ulong)auVar22._10_2_ + (ulong)(uVar31 >> 0x30) +
                 (ulong)auVar26._4_4_ + (ulong)(uVar25 >> 0x20) + (ulong)auVar94[0xd];
      } while (pcVar83 != pcVar81 + (uVar58 & 0xfffffffffffffff0));
      pcVar78 = (char *)(lVar56 + lVar66);
      pcVar83 = pcVar81 + (uVar58 & 0xfffffffffffffff0);
      if ((uVar58 & 0xfffffffffffffff0) != uVar58) goto LAB_006e581c;
    }
    pcVar62 = (char *)0x0;
    pcVar82 = pcVar78;
    uVar58 = local_410;
    goto LAB_006e4768;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = (long)pcVar73;
  }
LAB_006e4a40:
  dVar91 = DAT_007de6c0;
  if (iVar49 != 0) goto LAB_006e3d30;
  goto LAB_006e3d2c;
LAB_006e4cdc:
  if (bVar63 != 0) {
    local_410 = uVar58;
  }
LAB_006e4120:
  if (param_2 != (long *)0x0) {
LAB_006e4127:
    *param_2 = (long)pcVar73;
LAB_006e412e:
    if (pcVar82 == (char *)0x0) goto LAB_006e4a40;
  }
  if (pcVar62 != (char *)0x0) {
    do {
      if (*pcVar81 == *pcVar5) {
        if (pcVar5[1] == '\0') goto LAB_006e4183;
        lVar56 = 1;
        cVar52 = pcVar5[1];
        while (cVar52 == pcVar81[lVar56]) {
          lVar56 = lVar56 + 1;
          cVar52 = pcVar5[lVar56];
          if (cVar52 == '\0') goto LAB_006e4183;
        }
      }
      pcVar81 = pcVar81 + 1;
    } while( true );
  }
LAB_006e41ca:
  if (iVar54 == 0x10) {
    lVar66 = (long)*pcVar81;
    lVar56 = *(long *)(param_4 + 0x68);
    bVar63 = *(byte *)(lVar56 + 1 + lVar66 * 2);
    while ((bVar63 & 0x10) == 0) {
      lVar66 = (long)pcVar81[1];
      pcVar81 = pcVar81 + 1;
      bVar63 = *(byte *)(lVar56 + 1 + lVar66 * 2);
    }
    while( true ) {
      pcVar81 = pcVar81 + 1;
      if ((char)lVar66 != '0') break;
      lVar66 = (long)*pcVar81;
    }
    uVar64 = (int)(char)lVar66 - 0x30;
    if (9 < uVar64) {
      uVar64 = *(int *)(*(long *)(param_4 + 0x70) + lVar66 * 4) - 0x57;
    }
    iVar54 = *(int *)(nbits_1 + (long)(int)uVar64 * 4);
    if (iVar54 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("bits != 0","strtod_l.c",1099,"____strtod_l_internal");
    }
    iVar53 = 0x34 - iVar54;
    local_400 = (long)(int)uVar64 << (0x35U - (char)iVar54 & 0x3f);
    if ((long)local_410 < 0) {
      lVar66 = -0x8000000000000000 - (long)iVar54;
    }
    else {
      lVar66 = (0x7fffffffffffffff - local_410) - (long)iVar54;
      lVar69 = lVar66 + 1;
      lVar66 = lVar66 + 4;
      if (-1 < lVar69) {
        lVar66 = lVar69;
      }
    }
    if ((char *)(lVar66 >> 2) < pcVar78) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("int_no <= (uintmax_t) (exponent < 0 ? (INTMAX_MAX - bits + 1) / 4 : (INTMAX_MAX - exponent - bits + 1) / 4)"
                    ,"strtod_l.c",0x45e,"____strtod_l_internal");
    }
    local_410 = (long)(iVar54 + -1) + -4 + (long)pcVar78 * 4 + local_410;
    pcVar82 = pcVar82 + -1;
    uVar58 = local_400;
    if (pcVar82 != (char *)0x0) {
      bVar90 = false;
      do {
        lVar66 = (long)*pcVar81;
        if ((*(byte *)(lVar56 + 1 + lVar66 * 2) & 0x10) == 0) {
          pcVar81 = pcVar81 + sVar55;
          lVar66 = (long)*pcVar81;
        }
        pcVar81 = pcVar81 + 1;
        uVar64 = (int)(char)lVar66 - 0x30;
        if (9 < uVar64) {
          uVar64 = *(int *)(*(long *)(param_4 + 0x70) + lVar66 * 4) - 0x57;
        }
        uVar67 = (ulong)(int)uVar64;
        pcVar82 = pcVar82 + -1;
        cVar52 = (char)iVar53;
        if (iVar53 < 3) {
          if (!bVar90) {
            uVar58 = local_400;
          }
          local_400 = uVar67 >> (3U - cVar52 & 0x3f) | uVar58;
          if (pcVar82 == (char *)0x0) goto LAB_006e5665;
          pcVar82 = pcVar82 + (long)pcVar81;
          goto LAB_006e499d;
        }
        bVar90 = true;
        iVar53 = iVar53 + -4;
        uVar58 = uVar58 | uVar67 << (cVar52 - 3U & 0x3f);
      } while (pcVar82 != (char *)0x0);
    }
    local_400 = uVar58;
    dVar91 = (double)round_and_return(&local_400,local_410,iVar49,0,0,0);
    goto LAB_006e3d30;
  }
  uVar58 = -(long)pcVar78;
  if (-(long)pcVar78 < (long)local_410) {
    uVar58 = local_410;
  }
  uVar67 = (long)pcVar82 - (long)pcVar78;
  if ((long)local_410 < (long)pcVar82 - (long)pcVar78) {
    uVar67 = local_410;
  }
  if ((long)local_410 < 0) {
    uVar67 = uVar58;
  }
  pcVar78 = pcVar78 + uVar67;
  local_410 = local_410 - uVar67;
  if (0x135 - (long)pcVar78 < (long)local_410) {
LAB_006e566d:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    dVar91 = DAT_00816b18;
    dVar92 = DAT_00816b28;
    if (iVar49 == 0) {
      dVar92 = DAT_00816b18;
    }
  }
  else {
    if (-0x145 < (long)local_410) {
      if (pcVar78 != (char *)0x0) {
        pcVar81 = (char *)str_to_mpn_constprop_0
                                    (pcVar81,(ulong)pcVar78 & 0xffffffff,local_3f8,&local_408,
                                     &local_410,sVar55,pcVar79);
        uVar58 = local_410;
        pcVar73 = local_408;
        if (0 < (long)local_410) {
          plVar87 = &_fpioconst_pow10;
          iVar54 = 1;
          puVar76 = local_218;
          local_478 = local_3f8;
          do {
            uVar67 = (ulong)iVar54;
            uVar58 = uVar67 & local_410;
            puVar85 = puVar76;
            while (puVar76 = puVar85, uVar58 != 0) {
              local_410 = uVar67 ^ local_410;
              lVar56 = plVar87[1] + -1;
              lVar66 = *plVar87 * 8 + 0x81b528;
              if ((long)pcVar73 < lVar56) {
                lVar66 = __mpn_mul(puVar76,lVar66,lVar56,local_478,pcVar73);
              }
              else {
                lVar66 = __mpn_mul(puVar76,local_478,pcVar73,lVar66,lVar56);
              }
              pcVar73 = local_408 + lVar56;
              local_408 = pcVar73;
              if (lVar66 == 0) {
                pcVar73 = pcVar73 + -1;
                local_408 = pcVar73;
              }
              iVar54 = iVar54 * 2;
              plVar87 = plVar87 + 3;
              local_408 = pcVar73;
              if (local_410 == 0) {
                uVar58 = 0;
                if (puVar76 == local_218) {
                  memcpy(local_3f8,puVar76,(long)pcVar73 * 8);
                }
                goto LAB_006e5104;
              }
              uVar67 = (ulong)iVar54;
              puVar85 = local_478;
              local_478 = puVar76;
              uVar58 = uVar67 & local_410;
            }
            iVar54 = iVar54 * 2;
            plVar87 = plVar87 + 3;
          } while( true );
        }
LAB_006e5104:
        puVar76 = (ulong *)((long)local_3f8 + (long)(pcVar73 + -1) * 8);
        lVar56 = 0x3f;
        if (*puVar76 != 0) {
          for (; *puVar76 >> lVar56 == 0; lVar56 = lVar56 + -1) {
          }
        }
        iVar71 = (int)pcVar73 * 0x40 - ((uint)lVar56 ^ 0x3f);
        if (0x400 < iVar71) goto LAB_006e566d;
        if (0x35 < iVar71) {
          iVar54 = (int)(iVar71 - 0x35U) >> 6;
          lVar56 = (long)iVar54;
          uVar64 = iVar71 - 0x35U & 0x3f;
          if (uVar64 == 0) {
            local_400 = local_3f8[lVar56];
            lVar56 = lVar56 + -1;
            lVar66 = 0x3f;
          }
          else {
            lVar66 = (long)(int)(uVar64 - 1);
            local_400 = local_3f8[lVar56] >> (sbyte)uVar64;
            if (lVar56 < (long)(pcVar73 + -1)) {
              local_400 = local_3f8[iVar54 + 1] << (0x40U - (sbyte)uVar64 & 0x3f) | local_400;
            }
            else {
            }
          }
          if (local_3f8[0] == 0) {
            lVar61 = 1;
            do {
              lVar69 = (long)(int)lVar61;
              lVar61 = lVar61 + 1;
            } while ((&local_400)[lVar61] == 0);
          }
          else {
            lVar69 = 0;
          }
          dVar91 = (double)round_and_return(&local_400,(long)(iVar71 + -1),iVar49,local_3f8[lVar56],
                                            lVar66,pcVar78 < pcVar82 || lVar69 < lVar56);
          goto LAB_006e3d30;
        }
        if (pcVar82 != pcVar78) {
          memcpy(&local_400,local_3f8,(long)pcVar73 * 8);
          if ((pcVar82 <= pcVar78) || (0x144 < uVar58 + 0x144)) goto LAB_006e5e67;
          if (iVar71 < 1) goto LAB_006e5d59;
          if (uVar58 != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("int_no > 0 && exponent == 0","strtod_l.c",0x559,"____strtod_l_internal");
          }
          local_478 = (ulong *)(long)iVar71;
          iVar53 = 0;
          iVar54 = 0x36 - iVar71;
          goto LAB_006e42b7;
        }
        puVar76 = &local_400 + (1 - (long)pcVar73);
        iVar54 = (iVar71 + -1) % 0x40;
        if (iVar54 == 0x34) {
          memcpy(puVar76,local_3f8,(long)pcVar73 * 8);
          if (0 < 1 - (long)pcVar73) goto LAB_006e5bfa;
        }
        else {
          __mpn_lshift(puVar76,local_3f8,pcVar73,0x34 - iVar54);
          if ((long)local_408 < 1) {
LAB_006e5bfa:
            local_400 = 0;
          }
        }
        dVar91 = (double)round_and_return(&local_400,(long)(iVar71 + -1),iVar49,0,0,0);
        goto LAB_006e3d30;
      }
      if ((pcVar82 == (char *)0x0) || (0x144 < local_410 + 0x144)) {
LAB_006e5e67:
                    /* WARNING: Subroutine does not return */
        __assert_fail("dig_no > int_no && exponent <= 0 && exponent >= MIN_10_EXP - (DIG + 2)",
                      "strtod_l.c",0x54d,"____strtod_l_internal");
      }
      if (*pcVar81 == '0') {
LAB_006e5d59:
                    /* WARNING: Subroutine does not return */
        __assert_fail("int_no == 0 && *startp != L_(\'0\')","strtod_l.c",0x55f,
                      "____strtod_l_internal");
      }
      iVar53 = (int)local_410;
      iVar54 = (int)(((1 - local_410) * 10) / 3) + 0x36;
      if (0x434 < iVar54) {
        iVar54 = 0x434;
      }
      iVar54 = iVar54 + iVar53;
      if (iVar54 < 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("need_frac_digits > 0","strtod_l.c",0x574,"____strtod_l_internal");
      }
      iVar71 = 0;
      local_478 = (ulong *)0x0;
LAB_006e42b7:
      local_430 = &local_408;
      local_440 = &local_410;
      lVar56 = (long)iVar54;
      if ((long)pcVar82 - (long)pcVar78 < (long)iVar54) {
        lVar56 = (long)((int)pcVar82 - (int)pcVar78);
      }
      bVar90 = (long)(pcVar78 + lVar56) < (long)pcVar82;
      if (bVar90) {
        pcVar82 = pcVar78 + lVar56;
      }
      pcVar73 = (char *)0x0;
      iVar54 = (int)pcVar82 - (int)pcVar78;
      plVar87 = &_fpioconst_pow10;
      uVar77 = iVar54 - iVar53;
      uVar64 = 1;
      puVar76 = local_3f8;
      puVar85 = local_218;
      do {
        while (puVar86 = puVar76, puVar76 = puVar86, puVar84 = puVar85, (uVar64 & uVar77) == 0) {
LAB_006e4360:
          uVar64 = uVar64 * 2;
          plVar87 = plVar87 + 3;
          puVar85 = puVar84;
          puVar86 = puVar84;
          if (uVar77 == 0) goto LAB_006e43d0;
        }
        uVar77 = uVar77 ^ uVar64;
        if (pcVar73 == (char *)0x0) {
          pcVar73 = (char *)(plVar87[1] + -1);
          memcpy(puVar85,__tens + *plVar87 * 8 + 8,(long)pcVar73 * 8);
          goto LAB_006e4360;
        }
        lVar56 = __mpn_mul(puVar86,*plVar87 * 8 + 0x81b528,plVar87[1] + -1,puVar85,pcVar73);
        pcVar73 = pcVar73 + plVar87[1] + -1;
        puVar76 = puVar85;
        puVar84 = puVar86;
        if (lVar56 != 0) goto LAB_006e4360;
        pcVar73 = pcVar73 + -1;
        uVar64 = uVar64 * 2;
        plVar87 = plVar87 + 3;
        puVar85 = puVar86;
      } while (uVar77 != 0);
LAB_006e43d0:
      if (puVar86 == local_3f8) {
        memcpy(local_218,local_3f8,(long)pcVar73 * 8);
      }
      str_to_mpn_constprop_0(pcVar81,iVar54,local_3f8,local_430,local_440,sVar55,pcVar79);
      pcVar79 = pcVar73 + -1;
      uVar58 = 0x3f;
      if (local_218[(long)pcVar79] != 0) {
        for (; local_218[(long)pcVar79] >> uVar58 == 0; uVar58 = uVar58 - 1) {
        }
      }
      uVar58 = uVar58 ^ 0x3f;
      if ((int)uVar58 != 0) {
        __mpn_lshift(local_218,local_218,pcVar73,uVar58 & 0xffffffff);
        lVar56 = __mpn_lshift(local_3f8,local_3f8,local_408,uVar58 & 0xffffffff);
        if (lVar56 != 0) {
          local_3f8[(long)local_408] = lVar56;
          local_408 = local_408 + 1;
        }
      }
      local_410 = (ulong)local_478;
      if (pcVar73 == (char *)0x1) {
        if (local_3f8[0] >= local_218[0] || local_408 != (char *)0x1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("numsize == 1 && n < d","strtod_l.c",0x5d8,"____strtod_l_internal");
        }
        uVar58 = local_3f8[0];
        puVar76 = local_478;
        bVar88 = false;
        while( true ) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_218[0];
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar58;
          uVar58 = SUB168((auVar17 << 0x40) % auVar8,0);
          if (iVar71 != 0) break;
          puVar76 = (ulong *)((long)puVar76 - 0x40);
          local_428 = 0;
          bVar88 = local_3f8[0] < local_218[0] && local_408 == (char *)0x1;
        }
        if (bVar88) {
          local_400 = local_428;
          local_410 = (ulong)puVar76;
        }
        iVar54 = 0x35 - iVar71;
        if (iVar54 != 0) {
          __mpn_lshift(&local_400,&local_400,1,iVar54);
          local_400 = local_400 | 0UL >> ((char)iVar71 + 0xbU & 0x3f);
        }
        dVar91 = (double)round_and_return(&local_400,local_410 - 1,iVar49,0,(long)(0x3f - iVar54),
                                          uVar58 != 0 || bVar90);
        goto LAB_006e3d30;
      }
      if (pcVar73 == &_nl_current_LC_PAPER_used) {
        uVar67 = local_3f8[1];
        uVar58 = local_3f8[0];
        if ((long)local_408 < 2) {
          if (local_3f8[0] < local_218[1]) {
            if (iVar71 != 0) {
              if (0x35 - iVar71 != 0) {
                __mpn_lshift(&local_400,&local_400,1,0x35 - iVar71);
              }
              uVar65 = 0;
              lVar56 = (long)(iVar71 + 10);
              uVar58 = local_3f8[0];
LAB_006e52e9:
              dVar91 = (double)round_and_return(&local_400,local_410 - 1,iVar49,uVar65,lVar56,
                                                uVar58 != 0 || bVar90);
              goto LAB_006e3d30;
            }
            local_410 = (long)local_478 - 0x40;
            uVar67 = local_3f8[0];
            uVar58 = 0;
          }
          else {
            uVar67 = 0;
          }
        }
        bVar50 = false;
        bVar88 = false;
        uVar80 = local_410;
        do {
          if (uVar67 == local_218[1]) {
            uVar60 = uVar58 + uVar67;
            if (!CARRY8(uVar58,uVar67)) {
              uVar65 = 0xffffffffffffffff;
              auVar16._8_8_ = (local_218[0] - 1) + (ulong)(local_218[0] == 0);
              auVar16._0_8_ = -local_218[0];
              goto LAB_006e5330;
            }
            uVar67 = uVar60 - local_218[0];
            uVar65 = 0xffffffffffffffff;
            uVar58 = local_218[0];
            if (iVar71 == 0) {
              if (bVar50) {
                local_410 = uVar80;
              }
              lVar56 = 10;
              uVar65 = 0xffffffffffffffff;
              local_400 = 0x1fffffffffffff;
            }
            else {
LAB_006e5383:
              if (bVar50) {
                local_410 = uVar80;
              }
              if (bVar88) {
                local_400 = local_420;
              }
              lVar56 = (long)(iVar71 + 10);
              if (iVar71 != 0x35) {
                __mpn_lshift(&local_400,&local_400,1);
                local_400 = local_400 | uVar65 >> ((char)iVar71 + 0xbU & 0x3f);
              }
            }
            goto LAB_006e52e6;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_218[1];
          auVar10._8_8_ = uVar67;
          auVar10._0_8_ = uVar58;
          uVar65 = SUB168(auVar10 / auVar7,0);
          uVar60 = SUB168(auVar10 % auVar7,0);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_218[0];
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar65;
          auVar16 = auVar12 * auVar14;
LAB_006e5330:
          do {
            uVar67 = auVar16._8_8_;
            uVar58 = auVar16._0_8_;
            if ((uVar67 <= uVar60) && ((uVar67 != uVar60 || (uVar58 == 0)))) break;
            uVar65 = uVar65 - 1;
            auVar16._8_8_ = uVar67 - (uVar58 < local_218[0]);
            auVar16._0_8_ = uVar58 - local_218[0];
            bVar89 = CARRY8(uVar60,local_218[1]);
            uVar60 = uVar60 + local_218[1];
          } while (!bVar89);
          uVar58 = -auVar16._0_8_;
          uVar67 = (uVar60 - auVar16._8_8_) - (ulong)(auVar16._0_8_ != 0);
          if (iVar71 != 0) goto LAB_006e5383;
          if (uVar65 == 0) {
            local_420 = 0;
            uVar80 = uVar80 - 0x40;
          }
          else {
            lVar56 = 0x3f;
            if (uVar65 != 0) {
              for (; uVar65 >> lVar56 == 0; lVar56 = lVar56 + -1) {
              }
            }
            uVar64 = (uint)lVar56 ^ 0x3f;
            iVar71 = 0x40 - uVar64;
            uVar80 = uVar80 - (long)(int)uVar64;
            local_420 = uVar65;
            if (0x35 < iVar71) goto code_r0x006e563e;
          }
          bVar50 = true;
          bVar88 = true;
        } while( true );
      }
      uVar58 = local_218[(long)pcVar79];
      uVar67 = local_218[(long)(pcVar73 + -2)];
      iVar54 = __mpn_cmp(local_3f8,local_218 + ((long)pcVar73 - (long)local_408));
      if (-1 < iVar54) {
        local_3f8[(long)local_408] = 0;
        local_408 = local_408 + 1;
      }
      pcVar5 = local_408;
      uVar64 = (uint)pcVar73;
      if ((long)local_408 < (long)pcVar73) {
        lVar56 = (long)pcVar73 - (long)local_408;
        if (iVar71 == 0) {
          local_410 = local_410 + lVar56 * -0x40;
          iVar54 = 0;
        }
        else {
          iVar54 = 0x35 - iVar71;
          if (iVar54 != 0) {
            __mpn_lshift(&local_400,&local_400,1);
          }
          iVar71 = iVar71 + (int)lVar56 * 0x40;
        }
        uVar77 = (uint)local_408;
        if (0 < (int)uVar77) {
          uVar65 = (long)pcVar73 - (long)pcVar5;
          if (((uVar65 & 0x1fffffffffffffff) == 0x1ffffffffffffffe) || (uVar77 - 1 < 3)) {
            puVar76 = (ulong *)((long)local_3f8 + (long)(int)uVar77 * 8);
            do {
              puVar76[uVar65] = puVar76[-1];
              puVar76 = puVar76 + -1;
            } while (puVar76 != &local_400 + ((long)(int)uVar77 - (ulong)(uVar77 - 1)));
          }
          else {
            lVar66 = 0;
            do {
              puVar3 = (undefined8 *)((long)&local_408 + lVar66 + (long)(int)uVar77 * 8);
              uVar75 = puVar3[1];
              puVar4 = (undefined8 *)((long)&local_400 + lVar66 + ((long)(int)uVar77 + uVar65) * 8);
              *puVar4 = *puVar3;
              puVar4[1] = uVar75;
              lVar66 = lVar66 + -0x10;
            } while (((ulong)local_408 >> 1 & 0x7fffffff) * -0x10 != lVar66);
            iVar53 = uVar77 - (uVar77 & 0xfffffffe);
            if ((uVar77 & 0xfffffffe) != uVar77) {
              local_3f8[iVar53 + lVar56] = local_3f8[iVar53 + -1];
            }
          }
        }
        memset(local_3f8,0,lVar56 * 8 + 8);
        local_218[(long)pcVar73] = 0;
        uVar65 = local_3f8[(long)pcVar73];
        if (iVar71 < 0x36) goto LAB_006e45c8;
        uVar80 = 0;
        lVar56 = (long)(0x3f - iVar54);
      }
      else {
        if (pcVar73 != local_408) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("numsize == densize","strtod_l.c",0x6ab,"____strtod_l_internal");
        }
        if (0 < (int)uVar64) {
          lVar56 = (long)(int)uVar64;
          memmove((ulong *)((long)local_3f8 + (lVar56 - (int)(uVar64 - 1)) * 8),
                  (ulong *)((long)local_3f8 + (lVar56 + (-1 - (long)(int)(uVar64 - 1))) * 8),
                  lVar56 * 8);
        }
        local_3f8[0] = 0;
        uVar65 = local_3f8[(long)pcVar73];
        local_218[(long)pcVar73] = 0;
LAB_006e45c8:
        iVar54 = uVar64 - 1;
        uVar60 = (ulong)(uVar64 - 2);
joined_r0x006e461a:
        uVar80 = 0xffffffffffffffff;
        if (uVar65 != uVar58) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar58;
          auVar9._8_8_ = uVar65;
          auVar9._0_8_ = local_3f8[(long)pcVar79];
          uVar80 = SUB168(auVar9 / auVar6,0);
          uVar65 = SUB168(auVar9 % auVar6,0);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar67;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar80;
          auVar15 = auVar11 * auVar13;
          while( true ) {
            uVar68 = auVar15._8_8_;
            uVar59 = auVar15._0_8_;
            if ((uVar68 <= uVar65) &&
               ((uVar68 != uVar65 || (uVar59 <= local_3f8[(long)(pcVar73 + -2)])))) break;
            uVar80 = uVar80 - 1;
            bVar88 = CARRY8(uVar65,uVar58);
            uVar65 = uVar65 + uVar58;
            if (bVar88) break;
            auVar15._8_8_ = uVar68 - (uVar59 < uVar67);
            auVar15._0_8_ = uVar59 - uVar67;
          }
        }
        lVar56 = __mpn_submul_1(local_3f8,local_218,pcVar73 + 1,uVar80);
        if (local_3f8[(long)pcVar73] != lVar56) {
          lVar56 = __mpn_add_n(local_3f8,local_3f8,local_218,pcVar73);
          if (lVar56 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("cy != 0","strtod_l.c",0x6d5,"____strtod_l_internal");
          }
          uVar80 = uVar80 - 1;
        }
        uVar65 = local_3f8[(long)pcVar79];
        local_3f8[(long)pcVar73] = uVar65;
        if (0 < iVar54) {
          memmove((ulong *)((long)local_3f8 + ((long)iVar54 - uVar60) * 8),
                  (ulong *)((long)local_3f8 + ((long)iVar54 + (-1 - uVar60)) * 8),uVar60 * 8 + 8);
        }
        local_3f8[0] = 0;
        if (iVar71 != 0) {
          if (-0xb < iVar71) {
            if (iVar71 == 0x35) {
              lVar56 = 0x3f;
            }
            else {
              __mpn_lshift(&local_400,&local_400,1);
              lVar56 = (long)(iVar71 + 10);
              local_400 = local_400 | uVar80 >> ((char)iVar71 + 0xbU & 0x3f);
            }
            goto LAB_006e4709;
          }
          local_400 = uVar80;
          iVar71 = iVar71 + 0x40;
          goto joined_r0x006e461a;
        }
        if (uVar80 == 0) {
          local_400 = 0;
          local_410 = local_410 - 0x40;
          goto joined_r0x006e461a;
        }
        lVar56 = 0x3f;
        if (uVar80 != 0) {
          for (; uVar80 >> lVar56 == 0; lVar56 = lVar56 + -1) {
          }
        }
        uVar77 = (uint)lVar56 ^ 0x3f;
        iVar71 = 0x40 - uVar77;
        local_410 = local_410 - (long)(int)uVar77;
        if (iVar71 < 0x36) {
          local_400 = uVar80;
          goto joined_r0x006e461a;
        }
        local_400 = uVar80 >> (0x40U - (char)(uVar77 + 0x35) & 0x3f);
        lVar56 = (long)(int)(0x3f - (uVar77 + 0x35));
      }
LAB_006e4709:
      uVar58 = (ulong)pcVar73 & 0xffffffff;
      if (-1 < (int)uVar64) {
        puVar76 = (ulong *)((long)local_3f8 + (long)(int)uVar64 * 8);
        do {
          uVar64 = (uint)uVar58;
          if (*puVar76 != 0) break;
          uVar64 = uVar64 - 1;
          uVar58 = (ulong)uVar64;
          puVar76 = puVar76 + -1;
        } while (uVar64 != 0xffffffff);
      }
      dVar91 = (double)round_and_return(&local_400,local_410 - 1,iVar49,uVar80,lVar56,
                                        (byte)~(byte)(uVar64 >> 0x18) >> 7 | bVar90);
      goto LAB_006e3d30;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    dVar91 = DAT_0081b220;
    dVar92 = DAT_0081b218;
    if (iVar49 == 0) {
      dVar91 = DAT_0081b220;
      dVar92 = DAT_0081b220;
    }
  }
  dVar91 = dVar91 * dVar92;
  goto LAB_006e3d30;
LAB_006e4183:
  pcVar81 = pcVar81 + (long)(pcVar62 + sVar55);
  if (iVar54 == 0x10) {
    if ((ulong)pcVar62 >> 0x3d != 0) goto LAB_006e5e86;
    if ((char *)(local_410 + 0x8000000000000000 >> 2) < pcVar62) goto LAB_006e5e48;
    pcVar73 = (char *)((long)pcVar62 * 4);
  }
  else {
    if ((long)pcVar62 < 0) {
LAB_006e5e86:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? (uintmax_t) INTMAX_MAX / 4 : (uintmax_t) INTMAX_MAX)"
                    ,"strtod_l.c",0x42d,"____strtod_l_internal");
    }
    pcVar73 = pcVar62;
    if ((char *)(local_410 + 0x8000000000000000) < pcVar62) {
LAB_006e5e48:
                    /* WARNING: Subroutine does not return */
      __assert_fail("lead_zero <= (base == 16 ? ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN) / 4 : ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN))"
                    ,"strtod_l.c",0x430,"____strtod_l_internal");
    }
  }
  local_410 = local_410 - (long)pcVar73;
  pcVar82 = pcVar82 + -(long)pcVar62;
  goto LAB_006e41ca;
  while (pcVar81 = pcVar81 + 1, pcVar81 != pcVar82) {
LAB_006e499d:
    if (*pcVar81 != '0') {
      uVar75 = 1;
      goto LAB_006e49a9;
    }
  }
LAB_006e5665:
  uVar75 = 0;
LAB_006e49a9:
  dVar91 = (double)round_and_return(&local_400,local_410,iVar49,uVar67 << (cVar52 + 0x3dU & 0x3f),
                                    0x3f,uVar75);
  goto LAB_006e3d30;
code_r0x006e563e:
  local_400 = uVar65 >> (-(char)(uVar64 + 0x35) & 0x3fU);
  lVar56 = (long)(int)(0x3f - (uVar64 + 0x35));
  local_410 = uVar80;
LAB_006e52e6:
  uVar58 = uVar58 | uVar67;
  goto LAB_006e52e9;
}

