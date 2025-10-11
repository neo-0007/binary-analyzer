
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007bdd60(long param_1,int *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  double dVar1;
  longdouble lVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  longdouble *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longdouble lVar14;
  int iVar15;
  undefined8 uVar16;
  char cVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  wchar_t wVar23;
  long lVar24;
  char *pcVar25;
  double dVar26;
  char *pcVar27;
  undefined1 *puVar28;
  char *pcVar29;
  long lVar30;
  byte bVar31;
  uint *puVar32;
  ulong uVar33;
  uint *puVar34;
  long lVar35;
  wchar_t *pwVar36;
  char *pcVar37;
  undefined1 *puVar38;
  wchar_t *pwVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  wchar_t *pwVar43;
  undefined8 uVar44;
  bool bVar45;
  undefined4 uVar46;
  uint uVar47;
  uint uVar48;
  byte bVar49;
  int iVar50;
  char *pcVar51;
  int *piVar52;
  undefined *puVar53;
  undefined1 *puVar54;
  long in_FS_OFFSET;
  bool bVar55;
  ushort in_FPUControlWord;
  undefined1 auVar56 [16];
  int local_188;
  ushort uStack_180;
  undefined6 uStack_17e;
  uint local_178;
  char *local_140;
  undefined4 uStack_124;
  int local_108 [23];
  wchar_t local_ac [12];
  wchar_t local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [4];
  char local_64 [12];
  char local_58;
  char local_57 [15];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar20 = *param_2;
  iVar21 = param_2[1];
  bVar49 = *(byte *)((long)param_2 + 0xd);
  bVar31 = bVar49 >> 2;
  if ((bVar49 & 1) == 0) {
    iVar22 = *(int *)(**(long **)(in_FS_OFFSET + -0xc0) + 0x58);
    pcVar51 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x40);
  }
  else {
    iVar22 = *(int *)(**(long **)(in_FS_OFFSET + -200) + 0x198);
    pcVar51 = *(char **)(**(long **)(in_FS_OFFSET + -200) + 0x50);
  }
  if ((*pcVar51 == '\0') || (iVar22 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("*decimal != \'\\0\' && decimalwc != L\'\\0\'","../stdio-common/printf_fphex.c",
                 0xa4,"__printf_fphex");
  }
  plVar6 = (longdouble *)*param_3;
  iVar50 = param_2[2];
  lVar35 = (long)iVar50;
  iVar15 = iVar20;
  if ((bVar49 & 0x10) != 0) {
    dVar1 = *(double *)plVar6;
    dVar11 = *(double *)((long)plVar6 + 8);
    lVar14 = *plVar6;
    lVar2 = *plVar6;
    uStack_17e = (undefined6)((ulong)dVar11 >> 0x10);
    lVar24 = FUN_007cb7e0(dVar1,dVar1);
    if (lVar24 != 0) {
      piVar52 = (int *)&DAT_008421b4;
      puVar53 = &DAT_008421b0;
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar35 * 2) & 1) == 0) {
        piVar52 = (int *)&DAT_008421d4;
        puVar53 = &DAT_00824f48;
      }
