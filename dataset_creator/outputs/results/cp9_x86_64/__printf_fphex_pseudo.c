
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __printf_fphex(_IO_FILE *param_1,int *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  double dVar1;
  longdouble lVar2;
  byte bVar3;
  longdouble *plVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longdouble lVar13;
  int iVar14;
  undefined8 uVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  wchar_t wVar19;
  long lVar20;
  byte *pbVar21;
  double dVar22;
  byte *pbVar23;
  void *pvVar24;
  long lVar25;
  byte bVar26;
  ulong uVar27;
  uint *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  size_t sVar31;
  uint *puVar32;
  long lVar33;
  wchar_t *pwVar34;
  byte *pbVar35;
  undefined1 *puVar36;
  ulong uVar37;
  wchar_t *pwVar38;
  ulong uVar39;
  wchar_t *pwVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  byte bVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int *piVar50;
  byte *pbVar51;
  long in_FS_OFFSET;
  bool bVar52;
  ushort in_FPUControlWord;
  undefined1 auVar53 [16];
  int local_188;
  ushort uStack_180;
  undefined6 uStack_17e;
  uint local_178;
  byte local_160;
  byte *local_140;
  undefined4 uStack_124;
  int local_108 [23];
  wchar_t local_ac [12];
  wchar_t local_7c;
  undefined1 local_78 [16];
  byte local_68 [4];
  byte local_64 [12];
  byte local_58;
  byte local_57 [15];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar18 = *param_2;
  iVar47 = param_2[1];
  bVar46 = *(byte *)((long)param_2 + 0xd);
  bVar26 = bVar46 >> 2;
  if ((bVar46 & 1) == 0) {
    iVar49 = *(int *)(**(long **)(in_FS_OFFSET + -0xc0) + 0x58);
    pbVar51 = *(byte **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x40);
  }
  else {
    iVar49 = *(int *)(**(long **)(in_FS_OFFSET + -200) + 0x198);
    pbVar51 = *(byte **)(**(long **)(in_FS_OFFSET + -200) + 0x50);
  }
  if ((*pbVar51 == 0) || (iVar49 == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("*decimal != \'\\0\' && decimalwc != L\'\\0\'","../stdio-common/printf_fphex.c",
                  0xa4,"__printf_fphex");
  }
  plVar4 = (longdouble *)*param_3;
  iVar48 = param_2[2];
  lVar33 = (long)iVar48;
  iVar14 = iVar18;
  if ((bVar46 & 0x10) != 0) {
    dVar1 = *(double *)plVar4;
    dVar10 = *(double *)((long)plVar4 + 8);
    lVar13 = *plVar4;
    lVar2 = *plVar4;
    uStack_17e = (undefined6)((ulong)dVar10 >> 0x10);
    lVar20 = __unordtf2(dVar1,dVar1);
    if (lVar20 != 0) {
      piVar50 = (int *)&DAT_00837f94;
      pbVar51 = &DAT_00837f90;
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar33 * 2) & 1) == 0) {
        piVar50 = (int *)&DAT_00837fb4;
        pbVar51 = &DAT_0081ad28;
      }
LAB_007b4e54:
      auVar12._10_6_ = uStack_17e;
      auVar12._0_10_ = lVar13;
      bVar46 = *(byte *)(param_2 + 3);
      uVar43 = movmskps(param_6,auVar12);
      uVar43 = uVar43 & 8;
      goto LAB_007b4a11;
    }
    uVar37 = (ulong)dVar1 & _DAT_00837ff0;
    lVar20 = __unordtf2(uVar37,_DAT_00834c10);
    if ((lVar20 == 0) && (lVar20 = __lttf2(uVar37,_DAT_00834c10), 0 < lVar20)) {
      piVar50 = (int *)&DAT_00837fa4;
      pbVar51 = &DAT_0080280d;
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar33 * 2) & 1) == 0) {
        piVar50 = &DAT_00837fc4;
        pbVar51 = &DAT_0081ad24;
      }
      goto LAB_007b4e54;
    }
    pbVar21 = (byte *)_itoa_word(dVar1,local_48,0x10,iVar48 == 0x41);
    iVar48 = param_2[2];
    puVar36 = _itowa_lower_digits;
    dVar22 = dVar1;
    pwVar34 = (wchar_t *)local_78;
    if (iVar48 == 0x41) {
      puVar36 = (undefined1 *)L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    do {
      pwVar38 = pwVar34;
      pwVar34 = pwVar38 + -1;
      *pwVar34 = *(wchar_t *)((long)puVar36 + (ulong)(SUB84(dVar22,0) & 0xf) * 4);
      bVar52 = 0xf < (ulong)dVar22;
      dVar22 = (double)((ulong)dVar22 >> 4);
    } while (bVar52);
    pbVar23 = pbVar21;
    if (&local_58 < pbVar21) {
      sVar31 = (long)pbVar21 - (long)&local_58;
      pbVar23 = (byte *)memset(&local_58,0x30,sVar31);
      uVar15 = _UNK_00838088;
      uVar41 = _DAT_00838080;
      pwVar40 = pwVar34;
      if (sVar31 - 1 < 3) {
LAB_007b4629:
        pwVar40[-1] = L'0';
        if ((pbVar23 < pbVar21 + -1) && (pwVar40[-2] = L'0', pbVar23 < pbVar21 + -2)) {
          pwVar40[-3] = L'0';
        }
      }
      else {
        uVar37 = 0;
        pwVar38 = pwVar38 + -5;
        do {
          uVar37 = uVar37 + 1;
          *(undefined8 *)pwVar38 = uVar41;
          *(undefined8 *)(pwVar38 + 2) = uVar15;
          pwVar38 = pwVar38 + -4;
        } while (uVar37 != sVar31 >> 2);
        uVar37 = sVar31 & 0xfffffffffffffffc;
        pbVar21 = pbVar21 + -uVar37;
        pwVar40 = pwVar34 + -uVar37;
        if (uVar37 != sVar31) goto LAB_007b4629;
      }
      pwVar34 = pwVar34 + -sVar31;
    }
    uVar45 = (ulong)dVar10 & 0xffffffffffff;
    pbVar21 = (byte *)_itoa_word(uVar45,pbVar23,0x10,iVar48 == 0x41);
    uVar42 = SUB84(pbVar23,0);
    pwVar38 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    uVar37 = uVar45;
    if (param_2[2] != 0x41) {
      pwVar38 = (wchar_t *)_itowa_lower_digits;
    }
    do {
      pwVar40 = pwVar34;
      pwVar34 = pwVar40 + -1;
      *pwVar34 = pwVar38[(uint)uVar37 & 0xf];
      bVar52 = 0xf < uVar37;
      uVar37 = uVar37 >> 4;
    } while (bVar52);
    pbVar23 = pbVar21;
    if (local_64 < pbVar21) {
      sVar31 = (long)pbVar21 - (long)local_64;
      pbVar23 = (byte *)memset(local_64,0x30,sVar31);
      uVar15 = _UNK_00838088;
      uVar41 = _DAT_00838080;
      pwVar38 = pwVar34;
      if (sVar31 - 1 < 3) {
LAB_007b4769:
        pwVar38[-1] = L'0';
        if ((pbVar23 < pbVar21 + -1) && (pwVar38[-2] = L'0', pbVar23 < pbVar21 + -2)) {
          pwVar38[-3] = L'0';
        }
      }
      else {
        uVar37 = 0;
        pwVar40 = pwVar40 + -5;
        do {
          uVar37 = uVar37 + 1;
          *(undefined8 *)pwVar40 = uVar41;
          *(undefined8 *)(pwVar40 + 2) = uVar15;
          pwVar40 = pwVar40 + -4;
        } while (sVar31 >> 2 != uVar37);
        uVar37 = sVar31 & 0xfffffffffffffffc;
        pbVar21 = pbVar21 + -uVar37;
        pwVar38 = pwVar34 + -uVar37;
        if (uVar37 != sVar31) goto LAB_007b4769;
      }
      pwVar34 = pwVar34 + -sVar31;
    }
    local_160 = 0x31 - (((ulong)dVar10 & 0x7fff000000000000) == 0);
    uVar43 = (uint)(ushort)((ulong)dVar10 >> 0x30);
    uVar17 = uVar43 & 0x7fff;
    if (((ulong)dVar10 & 0x7fff000000000000) == 0) {
      uVar17 = -(uint)(uVar45 != 0 || dVar1 != 0.0) & 0x3ffe;
      local_178 = (uint)(uVar45 != 0 || dVar1 != 0.0);
    }
    else if (uVar17 < 0x3fff) {
      uVar17 = 0x3fff - (uVar43 & 0x7fff);
      local_178 = 1;
    }
    else {
      local_178 = 0;
      uVar17 = uVar17 - 0x3fff;
    }
    auVar11._10_6_ = uStack_17e;
    auVar11._0_10_ = lVar2;
    uVar43 = movmskps(uVar42,auVar11);
    uVar43 = uVar43 & 8;
    bVar52 = uVar45 == 0 && dVar1 == 0.0;
LAB_007b4802:
    if (bVar52) goto LAB_007b480a;
LAB_007b5900:
    puVar36 = local_48;
    lVar33 = (long)local_78;
    while (local_7c == 0x30) {
      puVar36 = puVar36 + -1;
      local_7c = *(int *)(lVar33 + 0xfffffffffffffff8);
      lVar33 = lVar33 + 0xfffffffffffffffc;
    }
    local_140 = puVar36 + -(long)pbVar23;
    if (iVar18 == -1) {
      uVar45 = (ulong)(int)uVar17;
      iVar14 = (int)local_140;
      goto LAB_007b4824;
    }
    lVar33 = (long)iVar18;
    if (lVar33 < (long)local_140) {
      bVar46 = local_160;
      if (0 < iVar18) {
        bVar46 = pbVar23[lVar33 + -1];
      }
      bVar3 = pbVar23[lVar33];
      if ((byte)(bVar46 + 0xbf) < 6) {
        uVar44 = (uint)(char)(bVar46 - 0x37);
      }
      else {
        uVar44 = (int)(char)bVar46 - 0x30;
        if ((byte)(bVar46 + 0x9f) < 6) {
          uVar44 = (uint)(char)(bVar46 + 0xa9);
        }
      }
      if ((byte)(bVar3 + 0xbf) < 6) {
        iVar48 = (int)(char)(bVar3 - 0x37);
LAB_007b5980:
        bVar9 = true;
        bVar52 = true;
      }
      else {
        if ((byte)(bVar3 + 0x9f) < 6) {
          iVar48 = (int)(char)(bVar3 + 0xa9);
          goto LAB_007b5980;
        }
        iVar48 = (int)(char)bVar3 - 0x30;
        if (((int)(char)bVar3 & 7U) != 0) goto LAB_007b5980;
        bVar52 = (long)(iVar18 + 1) < (long)local_140;
        bVar9 = (long)(iVar18 + 1) < (long)local_140;
      }
      in_FPUControlWord = in_FPUControlWord & 0xc00;
      if (in_FPUControlWord != 0x800) {
        if (in_FPUControlWord < 0x801) {
          if (in_FPUControlWord == 0) {
            if ((7 < iVar48) && (bVar52 || (uVar44 & 1) != 0)) goto LAB_007b59bd;
          }
          else {
            if (in_FPUControlWord != 0x400) {
                    /* WARNING: Subroutine does not return */
              __printf_fphex_cold();
            }
            if (uVar43 != 0) goto LAB_007b5c53;
          }
        }
        else if (in_FPUControlWord != 0xc00) {
                    /* WARNING: Subroutine does not return */
          __printf_fphex_cold();
        }
        goto LAB_007b5a30;
      }
      if (uVar43 != 0) goto LAB_007b5a30;
LAB_007b5c53:
      if ((iVar48 < 8) && (!bVar9)) goto LAB_007b5a30;
LAB_007b59bd:
      uVar44 = iVar18 - 1;
      if (-1 < (int)uVar44) {
        pbVar21 = pbVar23 + (int)uVar44;
        pwVar38 = pwVar34 + (int)uVar44;
        do {
          bVar46 = *pbVar21;
          if (bVar46 == 0x39) {
            wVar19 = param_2[2];
            *pwVar38 = wVar19;
            *pbVar21 = (byte)wVar19;
            goto LAB_007b5a30;
          }
          if (*(int *)(*(long *)(in_FS_OFFSET + -0x50) + (long)(char)bVar46 * 4) < 0x66) {
            *pwVar38 = *pwVar38 + L'\x01';
            uVar45 = (ulong)(int)uVar17;
            *pbVar21 = bVar46 + 1;
            goto LAB_007b4824;
          }
          *pbVar21 = 0x30;
          pbVar21 = pbVar21 + -1;
          *pwVar38 = L'0';
          pwVar38 = pwVar38 + -1;
        } while (pbVar21 != pbVar23 + ((lVar33 + -2) - (ulong)uVar44));
      }
      if (local_160 == 0x39) {
        local_160 = *(byte *)(param_2 + 2);
        uVar45 = (ulong)(int)uVar17;
      }
      else if (*(int *)(*(long *)(in_FS_OFFSET + -0x50) + (long)(char)local_160 * 4) < 0x66) {
        local_160 = local_160 + 1;
        uVar45 = (ulong)(int)uVar17;
      }
      else {
        if (local_178 == 0) {
          iVar18 = uVar17 + 4;
        }
        else {
          iVar18 = uVar17 - 4;
          if (iVar18 < 1) {
            local_160 = 0x31;
            local_178 = 0;
            uVar45 = (ulong)(int)(4 - uVar17);
            goto LAB_007b4824;
          }
        }
        local_160 = 0x31;
        uVar45 = (ulong)iVar18;
      }
    }
    else {
LAB_007b5a30:
      uVar45 = (ulong)(int)uVar17;
    }
LAB_007b4824:
    piVar50 = local_108 + 1;
    pbVar21 = (byte *)_itoa_word(uVar45,local_68,10,0);
    local_188 = (int)pbVar21;
    do {
      piVar50 = piVar50 + -1;
      *piVar50 = *(int *)(_itowa_lower_digits + (uVar45 % 10) * 4);
      bVar52 = 9 < uVar45;
      uVar45 = uVar45 / 10;
    } while (bVar52);
    if (uVar43 == 0) {
      bVar46 = *(byte *)(param_2 + 3);
      iVar18 = 4 - (uint)((bVar46 & 0x50) == 0);
    }
    else {
      bVar46 = *(byte *)(param_2 + 3);
      iVar18 = 4;
    }
    lVar33 = (long)local_68 - (long)pbVar21;
    iVar18 = ((iVar47 + -2) - (int)lVar33) - (iVar18 + iVar14);
    if ((0 < iVar14) || ((bVar46 & 8) != 0)) {
      iVar47 = 1;
      if ((bVar26 & 1) == 0) {
        sVar31 = strlen((char *)pbVar51);
        iVar47 = (int)sVar31;
      }
      iVar18 = iVar18 - iVar47;
    }
    if ((((bVar46 & 0x20) == 0) && (param_2[4] != 0x30)) && (0 < iVar18)) {
      if ((bVar26 & 1) == 0) {
        lVar20 = _IO_padn(param_1,0x20,(long)iVar18);
      }
      else {
        lVar20 = _IO_wpadn();
      }
      iVar47 = iVar18;
      if (lVar20 == iVar18) goto LAB_007b515b;
      goto LAB_007b505d;
    }
    iVar47 = 0;
LAB_007b515b:
    if (uVar43 == 0) {
      if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
        if ((bVar26 & 1) == 0) {
          pcVar8 = param_1->_IO_write_ptr;
          if (param_1->_IO_write_end <= pcVar8) {
            iVar48 = 0x2b;
            goto LAB_007b6141;
          }
          param_1->_IO_write_ptr = pcVar8 + 1;
          *pcVar8 = '+';
        }
        else {
          pvVar24 = param_1->__pad2;
          if ((pvVar24 == (void *)0x0) ||
             (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
             *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
            uVar41 = 0x2b;
            goto LAB_007b6066;
          }
          *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
          *puVar5 = 0x2b;
        }
        goto LAB_007b519c;
      }
      if ((*(byte *)(param_2 + 3) & 0x10) != 0) {
        if ((bVar26 & 1) == 0) {
          pcVar8 = param_1->_IO_write_ptr;
          if (param_1->_IO_write_end <= pcVar8) {
            iVar48 = 0x20;
            goto LAB_007b6141;
          }
          param_1->_IO_write_ptr = pcVar8 + 1;
          *pcVar8 = ' ';
        }
        else {
          pvVar24 = param_1->__pad2;
          if ((pvVar24 == (void *)0x0) ||
             (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
             *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
            uVar41 = 0x20;
            goto LAB_007b6066;
          }
          *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
          *puVar5 = 0x20;
        }
        goto LAB_007b519c;
      }
    }
    else {
      if ((bVar26 & 1) == 0) {
        pcVar8 = param_1->_IO_write_ptr;
        if (param_1->_IO_write_end <= pcVar8) {
          iVar48 = 0x2d;
LAB_007b6141:
          iVar48 = __overflow(param_1,iVar48);
          goto LAB_007b6079;
        }
        param_1->_IO_write_ptr = pcVar8 + 1;
        *pcVar8 = '-';
      }
      else {
        pvVar24 = param_1->__pad2;
        if ((pvVar24 == (void *)0x0) ||
           (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
           *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
          uVar41 = 0x2d;
LAB_007b6066:
          iVar48 = __woverflow(param_1,uVar41);
LAB_007b6079:
          if (iVar48 == -1) {
            iVar49 = -1;
            goto LAB_007b4b24;
          }
        }
        else {
          *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
          *puVar5 = 0x2d;
        }
      }
LAB_007b519c:
      iVar47 = iVar47 + 1;
    }
    if ((bVar26 & 1) == 0) {
      pcVar8 = param_1->_IO_write_ptr;
      if (param_1->_IO_write_end <= pcVar8) {
        iVar48 = __overflow(param_1,0x30);
        goto LAB_007b5dd5;
      }
      param_1->_IO_write_ptr = pcVar8 + 1;
      *pcVar8 = '0';
      uVar43 = param_2[2] + 0x17;
LAB_007b5490:
      pcVar8 = param_1->_IO_write_ptr;
      if (param_1->_IO_write_end <= pcVar8) {
        iVar48 = __overflow(param_1,uVar43 & 0xff);
        bVar52 = iVar48 == -1;
        goto LAB_007b51fb;
      }
      iVar48 = iVar47 + 2;
      param_1->_IO_write_ptr = pcVar8 + 1;
      *pcVar8 = (char)uVar43;
      if ((*(byte *)(param_2 + 3) & 0x20) == 0) goto LAB_007b520e;
LAB_007b54b8:
      pbVar29 = (byte *)param_1->_IO_write_ptr;
      if (pbVar29 < param_1->_IO_write_end) {
        param_1->_IO_write_ptr = (char *)(pbVar29 + 1);
        iVar48 = iVar48 + 1;
        *pbVar29 = local_160;
        if (0 < iVar14) goto LAB_007b527a;
LAB_007b54e8:
        if ((*(byte *)(param_2 + 3) & 8) != 0) goto LAB_007b527a;
LAB_007b54f3:
        uVar43 = param_2[2] + 0xf;
        if ((bVar26 & 1) != 0) goto LAB_007b5508;
LAB_007b578f:
        pcVar8 = param_1->_IO_write_ptr;
        if (param_1->_IO_write_end <= pcVar8) {
          iVar47 = __overflow(param_1,uVar43 & 0xff);
          if (iVar47 == -1) goto LAB_007b505d;
          goto LAB_007b553e;
        }
        param_1->_IO_write_ptr = pcVar8 + 1;
        *pcVar8 = (char)uVar43;
        iVar47 = (-(uint)(local_178 == 0) & 0xfffffffe) + 0x2d;
LAB_007b57c2:
        pcVar8 = param_1->_IO_write_ptr;
        if (pcVar8 < param_1->_IO_write_end) {
          param_1->_IO_write_ptr = pcVar8 + 1;
          *pcVar8 = (-(local_178 == 0) & 0xfeU) + 0x2d;
        }
        else {
          iVar47 = __overflow(param_1,iVar47);
          if (iVar47 == -1) goto LAB_007b505d;
        }
        pbVar51 = pbVar21 + lVar33;
        iVar49 = iVar48 + 2;
        if (lVar33 != 0) {
          do {
            pbVar29 = pbVar21 + 1;
            pbVar23 = (byte *)param_1->_IO_write_ptr;
            bVar46 = *pbVar21;
            if (pbVar23 < param_1->_IO_write_end) {
              param_1->_IO_write_ptr = (char *)(pbVar23 + 1);
              *pbVar23 = bVar46;
            }
            else {
              iVar47 = __overflow(param_1,(uint)bVar46);
              if (iVar47 == -1) goto LAB_007b505d;
            }
            iVar49 = ((int)pbVar29 - local_188) + iVar48 + 2;
            pbVar21 = pbVar29;
          } while (pbVar29 != pbVar51);
        }
        goto LAB_007b5704;
      }
      iVar47 = __overflow(param_1,(uint)local_160);
LAB_007b5260:
      if (iVar47 == -1) goto LAB_007b505d;
      iVar48 = iVar48 + 1;
      if (iVar14 < 1) goto LAB_007b54e8;
LAB_007b527a:
      if ((bVar26 & 1) == 0) {
        sVar31 = strlen((char *)pbVar51);
        pbVar29 = pbVar51;
        if (sVar31 != 0) {
          do {
            while( true ) {
              pbVar35 = pbVar29 + 1;
              pbVar30 = (byte *)param_1->_IO_write_ptr;
              bVar46 = *pbVar29;
              pbVar29 = pbVar35;
              if (pbVar30 < param_1->_IO_write_end) break;
              iVar47 = __overflow(param_1,(uint)bVar46);
              if (iVar47 == -1) goto LAB_007b505d;
              if (pbVar35 == pbVar51 + sVar31) goto LAB_007b5320;
            }
            param_1->_IO_write_ptr = (char *)(pbVar30 + 1);
            *pbVar30 = bVar46;
          } while (pbVar35 != pbVar51 + sVar31);
LAB_007b5320:
          iVar48 = ((int)pbVar35 - (int)pbVar51) + iVar48;
        }
        if (iVar14 < 1) {
          uVar43 = param_2[2] + 0xf;
        }
        else {
          pbVar29 = (byte *)(long)iVar14;
          lVar20 = (long)pbVar29 - (long)local_140;
          pbVar51 = pbVar23;
          iVar47 = iVar48;
          pbVar30 = pbVar29;
          if ((long)local_140 < (long)pbVar29) {
            pbVar29 = local_140;
            pbVar30 = local_140;
          }
          while (pbVar29 != (byte *)0x0) {
            pbVar35 = pbVar51 + 1;
            pbVar29 = (byte *)param_1->_IO_write_ptr;
            bVar46 = *pbVar51;
            if (pbVar29 < param_1->_IO_write_end) {
              param_1->_IO_write_ptr = (char *)(pbVar29 + 1);
              *pbVar29 = bVar46;
            }
            else {
              iVar47 = __overflow(param_1,(uint)bVar46);
              if (iVar47 == -1) goto LAB_007b505d;
            }
            pbVar51 = pbVar35;
            iVar47 = ((int)pbVar35 - (int)pbVar23) + iVar48;
            pbVar29 = pbVar23 + ((long)pbVar30 - (long)pbVar35);
          }
          if (0 < lVar20) {
            lVar25 = _IO_padn(param_1,0x30,lVar20);
LAB_007b5b30:
            if (lVar25 == lVar20) {
              iVar48 = iVar47 + (int)lVar25;
              goto LAB_007b54f3;
            }
            goto LAB_007b505d;
          }
          uVar43 = param_2[2] + 0xf;
          iVar48 = iVar47;
        }
        goto LAB_007b578f;
      }
LAB_007b5620:
      pvVar24 = param_1->__pad2;
      if ((pvVar24 == (void *)0x0) ||
         (piVar7 = *(int **)((long)pvVar24 + 0x20), *(int **)((long)pvVar24 + 0x28) <= piVar7)) {
        iVar49 = __woverflow(param_1,iVar49);
      }
      else {
        *(int **)((long)pvVar24 + 0x20) = piVar7 + 1;
        *piVar7 = iVar49;
      }
      if (iVar49 != -1) {
        iVar47 = iVar48 + 1;
        if (0 < iVar14) {
          pbVar23 = (byte *)(long)iVar14;
          pbVar51 = local_140;
          if ((long)pbVar23 <= (long)local_140) {
            pbVar51 = pbVar23;
          }
          iVar49 = (int)pbVar51;
          for (; pbVar51 != (byte *)0x0; pbVar51 = pbVar51 + -1) {
            pvVar24 = param_1->__pad2;
            wVar19 = *pwVar34;
            if ((pvVar24 == (void *)0x0) ||
               (pwVar38 = *(wchar_t **)((long)pvVar24 + 0x20),
               *(wchar_t **)((long)pvVar24 + 0x28) <= pwVar38)) {
              wVar19 = __woverflow(param_1);
            }
            else {
              *(wchar_t **)((long)pvVar24 + 0x20) = pwVar38 + 1;
              *pwVar38 = wVar19;
            }
            if (wVar19 == L'\xffffffff') goto LAB_007b505d;
            iVar47 = (iVar49 + 2 + iVar48) - (int)pbVar51;
            pwVar34 = pwVar34 + 1;
          }
          lVar20 = (long)pbVar23 - (long)local_140;
          if (0 < lVar20) {
            lVar25 = _IO_wpadn(param_1,0x30,lVar20);
            goto LAB_007b5b30;
          }
        }
        iVar48 = iVar47;
        uVar43 = param_2[2] + 0xf;
        goto LAB_007b5508;
      }
    }
    else {
      pvVar24 = param_1->__pad2;
      if (pvVar24 == (void *)0x0) {
LAB_007b5db8:
        iVar48 = __woverflow(param_1,0x30);
LAB_007b5dd5:
        if (iVar48 == -1) goto LAB_007b505d;
        uVar43 = param_2[2] + 0x17;
        if ((bVar26 & 1) == 0) goto LAB_007b5490;
        pvVar24 = param_1->__pad2;
        if (pvVar24 != (void *)0x0) {
          puVar32 = *(uint **)((long)pvVar24 + 0x20);
          puVar28 = *(uint **)((long)pvVar24 + 0x28);
          goto LAB_007b51e2;
        }
      }
      else {
        puVar6 = *(uint **)((long)pvVar24 + 0x20);
        puVar28 = *(uint **)((long)pvVar24 + 0x28);
        if (puVar28 <= puVar6) goto LAB_007b5db8;
        puVar32 = puVar6 + 1;
        *(uint **)((long)pvVar24 + 0x20) = puVar32;
        *puVar6 = 0x30;
        uVar43 = param_2[2] + 0x17;
LAB_007b51e2:
        if (puVar32 < puVar28) {
          bVar52 = uVar43 == 0xffffffff;
          *(uint **)((long)pvVar24 + 0x20) = puVar32 + 1;
          *puVar32 = uVar43;
          goto LAB_007b51fb;
        }
      }
      iVar48 = __woverflow(param_1);
      bVar52 = iVar48 == -1;
LAB_007b51fb:
      if (bVar52) goto LAB_007b505d;
      iVar48 = iVar47 + 2;
      if ((*(byte *)(param_2 + 3) & 0x20) == 0) {
LAB_007b520e:
        iVar48 = iVar47 + 2;
        if ((param_2[4] == 0x30) && (0 < iVar18)) {
          if ((bVar26 & 1) == 0) {
            lVar20 = _IO_padn(param_1,0x30,(long)iVar18);
          }
          else {
            lVar20 = _IO_wpadn();
          }
          if (lVar20 != iVar18) goto LAB_007b505d;
          iVar48 = iVar48 + iVar18;
        }
      }
      if ((bVar26 & 1) == 0) goto LAB_007b54b8;
      pvVar24 = param_1->__pad2;
      if ((pvVar24 != (void *)0x0) &&
         (piVar7 = *(int **)((long)pvVar24 + 0x20), piVar7 < *(int **)((long)pvVar24 + 0x28))) {
        iVar47 = (int)(char)local_160;
        *(int **)((long)pvVar24 + 0x20) = piVar7 + 1;
        *piVar7 = iVar47;
        goto LAB_007b5260;
      }
      iVar47 = __woverflow(param_1,(int)(char)local_160);
      if (iVar47 == -1) goto LAB_007b505d;
      iVar48 = iVar48 + 1;
      if ((0 < iVar14) || ((*(byte *)(param_2 + 3) & 8) != 0)) goto LAB_007b5620;
      uVar43 = param_2[2] + 0xf;
LAB_007b5508:
      pvVar24 = param_1->__pad2;
      if ((pvVar24 == (void *)0x0) ||
         (puVar6 = *(uint **)((long)pvVar24 + 0x20), *(uint **)((long)pvVar24 + 0x28) <= puVar6)) {
        uVar43 = __woverflow(param_1);
      }
      else {
        *(uint **)((long)pvVar24 + 0x20) = puVar6 + 1;
        *puVar6 = uVar43;
      }
      if (uVar43 != 0xffffffff) {
LAB_007b553e:
        iVar47 = (-(uint)(local_178 == 0) & 0xfffffffe) + 0x2d;
        if ((bVar26 & 1) == 0) goto LAB_007b57c2;
        pvVar24 = param_1->__pad2;
        if ((pvVar24 == (void *)0x0) ||
           (piVar7 = *(int **)((long)pvVar24 + 0x20), *(int **)((long)pvVar24 + 0x28) <= piVar7)) {
          iVar47 = __woverflow(param_1,iVar47);
          if (iVar47 == -1) goto LAB_007b505d;
        }
        else {
          *(int **)((long)pvVar24 + 0x20) = piVar7 + 1;
          *piVar7 = iVar47;
        }
        iVar49 = iVar48 + 2;
        while (lVar33 != 0) {
          lVar33 = lVar33 + -1;
          pvVar24 = param_1->__pad2;
          iVar47 = *piVar50;
          if ((pvVar24 == (void *)0x0) ||
             (piVar7 = *(int **)((long)pvVar24 + 0x20), *(int **)((long)pvVar24 + 0x28) <= piVar7))
          {
            iVar47 = __woverflow(param_1);
          }
          else {
            *(int **)((long)pvVar24 + 0x20) = piVar7 + 1;
            *piVar7 = iVar47;
          }
          if (iVar47 == -1) goto LAB_007b505d;
          iVar49 = iVar49 + 1;
          piVar50 = piVar50 + 1;
        }
LAB_007b5704:
        if ((((*(byte *)(param_2 + 3) & 0x20) == 0) || (iVar18 < 1)) || (param_2[4] == 0x30))
        goto LAB_007b4b24;
        if ((bVar26 & 1) == 0) {
          lVar33 = _IO_padn(param_1,param_2[4],(long)iVar18);
        }
        else {
          lVar33 = _IO_wpadn();
        }
        if (lVar33 == iVar18) {
          iVar49 = iVar49 + iVar18;
          goto LAB_007b4b24;
        }
      }
    }
    goto LAB_007b505d;
  }
  bVar46 = *(byte *)(param_2 + 3);
  if ((bVar46 & 1) == 0) {
    dVar1 = *(double *)plVar4;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = dVar1;
    uVar17 = movmskpd(param_6,auVar53);
    uVar43 = uVar17 & 1;
    if (NAN(dVar1)) goto LAB_007b5bb0;
    if (DAT_00816b18 < (double)((ulong)dVar1 & _DAT_00838000)) goto LAB_007b49dd;
    uStack_124 = (uint)((ulong)dVar1 >> 0x20);
    pwVar34 = (wchar_t *)local_78;
    puVar36 = _itowa_lower_digits;
    uVar45 = (ulong)(uStack_124 & 0xfffff) << 0x20 | (ulong)dVar1 & 0xffffffff;
    uVar37 = uVar45;
    if (iVar48 == 0x41) {
      puVar36 = (undefined1 *)L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    do {
      pwVar34 = pwVar34 + -1;
      *pwVar34 = *(wchar_t *)((long)puVar36 + (ulong)((uint)uVar37 & 0xf) * 4);
      bVar52 = 0xf < uVar37;
      uVar37 = uVar37 >> 4;
    } while (bVar52);
    pbVar23 = (byte *)_itoa_word(uVar45,local_48,0x10,iVar48 == 0x41);
    if (local_ac < pwVar34) {
      uVar27 = (long)pwVar34 + (-1 - (long)local_ac);
      uVar39 = uVar27 >> 2;
      uVar37 = uVar39 + 1;
      pwVar38 = pwVar34;
      if (uVar27 < 0xc) {
LAB_007b4d63:
        pwVar38[-1] = L'0';
        if ((local_ac < pwVar38 + -1) && (pwVar38[-2] = L'0', local_ac < pwVar38 + -2)) {
          pwVar38[-3] = L'0';
        }
      }
      else {
        do {
          *(undefined8 *)(pwVar38 + -4) = _DAT_00838080;
          *(undefined8 *)(pwVar38 + -2) = _UNK_00838088;
          pwVar38 = pwVar38 + -4;
        } while (pwVar38 != pwVar34 + (uVar37 >> 2) * -4);
        pwVar38 = pwVar34 + -(uVar37 & 0xfffffffffffffffc);
        if ((uVar37 & 0xfffffffffffffffc) != uVar37) goto LAB_007b4d63;
      }
      pbVar23 = (byte *)memset(pbVar23 + ~uVar39,0x30,uVar37);
      pwVar34 = pwVar34 + -uVar37;
    }
    uVar43 = uVar17 & 1;
    local_160 = 0x31 - (((ulong)dVar1 & 0x7ff0000000000000) == 0);
    uVar16 = (ushort)((ulong)dVar1 >> 0x34);
    uVar44 = uVar16 & 0x7ff;
    local_178 = uVar16 & 0x7ff;
    if ((uVar16 & 0x7ff) == 0) {
      if (uVar45 != 0) {
        local_178 = 1;
        uVar17 = 0x3fe;
        goto LAB_007b5900;
      }
    }
    else {
      if (0x3fe < uVar44) {
        uVar17 = uVar44 - 0x3ff;
      }
      else {
        uVar17 = 0x3ff - local_178;
      }
      local_178 = (uint)(0x3fe >= uVar44);
      if (uVar45 != 0) goto LAB_007b5900;
LAB_007b480a:
      uVar45 = (ulong)(int)uVar17;
    }
    local_140 = (byte *)0x0;
    iVar14 = 0;
    if (iVar18 != -1) {
      iVar14 = iVar18;
    }
    goto LAB_007b4824;
  }
  lVar2 = *plVar4;
  uStack_180 = (ushort)((unkuint10)lVar2 >> 0x40);
  uVar43 = (uint)(ushort)((ushort)(lVar2 < (longdouble)0) << 9);
  if (NAN(lVar2)) {
LAB_007b5bb0:
    piVar50 = (int *)&DAT_00837f94;
    pbVar51 = &DAT_00837f90;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar33 * 2) & 1) == 0) {
      piVar50 = (int *)&DAT_00837fb4;
      pbVar51 = &DAT_0081ad28;
    }
  }
  else {
    if (ABS(lVar2) <= _DAT_00816b30) {
      uVar37 = SUB108(lVar2,0);
      pbVar21 = (byte *)_itoa_word(uVar37,local_48,0x10,iVar48 == 0x41);
      pwVar40 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      uVar45 = uVar37;
      pwVar38 = (wchar_t *)local_78;
      if (param_2[2] != 0x41) {
        pwVar40 = (wchar_t *)_itowa_lower_digits;
      }
      do {
        pwVar34 = pwVar38;
        pwVar38 = pwVar34 + -1;
        *pwVar38 = pwVar40[(uint)uVar45 & 0xf];
        bVar52 = 0xf < uVar45;
        uVar45 = uVar45 >> 4;
      } while (bVar52);
      if (&local_58 < pbVar21) {
        pbVar23 = local_57;
        sVar31 = (long)pbVar21 - (long)&local_58;
        pbVar29 = (byte *)memset(&local_58,0x30,sVar31);
        if (sVar31 - 1 < 3) {
LAB_007b4fc9:
          pwVar38[-1] = L'0';
          if ((pbVar29 < pbVar21 + -1) && (pwVar38[-2] = L'0', pbVar29 < pbVar21 + -2)) {
            pwVar38[-3] = L'0';
          }
        }
        else {
          pwVar40 = pwVar34 + -5;
          uVar45 = 0;
          do {
            uVar45 = uVar45 + 1;
            *(undefined8 *)pwVar40 = _DAT_00838080;
            *(undefined8 *)(pwVar40 + 2) = _UNK_00838088;
            pwVar40 = pwVar40 + -4;
          } while (uVar45 != sVar31 >> 2);
          uVar45 = sVar31 & 0xfffffffffffffffc;
          pbVar21 = pbVar21 + -uVar45;
          pwVar38 = pwVar38 + -uVar45;
          if (uVar45 != sVar31) goto LAB_007b4fc9;
        }
        local_160 = 0x30;
        pwVar34 = pwVar34 + -sVar31;
      }
      else {
        local_160 = *pbVar21;
        pbVar23 = pbVar21 + 1;
      }
      uVar17 = uStack_180 & 0x7fff;
      if (((unkuint10)lVar2 & 0x7fff) == 0) {
        uVar17 = -(uint)(uVar37 != 0) & 0x4001;
        local_178 = (uint)(uVar37 != 0);
      }
      else if (uVar17 < 0x4002) {
        uVar17 = 0x4002 - (uStack_180 & 0x7fff);
        local_178 = 1;
      }
      else {
        local_178 = 0;
        uVar17 = uVar17 - 0x4002;
      }
      bVar52 = uVar37 == 0;
      goto LAB_007b4802;
    }
LAB_007b49dd:
    piVar50 = (int *)&DAT_00837fa4;
    pbVar51 = &DAT_0080280d;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar33 * 2) & 1) == 0) {
      piVar50 = &DAT_00837fc4;
      pbVar51 = &DAT_0081ad24;
    }
  }
