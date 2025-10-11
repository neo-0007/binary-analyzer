
/* WARNING: Removing unreachable block (ram,0x007940ea) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00792a80(char *param_1,long *param_2,int param_3,long param_4)

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
  long lVar58;
  long lVar59;
  char *pcVar60;
  ulong uVar61;
  long lVar62;
  sbyte sVar63;
  int iVar64;
  uint uVar65;
  char *pcVar66;
  byte bVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  char cVar71;
  char *pcVar72;
  ulong *puVar73;
  ulong *puVar74;
  char cVar75;
  long lVar76;
  char *pcVar77;
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
  lVar58 = *(long *)(param_4 + 8);
  pcVar77 = (char *)0x0;
  pcVar81 = (char *)0x0;
  if (param_3 != 0) {
    pcVar77 = *(char **)(lVar58 + 0x50);
    if ((byte)(*pcVar77 - 1U) < 0x7e) {
      pcVar81 = *(char **)(lVar58 + 0x48);
      if (**(char **)(lVar58 + 0x48) == '\0') {
        pcVar77 = (char *)0x0;
        pcVar81 = (char *)0x0;
      }
    }
    else {
      pcVar77 = (char *)0x0;
      pcVar81 = (char *)0x0;
    }
  }
  pcVar5 = *(char **)(lVar58 + 0x40);
  lVar58 = thunk_FUN_007129d0(pcVar5);
  if (lVar58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("decimal_len > 0","../stdlib/strtod_l.c",0x255,"____strtof128_l_internal");
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
  cVar71 = (char)lVar59;
  cVar75 = cVar71;
  if (cVar54 != '\0') {
    lVar62 = 0;
    cVar75 = cVar54;
    do {
      if (pcVar84[lVar62] != cVar75) goto LAB_00792b85;
      lVar62 = lVar62 + 1;
      cVar75 = pcVar5[lVar62];
    } while (cVar75 != '\0');
    cVar75 = pcVar84[lVar62];
  }
  if ((byte)(cVar75 - 0x30U) < 10) {
LAB_00792bfe:
    lVar62 = *(long *)(param_4 + 0x70);
    local_36a8 = (ulong *)pcVar84;
    if (cVar71 == '0') {
      if (*(int *)(lVar62 + (long)pcVar84[1] * 4) == 0x78) {
        pcVar87 = pcVar84 + 2;
        lVar59 = (long)pcVar84[2];
        local_36a8 = (ulong *)pcVar87;
        if (pcVar81 != (char *)0x0) {
          iVar56 = 0x10;
          pcVar77 = (char *)0x0;
          goto LAB_00792c1a;
        }
        pcVar77 = (char *)0x0;
        if (pcVar84[2] == '0') {
          iVar56 = 0x10;
          goto LAB_00793630;
        }
        iVar56 = 0x10;
      }
      else {
        iVar56 = 10;
        pcVar87 = pcVar84;
        if (pcVar81 != (char *)0x0) {
LAB_00792c1a:
          cVar71 = (char)lVar59;
          pcVar87 = (char *)local_36a8;
          do {
            if (cVar71 != '0') {
              if (*pcVar81 == '\0') {
                lVar76 = -1;
              }
              else {
                lVar53 = 0;
                cVar71 = *pcVar81;
                do {
                  lVar76 = lVar53;
                  if (pcVar87[lVar76] != cVar71) goto LAB_00792c62;
                  cVar71 = pcVar81[lVar76 + 1];
                  lVar53 = lVar76 + 1;
                } while (cVar71 != '\0');
              }
              pcVar87 = pcVar87 + lVar76;
            }
            cVar71 = pcVar87[1];
            lVar59 = (long)cVar71;
            pcVar87 = pcVar87 + 1;
          } while( true );
        }
LAB_00793630:
        do {
          pcVar84 = pcVar87 + 1;
          lVar59 = (long)*pcVar84;
          pcVar87 = pcVar87 + 1;
        } while (*pcVar84 == '0');
      }
LAB_00792c62:
      cVar75 = (char)*(undefined4 *)(lVar62 + (long)(char)lVar59 * 4);
      pcVar84 = pcVar87;
      if ((byte)((char)lVar59 - 0x30U) < 10) goto LAB_00792c98;
      bVar93 = iVar56 != 0x10;
      if ((5 < (byte)(cVar75 + 0x9fU)) || (bVar93)) goto LAB_00792dc0;
    }
    else {
      if (pcVar81 != (char *)0x0) {
        iVar56 = 10;
        goto LAB_00792c1a;
      }
      iVar56 = 10;
      cVar75 = (char)*(undefined4 *)(lVar62 + (long)cVar71 * 4);
      bVar93 = true;
      if ((byte)(cVar71 - 0x30U) < 10) goto LAB_00792c98;
LAB_00792dc0:
      if (cVar54 != '\0') {
        lVar76 = 0;
        cVar71 = cVar54;
        do {
          if (pcVar84[lVar76] != cVar71) {
            if (bVar93) {
              if (cVar75 != 'e') goto LAB_00793864;
            }
            else if (((ulong *)pcVar84 == local_36a8) || (cVar75 != 'p')) goto LAB_00793864;
            goto LAB_00792c98;
          }
          lVar76 = lVar76 + 1;
          cVar71 = pcVar5[lVar76];
        } while (cVar71 != '\0');
      }
      if ((iVar56 != 0x10) || ((ulong *)pcVar84 != local_36a8)) goto LAB_00792c98;
      if ((9 < (byte)(pcVar84[lVar58] - 0x30U)) &&
         (5 < (byte)((char)*(undefined4 *)(lVar62 + (long)pcVar84[lVar58] * 4) + 0x9fU))) {
LAB_00793864:
        pcVar77 = (char *)FUN_006f4720(local_36a8,pcVar84,pcVar81);
        if (param_2 != (long *)0x0) {
          if (((ulong *)pcVar77 == local_36a8) && (pcVar77 = pcVar84 + -1, iVar56 != 0x10)) {
            pcVar77 = param_1;
          }
          *param_2 = (long)pcVar77;
        }
        goto LAB_007938a0;
      }
    }
    iVar56 = 0x10;
LAB_00792c98:
    pcVar80 = (char *)0x0;
    pcVar87 = pcVar84;
    do {
      if (((byte)((char)lVar59 - 0x30U) < 10) ||
         ((iVar56 == 0x10 &&
          ((byte)((char)*(undefined4 *)(lVar62 + (long)(char)lVar59 * 4) + 0x9fU) < 6)))) {
        pcVar80 = pcVar80 + 1;
      }
      else {
        if (pcVar81 == (char *)0x0) goto LAB_00792cbd;
        cVar71 = *pcVar81;
        if (cVar71 == '\0') {
          lVar76 = -1;
        }
        else {
          lVar53 = 0;
          do {
            lVar76 = lVar53;
            if (pcVar87[lVar76] != cVar71) goto LAB_00792cbd;
            cVar71 = pcVar81[lVar76 + 1];
            lVar53 = lVar76 + 1;
          } while (cVar71 != '\0');
        }
        pcVar87 = pcVar87 + lVar76;
      }
      lVar59 = (long)pcVar87[1];
      pcVar87 = pcVar87 + 1;
    } while( true );
  }
LAB_00792b85:
  if ((byte)(cVar71 - 0x30U) < 10) goto LAB_00792bfe;
  if ((char)*(undefined4 *)(PTR_DAT_00939cb0 + lVar59 * 4) == 'i') {
    iVar56 = thunk_FUN_00713a00(pcVar84,&DAT_00824f44,3,&PTR_PTR_00939c40);
    if (iVar56 == 0) {
      if (param_2 != (long *)0x0) {
        iVar56 = thunk_FUN_00713a00(pcVar84 + 3,"inity",5,&PTR_PTR_00939c40);
        pcVar77 = pcVar84 + 3;
        if (iVar56 == 0) {
          pcVar77 = pcVar84 + 8;
        }
        *param_2 = (long)pcVar77;
      }
      uVar95 = _DAT_0083ee80;
      if (iVar50 == 0) {
        uVar95 = _DAT_0083ee70;
      }
      goto LAB_00792bc0;
    }
  }
  else if (((char)*(undefined4 *)(PTR_DAT_00939cb0 + lVar59 * 4) == 'n') &&
          (iVar56 = thunk_FUN_00713a00(pcVar84,&DAT_00824f48,3,&PTR_PTR_00939c40), iVar56 == 0)) {
    pcVar77 = pcVar84 + 3;
    uVar95 = _DAT_0083ee50;
    if (pcVar84[3] == '(') {
      uVar95 = FUN_007950f0(pcVar84 + 4,&local_3640,0x29);
      if (*local_3640 == ')') {
        pcVar77 = local_3640 + 1;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = (long)pcVar77;
    }
    if (iVar50 != 0) {
      uVar95 = uVar95 ^ _DAT_0083ee60;
    }
    goto LAB_00792bc0;
  }
LAB_00792bae:
  if (param_2 != (long *)0x0) {
    *param_2 = (long)param_1;
  }
LAB_00792bbc:
  uVar95 = 0;
LAB_00792bc0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar95;
LAB_00792cbd:
  if ((pcVar77 == (char *)0x0) || (pcVar87 <= local_36a8)) {
LAB_00792ccd:
    pcVar66 = (char *)-(ulong)(pcVar80 == (char *)0x0);
    pcVar85 = pcVar80;
    if (cVar54 != '\0') {
      lVar62 = 0;
      do {
        if (pcVar87[lVar62] != cVar54) goto LAB_00792cfa;
        lVar62 = lVar62 + 1;
        cVar54 = pcVar5[lVar62];
      } while (cVar54 != '\0');
    }
    pcVar87 = pcVar87 + lVar58;
    lVar59 = (long)*pcVar87;
    if (iVar56 == 0x10) {
      pcVar77 = (char *)0x0;
      lVar62 = (long)pcVar80 - (long)pcVar87;
      while( true ) {
        cVar54 = (char)lVar59;
        pcVar85 = pcVar87 + lVar62;
        if ((9 < (byte)(cVar54 - 0x30U)) &&
           (5 < (byte)((char)*(undefined4 *)(*(long *)(param_4 + 0x70) + (long)cVar54 * 4) + 0x9fU))
           ) break;
        if ((cVar54 != '0') && (pcVar66 == (char *)0xffffffffffffffff)) {
          pcVar66 = pcVar77;
        }
        lVar59 = (long)pcVar87[1];
        pcVar87 = pcVar87 + 1;
        pcVar77 = pcVar77 + 1;
      }
LAB_00792cfa:
      if ((long)pcVar85 < 0) {
LAB_00794f41:
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("dig_no <= (uintmax_t) INTMAX_MAX","../stdlib/strtod_l.c",0x36a,
                     "____strtof128_l_internal");
      }
      cVar54 = (char)*(undefined4 *)(*(long *)(param_4 + 0x70) + lVar59 * 4);
      pcVar77 = pcVar87;
      if (iVar56 != 0x10) goto LAB_00792f4b;
      if (cVar54 != 'p') goto LAB_00792f45;
LAB_00792d1e:
      cVar54 = pcVar87[1];
      uVar95 = local_3648;
      pcVar77 = pcVar87;
      if (cVar54 == '-') {
        cVar54 = pcVar87[2];
        if ((byte)(cVar54 - 0x30U) < 10) {
          pcVar77 = pcVar87 + 2;
          if (iVar56 == 0x10) {
            if ((char *)0x1fffffffffffefe4 < pcVar80) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("int_no <= (uintmax_t) (INTMAX_MAX + MIN_EXP - MANT_DIG) / 4",
                           "../stdlib/strtod_l.c",0x388,"____strtof128_l_internal");
            }
            pcVar72 = (char *)((long)pcVar80 * 4 + 0x406e);
            bVar93 = true;
          }
          else {
            if ((char *)0x7fffffffffffec4b < pcVar80) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("int_no <= (uintmax_t) (INTMAX_MAX + MIN_10_EXP - MANT_DIG)",
                           "../stdlib/strtod_l.c",0x3a8,"____strtof128_l_internal");
            }
            pcVar72 = pcVar80 + 0x13b4;
            bVar93 = true;
          }
          goto LAB_007938fe;
        }
      }
      else if (cVar54 == '+') {
        cVar54 = pcVar87[2];
        if ((byte)(cVar54 - 0x30U) < 10) {
          pcVar77 = pcVar87 + 2;
          if (iVar56 != 0x10) goto LAB_00792d50;
LAB_00793661:
          if (pcVar80 == (char *)0x0) {
            if (pcVar66 == (char *)0xffffffffffffffff) {
              local_36a8 = (ulong *)0x7;
              uVar70 = 0x666;
              bVar93 = false;
              goto LAB_00793963;
            }
            if ((char *)0x1fffffffffffefff < pcVar66) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_EXP - 3) / 4",
                           "../stdlib/strtod_l.c",0x39c,"____strtof128_l_internal");
            }
            pcVar72 = (char *)((long)pcVar66 * 4 + 0x4003);
            bVar93 = false;
          }
          else {
            if ((pcVar66 != (char *)0x0) || ((ulong)pcVar80 >> 0x3d != 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX / 4",
                           "../stdlib/strtod_l.c",0x390,"____strtof128_l_internal");
            }
            bVar93 = false;
            pcVar72 = (char *)((0x1000 - (long)pcVar80) * 4 + 3);
          }
          goto LAB_007938fe;
        }
      }
      else if ((byte)(cVar54 - 0x30U) < 10) {
        pcVar77 = pcVar87 + 1;
        if (iVar56 == 0x10) goto LAB_00793661;
LAB_00792d50:
        if (pcVar80 == (char *)0x0) {
          if (pcVar66 != (char *)0xffffffffffffffff) {
            if ((char *)0x7fffffffffffecba < pcVar66) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("lead_zero <= (uintmax_t) (INTMAX_MAX - MAX_10_EXP - 1)",
                           "../stdlib/strtod_l.c",0x3bc,"____strtof128_l_internal");
            }
            pcVar72 = pcVar66 + 0x1345;
            bVar93 = false;
            goto LAB_007938fe;
          }
          local_36a8 = (ulong *)0x3;
          uVar70 = 0x1ed;
          bVar93 = false;
        }
        else {
          if ((pcVar66 != (char *)0x0) || ((long)pcVar80 < 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("lead_zero == 0 && int_no <= (uintmax_t) INTMAX_MAX","../stdlib/strtod_l.c"
                         ,0x3b0,"____strtof128_l_internal");
          }
          bVar93 = false;
          pcVar72 = (char *)(0x1345 - (long)pcVar80);
LAB_007938fe:
          if ((long)pcVar72 < 0) {
            pcVar72 = (char *)0x0;
          }
          uVar70 = (ulong)pcVar72 / 10;
          local_36a8 = (ulong *)((ulong)pcVar72 % 10);
        }
LAB_00793963:
        do {
          if (((long)uVar70 < (long)uVar95) ||
             ((uVar95 == uVar70 && ((long)local_36a8 < (long)(char)(cVar54 + -0x30))))) {
            if (pcVar66 == (char *)0xffffffffffffffff) {
              uVar95 = 0;
              if (iVar50 != 0) {
                uVar95 = _DAT_0083ee60;
              }
            }
            else {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
              if (bVar93) {
                uVar94 = _DAT_0083ee00;
                if (iVar50 == 0) {
                  uVar94 = _DAT_0083ee10;
                }
                uVar95 = FUN_007cacb0(uVar94,_DAT_0083ee10);
              }
              else {
                uVar94 = _DAT_0083ee20;
                if (iVar50 == 0) {
                  uVar94 = _DAT_0083ee30;
                }
                uVar95 = FUN_007cacb0(uVar94,_DAT_0083ee30);
              }
            }
            do {
              pcVar81 = pcVar77 + 1;
              pcVar77 = pcVar77 + 1;
            } while ((byte)(*pcVar81 - 0x30U) < 10);
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pcVar77;
            }
            goto LAB_00792bc0;
          }
          pcVar77 = pcVar77 + 1;
          uVar95 = (long)(char)(cVar54 + -0x30) + uVar95 * 10;
          cVar54 = *pcVar77;
        } while ((byte)(cVar54 - 0x30U) < 10);
        local_3648 = uVar95;
        if (bVar93) {
          local_3648 = -uVar95;
        }
      }
    }
    else {
      pcVar77 = pcVar87;
      if ((byte)(*pcVar87 - 0x30U) < 10) {
        do {
          pcVar77 = pcVar77 + 1;
          if (((char)lVar59 != '0') && (pcVar66 == (char *)0xffffffffffffffff)) {
            pcVar66 = pcVar77 + (-1 - (long)pcVar87);
          }
          lVar59 = (long)*pcVar77;
          pcVar85 = pcVar77 + ((long)pcVar80 - (long)pcVar87);
        } while ((byte)(*pcVar77 - 0x30U) < 10);
      }
      if ((long)pcVar85 < 0) goto LAB_00794f41;
      cVar54 = *(char *)(*(long *)(param_4 + 0x70) + lVar59 * 4);
LAB_00792f45:
      pcVar87 = pcVar77;
      if (iVar56 != 0x10) {
LAB_00792f4b:
        pcVar87 = pcVar77;
        if (cVar54 == 'e') goto LAB_00792d1e;
      }
    }
    pcVar72 = pcVar87;
    if (pcVar80 < pcVar85) {
      pcVar60 = pcVar87;
      if (pcVar87[-1] != '0') goto LAB_00792fb0;
      do {
        pcVar72 = pcVar60 + -1;
        pcVar2 = pcVar72 + (long)pcVar85;
        pcVar1 = pcVar60 + -2;
        pcVar60 = pcVar72;
      } while (*pcVar1 == '0');
      pcVar85 = pcVar2 + -(long)pcVar87;
      if (pcVar2 + -(long)pcVar87 < pcVar80) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("dig_no >= int_no","../stdlib/strtod_l.c",0x3fc,"____strtof128_l_internal");
      }
    }
    uVar95 = local_3648;
    if ((pcVar85 == pcVar80) && (pcVar85 != (char *)0x0)) {
      if ((long)local_3648 < 0) {
        pcVar72 = pcVar72 + -1;
        bVar67 = 0;
        if (iVar56 != 0x10) {
          do {
            if ((int)*pcVar72 - 0x30U < 10) {
              if (*pcVar72 != '0') goto LAB_00793b44;
              uVar95 = uVar95 + (ulong)(iVar56 == 0x10) * 3 + 1;
              pcVar80 = pcVar80 + -1;
              pcVar85 = pcVar85 + -1;
              bVar67 = pcVar85 != (char *)0x0 & (byte)(uVar95 >> 0x3f);
              if (bVar67 == 0) goto LAB_007935f0;
            }
            pcVar72 = pcVar72 + -1;
          } while( true );
        }
        do {
          if ((*(byte *)(*(long *)(param_4 + 0x68) + 1 + (long)*pcVar72 * 2) & 0x10) != 0) {
            if (*pcVar72 != '0') goto LAB_00793b44;
            uVar95 = uVar95 + 4;
            pcVar80 = pcVar80 + -1;
            pcVar85 = pcVar85 + -1;
            bVar67 = (byte)(uVar95 >> 0x3f) & pcVar85 != (char *)0x0;
            if (bVar67 == 0) goto LAB_007935f0;
          }
          pcVar72 = pcVar72 + -1;
        } while( true );
      }
      goto LAB_00792fb0;
    }
LAB_007935f0:
    local_3648 = uVar95;
    if (param_2 != (long *)0x0) goto LAB_00792fb7;
    goto LAB_00792fbe;
  }
  pcVar77 = (char *)FUN_006f4720(local_36a8,pcVar87,pcVar81);
  if (pcVar87 == pcVar77) {
    cVar54 = *pcVar5;
    goto LAB_00792ccd;
  }
  if ((ulong *)pcVar77 == local_36a8) goto LAB_00792bae;
  if ((pcVar84 <= pcVar77) && (pcVar84 < pcVar77)) {
    uVar95 = (long)pcVar77 - (long)pcVar84;
    if (uVar95 - 1 < 0xf) {
      pcVar80 = (char *)0x0;
      pcVar87 = pcVar84;
LAB_00794625:
      pcVar80 = pcVar80 + ((byte)(*pcVar87 - 0x30U) < 10);
      if (((((pcVar87 + 1 < pcVar77) &&
            (pcVar80 = pcVar80 + ((byte)(pcVar87[1] - 0x30U) < 10), pcVar87 + 2 < pcVar77)) &&
           (pcVar80 = pcVar80 + ((byte)(pcVar87[2] - 0x30U) < 10), pcVar87 + 3 < pcVar77)) &&
          ((pcVar80 = pcVar80 + ((byte)(pcVar87[3] - 0x30U) < 10), pcVar87 + 4 < pcVar77 &&
           (pcVar80 = pcVar80 + ((byte)(pcVar87[4] - 0x30U) < 10), pcVar87 + 5 < pcVar77)))) &&
         ((((pcVar80 = pcVar80 + ((byte)(pcVar87[5] - 0x30U) < 10), pcVar87 + 6 < pcVar77 &&
            ((pcVar80 = pcVar80 + ((byte)(pcVar87[6] - 0x30U) < 10), pcVar87 + 7 < pcVar77 &&
             (pcVar80 = pcVar80 + ((byte)(pcVar87[7] - 0x30U) < 10), pcVar87 + 8 < pcVar77)))) &&
           (pcVar80 = pcVar80 + ((byte)(pcVar87[8] - 0x30U) < 10), pcVar87 + 9 < pcVar77)) &&
          ((((pcVar80 = pcVar80 + ((byte)(pcVar87[9] - 0x30U) < 10), pcVar87 + 10 < pcVar77 &&
             (pcVar80 = pcVar80 + ((byte)(pcVar87[10] - 0x30U) < 10), pcVar87 + 0xb < pcVar77)) &&
            (pcVar80 = pcVar80 + ((byte)(pcVar87[0xb] - 0x30U) < 10), pcVar87 + 0xc < pcVar77)) &&
           ((pcVar80 = pcVar80 + ((byte)(pcVar87[0xc] - 0x30U) < 10), pcVar87 + 0xd < pcVar77 &&
            (pcVar80 = pcVar80 + ((byte)(pcVar87[0xd] - 0x30U) < 10), pcVar87 + 0xe < pcVar77)))))))
         ) {
        pcVar80 = pcVar80 + ((byte)(pcVar87[0xe] - 0x30U) < 10);
      }
    }
    else {
      lVar59 = 0;
      lVar62 = 0;
      pcVar87 = pcVar84;
      do {
        cVar54 = *pcVar87;
        pcVar80 = pcVar87 + 1;
        pcVar85 = pcVar87 + 2;
        pcVar66 = pcVar87 + 3;
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
        auVar96[0] = cVar54 + DAT_008253a0;
        auVar96[1] = *pcVar80 + UNK_008253a1;
        auVar96[2] = *pcVar85 + UNK_008253a2;
        auVar96[3] = *pcVar66 + UNK_008253a3;
        auVar96[4] = *pcVar72 + UNK_008253a4;
        auVar96[5] = *pcVar60 + UNK_008253a5;
        auVar96[6] = *pcVar1 + UNK_008253a6;
        auVar96[7] = *pcVar2 + UNK_008253a7;
        auVar96[8] = *pcVar34 + UNK_008253a8;
        auVar96[9] = *pcVar35 + UNK_008253a9;
        auVar96[10] = *pcVar36 + UNK_008253aa;
        auVar96[0xb] = *pcVar37 + UNK_008253ab;
        auVar96[0xc] = *pcVar38 + UNK_008253ac;
        auVar96[0xd] = *pcVar39 + UNK_008253ad;
        auVar96[0xe] = *pcVar40 + UNK_008253ae;
        auVar96[0xf] = *pcVar41 + UNK_008253af;
        auVar96 = psubusb(auVar96,_DAT_008253b0);
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
        auVar97 = auVar97 & _DAT_008253c0;
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
        lVar62 = lVar62 + (ulong)auVar97[0xf] +
                 (ulong)auVar27._4_4_ + (ulong)(auVar19._10_4_ >> 0x10) +
                 (ulong)auVar22._10_2_ + (ulong)(uVar31 >> 0x30) +
                 (ulong)auVar26._4_4_ + (ulong)(uVar25 >> 0x20) + (ulong)auVar97[0xd];
      } while (pcVar87 != pcVar84 + (uVar95 & 0xfffffffffffffff0));
      pcVar80 = (char *)(lVar59 + lVar62);
      pcVar87 = pcVar84 + (uVar95 & 0xfffffffffffffff0);
      if ((uVar95 & 0xfffffffffffffff0) != uVar95) goto LAB_00794625;
    }
    pcVar66 = (char *)0x0;
    pcVar85 = pcVar80;
    uVar95 = local_3648;
    goto LAB_007935f0;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = (long)pcVar77;
  }
LAB_007938a0:
  uVar95 = _DAT_0083ee60;
  if (iVar50 != 0) goto LAB_00792bc0;
  goto LAB_00792bbc;
LAB_00793b44:
  if (bVar67 != 0) {
    local_3648 = uVar95;
  }
LAB_00792fb0:
  if (param_2 != (long *)0x0) {
LAB_00792fb7:
    *param_2 = (long)pcVar77;
LAB_00792fbe:
    if (pcVar85 == (char *)0x0) goto LAB_007938a0;
  }
  if (pcVar66 != (char *)0x0) {
    do {
      if (*pcVar84 == *pcVar5) {
        if (pcVar5[1] == '\0') goto LAB_00793013;
        lVar59 = 1;
        cVar54 = pcVar5[1];
        while (pcVar84[lVar59] == cVar54) {
          lVar59 = lVar59 + 1;
          cVar54 = pcVar5[lVar59];
          if (cVar54 == '\0') goto LAB_00793013;
        }
      }
      pcVar84 = pcVar84 + 1;
    } while( true );
  }
LAB_0079305a:
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
LAB_00794471:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar94 = _DAT_0083ee20;
      if (iVar50 == 0) {
        uVar94 = _DAT_0083ee30;
      }
      uVar95 = FUN_007cacb0(uVar94,_DAT_0083ee30);
      goto LAB_00792bc0;
    }
    if ((long)local_3648 < -0x1366) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      uVar94 = _DAT_0083ee00;
      if (iVar50 == 0) {
        uVar94 = _DAT_0083ee10;
      }
      uVar95 = FUN_007cacb0(uVar94,_DAT_0083ee10);
      goto LAB_00792bc0;
    }
    if (pcVar80 != (char *)0x0) {
      puVar78 = local_3638 + 2;
      pcVar84 = (char *)FUN_00792110(pcVar84,(ulong)pcVar80 & 0xffffffff,puVar78,&local_3640,
                                     &local_3648,lVar58,pcVar81);
      uVar95 = local_3648;
      pcVar77 = local_3640;
      if (0 < (long)local_3648) {
        plVar90 = &DAT_008255c0;
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
            if ((long)pcVar77 < lVar59) {
              lVar62 = FUN_006f3150(puVar73,&UNK_00825748 + *plVar90 * 8,lVar59,local_36a8,pcVar77);
            }
            else {
              lVar62 = FUN_006f3150(puVar73,local_36a8,pcVar77,&UNK_00825748 + *plVar90 * 8,lVar59);
            }
            pcVar77 = local_3640 + lVar59;
            if (lVar62 == 0) {
              pcVar77 = pcVar77 + -1;
            }
            iVar56 = iVar56 * 2;
            plVar90 = plVar90 + 3;
            local_3640 = pcVar77;
            if (local_3648 == 0) {
              uVar95 = 0;
              if (puVar73 == local_1b38) {
                thunk_FUN_00713a50(puVar78,puVar73,(long)pcVar77 * 8);
              }
              goto LAB_00793f43;
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
LAB_00793f43:
      pcVar5 = pcVar77 + -1;
      puVar78 = local_3638 + 2;
      lVar59 = 0x3f;
      if (puVar78[(long)pcVar5] != 0) {
        for (; puVar78[(long)pcVar5] >> lVar59 == 0; lVar59 = lVar59 + -1) {
        }
      }
      iVar56 = (int)pcVar77 * 0x40 - ((uint)lVar59 ^ 0x3f);
      if (0x4000 < iVar56) goto LAB_00794471;
      if (0x71 < iVar56) {
        iVar55 = (int)(iVar56 - 0x71U) >> 6;
        lVar58 = (long)iVar55;
        uVar57 = iVar56 - 0x71U & 0x3f;
        if (uVar57 == 0) {
          uVar94 = lVar58 + 2;
          uVar52 = lVar58 + 3;
          local_36b8 = (ulong *)0x3f;
          lVar58 = lVar58 + -1;
          local_3638[0] = local_3638[uVar94];
          local_3638[1] = local_3638[uVar52];
        }
        else {
          local_36b8 = (ulong *)(long)(int)(uVar57 - 1);
          sVar63 = (sbyte)uVar57;
          lVar59 = lVar58;
          if (lVar58 < (long)pcVar5) {
            iVar64 = iVar55 + 1;
            local_3638[0] =
                 local_3638[lVar58 + 2] >> sVar63 |
                 local_3638[(long)iVar64 + 2] << (0x40U - sVar63 & 0x3f);
            if ((long)iVar64 < (long)pcVar5) {
              local_3638[1] =
                   local_3638[(long)(iVar55 + 2) + 2] << (0x40U - sVar63 & 0x3f) |
                   local_3638[(long)iVar64 + 2] >> sVar63;
            }
            if (1 < (long)pcVar5 - lVar58) goto LAB_0079493d;
            lVar59 = (long)((((int)pcVar77 + -2) - iVar55) + iVar64);
          }
          local_3638[1] = local_3638[lVar59 + 2] >> sVar63;
        }
LAB_0079493d:
        if (local_3638[2] == 0) {
          lVar62 = 1;
          do {
            lVar59 = (long)(int)lVar62;
            uVar94 = lVar62 + 2;
            lVar62 = lVar62 + 1;
          } while (local_3638[uVar94] == 0);
        }
        else {
          lVar59 = 0;
        }
        uVar95 = FUN_007923c0(local_3638,(long)(iVar56 + -1),iVar50,local_3638[lVar58 + 2],
                              local_36b8,pcVar80 < pcVar85 || lVar59 < lVar58);
        goto LAB_00792bc0;
      }
      if (pcVar85 != pcVar80) {
        thunk_FUN_00713a50(local_3638,puVar78,(long)pcVar77 * 8);
        if ((long)pcVar77 < 2) {
          local_3638[(long)pcVar77] = 0;
        }
        if ((pcVar85 <= pcVar80) || (0x1366 < uVar95 + 0x1366)) goto LAB_00794f1a;
        if (iVar56 < 1) goto LAB_00794c99;
        if (uVar95 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("int_no > 0 && exponent == 0","../stdlib/strtod_l.c",0x559,
                       "____strtof128_l_internal");
        }
        local_36a8 = (ulong *)(long)iVar56;
        iVar64 = 0;
        iVar55 = 0x72 - iVar56;
        goto LAB_00793144;
      }
      iVar55 = (iVar56 + -1) % 0x40;
      if (iVar55 == 0x30) {
        lVar58 = 2 - (long)pcVar77;
        thunk_FUN_00713a50(local_3638 + lVar58,puVar78,(long)pcVar77 * 8);
joined_r0x00794e01:
        if ((0 < lVar58) && (local_3638[0] = 0, lVar58 != 1)) {
          local_3638[0] = 0;
          local_3638[1] = 0;
        }
      }
      else {
        if (0x2f < iVar55) {
          if (1 < (long)pcVar77) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("numsize < RETURN_LIMB_SIZE","../stdlib/strtod_l.c",0x523,
                         "____strtof128_l_internal");
          }
          uVar95 = FUN_006f3040(local_3638 + (2 - (long)pcVar77),puVar78,pcVar77,iVar55 + -0x30);
          lVar58 = 1 - (long)local_3640;
          local_3638[lVar58] = uVar95;
          goto joined_r0x00794e01;
        }
        FUN_006f2f20(local_3638 + (2 - (long)pcVar77),puVar78,pcVar77,0x30 - iVar55);
        if (0 < 2 - (long)local_3640) {
          thunk_FUN_00713720(local_3638,0,(2 - (long)local_3640) * 8);
        }
      }
      local_36b8 = local_3638;
      uVar95 = FUN_007923c0(local_36b8,(long)(iVar56 + -1),iVar50,0,0,0);
      goto LAB_00792bc0;
    }
    if ((pcVar85 == (char *)0x0) || (0x1366 < local_3648 + 0x1366)) {
LAB_00794f1a:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("dig_no > int_no && exponent <= 0 && exponent >= MIN_10_EXP - (DIG + 2)",
                   "../stdlib/strtod_l.c",0x54d,"____strtof128_l_internal");
    }
    if (*pcVar84 == '0') {
LAB_00794c99:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("int_no == 0 && *startp != L_(\'0\')","../stdlib/strtod_l.c",0x55f,
                   "____strtof128_l_internal");
    }
    iVar64 = (int)local_3648;
    iVar55 = (int)(((1 - local_3648) * 10) / 3) + 0x72;
    if (0x4070 < iVar55) {
      iVar55 = 0x4070;
    }
    iVar55 = iVar55 + iVar64;
    if (iVar55 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("need_frac_digits > 0","../stdlib/strtod_l.c",0x574,"____strtof128_l_internal");
    }
    iVar56 = 0;
    local_36a8 = (ulong *)0x0;
LAB_00793144:
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
    pcVar77 = (char *)0x0;
    iVar55 = (int)pcVar85 - (int)pcVar80;
    uVar57 = 1;
    uVar83 = iVar55 - iVar64;
    plVar90 = &DAT_008255c0;
    puVar73 = puVar78;
    puVar89 = local_1b38;
    do {
      while (puVar74 = puVar73, puVar73 = puVar74, puVar88 = puVar89, (uVar57 & uVar83) == 0) {
LAB_007931e8:
        uVar57 = uVar57 * 2;
        plVar90 = plVar90 + 3;
        puVar89 = puVar88;
        if (uVar83 == 0) goto LAB_0079324f;
      }
      uVar83 = uVar83 ^ uVar57;
      if (pcVar77 == (char *)0x0) {
        pcVar77 = (char *)(plVar90[1] + -1);
        thunk_FUN_00713a50(puVar89,&UNK_00825748 + *plVar90 * 8,(long)pcVar77 * 8);
        goto LAB_007931e8;
      }
      lVar59 = FUN_006f3150(puVar74,&UNK_00825748 + *plVar90 * 8,plVar90[1] + -1,puVar89,pcVar77);
      pcVar77 = pcVar77 + plVar90[1] + -1;
      puVar73 = puVar89;
      puVar88 = puVar74;
      if (lVar59 != 0) goto LAB_007931e8;
      pcVar77 = pcVar77 + -1;
      uVar57 = uVar57 * 2;
      plVar90 = plVar90 + 3;
      puVar89 = puVar74;
    } while (uVar83 != 0);
LAB_0079324f:
    if (puVar88 == puVar78) {
      thunk_FUN_00713a50(local_1b38,puVar78,(long)pcVar77 * 8);
    }
    FUN_00792110(pcVar84,iVar55,puVar78,local_3660,local_3670,lVar58,pcVar81);
    pcVar81 = pcVar77 + -1;
    uVar95 = 0x3f;
    if (local_1b38[(long)pcVar81] != 0) {
      for (; local_1b38[(long)pcVar81] >> uVar95 == 0; uVar95 = uVar95 - 1) {
      }
    }
    if ((int)(uVar95 ^ 0x3f) != 0) {
      FUN_006f2f20(local_1b38,local_1b38,pcVar77,(uVar95 ^ 0x3f) & 0xffffffff);
      lVar58 = FUN_006f2f20(puVar78,puVar78,local_3640);
      if (lVar58 != 0) {
        local_3638[(long)local_3640 + 2] = lVar58;
        local_3640 = local_3640 + 1;
      }
    }
    local_3648 = (ulong)local_36a8;
    if (pcVar77 == (char *)0x1) {
      bVar91 = local_3638[2] < local_1b38[0] && local_3640 == (char *)0x1;
      if (local_3638[2] >= local_1b38[0] || local_3640 != (char *)0x1) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("numsize == 1 && n < d","../stdlib/strtod_l.c",0x5d8,"____strtof128_l_internal"
                    );
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
        FUN_006f2f20(local_3638,local_3638,2);
        local_3638[0] = local_3638[0] | 0UL >> ((char)iVar56 - 0x31U & 0x3f);
      }
      iVar56 = iVar56 + -0x32;
      bVar93 = uVar70 != 0 || bVar93;
      lVar58 = local_3648 - 1;
    }
    else if (pcVar77 == (char *)0x2) {
      uVar82 = local_3638[3];
      uVar70 = local_3638[2];
      if (1 < (long)local_3640) {
LAB_00794236:
        local_36b8 = local_3638;
        bVar42 = false;
        bVar91 = false;
        uVar68 = local_3638[0];
        uVar95 = local_3638[0];
        uVar86 = local_3648;
        if (local_1b38[1] != uVar82) goto LAB_007942a6;
LAB_00794260:
        uVar82 = uVar70 + local_1b38[1];
        if (!CARRY8(uVar70,local_1b38[1])) {
          uVar70 = 0xffffffffffffffff;
          auVar16._8_8_ = (local_1b38[0] - 1) + (ulong)(local_1b38[0] == 0);
          auVar16._0_8_ = -local_1b38[0];
          goto LAB_007942c0;
        }
        uVar82 = uVar82 - local_1b38[0];
        uVar95 = 0xffffffffffffffff;
        uVar70 = local_1b38[0];
        if (iVar56 != 0) goto LAB_00794300;
        iVar56 = 0x40;
        uVar95 = 0xffffffffffffffff;
LAB_00794293:
        bVar42 = true;
        local_3650 = 0;
        do {
          bVar91 = true;
          uVar68 = uVar95;
          if (local_1b38[1] == uVar82) goto LAB_00794260;
LAB_007942a6:
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
LAB_007942c0:
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
          if (iVar56 == 0) goto code_r0x007942ec;
LAB_00794300:
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
              FUN_006f2f20(local_36b8,local_36b8,2,uVar83);
              local_3638[0] = local_3638[0] | uVar95 >> ((char)iVar56 - 0x31U & 0x3f);
            }
            uVar82 = uVar82 | uVar70;
            goto LAB_00794336;
          }
          iVar56 = iVar56 + 0x40;
          local_3650 = uVar68;
        } while( true );
      }
      if (local_1b38[1] <= local_3638[2]) {
        uVar82 = 0;
        goto LAB_00794236;
      }
      if (iVar56 == 0) {
        local_3648 = (long)local_36a8 - 0x40;
        uVar82 = local_3638[2];
        uVar70 = 0;
        goto LAB_00794236;
      }
      if (iVar56 < 0x32) {
        local_3638[1] = local_3638[0];
        local_3638[0] = 0;
      }
      else {
        uVar83 = 0x71 - iVar56;
        if (uVar83 != 0) {
          FUN_006f2f20(local_3638,local_3638,2);
        }
      }
      iVar56 = iVar56 + 0x40;
      uVar95 = 0;
      uVar82 = local_3638[2];
      uVar70 = uVar95;
      if (iVar56 < 0x72) goto LAB_00794236;
LAB_00794336:
      iVar56 = 0x3f - uVar83;
      bVar93 = uVar82 != 0 || bVar93;
      lVar58 = local_3648 - 1;
    }
    else {
      uVar70 = local_1b38[(long)pcVar81];
      uVar82 = local_1b38[(long)(pcVar77 + -2)];
      iVar55 = FUN_006f2ee0(puVar78,local_1b38 + ((long)pcVar77 - (long)local_3640));
      uVar95 = local_3638[0];
      if (-1 < iVar55) {
        local_3638[(long)local_3640 + 2] = 0;
        local_3640 = local_3640 + 1;
      }
      pcVar5 = local_3640;
      uVar57 = (uint)pcVar77;
      if ((long)local_3640 < (long)pcVar77) {
        lVar58 = (long)pcVar77 - (long)local_3640;
        if (iVar56 == 0) {
          local_3648 = local_3648 + lVar58 * -0x40;
          uVar83 = 0;
        }
        else {
          if (lVar58 * 0x40 + (long)local_36a8 < 0x72) {
            if (lVar58 != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("empty == 1","../stdlib/strtod_l.c",0x686,"____strtof128_l_internal");
            }
            local_3638[0] = 0;
            local_3638[1] = uVar95;
          }
          else {
            uVar83 = 0x71 - iVar56;
            if ((int)uVar83 < 0x40) {
              if (uVar83 != 0) {
                FUN_006f2f20(local_3638,local_3638,2,uVar83);
              }
            }
            else {
              FUN_006f2f20(local_3638 + 1,local_3638,1,uVar83 & 0x3f);
              local_3638[0] = 0;
            }
          }
          iVar56 = iVar56 + (int)lVar58 * 0x40;
        }
        uVar65 = (uint)local_3640;
        if (0 < (int)uVar65) {
          uVar95 = (long)pcVar77 - (long)pcVar5;
          if (((uVar95 & 0x1fffffffffffffff) == 0x1ffffffffffffffe) || (uVar65 - 1 < 3)) {
            puVar73 = puVar78 + (int)uVar65;
            do {
              puVar73[uVar95] = puVar73[-1];
              puVar73 = puVar73 + -1;
            } while (local_3638 + (long)(int)uVar65 + (1 - (ulong)(uVar65 - 1)) != puVar73);
          }
          else {
            lVar59 = 0;
            do {
              puVar3 = (undefined8 *)((long)local_3638 + lVar59 + (long)(int)uVar65 * 8);
              uVar94 = puVar3[1];
              puVar4 = (undefined8 *)
                       ((long)local_3638 + lVar59 + ((long)(int)uVar65 + uVar95) * 8 + 8);
              *puVar4 = *puVar3;
              puVar4[1] = uVar94;
              lVar59 = lVar59 + -0x10;
            } while (lVar59 != ((ulong)local_3640 >> 1 & 0x7fffffff) * -0x10);
            iVar55 = uVar65 - (uVar65 & 0xfffffffe);
            if ((uVar65 & 0xfffffffe) != uVar65) {
              local_3638[iVar55 + lVar58 + 2] = local_3638[(long)(iVar55 + -1) + 2];
            }
          }
        }
        thunk_FUN_00713720(puVar78,0,lVar58 * 8 + 8);
        local_1b38[(long)pcVar77] = 0;
        uVar68 = local_3638[(long)pcVar77 + 2];
        if (iVar56 < 0x72) goto LAB_0079345f;
        uVar95 = 0;
      }
      else {
        if (pcVar77 != local_3640) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("numsize == densize","../stdlib/strtod_l.c",0x6ab,"____strtof128_l_internal")
          ;
        }
        if (0 < (int)uVar57) {
          lVar58 = (long)(int)uVar57;
          thunk_FUN_00713610(puVar78 + (lVar58 - (int)(uVar57 - 1)),
                             puVar78 + lVar58 + (-1 - (long)(int)(uVar57 - 1)),lVar58 * 8);
        }
        local_3638[2] = 0;
        uVar68 = local_3638[(long)pcVar77 + 2];
        local_1b38[(long)pcVar77] = 0;
LAB_0079345f:
        iVar55 = uVar57 - 1;
        uVar86 = (ulong)(uVar57 - 2);
joined_r0x007934b2:
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
               ((uVar69 != uVar68 || (uVar61 <= local_3638[(long)(pcVar77 + -2) + 2])))) break;
            uVar95 = uVar95 - 1;
            bVar91 = CARRY8(uVar68,uVar70);
            uVar68 = uVar68 + uVar70;
            if (bVar91) break;
            auVar15._8_8_ = uVar69 - (uVar61 < uVar82);
            auVar15._0_8_ = uVar61 - uVar82;
          }
        }
        lVar58 = FUN_006f4590(puVar78,local_1b38,pcVar77 + 1,uVar95);
        if (local_3638[(long)pcVar77 + 2] != lVar58) {
          lVar58 = FUN_006f2e30(puVar78,puVar78,local_1b38,pcVar77);
          if (lVar58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("cy != 0","../stdlib/strtod_l.c",0x6d5,"____strtof128_l_internal");
          }
          uVar95 = uVar95 - 1;
        }
        uVar68 = local_3638[(long)pcVar81 + 2];
        local_3638[(long)pcVar77 + 2] = uVar68;
        if (0 < iVar55) {
          thunk_FUN_00713610(puVar78 + ((long)iVar55 - uVar86),
                             puVar78 + (long)iVar55 + (-1 - uVar86),uVar86 * 8 + 8);
        }
        uVar61 = local_3638[0];
        local_3638[2] = 0;
        if (iVar56 == 0) {
          lVar58 = 0x40;
          if (uVar95 != 0) {
            lVar58 = 0x3f;
            if (uVar95 != 0) {
              for (; uVar95 >> lVar58 == 0; lVar58 = lVar58 + -1) {
              }
            }
            uVar83 = (uint)lVar58 ^ 0x3f;
            iVar56 = 0x40 - uVar83;
            lVar58 = (long)(int)uVar83;
          }
          local_3638[0] = uVar95;
          local_3648 = local_3648 - lVar58;
          local_3638[1] = 0;
          goto joined_r0x007934b2;
        }
        if (iVar56 < 0x32) {
          iVar56 = iVar56 + 0x40;
          local_3638[0] = uVar95;
          local_3638[1] = uVar61;
          goto joined_r0x007934b2;
        }
        uVar83 = 0x71 - iVar56;
        if (uVar83 != 0) {
          FUN_006f2f20(local_3638,local_3638,2,uVar83);
          local_3638[0] = local_3638[0] | uVar95 >> ((char)iVar56 - 0x31U & 0x3f);
        }
      }
      uVar70 = (ulong)pcVar77 & 0xffffffff;
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
      lVar58 = local_3648 - 1;
    }
    local_36b8 = local_3638;
    uVar95 = FUN_007923c0(local_36b8,lVar58,iVar50,uVar95,(long)iVar56,bVar93);
    goto LAB_00792bc0;
  }
  lVar62 = (long)*pcVar84;
  lVar59 = *(long *)(param_4 + 0x68);
  bVar67 = *(byte *)(lVar59 + 1 + lVar62 * 2);
  while ((bVar67 & 0x10) == 0) {
    lVar62 = (long)pcVar84[1];
    pcVar84 = pcVar84 + 1;
    bVar67 = *(byte *)(lVar59 + 1 + lVar62 * 2);
  }
  while( true ) {
    pcVar84 = pcVar84 + 1;
    if ((char)lVar62 != '0') break;
    lVar62 = (long)*pcVar84;
  }
  uVar57 = (int)(char)lVar62 - 0x30;
  if (9 < uVar57) {
    uVar57 = *(int *)(*(long *)(param_4 + 0x70) + lVar62 * 4) - 0x57;
  }
  iVar56 = *(int *)(&DAT_0083eda0 + (long)(int)uVar57 * 4);
  if (iVar56 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("bits != 0","../stdlib/strtod_l.c",1099,"____strtof128_l_internal");
  }
  iVar55 = 0x30 - iVar56;
  uVar95 = (long)(int)uVar57 << (0x31U - (char)iVar56 & 0x3f);
  if ((long)local_3648 < 0) {
    lVar62 = -0x8000000000000000 - (long)iVar56;
  }
  else {
    lVar62 = (0x7fffffffffffffff - local_3648) - (long)iVar56;
    lVar76 = lVar62 + 1;
    lVar62 = lVar62 + 4;
    if (-1 < lVar76) {
      lVar62 = lVar76;
    }
  }
  local_3638[1] = uVar95;
  if ((char *)(lVar62 >> 2) < pcVar80) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("int_no <= (uintmax_t) (exponent < 0 ? (INTMAX_MAX - bits + 1) / 4 : (INTMAX_MAX - exponent - bits + 1) / 4)"
                 ,"../stdlib/strtod_l.c",0x45e,"____strtof128_l_internal");
  }
  iVar64 = 1;
  local_3648 = (long)(iVar56 + -1) + -4 + (long)pcVar80 * 4 + local_3648;
  pcVar85 = pcVar85 + -1;
  if (pcVar85 == (char *)0x0) {
LAB_00793bc9:
    local_3638[0] = 0;
  }
  else {
    do {
      lVar62 = (long)*pcVar84;
      if ((*(byte *)(lVar59 + 1 + lVar62 * 2) & 0x10) == 0) {
        pcVar84 = pcVar84 + lVar58;
        lVar62 = (long)*pcVar84;
      }
      pcVar84 = pcVar84 + 1;
      uVar57 = (int)(char)lVar62 - 0x30;
      if (9 < uVar57) {
        uVar57 = *(int *)(*(long *)(param_4 + 0x70) + lVar62 * 4) - 0x57;
      }
      uVar70 = (ulong)(int)uVar57;
      cVar54 = (char)iVar55;
      if (iVar55 < 3) {
        uVar82 = uVar70 >> (3U - cVar54 & 0x3f) | uVar95;
        uVar95 = uVar70 << (cVar54 + 0x3dU & 0x3f);
        local_3638[iVar64] = uVar82;
        if (iVar64 == 0) {
          uVar79 = 0;
          if (pcVar85 + -1 == (char *)0x0) goto LAB_007943f5;
          pcVar77 = pcVar84 + (long)(pcVar85 + -1);
          goto LAB_007943e9;
        }
        iVar55 = iVar55 + 0x3c;
        iVar64 = 0;
        local_3638[0] = uVar95;
      }
      else {
        iVar55 = iVar55 + -4;
        uVar95 = uVar95 | uVar70 << (cVar54 - 3U & 0x3f);
        local_3638[iVar64] = uVar95;
      }
      pcVar85 = pcVar85 + -1;
    } while (pcVar85 != (char *)0x0);
    if (iVar64 == 1) goto LAB_00793bc9;
  }
  uVar95 = FUN_007923c0(local_3638,local_3648,iVar50,0,0,0);
  goto LAB_00792bc0;
LAB_00793013:
  pcVar84 = pcVar84 + (long)(pcVar66 + lVar58);
  if (iVar56 == 0x10) {
    if ((ulong)pcVar66 >> 0x3d != 0) goto LAB_0079509c;
    if ((char *)(local_3648 + 0x8000000000000000 >> 2) < pcVar66) goto LAB_00794e22;
    pcVar77 = (char *)((long)pcVar66 * 4);
  }
  else {
    if ((long)pcVar66 < 0) {
LAB_0079509c:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("lead_zero <= (base == 16 ? (uintmax_t) INTMAX_MAX / 4 : (uintmax_t) INTMAX_MAX)"
                   ,"../stdlib/strtod_l.c",0x42d,"____strtof128_l_internal");
    }
    pcVar77 = pcVar66;
    if ((char *)(local_3648 + 0x8000000000000000) < pcVar66) {
LAB_00794e22:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("lead_zero <= (base == 16 ? ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN) / 4 : ((uintmax_t) exponent - (uintmax_t) INTMAX_MIN))"
                   ,"../stdlib/strtod_l.c",0x430,"____strtof128_l_internal");
    }
  }
  local_3648 = local_3648 - (long)pcVar77;
  pcVar85 = pcVar85 + -(long)pcVar66;
  goto LAB_0079305a;
code_r0x007942ec:
  if (uVar95 == 0) {
    uVar86 = uVar86 - 0x40;
    uVar95 = 0;
  }
  else {
    lVar58 = 0x3f;
    if (uVar95 != 0) {
      for (; uVar95 >> lVar58 == 0; lVar58 = lVar58 + -1) {
      }
    }
    uVar57 = (uint)lVar58 ^ 0x3f;
    iVar56 = 0x40 - uVar57;
    uVar86 = uVar86 - (long)(int)uVar57;
  }
  goto LAB_00794293;
  while (pcVar84 = pcVar84 + 1, pcVar84 != pcVar77) {
LAB_007943e9:
    if (*pcVar84 != '0') {
      uVar79 = 1;
      break;
    }
  }
LAB_007943f5:
  uVar95 = FUN_007923c0(local_3638,local_3648,iVar50,uVar95,0x3f,uVar79);
  goto LAB_00792bc0;
}