LAB_007be794:
      auVar13._10_6_ = uStack_17e;
      auVar13._0_10_ = lVar14;
      bVar49 = *(byte *)(param_2 + 3);
      uVar47 = movmskps(param_6,auVar13);
      uVar47 = uVar47 & 8;
      goto LAB_007be351;
    }
    uVar33 = (ulong)dVar1 & _DAT_00842210;
    lVar24 = FUN_007cb7e0(uVar33,_DAT_0083ee30);
    if ((lVar24 == 0) && (lVar24 = FUN_007cb9a0(uVar33,_DAT_0083ee30), 0 < lVar24)) {
      piVar52 = (int *)&DAT_008421c4;
      puVar53 = &DAT_0080d86d;
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar35 * 2) & 1) == 0) {
        piVar52 = &DAT_008421e4;
        puVar53 = &DAT_00824f44;
      }
      goto LAB_007be794;
    }
    pcVar25 = (char *)FUN_00795230(dVar1,local_48,0x10,iVar50 == 0x41);
    iVar50 = param_2[2];
    pwVar39 = (wchar_t *)&DAT_00842120;
    dVar26 = dVar1;
    pwVar36 = (wchar_t *)local_78;
    if (iVar50 == 0x41) {
      pwVar39 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    do {
      pwVar43 = pwVar36;
      pwVar36 = pwVar43 + -1;
      *pwVar36 = pwVar39[SUB84(dVar26,0) & 0xf];
      bVar55 = 0xf < (ulong)dVar26;
      dVar26 = (double)((ulong)dVar26 >> 4);
    } while (bVar55);
    pcVar27 = pcVar25;
    if (&local_58 < pcVar25) {
      uVar33 = (long)pcVar25 - (long)&local_58;
      pcVar27 = (char *)thunk_FUN_00713720();
      uVar16 = _UNK_008422a8;
      uVar44 = _DAT_008422a0;
      pwVar39 = pwVar36;
      if (uVar33 - 1 < 3) {
LAB_007bdf69:
        pwVar39[-1] = L'0';
        if ((pcVar27 < pcVar25 + -1) && (pwVar39[-2] = L'0', pcVar27 < pcVar25 + -2)) {
          pwVar39[-3] = L'0';
        }
      }
      else {
        uVar40 = 0;
        pwVar43 = pwVar43 + -5;
        do {
          uVar40 = uVar40 + 1;
          *(undefined8 *)pwVar43 = uVar44;
          *(undefined8 *)(pwVar43 + 2) = uVar16;
          pwVar43 = pwVar43 + -4;
        } while (uVar40 != uVar33 >> 2);
        uVar40 = uVar33 & 0xfffffffffffffffc;
        pcVar25 = pcVar25 + -uVar40;
        pwVar39 = pwVar36 + -uVar40;
        if (uVar40 != uVar33) goto LAB_007bdf69;
      }
      pwVar36 = pwVar36 + -uVar33;
    }
    uVar40 = (ulong)dVar11 & 0xffffffffffff;
    pcVar25 = (char *)FUN_00795230(uVar40,pcVar27,0x10,iVar50 == 0x41);
    uVar46 = SUB84(pcVar27,0);
    pwVar39 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    uVar33 = uVar40;
    if (param_2[2] != 0x41) {
      pwVar39 = (wchar_t *)&DAT_00842120;
    }
    do {
      pwVar43 = pwVar36;
      pwVar36 = pwVar43 + -1;
      *pwVar36 = pwVar39[(uint)uVar33 & 0xf];
      bVar55 = 0xf < uVar33;
      uVar33 = uVar33 >> 4;
    } while (bVar55);
    pcVar27 = pcVar25;
    if (local_64 < pcVar25) {
      uVar33 = (long)pcVar25 - (long)local_64;
      pcVar27 = (char *)thunk_FUN_00713720();
      uVar16 = _UNK_008422a8;
      uVar44 = _DAT_008422a0;
      pwVar39 = pwVar36;
      if (uVar33 - 1 < 3) {
LAB_007be0a9:
        pwVar39[-1] = L'0';
        if ((pcVar27 < pcVar25 + -1) && (pwVar39[-2] = L'0', pcVar27 < pcVar25 + -2)) {
          pwVar39[-3] = L'0';
        }
      }
      else {
        uVar41 = 0;
        pwVar43 = pwVar43 + -5;
        do {
          uVar41 = uVar41 + 1;
          *(undefined8 *)pwVar43 = uVar44;
          *(undefined8 *)(pwVar43 + 2) = uVar16;
          pwVar43 = pwVar43 + -4;
        } while (uVar33 >> 2 != uVar41);
        uVar41 = uVar33 & 0xfffffffffffffffc;
        pcVar25 = pcVar25 + -uVar41;
        pwVar39 = pwVar36 + -uVar41;
        if (uVar41 != uVar33) goto LAB_007be0a9;
      }
      pwVar36 = pwVar36 + -uVar33;
    }
    cVar17 = '1' - (((ulong)dVar11 & 0x7fff000000000000) == 0);
    uVar47 = (uint)(ushort)((ulong)dVar11 >> 0x30);
    uVar19 = uVar47 & 0x7fff;
    if (((ulong)dVar11 & 0x7fff000000000000) == 0) {
      uVar19 = -(uint)(uVar40 != 0 || dVar1 != 0.0) & 0x3ffe;
      local_178 = (uint)(uVar40 != 0 || dVar1 != 0.0);
    }
    else if (uVar19 < 0x3fff) {
      uVar19 = 0x3fff - (uVar47 & 0x7fff);
      local_178 = 1;
    }
    else {
      local_178 = 0;
      uVar19 = uVar19 - 0x3fff;
    }
    auVar12._10_6_ = uStack_17e;
    auVar12._0_10_ = lVar2;
    uVar47 = movmskps(uVar46,auVar12);
    uVar47 = uVar47 & 8;
    bVar55 = uVar40 == 0 && dVar1 == 0.0;
LAB_007be142:
    if (bVar55) goto LAB_007be14a;
LAB_007bf240:
    puVar28 = local_48;
    lVar35 = (long)local_78;
    while (local_7c == 0x30) {
      puVar28 = puVar28 + -1;
      local_7c = *(int *)(lVar35 + 0xfffffffffffffff8);
      lVar35 = lVar35 + 0xfffffffffffffffc;
    }
    local_140 = puVar28 + -(long)pcVar27;
    if (iVar20 == -1) {
      uVar40 = (ulong)(int)uVar19;
      iVar15 = (int)local_140;
      goto LAB_007be164;
    }
    lVar35 = (long)iVar20;
    if (lVar35 < (long)local_140) {
      cVar4 = cVar17;
      if (0 < iVar20) {
        cVar4 = pcVar27[lVar35 + -1];
      }
      cVar5 = pcVar27[lVar35];
      if ((byte)(cVar4 + 0xbfU) < 6) {
        uVar48 = (uint)(char)(cVar4 + -0x37);
      }
      else {
        uVar48 = (int)cVar4 - 0x30;
        if ((byte)(cVar4 + 0x9fU) < 6) {
          uVar48 = (uint)(char)(cVar4 + -0x57);
        }
      }
      if ((byte)(cVar5 + 0xbfU) < 6) {
        iVar50 = (int)(char)(cVar5 + -0x37);
LAB_007bf2c0:
        bVar45 = true;
        bVar55 = true;
      }
      else {
        if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar50 = (int)(char)(cVar5 + -0x57);
          goto LAB_007bf2c0;
        }
        iVar50 = (int)cVar5 - 0x30;
        if (((int)cVar5 & 7U) != 0) goto LAB_007bf2c0;
        bVar55 = (long)(iVar20 + 1) < (long)local_140;
        bVar45 = (long)(iVar20 + 1) < (long)local_140;
      }
      in_FPUControlWord = in_FPUControlWord & 0xc00;
      if (in_FPUControlWord != 0x800) {
        if (in_FPUControlWord < 0x801) {
          if (in_FPUControlWord == 0) {
            if ((7 < iVar50) && (bVar55 || (uVar48 & 1) != 0)) goto LAB_007bf2fd;
          }
          else {
            if (in_FPUControlWord != 0x400) {
              uVar33 = FUN_00405257();
              return uVar33;
            }
            if (uVar47 != 0) goto LAB_007bf593;
          }
        }
        else if (in_FPUControlWord != 0xc00) {
          uVar33 = FUN_00405257();
          return uVar33;
        }
        goto LAB_007bf370;
      }
      if (uVar47 != 0) goto LAB_007bf370;
LAB_007bf593:
      if ((iVar50 < 8) && (!bVar45)) goto LAB_007bf370;
LAB_007bf2fd:
      uVar48 = iVar20 - 1;
      if (-1 < (int)uVar48) {
        pcVar25 = pcVar27 + (int)uVar48;
        pwVar39 = pwVar36 + (int)uVar48;
        do {
          cVar4 = *pcVar25;
          if (cVar4 == '9') {
            wVar23 = param_2[2];
            *pwVar39 = wVar23;
            *pcVar25 = (char)wVar23;
            goto LAB_007bf370;
          }
          if (*(int *)(*(long *)(in_FS_OFFSET + -0x50) + (long)cVar4 * 4) < 0x66) {
            *pwVar39 = *pwVar39 + L'\x01';
            uVar40 = (ulong)(int)uVar19;
            *pcVar25 = cVar4 + '\x01';
            goto LAB_007be164;
          }
          *pcVar25 = '0';
          pcVar25 = pcVar25 + -1;
          *pwVar39 = L'0';
          pwVar39 = pwVar39 + -1;
        } while (pcVar25 != pcVar27 + ((lVar35 + -2) - (ulong)uVar48));
      }
      if (cVar17 == '9') {
        cVar17 = (char)param_2[2];
        uVar40 = (ulong)(int)uVar19;
      }
      else if (*(int *)(*(long *)(in_FS_OFFSET + -0x50) + (long)cVar17 * 4) < 0x66) {
        cVar17 = cVar17 + '\x01';
        uVar40 = (ulong)(int)uVar19;
      }
      else {
        if (local_178 == 0) {
          iVar20 = uVar19 + 4;
        }
        else {
          iVar20 = uVar19 - 4;
          if (iVar20 < 1) {
            cVar17 = '1';
            local_178 = 0;
            uVar40 = (ulong)(int)(4 - uVar19);
            goto LAB_007be164;
          }
        }
        cVar17 = '1';
        uVar40 = (ulong)iVar20;
      }
    }
    else {
LAB_007bf370:
      uVar40 = (ulong)(int)uVar19;
    }