LAB_007b4a11:
  if (uVar43 == 0) {
    iVar49 = 0;
    if ((bVar46 & 0x50) == 0) {
      iVar47 = iVar47 + -3;
      if (((bVar46 & 0x20) == 0) && (0 < iVar47)) goto LAB_007b4b99;
    }
    else {
      iVar47 = iVar47 + -4;
      if ((bVar46 & 0x20) == 0) {
        if (0 < iVar47) goto LAB_007b4b99;
        iVar49 = 0;
      }
    }
LAB_007b507c:
    if ((bVar46 & 0x40) == 0) {
      if ((bVar46 & 0x10) != 0) {
        if ((bVar26 & 1) == 0) {
          pcVar8 = param_1->_IO_write_ptr;
          if (param_1->_IO_write_end <= pcVar8) {
            iVar18 = 0x20;
            goto LAB_007b60f1;
          }
          param_1->_IO_write_ptr = pcVar8 + 1;
          *pcVar8 = ' ';
        }
        else {
          pvVar24 = param_1->__pad2;
          if ((pvVar24 == (void *)0x0) ||
             (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
             *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
            uVar41 = 0x20;
            goto LAB_007b5fad;
          }
          *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
          *puVar5 = 0x20;
        }
        goto LAB_007b50be;
      }
      goto LAB_007b4a5c;
    }
    if ((bVar26 & 1) == 0) {
      pcVar8 = param_1->_IO_write_ptr;
      if (param_1->_IO_write_end <= pcVar8) {
        iVar18 = 0x2b;
LAB_007b60f1:
        iVar18 = __overflow(param_1,iVar18);
        goto LAB_007b5fbf;
      }
      param_1->_IO_write_ptr = pcVar8 + 1;
      *pcVar8 = '+';
    }
    else {
      pvVar24 = param_1->__pad2;
      if ((pvVar24 == (void *)0x0) ||
         (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
         *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
        uVar41 = 0x2b;
LAB_007b5fad:
        iVar18 = __woverflow(param_1,uVar41);
LAB_007b5fbf:
        if (iVar18 == -1) {
          iVar49 = -1;
          goto LAB_007b4b24;
        }
      }
      else {
        *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
        *puVar5 = 0x2b;
      }
    }
LAB_007b50be:
    iVar49 = iVar49 + 1;
    if ((bVar26 & 1) == 0) goto LAB_007b50ce;
LAB_007b4a68:
    pvVar24 = param_1->__pad2;
    iVar18 = *piVar50;
    if ((pvVar24 == (void *)0x0) ||
       (piVar7 = *(int **)((long)pvVar24 + 0x20), *(int **)((long)pvVar24 + 0x28) <= piVar7)) {
      iVar18 = __woverflow(param_1);
      if (iVar18 != -1) {
        pvVar24 = param_1->__pad2;
        iVar18 = piVar50[1];
        if (pvVar24 != (void *)0x0) goto LAB_007b4aa8;
LAB_007b5a77:
        iVar18 = __woverflow(param_1);
        if (iVar18 != -1) {
          pvVar24 = param_1->__pad2;
          iVar18 = piVar50[2];
          if (pvVar24 == (void *)0x0) {
LAB_007b5a9f:
            iVar18 = __woverflow(param_1);
          }
          else {
LAB_007b4ad0:
            piVar50 = *(int **)((long)pvVar24 + 0x20);
            if (*(int **)((long)pvVar24 + 0x28) <= piVar50) goto LAB_007b5a9f;
            *(int **)((long)pvVar24 + 0x20) = piVar50 + 1;
            *piVar50 = iVar18;
          }
          if (iVar18 != -1) {
            iVar49 = iVar49 + 3;
            if (((*(byte *)(param_2 + 3) & 0x20) == 0) || (iVar47 < 1)) goto LAB_007b4b24;
            lVar20 = (long)iVar47;
            lVar33 = _IO_wpadn(param_1,0x20,lVar20);
            goto LAB_007b4b18;
          }
        }
      }
    }
    else {
      *(int **)((long)pvVar24 + 0x20) = piVar7 + 1;
      *piVar7 = iVar18;
      if (iVar18 != -1) {
        iVar18 = piVar50[1];
LAB_007b4aa8:
        piVar7 = *(int **)((long)pvVar24 + 0x20);
        if (*(int **)((long)pvVar24 + 0x28) <= piVar7) goto LAB_007b5a77;
        *(int **)((long)pvVar24 + 0x20) = piVar7 + 1;
        *piVar7 = iVar18;
        if (iVar18 != -1) {
          iVar18 = piVar50[2];
          goto LAB_007b4ad0;
        }
      }
    }
  }
  else {
    iVar47 = iVar47 + -4;
    if (((bVar46 & 0x20) == 0) && (0 < iVar47)) {
LAB_007b4b99:
      if ((bVar26 & 1) == 0) {
        lVar33 = _IO_padn(param_1,0x20,(long)iVar47);
      }
      else {
        lVar33 = _IO_wpadn();
      }
      if (lVar33 != iVar47) goto LAB_007b505d;
      iVar49 = iVar47;
      if (uVar43 == 0) {
        bVar46 = *(byte *)(param_2 + 3);
        goto LAB_007b507c;
      }
    }
    else {
      iVar49 = 0;
    }
    if ((bVar26 & 1) == 0) {
      pcVar8 = param_1->_IO_write_ptr;
      if (pcVar8 < param_1->_IO_write_end) {
        param_1->_IO_write_ptr = pcVar8 + 1;
        *pcVar8 = '-';
      }
      else {
        iVar18 = __overflow(param_1,0x2d);
LAB_007b5d33:
        if (iVar18 == -1) {
          iVar49 = -1;
          goto LAB_007b4b24;
        }
      }
    }
    else {
      pvVar24 = param_1->__pad2;
      if ((pvVar24 == (void *)0x0) ||
         (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
         *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
        iVar18 = __woverflow(param_1,0x2d);
        goto LAB_007b5d33;
      }
      *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
      *puVar5 = 0x2d;
    }
    iVar49 = iVar49 + 1;
LAB_007b4a5c:
    if ((bVar26 & 1) != 0) goto LAB_007b4a68;
LAB_007b50ce:
    bVar46 = *pbVar51;
    pbVar21 = (byte *)param_1->_IO_write_ptr;
    if (pbVar21 < param_1->_IO_write_end) {
      param_1->_IO_write_ptr = (char *)(pbVar21 + 1);
      *pbVar21 = bVar46;
    }
    else {
      iVar18 = __overflow(param_1,(uint)bVar46);
      if (iVar18 == -1) goto LAB_007b505d;
    }
    bVar46 = pbVar51[1];
    pbVar21 = (byte *)param_1->_IO_write_ptr;
    if (pbVar21 < param_1->_IO_write_end) {
      param_1->_IO_write_ptr = (char *)(pbVar21 + 1);
      *pbVar21 = bVar46;
    }
    else {
      iVar18 = __overflow(param_1,(uint)bVar46);
      if (iVar18 == -1) goto LAB_007b505d;
    }
    bVar46 = pbVar51[2];
    pbVar51 = (byte *)param_1->_IO_write_ptr;
    if (pbVar51 < param_1->_IO_write_end) {
      param_1->_IO_write_ptr = (char *)(pbVar51 + 1);
      *pbVar51 = bVar46;
    }
    else {
      iVar18 = __overflow(param_1,(uint)bVar46);
      if (iVar18 == -1) goto LAB_007b505d;
    }
    iVar49 = iVar49 + 3;
    if (((*(byte *)(param_2 + 3) & 0x20) == 0) || (iVar47 < 1)) goto LAB_007b4b24;
    lVar20 = (long)iVar47;
    lVar33 = _IO_padn(param_1,0x20,lVar20);
LAB_007b4b18:
    if (lVar33 == lVar20) {
      iVar49 = iVar49 + iVar47;
      goto LAB_007b4b24;
    }
  }
LAB_007b505d:
  iVar49 = -1;
LAB_007b4b24:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar49;
}

