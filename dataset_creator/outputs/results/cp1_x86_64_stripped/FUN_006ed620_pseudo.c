
/* WARNING: Removing unreachable block (ram,0x006eeeed) */
/* WARNING: Removing unreachable block (ram,0x006eef08) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_006ed620(char *param_1,long *param_2,int param_3,long param_4)

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
  long lVar52;
  char cVar53;
  int iVar54;
  int iVar55;
  long lVar56;
  long lVar57;
  char *pcVar58;
  ulong uVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  long lVar63;
  char *pcVar64;
  byte bVar65;
  uint uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  char cVar70;
  int iVar71;
  char *pcVar72;
  char cVar73;
  char *pcVar74;
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
  pcVar74 = (char *)0x0;
  pcVar79 = (char *)0x0;
  if (param_3 != 0) {
    pcVar74 = *(char **)(lVar56 + 0x50);
    if ((byte)(*pcVar74 - 1U) < 0x7e) {
      pcVar79 = *(char **)(lVar56 + 0x48);
      if (**(char **)(lVar56 + 0x48) == '\0') {
        pcVar74 = (char *)0x0;
        pcVar79 = (char *)0x0;
      }
    }
    else {
      pcVar74 = (char *)0x0;
      pcVar79 = (char *)0x0;
    }
  }
  pcVar5 = *(char **)(lVar56 + 0x40);
  lVar56 = thunk_FUN_007129d0(pcVar5);
  if (lVar56 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("decimal_len > 0","strtod_l.c",0x255,"____strtod_l_internal");
  }
  local_410 = 0;
  pcVar81 = param_1 + -1;
  do {
    pcVar83 = pcVar81;
    cVar53 = pcVar83[1];
    lVar57 = (long)cVar53;
    pcVar81 = pcVar83 + 1;
  } while ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + lVar57 * 2) & 0x20) != 0);
  if (cVar53 == '-') {
    lVar57 = (long)pcVar83[2];
    iVar49 = 1;
    pcVar81 = pcVar83 + 2;
  }
  else {
    iVar49 = 0;
    if (cVar53 == '+') {
      lVar57 = (long)pcVar83[2];
      pcVar81 = pcVar83 + 2;
    }
  }
  cVar53 = *pcVar5;
  cVar70 = (char)lVar57;
  cVar73 = cVar70;
  if (cVar53 != '\0') {
    lVar61 = 0;
    cVar73 = cVar53;
    do {
      if (pcVar81[lVar61] != cVar73) goto LAB_006ed705;
      lVar61 = lVar61 + 1;
      cVar73 = pcVar5[lVar61];
    } while (cVar73 != '\0');
    cVar73 = pcVar81[lVar61];
  }
  if ((byte)(cVar73 - 0x30U) < 10) {
LAB_006ed77e:
    lVar61 = *(long *)(param_4 + 0x70);
    local_478 = (ulong *)pcVar81;
    if (cVar70 == '0') {
      if (*(int *)(lVar61 + (long)pcVar81[1] * 4) == 0x78) {
        pcVar83 = pcVar81 + 2;
        lVar57 = (long)pcVar81[2];
        local_478 = (ulong *)pcVar83;
        if (pcVar79 != (char *)0x0) {
          iVar55 = 0x10;
          pcVar74 = (char *)0x0;
          goto LAB_006ed79a;
        }
        pcVar74 = (char *)0x0;
        if (pcVar81[2] == '0') {
          iVar55 = 0x10;
          goto LAB_006ee1c0;
        }
        iVar55 = 0x10;
      }
      else {
        iVar55 = 10;
        pcVar83 = pcVar81;
        if (pcVar79 != (char *)0x0) {
LAB_006ed79a:
          cVar70 = (char)lVar57;
          pcVar83 = (char *)local_478;
          do {
            if (cVar70 != '0') {
              if (*pcVar79 == '\0') {
                lVar63 = -1;
              }
              else {
                lVar52 = 0;
                cVar70 = *pcVar79;
                do {
                  lVar63 = lVar52;
                  if (pcVar83[lVar63] != cVar70) goto LAB_006ed7e2;
                  cVar70 = pcVar79[lVar63 + 1];
                  lVar52 = lVar63 + 1;
                } while (cVar70 != '\0');
              }
              pcVar83 = pcVar83 + lVar63;
            }
            cVar70 = pcVar83[1];
            lVar57 = (long)cVar70;
            pcVar83 = pcVar83 + 1;
          } while( true );
        }
LAB_006ee1c0:
        do {
          pcVar81 = pcVar83 + 1;
          lVar57 = (long)*pcVar81;
          pcVar83 = pcVar83 + 1;
        } while (*pcVar81 == '0');
      }
LAB_006ed7e2:
      cVar73 = (char)*(undefined4 *)(lVar61 + (long)(char)lVar57 * 4);
      pcVar81 = pcVar83;
      if ((byte)((char)lVar57 - 0x30U) < 10) goto LAB_006ed818;
      bVar90 = iVar55 != 0x10;
      if ((5 < (byte)(cVar73 + 0x9fU)) || (bVar90)) goto LAB_006ed940;
    }
    else {
      if (pcVar79 != (char *)0x0) {
        iVar55 = 10;
        goto LAB_006ed79a;
      }
      iVar55 = 10;
      cVar73 = (char)*(undefined4 *)(lVar61 + (long)cVar70 * 4);
      bVar90 = true;
      if ((byte)(cVar70 - 0x30U) < 10) goto LAB_006ed818;
LAB_006ed940:
      if (cVar53 != '\0') {
        lVar63 = 0;
        cVar70 = cVar53;
        do {
          if (pcVar81[lVar63] != cVar70) {
            if (bVar90) {
              if (cVar73 != 'e') goto LAB_006ee414;
            }
            else if (((ulong *)pcVar81 == local_478) || (cVar73 != 'p')) goto LAB_006ee414;
            goto LAB_006ed818;
          }
          lVar63 = lVar63 + 1;
          cVar70 = pcVar5[lVar63];
        } while (cVar70 != '\0');
      }
      if ((iVar55 != 0x10) || ((ulong *)pcVar81 != local_478)) goto LAB_006ed818;
      if ((9 < (byte)(pcVar81[lVar56] - 0x30U)) &&
         (5 < (byte)((char)*(undefined4 *)(lVar61 + (long)pcVar81[lVar56] * 4) + 0x9fU))) {
LAB_006ee414:
        pcVar74 = (char *)FUN_006f4720(local_478,pcVar81,pcVar79);
        if (param_2 != (long *)0x0) {
          if (((ulong *)pcVar74 == local_478) && (pcVar74 = pcVar81 + -1, iVar55 != 0x10)) {
            pcVar74 = param_1;
          }
          *param_2 = (long)pcVar74;
        }
        goto LAB_006ee450;
      }
    }
    iVar55 = 0x10;
LAB_006ed818:
    pcVar78 = (char *)0x0;
    pcVar83 = pcVar81;
    do {
      if (((byte)((char)lVar57 - 0x30U) < 10) ||
         ((iVar55 == 0x10 &&
          ((byte)((char)*(undefined4 *)(lVar61 + (long)(char)lVar57 * 4) + 0x9fU) < 6)))) {
        pcVar78 = pcVar78 + 1;
      }
      else {
        if (pcVar79 == (char *)0x0) goto LAB_006ed83d;
        cVar70 = *pcVar79;
        if (cVar70 == '\0') {
          lVar63 = -1;
        }
        else {
          lVar52 = 0;
          do {
            lVar63 = lVar52;
            if (pcVar83[lVar63] != cVar70) goto LAB_006ed83d;
            cVar70 = pcVar79[lVar63 + 1];
            lVar52 = lVar63 + 1;
          } while (cVar70 != '\0');
        }
        pcVar83 = pcVar83 + lVar63;
      }
      lVar57 = (long)pcVar83[1];
      pcVar83 = pcVar83 + 1;
    } while( true );
  }
LAB_006ed705:
  if ((byte)(cVar70 - 0x30U) < 10) goto LAB_006ed77e;
  if ((char)*(undefined4 *)(PTR_DAT_00939cb0 + lVar57 * 4) == 'i') {
    iVar55 = thunk_FUN_00713a00(pcVar81,&DAT_00824f44,3,&PTR_PTR_00939c40);
    if (iVar55 == 0) {
      if (param_2 != (long *)0x0) {
        iVar55 = thunk_FUN_00713a00(pcVar81 + 3,"inity",5,&PTR_PTR_00939c40);
        pcVar74 = pcVar81 + 3;
        if (iVar55 == 0) {
          pcVar74 = pcVar81 + 8;
        }
        *param_2 = (long)pcVar74;
      }
      dVar91 = DAT_00821c68;
      if (iVar49 == 0) {
        dVar91 = DAT_00821c58;
      }
      goto LAB_006ed740;
    }
  }
  else if (((char)*(undefined4 *)(PTR_DAT_00939cb0 + lVar57 * 4) == 'n') &&
          (iVar55 = thunk_FUN_00713a00(pcVar81,&DAT_00824f48,3,&PTR_PTR_00939c40), iVar55 == 0)) {
    pcVar74 = pcVar81 + 3;
    dVar91 = DAT_00825448;
    if (pcVar81[3] == '(') {
      dVar91 = (double)FUN_006f2690(pcVar81 + 4,&local_408,0x29);
      if (*local_408 == ')') {
        pcVar74 = local_408 + 1;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = (long)pcVar74;
    }
    if (iVar49 != 0) {
      dVar91 = (double)((ulong)dVar91 ^ (ulong)DAT_007e8fe0);
    }
    goto LAB_006ed740;
  }
LAB_006ed72e:
  if (param_2 != (long *)0x0) {
    *param_2 = (long)param_1;
  }
LAB_006ed73c:
  dVar91 = 0.0;
LAB_006ed740:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return dVar91;
LAB_006ed83d:
  if ((pcVar74 == (char *)0x0) || (pcVar83 <= local_478)) {
LAB_006ed84d:
    pcVar64 = (char *)-(ulong)(pcVar78 == (char *)0x0);
    pcVar82 = pcVar78;
    if (cVar53 != '\0') {
      lVar61 = 0;
      do {
        if (pcVar83[lVar61] != cVar53) goto LAB_006ed87a;
        lVar61 = lVar61 + 1;
        cVar53 = pcVar5[lVar61];
      } while (cVar53 != '\0');
    }
    pcVar83 = pcVar83 + lVar56;
    lVar57 = (long)*pcVar83;
    if (iVar55 == 0x10) {
      pcVar74 = (char *)0x0;
      lVar61 = (long)pcVar78 - (long)pcVar83;
      while( true ) {
        cVar53 = (char)lVar57;
        pcVar82 = pcVar83 + lVar61;
        if ((9 < (byte)(cVar53 - 0x30U)) &&
           (5 < (byte)((char)*(undefined4 *)(*(long *)(param_4 + 0x70) + (long)cVar53 * 4) + 0x9fU))
           ) break;
        if ((cVar53 != '0') && (pcVar64 == (char *)0xffffffffffffffff)) {
          pcVar64 = pcVar74;
        }
        lVar57 = (long)pcVar83[1];
        pcVar83 = pcVar83 + 1;
        pcVar74 = pcVar74 + 1;
      }
LAB_006ed87a:
      if ((long)pcVar82 < 0) {
LAB_006efa7a:
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("dig_no <= (uintmax_t) INTMAX_MAX","strtod_l.c",0x36a,"____strtod_l_internal");
      }
      cVar53 = (char)*(undefined4 *)(*(long *)(param_4 + 0x70) + lVar57 * 4);
      pcVar74 = pcVar83;
      if (iVar55 != 0x10) goto LAB_006edacb;
      if (cVar53 != 'p') goto LAB_006edac5;
LAB_006ed89e:
      cVar53 = pcVar83[1];
      uVar59 = local_410;
      pcVar74 = pcVar83;
      if (cVar53 == '-') {
        cVar53 = pcVar83[2];
        if ((byte)(cVar53 - 0x30U) < 10) {
          pcVar74 = pcVar83 + 2;
          if (iVar55 == 0x10) {
            if ((char *)0x1ffffffffffffef3 < pcVar78) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("int_no <= (uintmax_t) (INTMAX_MAX + MIN_EXP - MANT_DIG) / 4",
                           "strtod_l.c",0x388,"____strtod_l_internal");
            }
            pcVar72 = (char *)((long)pcVar78 * 4 + 0x432);
            bVar90 = true;
          }
          else {
            if ((char *)0x7ffffffffffffe97 < pcVar78) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("int_no <= (uintmax_t) (INTMAX_MAX + MIN_10_EXP - MANT_DIG)","strtod_l.c"
                           ,0x3a8,"____strtod_l_internal");
            }
            pcVar72 = pcVar78 + 0x168;
            bVar90 = true;
          }
          goto LAB_006ee4ae;
        }
      }
      else if (cVar53 == '+') {
        cVar53 = pcVar83[2];
        if ((byte)(cVar53 - 0x30U) < 10) {
          pcVar74 = pcVar83 + 2;
          if (iVar55 != 0x10) goto LAB_006ed8d0;
LAB_006ee1f1:
          if (pcVar78 == (char *)0x0) {
            if (pcVar64 == (char *)0xffffffffffffffff) {
              local_478 = (ulong *)0x7;
              uVar68 = 0x66;
              bVar90 = false;
              goto LAB_006ee513;
            }
            if ((char *)0x1ffffffffffffeff < pcVar64) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_EXP - 3) / 4","strtod_l.c",
                           0x39c,"____strtod_l_internal");
            }
            pcVar72 = (char *)((long)pcVar64 * 4 + 0x403);
            bVar90 = false;
          }
          else {
            if ((pcVar64 != (char *)0x0) || ((ulong)pcVar78 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX / 4","strtod_l.c",
                           0x390,"____strtod_l_internal");
            }
            bVar90 = false;
            pcVar72 = (char *)((0x100 - (long)pcVar78) * 4 + 3);
          }
          goto LAB_006ee4ae;
        }
      }
      else if ((byte)(cVar53 - 0x30U) < 10) {
        pcVar74 = pcVar83 + 1;
        if (iVar55 == 0x10) goto LAB_006ee1f1;
LAB_006ed8d0:
        if (pcVar78 == (char *)0x0) {
          if (pcVar64 != (char *)0xffffffffffffffff) {
            if ((char *)0x7ffffffffffffeca < pcVar64) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_10_EXP - 1)","strtod_l.c",
                           0x3bc,"____strtod_l_internal");
            }
            pcVar72 = pcVar64 + 0x135;
            bVar90 = false;
            goto LAB_006ee4ae;
          }
          local_478 = (ulong *)0x9;
          uVar68 = 0x1e;
          bVar90 = false;
        }
        else {
          if ((pcVar64 != (char *)0x0) || ((long)pcVar78 < 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX","strtod_l.c",0x3b0,
                         "____strtod_l_internal");
          }
          bVar90 = false;
          pcVar72 = (char *)(0x135 - (long)pcVar78);
LAB_006ee4ae:
          if ((long)pcVar72 < 0) {
            pcVar72 = (char *)0x0;
          }
          uVar68 = (ulong)pcVar72 / 10;
          local_478 = (ulong *)((ulong)pcVar72 % 10);
        }
LAB_006ee513:
        do {
          if (((long)uVar68 < (long)uVar59) ||
             ((uVar59 == uVar68 && ((long)local_478 < (long)(char)(cVar53 + -0x30))))) {
            if (pcVar64 == (char *)0xffffffffffffffff) {
              dVar91 = DAT_007e8fe0;
              if (iVar49 == 0) {
                dVar91 = 0.0;
              }
            }
            else {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
              if (bVar90) {
                dVar91 = DAT_00825440;
                dVar92 = DAT_00825438;
                if (iVar49 == 0) {
                  dVar92 = DAT_00825440;
                }
              }
              else {
                dVar91 = DAT_00821c60;
                dVar92 = DAT_00821c60;
                if (iVar49 != 0) {
                  dVar91 = DAT_00821c60;
                  dVar92 = DAT_00821c70;
                }
              }
              dVar91 = dVar91 * dVar92;
            }
            do {
              pcVar79 = pcVar74 + 1;
              pcVar74 = pcVar74 + 1;
            } while ((byte)(*pcVar79 - 0x30U) < 10);
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pcVar74;
            }
            goto LAB_006ed740;
          }
          pcVar74 = pcVar74 + 1;
          uVar59 = (long)(char)(cVar53 + -0x30) + uVar59 * 10;
          cVar53 = *pcVar74;
        } while ((byte)(cVar53 - 0x30U) < 10);
        local_410 = uVar59;
        if (bVar90) {
          local_410 = -uVar59;
        }
      }
    }
    else {
      pcVar74 = pcVar83;
      if ((byte)(*pcVar83 - 0x30U) < 10) {
        do {
          pcVar74 = pcVar74 + 1;
          if ((pcVar64 == (char *)0xffffffffffffffff) && ((char)lVar57 != '0')) {
            pcVar64 = pcVar74 + (-1 - (long)pcVar83);
          }
          lVar57 = (long)*pcVar74;
          pcVar82 = pcVar74 + ((long)pcVar78 - (long)pcVar83);
        } while ((byte)(*pcVar74 - 0x30U) < 10);
      }
      if ((long)pcVar82 < 0) goto LAB_006efa7a;
      cVar53 = *(char *)(*(long *)(param_4 + 0x70) + lVar57 * 4);
LAB_006edac5:
      pcVar83 = pcVar74;
      if (iVar55 != 0x10) {
LAB_006edacb:
        pcVar83 = pcVar74;
        if (cVar53 == 'e') goto LAB_006ed89e;
      }
    }
    pcVar72 = pcVar83;
    if (pcVar78 < pcVar82) {
      pcVar58 = pcVar83;
      if (pcVar83[-1] != '0') goto LAB_006edb30;
      do {
        pcVar72 = pcVar58 + -1;
        pcVar2 = pcVar72 + (long)pcVar82;
        pcVar1 = pcVar58 + -2;
        pcVar58 = pcVar72;
      } while (*pcVar1 == '0');
      pcVar82 = pcVar2 + -(long)pcVar83;
      if (pcVar2 + -(long)pcVar83 < pcVar78) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("dig_no >= int_no","strtod_l.c",0x3fc,"____strtod_l_internal");
      }
    }
    uVar59 = local_410;
    if ((pcVar82 == pcVar78) && (pcVar82 != (char *)0x0)) {
      if ((long)local_410 < 0) {
        pcVar72 = pcVar72 + -1;
        bVar65 = 0;
        if (iVar55 != 0x10) {
          do {
            if ((int)*pcVar72 - 0x30U < 10) {
              if (*pcVar72 != '0') goto LAB_006ee6ec;
              uVar59 = uVar59 + (ulong)(iVar55 == 0x10) * 3 + 1;
              pcVar78 = pcVar78 + -1;
              pcVar82 = pcVar82 + -1;
              bVar65 = pcVar82 != (char *)0x0 & (byte)(uVar59 >> 0x3f);
              if (bVar65 == 0) goto LAB_006ee178;
            }
            pcVar72 = pcVar72 + -1;
          } while( true );
        }
        do {
          if ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + (long)*pcVar72 * 2) & 0x10) != 0) {
            if (*pcVar72 != '0') goto LAB_006ee6ec;
            uVar59 = uVar59 + 4;
            pcVar78 = pcVar78 + -1;
            pcVar82 = pcVar82 + -1;
            bVar65 = (byte)(uVar59 >> 0x3f) & pcVar82 != (char *)0x0;
            if (bVar65 == 0) goto LAB_006ee178;
          }
          pcVar72 = pcVar72 + -1;
        } while( true );
      }
      goto LAB_006edb30;
    }
LAB_006ee178:
    local_410 = uVar59;
    if (param_2 != (long *)0x0) goto LAB_006edb37;
    goto LAB_006edb3e;
  }
  pcVar74 = (char *)FUN_006f4720(local_478,pcVar83,pcVar79);
  if (pcVar83 == pcVar74) {
    cVar53 = *pcVar5;
    goto LAB_006ed84d;
  }
  if ((ulong *)pcVar74 == local_478) goto LAB_006ed72e;
  if ((pcVar81 <= pcVar74) && (pcVar81 < pcVar74)) {
    uVar59 = (long)pcVar74 - (long)pcVar81;
    if (uVar59 - 1 < 0xf) {
      pcVar78 = (char *)0x0;
      pcVar83 = pcVar81;
LAB_006ef22c:
      pcVar78 = pcVar78 + ((byte)(*pcVar83 - 0x30U) < 10);
      if (((((pcVar83 + 1 < pcVar74) &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[1] - 0x30U) < 10), pcVar83 + 2 < pcVar74)) &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[2] - 0x30U) < 10), pcVar83 + 3 < pcVar74)) &&
          ((pcVar78 = pcVar78 + ((byte)(pcVar83[3] - 0x30U) < 10), pcVar83 + 4 < pcVar74 &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[4] - 0x30U) < 10), pcVar83 + 5 < pcVar74)))) &&
         ((((pcVar78 = pcVar78 + ((byte)(pcVar83[5] - 0x30U) < 10), pcVar83 + 6 < pcVar74 &&
            ((pcVar78 = pcVar78 + ((byte)(pcVar83[6] - 0x30U) < 10), pcVar83 + 7 < pcVar74 &&
             (pcVar78 = pcVar78 + ((byte)(pcVar83[7] - 0x30U) < 10), pcVar83 + 8 < pcVar74)))) &&
           (pcVar78 = pcVar78 + ((byte)(pcVar83[8] - 0x30U) < 10), pcVar83 + 9 < pcVar74)) &&
          ((((pcVar78 = pcVar78 + ((byte)(pcVar83[9] - 0x30U) < 10), pcVar83 + 10 < pcVar74 &&
             (pcVar78 = pcVar78 + ((byte)(pcVar83[10] - 0x30U) < 10), pcVar83 + 0xb < pcVar74)) &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[0xb] - 0x30U) < 10), pcVar83 + 0xc < pcVar74)) &&
           ((pcVar78 = pcVar78 + ((byte)(pcVar83[0xc] - 0x30U) < 10), pcVar83 + 0xd < pcVar74 &&
            (pcVar78 = pcVar78 + ((byte)(pcVar83[0xd] - 0x30U) < 10), pcVar83 + 0xe < pcVar74)))))))
         ) {
        pcVar78 = pcVar78 + ((byte)(pcVar83[0xe] - 0x30U) < 10);
      }
    }
    else {
      lVar57 = 0;
      lVar61 = 0;
      pcVar83 = pcVar81;
      do {
        cVar53 = *pcVar83;
        pcVar78 = pcVar83 + 1;
        pcVar82 = pcVar83 + 2;
        pcVar64 = pcVar83 + 3;
        pcVar72 = pcVar83 + 4;
        pcVar58 = pcVar83 + 5;
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
        auVar93[0] = cVar53 + DAT_008253a0;
        auVar93[1] = *pcVar78 + UNK_008253a1;
        auVar93[2] = *pcVar82 + UNK_008253a2;
        auVar93[3] = *pcVar64 + UNK_008253a3;
        auVar93[4] = *pcVar72 + UNK_008253a4;
        auVar93[5] = *pcVar58 + UNK_008253a5;
        auVar93[6] = *pcVar1 + UNK_008253a6;
        auVar93[7] = *pcVar2 + UNK_008253a7;
        auVar93[8] = *pcVar34 + UNK_008253a8;
        auVar93[9] = *pcVar35 + UNK_008253a9;
        auVar93[10] = *pcVar36 + UNK_008253aa;
        auVar93[0xb] = *pcVar37 + UNK_008253ab;
        auVar93[0xc] = *pcVar38 + UNK_008253ac;
        auVar93[0xd] = *pcVar39 + UNK_008253ad;
        auVar93[0xe] = *pcVar40 + UNK_008253ae;
        auVar93[0xf] = *pcVar41 + UNK_008253af;
        auVar93 = psubusb(auVar93,_DAT_008253b0);
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
        auVar94 = auVar94 & _DAT_008253c0;
        uVar66 = CONCAT13(0,CONCAT12(auVar94[9],(ushort)auVar94[8]));
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
        auVar26._0_4_ = uVar66;
        auVar26[5] = 0;
        auVar26._6_7_ = SUB137(auVar45 << 0x40,6);
        auVar29._4_9_ = auVar26._4_9_;
        auVar29._0_4_ = uVar66 & 0xffff;
        auVar19._10_2_ = 0;
        auVar19._0_10_ = auVar33._0_10_;
        auVar19._12_2_ = (short)Var43;
        uVar51 = CONCAT42(auVar19._10_4_,auVar44._0_2_);
        auVar46._6_8_ = 0;
        auVar46._0_6_ = uVar51;
        auVar27._4_2_ = auVar32._2_2_;
        auVar27._0_4_ = auVar33._0_4_;
        auVar27._6_8_ = SUB148(auVar46 << 0x40,6);
        lVar57 = lVar57 + (ulong)auVar94[0xe] +
                 (ulong)(auVar33._0_4_ & 0xffff) + ((ulong)uVar51 & 0xffffffff) +
                 ((ulong)CONCAT24(auVar22._10_2_,(uint)auVar30._8_2_) & 0xffffffff) +
                 ((ulong)(uVar31 >> 0x20) & 0xffff) +
                 (auVar29._0_8_ & 0xffffffff) + ((ulong)uVar25 & 0xffffffff) +
                 ((ulong)CONCAT14(auVar94[0xd],(uint)auVar94[0xc]) & 0xffffffff);
        lVar61 = lVar61 + (ulong)auVar94[0xf] +
                 (ulong)auVar27._4_4_ + (ulong)(auVar19._10_4_ >> 0x10) +
                 (ulong)auVar22._10_2_ + (ulong)(uVar31 >> 0x30) +
                 (ulong)auVar26._4_4_ + (ulong)(uVar25 >> 0x20) + (ulong)auVar94[0xd];
      } while (pcVar83 != pcVar81 + (uVar59 & 0xfffffffffffffff0));
      pcVar78 = (char *)(lVar57 + lVar61);
      pcVar83 = pcVar81 + (uVar59 & 0xfffffffffffffff0);
      if ((uVar59 & 0xfffffffffffffff0) != uVar59) goto LAB_006ef22c;
    }
    pcVar64 = (char *)0x0;
    pcVar82 = pcVar78;
    uVar59 = local_410;
    goto LAB_006ee178;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = (long)pcVar74;
  }
LAB_006ee450:
  dVar91 = DAT_007e8fe0;
  if (iVar49 != 0) goto LAB_006ed740;
  goto LAB_006ed73c;
LAB_006ee6ec:
  if (bVar65 != 0) {
    local_410 = uVar59;
  }
LAB_006edb30:
  if (param_2 != (long *)0x0) {
LAB_006edb37:
    *param_2 = (long)pcVar74;
LAB_006edb3e:
    if (pcVar82 == (char *)0x0) goto LAB_006ee450;
  }
  if (pcVar64 != (char *)0x0) {
    do {
      if (*pcVar81 == *pcVar5) {
        if (pcVar5[1] == '\0') goto LAB_006edb93;
        lVar57 = 1;
        cVar53 = pcVar5[1];
        while (cVar53 == pcVar81[lVar57]) {
          lVar57 = lVar57 + 1;
          cVar53 = pcVar5[lVar57];
          if (cVar53 == '\0') goto LAB_006edb93;
        }
      }
      pcVar81 = pcVar81 + 1;
    } while( true );
  }
LAB_006edbda:
  if (iVar55 == 0x10) {
    lVar61 = (long)*pcVar81;
    lVar57 = *(long *)(param_4 + 0x68);
    bVar65 = *(byte *)(lVar57 + 1 + lVar61 * 2);
    while ((bVar65 & 0x10) == 0) {
      lVar61 = (long)pcVar81[1];
      pcVar81 = pcVar81 + 1;
      bVar65 = *(byte *)(lVar57 + 1 + lVar61 * 2);
    }
    while( true ) {
      pcVar81 = pcVar81 + 1;
      if ((char)lVar61 != '0') break;
      lVar61 = (long)*pcVar81;
    }
    uVar66 = (int)(char)lVar61 - 0x30;
    if (9 < uVar66) {
      uVar66 = *(int *)(*(long *)(param_4 + 0x70) + lVar61 * 4) - 0x57;
    }
    iVar55 = *(int *)(&DAT_008253e0 + (long)(int)uVar66 * 4);
    if (iVar55 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("bits != 0","strtod_l.c",1099,"____strtod_l_internal");
    }
    iVar54 = 0x34 - iVar55;
    local_400 = (long)(int)uVar66 << (0x35U - (char)iVar55 & 0x3f);
    if ((long)local_410 < 0) {
      lVar61 = -0x8000000000000000 - (long)iVar55;
    }
    else {
      lVar61 = (0x7fffffffffffffff - local_410) - (long)iVar55;
      lVar63 = lVar61 + 1;
      lVar61 = lVar61 + 4;
      if (-1 < lVar63) {
        lVar61 = lVar63;
      }
    }
    if ((char *)(lVar61 >> 2) < pcVar78) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("int_no <= (uintmax_t) (exponent < 0 ? (INTMAX_MAX - bits + 1) / 4 : (INTMAX_MAX - exponent - bits + 1) / 4)"
                   ,"strtod_l.c",0x45e,"____strtod_l_internal");
    }
    local_410 = (long)(iVar55 + -1) + -4 + (long)pcVar78 * 4 + local_410;
    pcVar82 = pcVar82 + -1;
    uVar59 = local_400;
    if (pcVar82 != (char *)0x0) {
      bVar90 = false;
      do {
        lVar61 = (long)*pcVar81;
        if ((*(byte *)(lVar57 + 1 + lVar61 * 2) & 0x10) == 0) {
          pcVar81 = pcVar81 + lVar56;
          lVar61 = (long)*pcVar81;
        }
        pcVar81 = pcVar81 + 1;
        uVar66 = (int)(char)lVar61 - 0x30;
        if (9 < uVar66) {
          uVar66 = *(int *)(*(long *)(param_4 + 0x70) + lVar61 * 4) - 0x57;
        }
        uVar68 = (ulong)(int)uVar66;
        pcVar82 = pcVar82 + -1;
        cVar53 = (char)iVar54;
        if (iVar54 < 3) {
          if (!bVar90) {
            uVar59 = local_400;
          }
          local_400 = uVar68 >> (3U - cVar53 & 0x3f) | uVar59;
          if (pcVar82 == (char *)0x0) goto LAB_006ef075;
          pcVar82 = pcVar82 + (long)pcVar81;
          goto LAB_006ee3ad;
        }
        bVar90 = true;
        iVar54 = iVar54 + -4;
        uVar59 = uVar59 | uVar68 << (cVar53 - 3U & 0x3f);
      } while (pcVar82 != (char *)0x0);
    }
    local_400 = uVar59;
    dVar91 = (double)FUN_006ed0e0(&local_400,local_410,iVar49,0,0,0);
    goto LAB_006ed740;
  }
  uVar59 = -(long)pcVar78;
  if (-(long)pcVar78 < (long)local_410) {
    uVar59 = local_410;
  }
  uVar68 = (long)pcVar82 - (long)pcVar78;
  if ((long)local_410 < (long)pcVar82 - (long)pcVar78) {
    uVar68 = local_410;
  }
  if ((long)local_410 < 0) {
    uVar68 = uVar59;
  }
  pcVar78 = pcVar78 + uVar68;
  local_410 = local_410 - uVar68;
  if (0x135 - (long)pcVar78 < (long)local_410) {
LAB_006ef07d:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    dVar91 = DAT_00821c60;
    dVar92 = DAT_00821c70;
    if (iVar49 == 0) {
      dVar92 = DAT_00821c60;
    }
  }
  else {
    if (-0x145 < (long)local_410) {
      if (pcVar78 != (char *)0x0) {
        pcVar81 = (char *)FUN_006ece40(pcVar81,(ulong)pcVar78 & 0xffffffff,local_3f8,&local_408,
                                       &local_410,lVar56,pcVar79);
        uVar59 = local_410;
        pcVar74 = local_408;
        if (0 < (long)local_410) {
          plVar87 = &DAT_008255c0;
          iVar55 = 1;
          puVar76 = local_218;
          local_478 = local_3f8;
          do {
            uVar68 = (ulong)iVar55;
            uVar59 = uVar68 & local_410;
            puVar85 = puVar76;
            while (puVar76 = puVar85, uVar59 != 0) {
              local_410 = uVar68 ^ local_410;
              lVar57 = plVar87[1] + -1;
              if ((long)pcVar74 < lVar57) {
                lVar61 = FUN_006f3150(puVar76,&UNK_00825748 + *plVar87 * 8,lVar57,local_478,pcVar74)
                ;
              }
              else {
                lVar61 = FUN_006f3150(puVar76,local_478,pcVar74,&UNK_00825748 + *plVar87 * 8,lVar57)
                ;
              }
              pcVar74 = local_408 + lVar57;
              local_408 = pcVar74;
              if (lVar61 == 0) {
                pcVar74 = pcVar74 + -1;
                local_408 = pcVar74;
              }
              iVar55 = iVar55 * 2;
              plVar87 = plVar87 + 3;
              local_408 = pcVar74;
              if (local_410 == 0) {
                uVar59 = 0;
                if (puVar76 == local_218) {
                  thunk_FUN_00713a50(local_3f8,puVar76,(long)pcVar74 * 8);
                }
                goto LAB_006eeb14;
              }
              uVar68 = (ulong)iVar55;
              puVar85 = local_478;
              local_478 = puVar76;
              uVar59 = uVar68 & local_410;
            }
            iVar55 = iVar55 * 2;
            plVar87 = plVar87 + 3;
          } while( true );
        }
LAB_006eeb14:
        puVar76 = (ulong *)((long)local_3f8 + (long)(pcVar74 + -1) * 8);
        lVar57 = 0x3f;
        if (*puVar76 != 0) {
          for (; *puVar76 >> lVar57 == 0; lVar57 = lVar57 + -1) {
          }
        }
        iVar71 = (int)pcVar74 * 0x40 - ((uint)lVar57 ^ 0x3f);
        if (0x400 < iVar71) goto LAB_006ef07d;
        if (0x35 < iVar71) {
          iVar55 = (int)(iVar71 - 0x35U) >> 6;
          lVar56 = (long)iVar55;
          uVar66 = iVar71 - 0x35U & 0x3f;
          if (uVar66 == 0) {
            local_400 = local_3f8[lVar56];
            lVar56 = lVar56 + -1;
            lVar57 = 0x3f;
          }
          else {
            lVar57 = (long)(int)(uVar66 - 1);
            local_400 = local_3f8[lVar56] >> (sbyte)uVar66;
            if (lVar56 < (long)(pcVar74 + -1)) {
              local_400 = local_3f8[iVar55 + 1] << (0x40U - (sbyte)uVar66 & 0x3f) | local_400;
            }
            else {
            }
          }
          if (local_3f8[0] == 0) {
            lVar63 = 1;
            do {
              lVar61 = (long)(int)lVar63;
              lVar63 = lVar63 + 1;
            } while ((&local_400)[lVar63] == 0);
          }
          else {
            lVar61 = 0;
          }
          dVar91 = (double)FUN_006ed0e0(&local_400,(long)(iVar71 + -1),iVar49,local_3f8[lVar56],
                                        lVar57,pcVar78 < pcVar82 || lVar61 < lVar56);
          goto LAB_006ed740;
        }
        if (pcVar82 != pcVar78) {
          thunk_FUN_00713a50(&local_400,local_3f8,(long)pcVar74 * 8);
          if ((pcVar82 <= pcVar78) || (0x144 < uVar59 + 0x144)) goto LAB_006ef877;
          if (iVar71 < 1) goto LAB_006ef769;
          if (uVar59 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("int_no > 0 && exponent == 0","strtod_l.c",0x559,"____strtod_l_internal");
          }
          local_478 = (ulong *)(long)iVar71;
          iVar54 = 0;
          iVar55 = 0x36 - iVar71;
          goto LAB_006edcc7;
        }
        puVar76 = &local_400 + (1 - (long)pcVar74);
        iVar55 = (iVar71 + -1) % 0x40;
        if (iVar55 == 0x34) {
          thunk_FUN_00713a50(puVar76,local_3f8,(long)pcVar74 * 8);
          if (0 < 1 - (long)pcVar74) goto LAB_006ef60a;
        }
        else {
          FUN_006f2f20(puVar76,local_3f8,pcVar74,0x34 - iVar55);
          if ((long)local_408 < 1) {
LAB_006ef60a:
            local_400 = 0;
          }
        }
        dVar91 = (double)FUN_006ed0e0(&local_400,(long)(iVar71 + -1),iVar49,0,0,0);
        goto LAB_006ed740;
      }
      if ((pcVar82 == (char *)0x0) || (0x144 < local_410 + 0x144)) {
LAB_006ef877:
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("dig_no > int_no && exponent <= 0 && exponent >= MIN_10_EXP - (DIG + 2)",
                     "strtod_l.c",0x54d,"____strtod_l_internal");
      }
      if (*pcVar81 == '0') {
LAB_006ef769:
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("int_no == 0 && *startp != L_(\'0\')","strtod_l.c",0x55f,
                     "____strtod_l_internal");
      }
      iVar54 = (int)local_410;
      iVar55 = (int)(((1 - local_410) * 10) / 3) + 0x36;
      if (0x434 < iVar55) {
        iVar55 = 0x434;
      }
      iVar55 = iVar55 + iVar54;
      if (iVar55 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("need_frac_digits > 0","strtod_l.c",0x574,"____strtod_l_internal");
      }
      iVar71 = 0;
      local_478 = (ulong *)0x0;
LAB_006edcc7:
      local_430 = &local_408;
      local_440 = &local_410;
      lVar57 = (long)iVar55;
      if ((long)pcVar82 - (long)pcVar78 < (long)iVar55) {
        lVar57 = (long)((int)pcVar82 - (int)pcVar78);
      }
      bVar90 = (long)(pcVar78 + lVar57) < (long)pcVar82;
      if (bVar90) {
        pcVar82 = pcVar78 + lVar57;
      }
      pcVar74 = (char *)0x0;
      iVar55 = (int)pcVar82 - (int)pcVar78;
      plVar87 = &DAT_008255c0;
      uVar77 = iVar55 - iVar54;
      uVar66 = 1;
      puVar76 = local_3f8;
      puVar85 = local_218;
      do {
        while (puVar86 = puVar76, puVar76 = puVar86, puVar84 = puVar85, (uVar66 & uVar77) == 0) {
LAB_006edd70:
          uVar66 = uVar66 * 2;
          plVar87 = plVar87 + 3;
          puVar85 = puVar84;
          puVar86 = puVar84;
          if (uVar77 == 0) goto LAB_006edde0;
        }
        uVar77 = uVar77 ^ uVar66;
        if (pcVar74 == (char *)0x0) {
          pcVar74 = (char *)(plVar87[1] + -1);
          thunk_FUN_00713a50(puVar85,&UNK_00825748 + *plVar87 * 8,(long)pcVar74 * 8);
          goto LAB_006edd70;
        }
        lVar57 = FUN_006f3150(puVar86,&UNK_00825748 + *plVar87 * 8,plVar87[1] + -1,puVar85,pcVar74);
        pcVar74 = pcVar74 + plVar87[1] + -1;
        puVar76 = puVar85;
        puVar84 = puVar86;
        if (lVar57 != 0) goto LAB_006edd70;
        pcVar74 = pcVar74 + -1;
        uVar66 = uVar66 * 2;
        plVar87 = plVar87 + 3;
        puVar85 = puVar86;
      } while (uVar77 != 0);
LAB_006edde0:
      if (puVar86 == local_3f8) {
        thunk_FUN_00713a50(local_218,local_3f8,(long)pcVar74 * 8);
      }
      FUN_006ece40(pcVar81,iVar55,local_3f8,local_430,local_440,lVar56,pcVar79);
      pcVar79 = pcVar74 + -1;
      uVar59 = 0x3f;
      if (local_218[(long)pcVar79] != 0) {
        for (; local_218[(long)pcVar79] >> uVar59 == 0; uVar59 = uVar59 - 1) {
        }
      }
      uVar59 = uVar59 ^ 0x3f;
      if ((int)uVar59 != 0) {
        FUN_006f2f20(local_218,local_218,pcVar74,uVar59 & 0xffffffff);
        lVar56 = FUN_006f2f20(local_3f8,local_3f8,local_408,uVar59 & 0xffffffff);
        if (lVar56 != 0) {
          local_3f8[(long)local_408] = lVar56;
          local_408 = local_408 + 1;
        }
      }
      local_410 = (ulong)local_478;
      if (pcVar74 == (char *)0x1) {
        if (local_3f8[0] >= local_218[0] || local_408 != (char *)0x1) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("numsize == 1 && n < d","strtod_l.c",0x5d8,"____strtod_l_internal");
        }
        uVar59 = local_3f8[0];
        puVar76 = local_478;
        bVar88 = false;
        while( true ) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_218[0];
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar59;
          uVar59 = SUB168((auVar17 << 0x40) % auVar8,0);
          if (iVar71 != 0) break;
          puVar76 = (ulong *)((long)puVar76 - 0x40);
          local_428 = 0;
          bVar88 = local_3f8[0] < local_218[0] && local_408 == (char *)0x1;
        }
        if (bVar88) {
          local_400 = local_428;
          local_410 = (ulong)puVar76;
        }
        iVar55 = 0x35 - iVar71;
        if (iVar55 != 0) {
          FUN_006f2f20(&local_400,&local_400,1,iVar55);
          local_400 = local_400 | 0UL >> ((char)iVar71 + 0xbU & 0x3f);
        }
        dVar91 = (double)FUN_006ed0e0(&local_400,local_410 - 1,iVar49,0,(long)(0x3f - iVar55),
                                      uVar59 != 0 || bVar90);
        goto LAB_006ed740;
      }
      if (pcVar74 == (char *)0x2) {
        uVar68 = local_3f8[1];
        uVar59 = local_3f8[0];
        if ((long)local_408 < 2) {
          if (local_3f8[0] < local_218[1]) {
            if (iVar71 != 0) {
              if (0x35 - iVar71 != 0) {
                FUN_006f2f20(&local_400,&local_400,1,0x35 - iVar71);
              }
              uVar67 = 0;
              lVar56 = (long)(iVar71 + 10);
              uVar59 = local_3f8[0];
LAB_006eecf9:
              dVar91 = (double)FUN_006ed0e0(&local_400,local_410 - 1,iVar49,uVar67,lVar56,
                                            uVar59 != 0 || bVar90);
              goto LAB_006ed740;
            }
            local_410 = (long)local_478 - 0x40;
            uVar68 = local_3f8[0];
            uVar59 = 0;
          }
          else {
            uVar68 = 0;
          }
        }
        bVar50 = false;
        bVar88 = false;
        uVar80 = local_410;
        do {
          if (uVar68 == local_218[1]) {
            uVar62 = uVar59 + uVar68;
            if (!CARRY8(uVar59,uVar68)) {
              uVar67 = 0xffffffffffffffff;
              auVar16._8_8_ = (local_218[0] - 1) + (ulong)(local_218[0] == 0);
              auVar16._0_8_ = -local_218[0];
              goto LAB_006eed40;
            }
            uVar68 = uVar62 - local_218[0];
            uVar67 = 0xffffffffffffffff;
            uVar59 = local_218[0];
            if (iVar71 == 0) {
              if (bVar50) {
                local_410 = uVar80;
              }
              lVar56 = 10;
              uVar67 = 0xffffffffffffffff;
              local_400 = 0x1fffffffffffff;
            }
            else {
LAB_006eed93:
              if (bVar50) {
                local_410 = uVar80;
              }
              if (bVar88) {
                local_400 = local_420;
              }
              lVar56 = (long)(iVar71 + 10);
              if (iVar71 != 0x35) {
                FUN_006f2f20(&local_400,&local_400,1);
                local_400 = local_400 | uVar67 >> ((char)iVar71 + 0xbU & 0x3f);
              }
            }
            goto LAB_006eecf6;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_218[1];
          auVar10._8_8_ = uVar68;
          auVar10._0_8_ = uVar59;
          uVar67 = SUB168(auVar10 / auVar7,0);
          uVar62 = SUB168(auVar10 % auVar7,0);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_218[0];
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar67;
          auVar16 = auVar12 * auVar14;
LAB_006eed40:
          do {
            uVar68 = auVar16._8_8_;
            uVar59 = auVar16._0_8_;
            if ((uVar68 <= uVar62) && ((uVar68 != uVar62 || (uVar59 == 0)))) break;
            uVar67 = uVar67 - 1;
            auVar16._8_8_ = uVar68 - (uVar59 < local_218[0]);
            auVar16._0_8_ = uVar59 - local_218[0];
            bVar89 = CARRY8(uVar62,local_218[1]);
            uVar62 = uVar62 + local_218[1];
          } while (!bVar89);
          uVar59 = -auVar16._0_8_;
          uVar68 = (uVar62 - auVar16._8_8_) - (ulong)(auVar16._0_8_ != 0);
          if (iVar71 != 0) goto LAB_006eed93;
          if (uVar67 == 0) {
            local_420 = 0;
            uVar80 = uVar80 - 0x40;
          }
          else {
            lVar56 = 0x3f;
            if (uVar67 != 0) {
              for (; uVar67 >> lVar56 == 0; lVar56 = lVar56 + -1) {
              }
            }
            uVar66 = (uint)lVar56 ^ 0x3f;
            iVar71 = 0x40 - uVar66;
            uVar80 = uVar80 - (long)(int)uVar66;
            local_420 = uVar67;
            if (0x35 < iVar71) goto code_r0x006ef04e;
          }
          bVar50 = true;
          bVar88 = true;
        } while( true );
      }
      uVar59 = local_218[(long)pcVar79];
      uVar68 = local_218[(long)(pcVar74 + -2)];
      iVar55 = FUN_006f2ee0(local_3f8,local_218 + ((long)pcVar74 - (long)local_408));
      if (-1 < iVar55) {
        local_3f8[(long)local_408] = 0;
        local_408 = local_408 + 1;
      }
      pcVar5 = local_408;
      uVar66 = (uint)pcVar74;
      if ((long)local_408 < (long)pcVar74) {
        lVar56 = (long)pcVar74 - (long)local_408;
        if (iVar71 == 0) {
          local_410 = local_410 + lVar56 * -0x40;
          iVar55 = 0;
        }
        else {
          iVar55 = 0x35 - iVar71;
          if (iVar55 != 0) {
            FUN_006f2f20(&local_400,&local_400,1);
          }
          iVar71 = iVar71 + (int)lVar56 * 0x40;
        }
        uVar77 = (uint)local_408;
        if (0 < (int)uVar77) {
          uVar67 = (long)pcVar74 - (long)pcVar5;
          if (((uVar67 & 0x1fffffffffffffff) == 0x1ffffffffffffffe) || (uVar77 - 1 < 3)) {
            puVar76 = (ulong *)((long)local_3f8 + (long)(int)uVar77 * 8);
            do {
              puVar76[uVar67] = puVar76[-1];
              puVar76 = puVar76 + -1;
            } while (puVar76 != &local_400 + ((long)(int)uVar77 - (ulong)(uVar77 - 1)));
          }
          else {
            lVar57 = 0;
            do {
              puVar3 = (undefined8 *)((long)&local_408 + lVar57 + (long)(int)uVar77 * 8);
              uVar75 = puVar3[1];
              puVar4 = (undefined8 *)((long)&local_400 + lVar57 + ((long)(int)uVar77 + uVar67) * 8);
              *puVar4 = *puVar3;
              puVar4[1] = uVar75;
              lVar57 = lVar57 + -0x10;
            } while (((ulong)local_408 >> 1 & 0x7fffffff) * -0x10 != lVar57);
            iVar54 = uVar77 - (uVar77 & 0xfffffffe);
            if ((uVar77 & 0xfffffffe) != uVar77) {
              local_3f8[iVar54 + lVar56] = local_3f8[iVar54 + -1];
            }
          }
        }
        thunk_FUN_00713720(local_3f8,0,lVar56 * 8 + 8);
        local_218[(long)pcVar74] = 0;
        uVar67 = local_3f8[(long)pcVar74];
        if (iVar71 < 0x36) goto LAB_006edfd8;
        uVar80 = 0;
        lVar56 = (long)(0x3f - iVar55);
      }
      else {
        if (pcVar74 != local_408) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("numsize == densize","strtod_l.c",0x6ab,"____strtod_l_internal");
        }
        if (0 < (int)uVar66) {
          lVar56 = (long)(int)uVar66;
          thunk_FUN_00713610((ulong *)((long)local_3f8 + (lVar56 - (int)(uVar66 - 1)) * 8),
                             (ulong *)((long)local_3f8 +
                                      (lVar56 + (-1 - (long)(int)(uVar66 - 1))) * 8),lVar56 * 8);
        }
        local_3f8[0] = 0;
        uVar67 = local_3f8[(long)pcVar74];
        local_218[(long)pcVar74] = 0;
LAB_006edfd8:
        iVar55 = uVar66 - 1;
        uVar62 = (ulong)(uVar66 - 2);
joined_r0x006ee02a:
        uVar80 = 0xffffffffffffffff;
        if (uVar67 != uVar59) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar59;
          auVar9._8_8_ = uVar67;
          auVar9._0_8_ = local_3f8[(long)pcVar79];
          uVar80 = SUB168(auVar9 / auVar6,0);
          uVar67 = SUB168(auVar9 % auVar6,0);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar68;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar80;
          auVar15 = auVar11 * auVar13;
          while( true ) {
            uVar69 = auVar15._8_8_;
            uVar60 = auVar15._0_8_;
            if ((uVar69 <= uVar67) &&
               ((uVar69 != uVar67 || (uVar60 <= local_3f8[(long)(pcVar74 + -2)])))) break;
            uVar80 = uVar80 - 1;
            bVar88 = CARRY8(uVar67,uVar59);
            uVar67 = uVar67 + uVar59;
            if (bVar88) break;
            auVar15._8_8_ = uVar69 - (uVar60 < uVar68);
            auVar15._0_8_ = uVar60 - uVar68;
          }
        }
        lVar56 = FUN_006f4590(local_3f8,local_218,pcVar74 + 1,uVar80);
        if (local_3f8[(long)pcVar74] != lVar56) {
          lVar56 = FUN_006f2e30(local_3f8,local_3f8,local_218,pcVar74);
          if (lVar56 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("cy != 0","strtod_l.c",0x6d5,"____strtod_l_internal");
          }
          uVar80 = uVar80 - 1;
        }
        uVar67 = local_3f8[(long)pcVar79];
        local_3f8[(long)pcVar74] = uVar67;
        if (0 < iVar55) {
          thunk_FUN_00713610((ulong *)((long)local_3f8 + ((long)iVar55 - uVar62) * 8),
                             (ulong *)((long)local_3f8 + ((long)iVar55 + (-1 - uVar62)) * 8),
                             uVar62 * 8 + 8);
        }
        local_3f8[0] = 0;
        if (iVar71 != 0) {
          if (-0xb < iVar71) {
            if (iVar71 == 0x35) {
              lVar56 = 0x3f;
            }
            else {
              FUN_006f2f20(&local_400,&local_400,1);
              lVar56 = (long)(iVar71 + 10);
              local_400 = local_400 | uVar80 >> ((char)iVar71 + 0xbU & 0x3f);
            }
            goto LAB_006ee119;
          }
          local_400 = uVar80;
          iVar71 = iVar71 + 0x40;
          goto joined_r0x006ee02a;
        }
        if (uVar80 == 0) {
          local_400 = 0;
          local_410 = local_410 - 0x40;
          goto joined_r0x006ee02a;
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
          goto joined_r0x006ee02a;
        }
        local_400 = uVar80 >> (0x40U - (char)(uVar77 + 0x35) & 0x3f);
        lVar56 = (long)(int)(0x3f - (uVar77 + 0x35));
      }
LAB_006ee119:
      uVar59 = (ulong)pcVar74 & 0xffffffff;
      if (-1 < (int)uVar66) {
        puVar76 = (ulong *)((long)local_3f8 + (long)(int)uVar66 * 8);
        do {
          uVar66 = (uint)uVar59;
          if (*puVar76 != 0) break;
          uVar66 = uVar66 - 1;
          uVar59 = (ulong)uVar66;
          puVar76 = puVar76 + -1;
        } while (uVar66 != 0xffffffff);
      }
      dVar91 = (double)FUN_006ed0e0(&local_400,local_410 - 1,iVar49,uVar80,lVar56,
                                    (byte)~(byte)(uVar66 >> 0x18) >> 7 | bVar90);
      goto LAB_006ed740;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
    dVar91 = DAT_00825440;
    dVar92 = DAT_00825438;
    if (iVar49 == 0) {
      dVar91 = DAT_00825440;
      dVar92 = DAT_00825440;
    }
  }
  dVar91 = dVar91 * dVar92;
  goto LAB_006ed740;
LAB_006edb93:
  pcVar81 = pcVar81 + (long)(pcVar64 + lVar56);
  if (iVar55 == 0x10) {
    if ((ulong)pcVar64 >> 0x3d != 0) goto LAB_006ef896;
    if ((char *)(local_410 + 0x8000000000000000 >> 2) < pcVar64) goto LAB_006ef858;
    pcVar74 = (char *)((long)pcVar64 * 4);
  }
  else {
    if ((long)pcVar64 < 0) {
LAB_006ef896:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("lead_zero <= (base == 16 ? (uintmax_t) INTMAX_MAX / 4 : (uintmax_t) INTMAX_MAX)"
                   ,"strtod_l.c",0x42d,"____strtod_l_internal");
    }
    pcVar74 = pcVar64;
    if ((char *)(local_410 + 0x8000000000000000) < pcVar64) {
LAB_006ef858:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("lead_zero <= (base == 16 ? ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN) / 4 : ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN))"
                   ,"strtod_l.c",0x430,"____strtod_l_internal");
    }
  }
  local_410 = local_410 - (long)pcVar74;
  pcVar82 = pcVar82 + -(long)pcVar64;
  goto LAB_006edbda;
  while (pcVar81 = pcVar81 + 1, pcVar81 != pcVar82) {
LAB_006ee3ad:
    if (*pcVar81 != '0') {
      uVar75 = 1;
      goto LAB_006ee3b9;
    }
  }
LAB_006ef075:
  uVar75 = 0;
LAB_006ee3b9:
  dVar91 = (double)FUN_006ed0e0(&local_400,local_410,iVar49,uVar68 << (cVar53 + 0x3dU & 0x3f),0x3f,
                                uVar75);
  goto LAB_006ed740;
code_r0x006ef04e:
  local_400 = uVar67 >> (-(char)(uVar66 + 0x35) & 0x3fU);
  lVar56 = (long)(int)(0x3f - (uVar66 + 0x35));
  local_410 = uVar80;
LAB_006eecf6:
  uVar59 = uVar59 | uVar68;
  goto LAB_006eecf9;
}