LAB_007be164:
    piVar52 = local_108 + 1;
    puVar28 = (undefined1 *)FUN_00795230(uVar40,local_68,10,0);
    local_188 = (int)puVar28;
    do {
      piVar52 = piVar52 + -1;
      *piVar52 = *(int *)(&DAT_00842120 + (uVar40 % 10) * 4);
      bVar55 = 9 < uVar40;
      uVar40 = uVar40 / 10;
    } while (bVar55);
    if (uVar47 == 0) {
      bVar49 = *(byte *)(param_2 + 3);
      iVar20 = 4 - (uint)((bVar49 & 0x50) == 0);
    }
    else {
      bVar49 = *(byte *)(param_2 + 3);
      iVar20 = 4;
    }
    lVar35 = (long)local_68 - (long)puVar28;
    iVar20 = ((iVar21 + -2) - (int)lVar35) - (iVar20 + iVar15);
    if ((0 < iVar15) || ((bVar49 & 8) != 0)) {
      iVar21 = 1;
      if ((bVar31 & 1) == 0) {
        iVar21 = thunk_FUN_007129d0(pcVar51);
      }
      iVar20 = iVar20 - iVar21;
    }
    if ((((bVar49 & 0x20) == 0) && (param_2[4] != 0x30)) && (0 < iVar20)) {
      if ((bVar31 & 1) == 0) {
        lVar24 = FUN_007a1c80();
      }
      else {
        lVar24 = FUN_007a2150(param_1,0x20,(long)iVar20);
      }
      iVar21 = iVar20;
      if (lVar24 == iVar20) goto LAB_007bea9b;
      goto LAB_007be99d;
    }
    iVar21 = 0;
LAB_007bea9b:
    if (uVar47 == 0) {
      if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
        if ((bVar31 & 1) == 0) {
          puVar54 = *(undefined1 **)(param_1 + 0x28);
          if (*(undefined1 **)(param_1 + 0x30) <= puVar54) {
            uVar44 = 0x2b;
            goto LAB_007bfa81;
          }
          *(undefined1 **)(param_1 + 0x28) = puVar54 + 1;
          *puVar54 = 0x2b;
        }
        else {
          lVar24 = *(long *)(param_1 + 0xa0);
          if ((lVar24 == 0) ||
             (puVar7 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar7))
          {
            uVar44 = 0x2b;
            goto LAB_007bf9a6;
          }
          *(undefined4 **)(lVar24 + 0x20) = puVar7 + 1;
          *puVar7 = 0x2b;
        }
        goto LAB_007beadc;
      }
      if ((*(byte *)(param_2 + 3) & 0x10) != 0) {
        if ((bVar31 & 1) == 0) {
          puVar54 = *(undefined1 **)(param_1 + 0x28);
          if (*(undefined1 **)(param_1 + 0x30) <= puVar54) {
            uVar44 = 0x20;
            goto LAB_007bfa81;
          }
          *(undefined1 **)(param_1 + 0x28) = puVar54 + 1;
          *puVar54 = 0x20;
        }
        else {
          lVar24 = *(long *)(param_1 + 0xa0);
          if ((lVar24 == 0) ||
             (puVar7 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar7))
          {
            uVar44 = 0x20;
            goto LAB_007bf9a6;
          }
          *(undefined4 **)(lVar24 + 0x20) = puVar7 + 1;
          *puVar7 = 0x20;
        }
        goto LAB_007beadc;
      }
    }
    else {
      if ((bVar31 & 1) == 0) {
        puVar54 = *(undefined1 **)(param_1 + 0x28);
        if (*(undefined1 **)(param_1 + 0x30) <= puVar54) {
          uVar44 = 0x2d;
LAB_007bfa81:
          iVar50 = FUN_00706570(param_1,uVar44);
          goto LAB_007bf9b9;
        }
        *(undefined1 **)(param_1 + 0x28) = puVar54 + 1;
        *puVar54 = 0x2d;
      }
      else {
        lVar24 = *(long *)(param_1 + 0xa0);
        if ((lVar24 == 0) ||
           (puVar7 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar7)) {
          uVar44 = 0x2d;
LAB_007bf9a6:
          iVar50 = FUN_006ff380(param_1,uVar44);
LAB_007bf9b9:
          if (iVar50 == -1) {
            uVar47 = 0xffffffff;
            goto LAB_007be464;
          }
        }
        else {
          *(undefined4 **)(lVar24 + 0x20) = puVar7 + 1;
          *puVar7 = 0x2d;
        }
      }
LAB_007beadc:
      iVar21 = iVar21 + 1;
    }
    if ((bVar31 & 1) == 0) {
      puVar54 = *(undefined1 **)(param_1 + 0x28);
      if (*(undefined1 **)(param_1 + 0x30) <= puVar54) {
        iVar50 = FUN_00706570(param_1,0x30);
        goto LAB_007bf715;
      }
      *(undefined1 **)(param_1 + 0x28) = puVar54 + 1;
      *puVar54 = 0x30;
      uVar47 = param_2[2] + 0x17;
LAB_007bedd0:
      puVar54 = *(undefined1 **)(param_1 + 0x28);
      if (*(undefined1 **)(param_1 + 0x30) <= puVar54) {
        iVar50 = FUN_00706570(param_1,uVar47 & 0xff);
        bVar55 = iVar50 == -1;
        goto LAB_007beb3b;
      }
      iVar50 = iVar21 + 2;
      *(undefined1 **)(param_1 + 0x28) = puVar54 + 1;
      *puVar54 = (char)uVar47;
      if ((*(byte *)(param_2 + 3) & 0x20) == 0) goto LAB_007beb4e;
LAB_007bedf8:
      pcVar25 = *(char **)(param_1 + 0x28);
      if (pcVar25 < *(char **)(param_1 + 0x30)) {
        *(char **)(param_1 + 0x28) = pcVar25 + 1;
        iVar50 = iVar50 + 1;
        *pcVar25 = cVar17;
        if (0 < iVar15) goto LAB_007bebba;
LAB_007bee28:
        if ((*(byte *)(param_2 + 3) & 8) != 0) goto LAB_007bebba;
LAB_007bee33:
        uVar47 = param_2[2] + 0xf;
        if ((bVar31 & 1) != 0) goto LAB_007bee48;
LAB_007bf0cf:
        puVar54 = *(undefined1 **)(param_1 + 0x28);
        if (*(undefined1 **)(param_1 + 0x30) <= puVar54) {
          iVar21 = FUN_00706570(param_1,uVar47 & 0xff);
          if (iVar21 == -1) goto LAB_007be99d;
          goto LAB_007bee7e;
        }
        *(undefined1 **)(param_1 + 0x28) = puVar54 + 1;
        *puVar54 = (char)uVar47;
        iVar21 = (-(uint)(local_178 == 0) & 0xfffffffe) + 0x2d;
LAB_007bf102:
        pcVar51 = *(char **)(param_1 + 0x28);
        if (pcVar51 < *(char **)(param_1 + 0x30)) {
          *(char **)(param_1 + 0x28) = pcVar51 + 1;
          *pcVar51 = (-(local_178 == 0) & 0xfeU) + 0x2d;
        }
        else {
          iVar21 = FUN_00706570(param_1,iVar21);
          if (iVar21 == -1) goto LAB_007be99d;
        }
        puVar54 = puVar28 + lVar35;
        uVar47 = iVar50 + 2U;
        if (lVar35 != 0) {
          do {
            puVar38 = puVar28 + 1;
            puVar10 = *(undefined1 **)(param_1 + 0x28);
            uVar3 = *puVar28;
            if (puVar10 < *(undefined1 **)(param_1 + 0x30)) {
              *(undefined1 **)(param_1 + 0x28) = puVar10 + 1;
              *puVar10 = uVar3;
            }
            else {
              iVar21 = FUN_00706570(param_1);
              if (iVar21 == -1) goto LAB_007be99d;
            }
            uVar47 = ((int)puVar38 - local_188) + iVar50 + 2U;
            puVar28 = puVar38;
          } while (puVar38 != puVar54);
        }
        goto LAB_007bf044;
      }
      iVar21 = FUN_00706570(param_1,cVar17);
LAB_007beba0:
      if (iVar21 == -1) goto LAB_007be99d;
      iVar50 = iVar50 + 1;
      if (iVar15 < 1) goto LAB_007bee28;
LAB_007bebba:
      if ((bVar31 & 1) == 0) {
        lVar24 = thunk_FUN_007129d0(pcVar51);
        pcVar25 = pcVar51;
        if (lVar24 != 0) {
          do {
            while( true ) {
              pcVar37 = pcVar25 + 1;
              pcVar29 = *(char **)(param_1 + 0x28);
              cVar17 = *pcVar25;
              pcVar25 = pcVar37;
              if (pcVar29 < *(char **)(param_1 + 0x30)) break;
              iVar21 = FUN_00706570(param_1);
              if (iVar21 == -1) goto LAB_007be99d;
              if (pcVar37 == pcVar51 + lVar24) goto LAB_007bec60;
            }
            *(char **)(param_1 + 0x28) = pcVar29 + 1;
            *pcVar29 = cVar17;
          } while (pcVar37 != pcVar51 + lVar24);
LAB_007bec60:
          iVar50 = ((int)pcVar37 - (int)pcVar51) + iVar50;
        }
        if (iVar15 < 1) {
          uVar47 = param_2[2] + 0xf;
        }
        else {
          pcVar25 = (char *)(long)iVar15;
          lVar24 = (long)pcVar25 - (long)local_140;
          pcVar51 = pcVar27;
          iVar21 = iVar50;
          pcVar29 = pcVar25;
          if ((long)local_140 < (long)pcVar25) {
            pcVar25 = local_140;
            pcVar29 = local_140;
          }
          while (pcVar25 != (char *)0x0) {
            pcVar37 = pcVar51 + 1;
            pcVar25 = *(char **)(param_1 + 0x28);
            cVar17 = *pcVar51;
            if (pcVar25 < *(char **)(param_1 + 0x30)) {
              *(char **)(param_1 + 0x28) = pcVar25 + 1;
              *pcVar25 = cVar17;
            }
            else {
              iVar21 = FUN_00706570(param_1);
              if (iVar21 == -1) goto LAB_007be99d;
            }
            pcVar51 = pcVar37;
            iVar21 = ((int)pcVar37 - (int)pcVar27) + iVar50;
            pcVar25 = pcVar27 + ((long)pcVar29 - (long)pcVar37);
          }
          if (0 < lVar24) {
            lVar30 = FUN_007a1c80(param_1,0x30,lVar24);
LAB_007bf470:
            if (lVar30 == lVar24) {
              iVar50 = iVar21 + (int)lVar30;
              goto LAB_007bee33;
            }
            goto LAB_007be99d;
          }
          uVar47 = param_2[2] + 0xf;
          iVar50 = iVar21;
        }
        goto LAB_007bf0cf;
      }
LAB_007bef60:
      lVar24 = *(long *)(param_1 + 0xa0);
      if ((lVar24 == 0) || (piVar9 = *(int **)(lVar24 + 0x20), *(int **)(lVar24 + 0x28) <= piVar9))
      {
        iVar22 = FUN_006ff380(param_1,iVar22);
      }
      else {
        *(int **)(lVar24 + 0x20) = piVar9 + 1;
        *piVar9 = iVar22;
      }
      if (iVar22 != -1) {
        iVar21 = iVar50 + 1;
        if (0 < iVar15) {
          pcVar25 = (char *)(long)iVar15;
          pcVar51 = local_140;
          if ((long)pcVar25 <= (long)local_140) {
            pcVar51 = pcVar25;
          }
          iVar22 = (int)pcVar51;
          for (; pcVar51 != (char *)0x0; pcVar51 = pcVar51 + -1) {
            lVar24 = *(long *)(param_1 + 0xa0);
            wVar23 = *pwVar36;
            if ((lVar24 == 0) ||
               (pwVar39 = *(wchar_t **)(lVar24 + 0x20), *(wchar_t **)(lVar24 + 0x28) <= pwVar39)) {
              wVar23 = FUN_006ff380(param_1);
            }
            else {
              *(wchar_t **)(lVar24 + 0x20) = pwVar39 + 1;
              *pwVar39 = wVar23;
            }
            if (wVar23 == L'\xffffffff') goto LAB_007be99d;
            iVar21 = (iVar22 + 2 + iVar50) - (int)pcVar51;
            pwVar36 = pwVar36 + 1;
          }
          lVar24 = (long)pcVar25 - (long)local_140;
          if (0 < lVar24) {
            lVar30 = FUN_007a2150(param_1,0x30,lVar24);
            goto LAB_007bf470;
          }
        }
        iVar50 = iVar21;
        uVar47 = param_2[2] + 0xf;
        goto LAB_007bee48;
      }
    }
    else {
      lVar24 = *(long *)(param_1 + 0xa0);
      if (lVar24 == 0) {
LAB_007bf6f8:
        iVar50 = FUN_006ff380(param_1,0x30);
LAB_007bf715:
        if (iVar50 == -1) goto LAB_007be99d;
        uVar47 = param_2[2] + 0x17;
        if ((bVar31 & 1) == 0) goto LAB_007bedd0;
        lVar24 = *(long *)(param_1 + 0xa0);
        if (lVar24 != 0) {
          puVar34 = *(uint **)(lVar24 + 0x20);
          puVar32 = *(uint **)(lVar24 + 0x28);
          goto LAB_007beb22;
        }
      }
      else {
        puVar8 = *(uint **)(lVar24 + 0x20);
        puVar32 = *(uint **)(lVar24 + 0x28);
        if (puVar32 <= puVar8) goto LAB_007bf6f8;
        puVar34 = puVar8 + 1;
        *(uint **)(lVar24 + 0x20) = puVar34;
        *puVar8 = 0x30;
        uVar47 = param_2[2] + 0x17;
LAB_007beb22:
        if (puVar34 < puVar32) {
          bVar55 = uVar47 == 0xffffffff;
          *(uint **)(lVar24 + 0x20) = puVar34 + 1;
          *puVar34 = uVar47;
          goto LAB_007beb3b;
        }
      }
      iVar50 = FUN_006ff380(param_1);
      bVar55 = iVar50 == -1;
LAB_007beb3b:
      if (bVar55) goto LAB_007be99d;
      iVar50 = iVar21 + 2;
      if ((*(byte *)(param_2 + 3) & 0x20) == 0) {
LAB_007beb4e:
        iVar50 = iVar21 + 2;
        if ((param_2[4] == 0x30) && (0 < iVar20)) {
          if ((bVar31 & 1) == 0) {
            lVar24 = FUN_007a1c80(param_1,0x30);
          }
          else {
            lVar24 = FUN_007a2150();
          }
          if (lVar24 != iVar20) goto LAB_007be99d;
          iVar50 = iVar50 + iVar20;
        }
      }
      if ((bVar31 & 1) == 0) goto LAB_007bedf8;
      lVar24 = *(long *)(param_1 + 0xa0);
      if ((lVar24 != 0) && (piVar9 = *(int **)(lVar24 + 0x20), piVar9 < *(int **)(lVar24 + 0x28))) {
        iVar21 = (int)cVar17;
        *(int **)(lVar24 + 0x20) = piVar9 + 1;
        *piVar9 = iVar21;
        goto LAB_007beba0;
      }
      iVar21 = FUN_006ff380(param_1,(int)cVar17);
      if (iVar21 == -1) goto LAB_007be99d;
      iVar50 = iVar50 + 1;
      if ((0 < iVar15) || ((*(byte *)(param_2 + 3) & 8) != 0)) goto LAB_007bef60;
      uVar47 = param_2[2] + 0xf;
LAB_007bee48:
      lVar24 = *(long *)(param_1 + 0xa0);
      if ((lVar24 == 0) || (puVar8 = *(uint **)(lVar24 + 0x20), *(uint **)(lVar24 + 0x28) <= puVar8)
         ) {
        uVar47 = FUN_006ff380(param_1);
      }
      else {
        *(uint **)(lVar24 + 0x20) = puVar8 + 1;
        *puVar8 = uVar47;
      }
      if (uVar47 != 0xffffffff) {
LAB_007bee7e:
        iVar21 = (-(uint)(local_178 == 0) & 0xfffffffe) + 0x2d;
        if ((bVar31 & 1) == 0) goto LAB_007bf102;
        lVar24 = *(long *)(param_1 + 0xa0);
        if ((lVar24 == 0) || (piVar9 = *(int **)(lVar24 + 0x20), *(int **)(lVar24 + 0x28) <= piVar9)
           ) {
          iVar21 = FUN_006ff380(param_1,iVar21);
          if (iVar21 == -1) goto LAB_007be99d;
        }
        else {
          *(int **)(lVar24 + 0x20) = piVar9 + 1;
          *piVar9 = iVar21;
        }
        uVar47 = iVar50 + 2;
        while (lVar35 != 0) {
          lVar35 = lVar35 + -1;
          lVar24 = *(long *)(param_1 + 0xa0);
          iVar21 = *piVar52;
          if ((lVar24 == 0) ||
             (piVar9 = *(int **)(lVar24 + 0x20), *(int **)(lVar24 + 0x28) <= piVar9)) {
            iVar21 = FUN_006ff380(param_1);
          }
          else {
            *(int **)(lVar24 + 0x20) = piVar9 + 1;
            *piVar9 = iVar21;
          }
          if (iVar21 == -1) goto LAB_007be99d;
          uVar47 = uVar47 + 1;
          piVar52 = piVar52 + 1;
        }
LAB_007bf044:
        if ((((*(byte *)(param_2 + 3) & 0x20) == 0) || (iVar20 < 1)) || (param_2[4] == 0x30))
        goto LAB_007be464;
        if ((bVar31 & 1) == 0) {
          lVar35 = FUN_007a1c80(param_1,param_2[4],(long)iVar20);
        }
        else {
          lVar35 = FUN_007a2150();
        }
        if (lVar35 == iVar20) {
          uVar47 = uVar47 + iVar20;
          goto LAB_007be464;
        }
      }
    }
    goto LAB_007be99d;
  }
  bVar49 = *(byte *)(param_2 + 3);
  if ((bVar49 & 1) == 0) {
    dVar1 = *(double *)plVar6;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = dVar1;
    uVar19 = movmskpd(param_6,auVar56);
    uVar47 = uVar19 & 1;
    if (NAN(dVar1)) goto LAB_007bf4f0;
    if (DAT_00821c60 < (double)((ulong)dVar1 & _DAT_00842220)) goto LAB_007be31d;
    uStack_124 = (uint)((ulong)dVar1 >> 0x20);
    pwVar36 = (wchar_t *)local_78;
    pwVar39 = (wchar_t *)&DAT_00842120;
    uVar40 = (ulong)(uStack_124 & 0xfffff) << 0x20 | (ulong)dVar1 & 0xffffffff;
    uVar33 = uVar40;
    if (iVar50 == 0x41) {
      pwVar39 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    do {
      pwVar36 = pwVar36 + -1;
      *pwVar36 = pwVar39[(uint)uVar33 & 0xf];
      bVar55 = 0xf < uVar33;
      uVar33 = uVar33 >> 4;
    } while (bVar55);
    pcVar27 = (char *)FUN_00795230(uVar40,local_48,0x10,iVar50 == 0x41);
    if (local_ac < pwVar36) {
      uVar41 = (long)pwVar36 + (-1 - (long)local_ac);
      uVar42 = uVar41 >> 2;
      uVar33 = uVar42 + 1;
      pwVar39 = pwVar36;
      if (uVar41 < 0xc) {
LAB_007be6a3:
        pwVar39[-1] = L'0';
        if ((local_ac < pwVar39 + -1) && (pwVar39[-2] = L'0', local_ac < pwVar39 + -2)) {
          pwVar39[-3] = L'0';
        }
      }
      else {
        do {
          *(undefined8 *)(pwVar39 + -4) = _DAT_008422a0;
          *(undefined8 *)(pwVar39 + -2) = _UNK_008422a8;
          pwVar39 = pwVar39 + -4;
        } while (pwVar39 != pwVar36 + (uVar33 >> 2) * -4);
        pwVar39 = pwVar36 + -(uVar33 & 0xfffffffffffffffc);
        if ((uVar33 & 0xfffffffffffffffc) != uVar33) goto LAB_007be6a3;
      }
      pcVar27 = (char *)thunk_FUN_00713720(pcVar27 + ~uVar42,0x30);
      pwVar36 = pwVar36 + -uVar33;
    }
    uVar47 = uVar19 & 1;
    cVar17 = '1' - (((ulong)dVar1 & 0x7ff0000000000000) == 0);
    uVar18 = (ushort)((ulong)dVar1 >> 0x34);
    uVar48 = uVar18 & 0x7ff;
    local_178 = uVar18 & 0x7ff;
    if ((uVar18 & 0x7ff) == 0) {
      if (uVar40 != 0) {
        local_178 = 1;
        uVar19 = 0x3fe;
        goto LAB_007bf240;
      }
    }
    else {
      if (0x3fe < uVar48) {
        uVar19 = uVar48 - 0x3ff;
      }
      else {
        uVar19 = 0x3ff - local_178;
      }
      local_178 = (uint)(0x3fe >= uVar48);
      if (uVar40 != 0) goto LAB_007bf240;
LAB_007be14a:
      uVar40 = (ulong)(int)uVar19;
    }
    local_140 = (char *)0x0;
    iVar15 = 0;
    if (iVar20 != -1) {
      iVar15 = iVar20;
    }
    goto LAB_007be164;
  }
  lVar2 = *plVar6;
  uStack_180 = (ushort)((unkuint10)lVar2 >> 0x40);
  uVar47 = (uint)(ushort)((ushort)(lVar2 < (longdouble)0) << 9);
  if (NAN(lVar2)) {
LAB_007bf4f0:
    piVar52 = (int *)&DAT_008421b4;
    puVar53 = &DAT_008421b0;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar35 * 2) & 1) == 0) {
      piVar52 = (int *)&DAT_008421d4;
      puVar53 = &DAT_00824f48;
    }
  }
  else {
    if (ABS(lVar2) <= _DAT_00821c80) {
      uVar33 = SUB108(lVar2,0);
      pcVar25 = (char *)FUN_00795230(uVar33,local_48,0x10,iVar50 == 0x41);
      pwVar43 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      uVar40 = uVar33;
      pwVar39 = (wchar_t *)local_78;
      if (param_2[2] != 0x41) {
        pwVar43 = (wchar_t *)&DAT_00842120;
      }
      do {
        pwVar36 = pwVar39;
        pwVar39 = pwVar36 + -1;
        *pwVar39 = pwVar43[(uint)uVar40 & 0xf];
        bVar55 = 0xf < uVar40;
        uVar40 = uVar40 >> 4;
      } while (bVar55);
      if (&local_58 < pcVar25) {
        pcVar27 = local_57;
        uVar40 = (long)pcVar25 - (long)&local_58;
        pcVar29 = (char *)thunk_FUN_00713720(&local_58,0x30);
        if (uVar40 - 1 < 3) {
LAB_007be909:
          pwVar39[-1] = L'0';
          if ((pcVar29 < pcVar25 + -1) && (pwVar39[-2] = L'0', pcVar29 < pcVar25 + -2)) {
            pwVar39[-3] = L'0';
          }
        }
        else {
          pwVar43 = pwVar36 + -5;
          uVar41 = 0;
          do {
            uVar41 = uVar41 + 1;
            *(undefined8 *)pwVar43 = _DAT_008422a0;
            *(undefined8 *)(pwVar43 + 2) = _UNK_008422a8;
            pwVar43 = pwVar43 + -4;
          } while (uVar41 != uVar40 >> 2);
          uVar41 = uVar40 & 0xfffffffffffffffc;
          pcVar25 = pcVar25 + -uVar41;
          pwVar39 = pwVar39 + -uVar41;
          if (uVar41 != uVar40) goto LAB_007be909;
        }
        cVar17 = '0';
        pwVar36 = pwVar36 + -uVar40;
      }
      else {
        cVar17 = *pcVar25;
        pcVar27 = pcVar25 + 1;
      }
      uVar19 = uStack_180 & 0x7fff;
      if (((unkuint10)lVar2 & 0x7fff) == 0) {
        uVar19 = -(uint)(uVar33 != 0) & 0x4001;
        local_178 = (uint)(uVar33 != 0);
      }
      else if (uVar19 < 0x4002) {
        uVar19 = 0x4002 - (uStack_180 & 0x7fff);
        local_178 = 1;
      }
      else {
        local_178 = 0;
        uVar19 = uVar19 - 0x4002;
      }
      bVar55 = uVar33 == 0;
      goto LAB_007be142;
    }
LAB_007be31d:
    piVar52 = (int *)&DAT_008421c4;
    puVar53 = &DAT_0080d86d;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar35 * 2) & 1) == 0) {
      piVar52 = &DAT_008421e4;
      puVar53 = &DAT_00824f44;
    }
  }
LAB_007be351:
  if (uVar47 == 0) {
    iVar20 = 0;
    if ((bVar49 & 0x50) == 0) {
      iVar21 = iVar21 + -3;
      if (((bVar49 & 0x20) == 0) && (0 < iVar21)) goto LAB_007be4d9;
    }
    else {
      iVar21 = iVar21 + -4;
      if ((bVar49 & 0x20) == 0) {
        if (0 < iVar21) goto LAB_007be4d9;
        iVar20 = 0;
      }
    }
LAB_007be9bc:
    if ((bVar49 & 0x40) == 0) {
      if ((bVar49 & 0x10) != 0) {
        if ((bVar31 & 1) == 0) {
          puVar28 = *(undefined1 **)(param_1 + 0x28);
          if (*(undefined1 **)(param_1 + 0x30) <= puVar28) {
            uVar44 = 0x20;
            goto LAB_007bfa31;
          }
          *(undefined1 **)(param_1 + 0x28) = puVar28 + 1;
          *puVar28 = 0x20;
        }
        else {
          lVar35 = *(long *)(param_1 + 0xa0);
          if ((lVar35 == 0) ||
             (puVar7 = *(undefined4 **)(lVar35 + 0x20), *(undefined4 **)(lVar35 + 0x28) <= puVar7))
          {
            uVar44 = 0x20;
            goto LAB_007bf8ed;
          }
          *(undefined4 **)(lVar35 + 0x20) = puVar7 + 1;
          *puVar7 = 0x20;
        }
        goto LAB_007be9fe;
      }
      goto LAB_007be39c;
    }
    if ((bVar31 & 1) == 0) {
      puVar28 = *(undefined1 **)(param_1 + 0x28);
      if (*(undefined1 **)(param_1 + 0x30) <= puVar28) {
        uVar44 = 0x2b;
LAB_007bfa31:
        iVar22 = FUN_00706570(param_1,uVar44);
        goto LAB_007bf8ff;
      }
      *(undefined1 **)(param_1 + 0x28) = puVar28 + 1;
      *puVar28 = 0x2b;
    }
    else {
      lVar35 = *(long *)(param_1 + 0xa0);
      if ((lVar35 == 0) ||
         (puVar7 = *(undefined4 **)(lVar35 + 0x20), *(undefined4 **)(lVar35 + 0x28) <= puVar7)) {
        uVar44 = 0x2b;
LAB_007bf8ed:
        iVar22 = FUN_006ff380(param_1,uVar44);
LAB_007bf8ff:
        if (iVar22 == -1) {
          uVar47 = 0xffffffff;
          goto LAB_007be464;
        }
      }
      else {
        *(undefined4 **)(lVar35 + 0x20) = puVar7 + 1;
        *puVar7 = 0x2b;
      }
    }
LAB_007be9fe:
    iVar20 = iVar20 + 1;
    if ((bVar31 & 1) == 0) goto LAB_007bea0e;
LAB_007be3a8:
    lVar35 = *(long *)(param_1 + 0xa0);
    iVar22 = *piVar52;
    if ((lVar35 == 0) || (piVar9 = *(int **)(lVar35 + 0x20), *(int **)(lVar35 + 0x28) <= piVar9)) {
      iVar22 = FUN_006ff380(param_1);
      if (iVar22 != -1) {
        lVar35 = *(long *)(param_1 + 0xa0);
        iVar22 = piVar52[1];
        if (lVar35 != 0) goto LAB_007be3e8;
LAB_007bf3b7:
        iVar22 = FUN_006ff380(param_1);
        if (iVar22 != -1) {
          lVar35 = *(long *)(param_1 + 0xa0);
          iVar22 = piVar52[2];
          if (lVar35 == 0) {
LAB_007bf3df:
            iVar22 = FUN_006ff380(param_1);
          }
          else {
LAB_007be410:
            piVar52 = *(int **)(lVar35 + 0x20);
            if (*(int **)(lVar35 + 0x28) <= piVar52) goto LAB_007bf3df;
            *(int **)(lVar35 + 0x20) = piVar52 + 1;
            *piVar52 = iVar22;
          }
          if (iVar22 != -1) {
            uVar47 = iVar20 + 3;
            if (((*(byte *)(param_2 + 3) & 0x20) == 0) || (iVar21 < 1)) goto LAB_007be464;
            lVar24 = (long)iVar21;
            lVar35 = FUN_007a2150(param_1,0x20,lVar24);
            goto LAB_007be458;
          }
        }
      }
    }
    else {
      *(int **)(lVar35 + 0x20) = piVar9 + 1;
      *piVar9 = iVar22;
      if (iVar22 != -1) {
        iVar22 = piVar52[1];
LAB_007be3e8:
        piVar9 = *(int **)(lVar35 + 0x20);
        if (*(int **)(lVar35 + 0x28) <= piVar9) goto LAB_007bf3b7;
        *(int **)(lVar35 + 0x20) = piVar9 + 1;
        *piVar9 = iVar22;
        if (iVar22 != -1) {
          iVar22 = piVar52[2];
          goto LAB_007be410;
        }
      }
    }
  }
  else {
    iVar21 = iVar21 + -4;
    if (((bVar49 & 0x20) == 0) && (0 < iVar21)) {
LAB_007be4d9:
      if ((bVar31 & 1) == 0) {
        lVar35 = FUN_007a1c80(param_1,0x20,(long)iVar21);
      }
      else {
        lVar35 = FUN_007a2150();
      }
      if (lVar35 != iVar21) goto LAB_007be99d;
      iVar20 = iVar21;
      if (uVar47 == 0) {
        bVar49 = *(byte *)(param_2 + 3);
        goto LAB_007be9bc;
      }
    }
    else {
      iVar20 = 0;
    }
    if ((bVar31 & 1) == 0) {
      puVar28 = *(undefined1 **)(param_1 + 0x28);
      if (puVar28 < *(undefined1 **)(param_1 + 0x30)) {
        *(undefined1 **)(param_1 + 0x28) = puVar28 + 1;
        *puVar28 = 0x2d;
      }
      else {
        iVar22 = FUN_00706570(param_1,0x2d);
LAB_007bf673:
        if (iVar22 == -1) {
          uVar47 = 0xffffffff;
          goto LAB_007be464;
        }
      }
    }
    else {
      lVar35 = *(long *)(param_1 + 0xa0);
      if ((lVar35 == 0) ||
         (puVar7 = *(undefined4 **)(lVar35 + 0x20), *(undefined4 **)(lVar35 + 0x28) <= puVar7)) {
        iVar22 = FUN_006ff380(param_1,0x2d);
        goto LAB_007bf673;
      }
      *(undefined4 **)(lVar35 + 0x20) = puVar7 + 1;
      *puVar7 = 0x2d;
    }
    iVar20 = iVar20 + 1;
LAB_007be39c:
    if ((bVar31 & 1) != 0) goto LAB_007be3a8;
LAB_007bea0e:
    uVar3 = *puVar53;
    puVar28 = *(undefined1 **)(param_1 + 0x28);
    if (puVar28 < *(undefined1 **)(param_1 + 0x30)) {
      *(undefined1 **)(param_1 + 0x28) = puVar28 + 1;
      *puVar28 = uVar3;
    }
    else {
      iVar22 = FUN_00706570(param_1,uVar3);
      if (iVar22 == -1) goto LAB_007be99d;
    }
    uVar3 = puVar53[1];
    puVar28 = *(undefined1 **)(param_1 + 0x28);
    if (puVar28 < *(undefined1 **)(param_1 + 0x30)) {
      *(undefined1 **)(param_1 + 0x28) = puVar28 + 1;
      *puVar28 = uVar3;
    }
    else {
      iVar22 = FUN_00706570(param_1,uVar3);
      if (iVar22 == -1) goto LAB_007be99d;
    }
    uVar3 = puVar53[2];
    puVar28 = *(undefined1 **)(param_1 + 0x28);
    if (puVar28 < *(undefined1 **)(param_1 + 0x30)) {
      *(undefined1 **)(param_1 + 0x28) = puVar28 + 1;
      *puVar28 = uVar3;
    }
    else {
      iVar22 = FUN_00706570(param_1,uVar3);
      if (iVar22 == -1) goto LAB_007be99d;
    }
    uVar47 = iVar20 + 3;
    if (((*(byte *)(param_2 + 3) & 0x20) == 0) || (iVar21 < 1)) goto LAB_007be464;
    lVar24 = (long)iVar21;
    lVar35 = FUN_007a1c80(param_1,0x20,lVar24);
LAB_007be458:
    if (lVar35 == lVar24) {
      uVar47 = uVar47 + iVar21;
      goto LAB_007be464;
    }
  }
LAB_007be99d:
  uVar47 = 0xffffffff;
LAB_007be464:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return (ulong)uVar47;
}

