
char * FUN_00727830(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint *param_3,
                   uint *param_4)

{
  undefined1 (*pauVar1) [32];
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  char *pcVar127;
  int extraout_EDX;
  uint uVar128;
  uint uVar129;
  ulong uVar130;
  ulong uVar131;
  long lVar132;
  ulong uVar133;
  long lVar134;
  undefined8 *puVar135;
  undefined1 *puVar136;
  ulong uVar137;
  undefined1 (*pauVar138) [16];
  undefined8 *puVar139;
  undefined1 *puVar140;
  int *piVar141;
  char *pcVar142;
  long in_FS_OFFSET;
  bool bVar143;
  undefined1 in_XMM0 [16];
  undefined1 auVar144 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar145 [16];
  
  if (param_4 < param_3) {
    pcVar127 = "buffer overflow detected";
    FUN_00771f80();
    if (extraout_EDX < 1) {
      pcVar142 = (char *)0x0;
    }
    else {
      uVar128 = *param_4;
      if ((uVar128 & 0x8000) == 0) {
        lVar132 = *(long *)(in_FS_OFFSET + 0x10);
        piVar141 = *(int **)(param_4 + 0x22);
        if (*(long *)(piVar141 + 2) != lVar132) {
          LOCK();
          iVar2 = *piVar141;
          if (iVar2 == 0) {
            *piVar141 = 1;
          }
          UNLOCK();
          if (iVar2 != 0) {
            FUN_00709590();
          }
          piVar141 = *(int **)(param_4 + 0x22);
          uVar128 = *param_4;
          *(long *)(piVar141 + 2) = lVar132;
        }
        piVar141[1] = piVar141[1] + 1;
      }
      *param_4 = uVar128 & 0xffffffdf;
      pauVar138 = (undefined1 (*) [16])((long)extraout_EDX + -1);
      if (param_2 < (undefined1 (*) [16])((long)extraout_EDX + -1)) {
        pauVar138 = param_2;
      }
      pauVar138 = (undefined1 (*) [16])FUN_006fe490(param_4,pcVar127,pauVar138,10,1);
      uVar129 = *param_4;
      if (pauVar138 == (undefined1 (*) [16])0x0) {
        pcVar142 = (char *)0x0;
      }
      else if (((uVar129 & 0x20) == 0) ||
              (pcVar142 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
        if (param_2 <= pauVar138) {
                    /* WARNING: Subroutine does not return */
          FUN_00771d30();
        }
        (*pauVar138)[(long)pcVar127] = 0;
        uVar129 = *param_4;
        pcVar142 = pcVar127;
      }
      *param_4 = uVar128 & 0x20 | uVar129;
      if ((uVar129 & 0x8000) == 0) {
        piVar141 = *(int **)(param_4 + 0x22);
        iVar2 = piVar141[1];
        piVar141[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          piVar141[2] = 0;
          piVar141[3] = 0;
          LOCK();
          iVar2 = *piVar141;
          *piVar141 = 0;
          UNLOCK();
          if (1 < iVar2) {
            FUN_00709660();
          }
        }
      }
    }
    return pcVar142;
  }
  pcVar127 = *param_1 + (long)param_3;
  if ((uint *)0x8f < param_3) {
    if ((char)(byte)param_2 <= (char)(byte)param_1) {
      if ((uint *)(DAT_0093d710 * 2) < param_3) {
        puVar136 = *param_2;
        puVar140 = *param_1 + (long)param_3;
        uVar5 = *(undefined8 *)((long)param_3 + (long)puVar136 + -0x10);
        uVar111 = *(undefined8 *)((long)param_3 + (long)puVar136 + -8);
        uVar130 = (ulong)puVar140 & 0xfffffffffffffff0;
        lVar132 = (long)param_3 + ((long)puVar136 - ((long)puVar140 - uVar130));
        uVar131 = (long)param_3 - ((long)puVar140 - uVar130);
        uVar137 = DAT_0093d708;
        if (uVar131 <= DAT_0093d708) {
          uVar137 = uVar131;
        }
        uVar131 = uVar131 - uVar137;
        if (0x1000 < uVar131) {
          if (uVar137 << 3 < uVar131) {
            uVar131 = uVar131 + uVar137;
            uVar137 = 0;
          }
          uVar133 = uVar131 - 0x80;
          do {
            uVar131 = uVar133;
            uVar133 = uVar131 - 0x80;
            uVar112 = *(undefined8 *)(lVar132 + -8);
            uVar113 = *(undefined8 *)(lVar132 + -0x20);
            uVar114 = *(undefined8 *)(lVar132 + -0x18);
            uVar115 = *(undefined8 *)(lVar132 + -0x30);
            uVar116 = *(undefined8 *)(lVar132 + -0x28);
            uVar117 = *(undefined8 *)(lVar132 + -0x40);
            uVar118 = *(undefined8 *)(lVar132 + -0x38);
            uVar119 = *(undefined8 *)(lVar132 + -0x50);
            uVar120 = *(undefined8 *)(lVar132 + -0x48);
            uVar121 = *(undefined8 *)(lVar132 + -0x60);
            uVar122 = *(undefined8 *)(lVar132 + -0x58);
            uVar123 = *(undefined8 *)(lVar132 + -0x70);
            uVar124 = *(undefined8 *)(lVar132 + -0x68);
            uVar125 = *(undefined8 *)(lVar132 + -0x80);
            uVar126 = *(undefined8 *)(lVar132 + -0x78);
            *(undefined8 *)(uVar130 - 0x10) = *(undefined8 *)(lVar132 + -0x10);
            *(undefined8 *)(uVar130 - 8) = uVar112;
            *(undefined8 *)(uVar130 - 0x20) = uVar113;
            *(undefined8 *)(uVar130 - 0x18) = uVar114;
            *(undefined8 *)(uVar130 - 0x30) = uVar115;
            *(undefined8 *)(uVar130 - 0x28) = uVar116;
            *(undefined8 *)(uVar130 - 0x40) = uVar117;
            *(undefined8 *)(uVar130 - 0x38) = uVar118;
            *(undefined8 *)(uVar130 - 0x50) = uVar119;
            *(undefined8 *)(uVar130 - 0x48) = uVar120;
            *(undefined8 *)(uVar130 - 0x60) = uVar121;
            *(undefined8 *)(uVar130 - 0x58) = uVar122;
            *(undefined8 *)(uVar130 - 0x70) = uVar123;
            *(undefined8 *)(uVar130 - 0x68) = uVar124;
            *(undefined8 *)(uVar130 - 0x80) = uVar125;
            *(undefined8 *)(uVar130 - 0x78) = uVar126;
            lVar132 = lVar132 + -0x80;
            uVar130 = uVar130 - 0x80;
          } while (0x7f < uVar131);
          if (uVar137 < 0x80) goto LAB_0072940b;
        }
        uVar133 = (uVar131 + uVar137) - 0x80;
        do {
          bVar143 = 0x7f < uVar133;
          uVar133 = uVar133 - 0x80;
          uVar112 = *(undefined8 *)(lVar132 + -8);
          uVar113 = *(undefined8 *)(lVar132 + -0x20);
          uVar114 = *(undefined8 *)(lVar132 + -0x18);
          uVar115 = *(undefined8 *)(lVar132 + -0x30);
          uVar116 = *(undefined8 *)(lVar132 + -0x28);
          uVar117 = *(undefined8 *)(lVar132 + -0x40);
          uVar118 = *(undefined8 *)(lVar132 + -0x38);
          uVar119 = *(undefined8 *)(lVar132 + -0x50);
          uVar120 = *(undefined8 *)(lVar132 + -0x48);
          uVar121 = *(undefined8 *)(lVar132 + -0x60);
          uVar122 = *(undefined8 *)(lVar132 + -0x58);
          uVar123 = *(undefined8 *)(lVar132 + -0x70);
          uVar124 = *(undefined8 *)(lVar132 + -0x68);
          uVar125 = *(undefined8 *)(lVar132 + -0x80);
          uVar126 = *(undefined8 *)(lVar132 + -0x78);
          *(undefined8 *)(uVar130 - 0x10) = *(undefined8 *)(lVar132 + -0x10);
          *(undefined8 *)(uVar130 - 8) = uVar112;
          *(undefined8 *)(uVar130 - 0x20) = uVar113;
          *(undefined8 *)(uVar130 - 0x18) = uVar114;
          *(undefined8 *)(uVar130 - 0x30) = uVar115;
          *(undefined8 *)(uVar130 - 0x28) = uVar116;
          *(undefined8 *)(uVar130 - 0x40) = uVar117;
          *(undefined8 *)(uVar130 - 0x38) = uVar118;
          *(undefined8 *)(uVar130 - 0x50) = uVar119;
          *(undefined8 *)(uVar130 - 0x48) = uVar120;
          *(undefined8 *)(uVar130 - 0x60) = uVar121;
          *(undefined8 *)(uVar130 - 0x58) = uVar122;
          *(undefined8 *)(uVar130 - 0x70) = uVar123;
          *(undefined8 *)(uVar130 - 0x68) = uVar124;
          *(undefined8 *)(uVar130 - 0x80) = uVar125;
          *(undefined8 *)(uVar130 - 0x78) = uVar126;
          lVar132 = lVar132 + -0x80;
          uVar130 = uVar130 - 0x80;
        } while (bVar143);
LAB_0072940b:
        *(undefined8 *)(puVar140 + -0x10) = uVar5;
        *(undefined8 *)(puVar140 + -8) = uVar111;
        lVar134 = uVar133 + 0x80;
                    /* WARNING: Could not recover jumptable at 0x0072942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar127 = (char *)(*(code *)((long)&switchD_0072789e::switchdataD_0082b1f0 +
                                     (long)(int)(&switchD_0072789e::switchdataD_0082b1f0)[lVar134]))
                                     (uVar130 - lVar134,lVar132 - lVar134,
                                      (code *)((long)&switchD_0072789e::switchdataD_0082b1f0 +
                                              (long)(int)(&switchD_0072789e::switchdataD_0082b1f0)
                                                         [lVar134]));
        return pcVar127;
      }
      puVar136 = *param_1 + (long)param_3;
      in_XMM0 = *(undefined1 (*) [16])((long)param_3 + (long)*param_2 + -0x10);
      pauVar138 = (undefined1 (*) [16])(puVar136 + -0x10);
      uVar131 = (ulong)puVar136 & 0xf;
      uVar130 = (ulong)puVar136 ^ uVar131;
      uVar137 = (long)param_3 + ((long)*param_2 - uVar131);
      uVar131 = (long)param_3 - uVar131;
      if ((uVar137 & 0xf) == 0) {
        do {
          uVar131 = uVar131 - 0x80;
          in_XMM1 = *(undefined1 (*) [16])(uVar137 - 0x10);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          uVar5 = *(undefined8 *)(uVar137 - 0x18);
          *(undefined8 *)(uVar130 - 0x20) = *(undefined8 *)(uVar137 - 0x20);
          *(undefined8 *)(uVar130 - 0x18) = uVar5;
          uVar5 = *(undefined8 *)(uVar137 - 0x28);
          *(undefined8 *)(uVar130 - 0x30) = *(undefined8 *)(uVar137 - 0x30);
          *(undefined8 *)(uVar130 - 0x28) = uVar5;
          uVar5 = *(undefined8 *)(uVar137 - 0x38);
          *(undefined8 *)(uVar130 - 0x40) = *(undefined8 *)(uVar137 - 0x40);
          *(undefined8 *)(uVar130 - 0x38) = uVar5;
          uVar5 = *(undefined8 *)(uVar137 - 0x48);
          *(undefined8 *)(uVar130 - 0x50) = *(undefined8 *)(uVar137 - 0x50);
          *(undefined8 *)(uVar130 - 0x48) = uVar5;
          uVar5 = *(undefined8 *)(uVar137 - 0x58);
          *(undefined8 *)(uVar130 - 0x60) = *(undefined8 *)(uVar137 - 0x60);
          *(undefined8 *)(uVar130 - 0x58) = uVar5;
          uVar5 = *(undefined8 *)(uVar137 - 0x68);
          *(undefined8 *)(uVar130 - 0x70) = *(undefined8 *)(uVar137 - 0x70);
          *(undefined8 *)(uVar130 - 0x68) = uVar5;
          uVar5 = *(undefined8 *)(uVar137 - 0x78);
          *(undefined8 *)(uVar130 - 0x80) = *(undefined8 *)(uVar137 - 0x80);
          *(undefined8 *)(uVar130 - 0x78) = uVar5;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
        } while (0x7f < uVar131);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar131);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar131);
        switch(uVar131) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        goto switchD_0072789e_caseD_10;
      }
      uVar131 = uVar131 - 0x80;
      switch(uVar137 & 0xf) {
      case 1:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x11);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x11),1);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x21);
          auVar6._16_16_ = auVar144;
          auVar6._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar6._1_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x31);
          auVar7._16_16_ = auVar145;
          auVar7._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar7._1_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x41);
          auVar8._16_16_ = auVar144;
          auVar8._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar8._1_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x51);
          auVar9._16_16_ = auVar145;
          auVar9._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar9._1_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x61);
          auVar10._16_16_ = auVar144;
          auVar10._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar10._1_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x71);
          auVar11._16_16_ = auVar145;
          auVar11._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar11._1_16_;
          auVar12._16_16_ = auVar144;
          auVar12._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x81);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar12._1_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
switchD_0072789e_caseD_1:
          (*param_1)[0] = (*param_2)[0];
          return pcVar127;
        case 2:
switchD_0072789e_caseD_2:
          *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
          return pcVar127;
        case 3:
switchD_0072789e_caseD_3:
          uVar3 = *(undefined2 *)*param_2;
          *(undefined2 *)(*param_1 + 1) = *(undefined2 *)(*param_2 + 1);
          *(undefined2 *)*param_1 = uVar3;
          return pcVar127;
        case 4:
switchD_0072789e_caseD_4:
          *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
          return pcVar127;
        case 5:
switchD_0072789e_caseD_5:
          uVar4 = *(undefined4 *)*param_2;
          *(undefined4 *)(*param_1 + 1) = *(undefined4 *)(*param_2 + 1);
          *(undefined4 *)*param_1 = uVar4;
          return pcVar127;
        case 6:
switchD_0072789e_caseD_6:
          uVar4 = *(undefined4 *)*param_2;
          *(undefined4 *)(*param_1 + 2) = *(undefined4 *)(*param_2 + 2);
          *(undefined4 *)*param_1 = uVar4;
          return pcVar127;
        case 7:
switchD_0072789e_caseD_7:
          uVar4 = *(undefined4 *)*param_2;
          *(undefined4 *)(*param_1 + 3) = *(undefined4 *)(*param_2 + 3);
          *(undefined4 *)*param_1 = uVar4;
          return pcVar127;
        case 8:
switchD_0072789e_caseD_8:
          *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
          return pcVar127;
        case 9:
switchD_0072789e_caseD_9:
          uVar5 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 1) = *(undefined8 *)(*param_2 + 1);
          *(undefined8 *)*param_1 = uVar5;
          return pcVar127;
        case 10:
switchD_0072789e_caseD_a:
          uVar5 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 2) = *(undefined8 *)(*param_2 + 2);
          *(undefined8 *)*param_1 = uVar5;
          return pcVar127;
        case 0xb:
switchD_0072789e_caseD_b:
          uVar5 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 3) = *(undefined8 *)(*param_2 + 3);
          *(undefined8 *)*param_1 = uVar5;
          return pcVar127;
        case 0xc:
switchD_0072789e_caseD_c:
          uVar5 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 4) = *(undefined8 *)(*param_2 + 4);
          *(undefined8 *)*param_1 = uVar5;
          return pcVar127;
        case 0xd:
switchD_0072789e_caseD_d:
          uVar5 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 5) = *(undefined8 *)(*param_2 + 5);
          *(undefined8 *)*param_1 = uVar5;
          return pcVar127;
        case 0xe:
switchD_0072789e_caseD_e:
          uVar5 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 6) = *(undefined8 *)(*param_2 + 6);
          *(undefined8 *)*param_1 = uVar5;
          return pcVar127;
        case 0xf:
switchD_0072789e_caseD_f:
          uVar5 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 7) = *(undefined8 *)(*param_2 + 7);
          *(undefined8 *)*param_1 = uVar5;
          return pcVar127;
        case 0x10:
          break;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x50:
switchD_0072789e_caseD_50:
          in_XMM0 = lddqu(in_XMM0,param_2[4]);
          param_1[4] = in_XMM0;
        case 0x40:
switchD_0072789e_caseD_40:
          in_XMM0 = lddqu(in_XMM0,param_2[3]);
          param_1[3] = in_XMM0;
        case 0x30:
switchD_0072789e_caseD_30:
          in_XMM0 = lddqu(in_XMM0,param_2[2]);
          param_1[2] = in_XMM0;
        case 0x20:
switchD_0072789e_caseD_20:
          in_XMM0 = lddqu(in_XMM0,param_2[1]);
          param_1[1] = in_XMM0;
          break;
        case 0x51:
switchD_0072789e_caseD_51:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 1));
          *(undefined1 (*) [16])(param_1[4] + 1) = in_XMM0;
        case 0x41:
switchD_0072789e_caseD_41:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 1));
          *(undefined1 (*) [16])(param_1[3] + 1) = in_XMM0;
        case 0x31:
switchD_0072789e_caseD_31:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 1));
          *(undefined1 (*) [16])(param_1[2] + 1) = in_XMM0;
        case 0x21:
switchD_0072789e_caseD_21:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 1));
          *(undefined1 (*) [16])(param_1[1] + 1) = in_XMM0;
switchD_0072789e_caseD_11:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 1));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 1) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x52:
switchD_0072789e_caseD_52:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 2));
          *(undefined1 (*) [16])(param_1[4] + 2) = in_XMM0;
        case 0x42:
switchD_0072789e_caseD_42:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 2));
          *(undefined1 (*) [16])(param_1[3] + 2) = in_XMM0;
        case 0x32:
switchD_0072789e_caseD_32:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 2));
          *(undefined1 (*) [16])(param_1[2] + 2) = in_XMM0;
        case 0x22:
switchD_0072789e_caseD_22:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 2));
          *(undefined1 (*) [16])(param_1[1] + 2) = in_XMM0;
switchD_0072789e_caseD_12:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 2));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 2) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x53:
switchD_0072789e_caseD_53:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 3));
          *(undefined1 (*) [16])(param_1[4] + 3) = in_XMM0;
        case 0x43:
switchD_0072789e_caseD_43:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 3));
          *(undefined1 (*) [16])(param_1[3] + 3) = in_XMM0;
        case 0x33:
switchD_0072789e_caseD_33:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 3));
          *(undefined1 (*) [16])(param_1[2] + 3) = in_XMM0;
        case 0x23:
switchD_0072789e_caseD_23:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 3));
          *(undefined1 (*) [16])(param_1[1] + 3) = in_XMM0;
switchD_0072789e_caseD_13:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 3));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 3) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x54:
switchD_0072789e_caseD_54:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 4));
          *(undefined1 (*) [16])(param_1[4] + 4) = in_XMM0;
        case 0x44:
switchD_0072789e_caseD_44:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 4));
          *(undefined1 (*) [16])(param_1[3] + 4) = in_XMM0;
        case 0x34:
switchD_0072789e_caseD_34:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 4));
          *(undefined1 (*) [16])(param_1[2] + 4) = in_XMM0;
        case 0x24:
switchD_0072789e_caseD_24:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 4));
          *(undefined1 (*) [16])(param_1[1] + 4) = in_XMM0;
switchD_0072789e_caseD_14:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 4));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 4) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x55:
switchD_0072789e_caseD_55:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 5));
          *(undefined1 (*) [16])(param_1[4] + 5) = in_XMM0;
        case 0x45:
switchD_0072789e_caseD_45:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 5));
          *(undefined1 (*) [16])(param_1[3] + 5) = in_XMM0;
        case 0x35:
switchD_0072789e_caseD_35:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 5));
          *(undefined1 (*) [16])(param_1[2] + 5) = in_XMM0;
        case 0x25:
switchD_0072789e_caseD_25:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 5));
          *(undefined1 (*) [16])(param_1[1] + 5) = in_XMM0;
switchD_0072789e_caseD_15:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 5));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 5) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x56:
switchD_0072789e_caseD_56:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 6));
          *(undefined1 (*) [16])(param_1[4] + 6) = in_XMM0;
        case 0x46:
switchD_0072789e_caseD_46:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 6));
          *(undefined1 (*) [16])(param_1[3] + 6) = in_XMM0;
        case 0x36:
switchD_0072789e_caseD_36:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 6));
          *(undefined1 (*) [16])(param_1[2] + 6) = in_XMM0;
        case 0x26:
switchD_0072789e_caseD_26:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 6));
          *(undefined1 (*) [16])(param_1[1] + 6) = in_XMM0;
switchD_0072789e_caseD_16:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 6));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 6) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x57:
switchD_0072789e_caseD_57:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 7));
          *(undefined1 (*) [16])(param_1[4] + 7) = in_XMM0;
        case 0x47:
switchD_0072789e_caseD_47:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 7));
          *(undefined1 (*) [16])(param_1[3] + 7) = in_XMM0;
        case 0x37:
switchD_0072789e_caseD_37:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 7));
          *(undefined1 (*) [16])(param_1[2] + 7) = in_XMM0;
        case 0x27:
switchD_0072789e_caseD_27:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 7));
          *(undefined1 (*) [16])(param_1[1] + 7) = in_XMM0;
switchD_0072789e_caseD_17:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 7));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 7) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x58:
switchD_0072789e_caseD_58:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 8));
          *(undefined1 (*) [16])(param_1[4] + 8) = in_XMM0;
        case 0x48:
switchD_0072789e_caseD_48:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 8));
          *(undefined1 (*) [16])(param_1[3] + 8) = in_XMM0;
        case 0x38:
switchD_0072789e_caseD_38:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 8));
          *(undefined1 (*) [16])(param_1[2] + 8) = in_XMM0;
        case 0x28:
switchD_0072789e_caseD_28:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 8));
          *(undefined1 (*) [16])(param_1[1] + 8) = in_XMM0;
switchD_0072789e_caseD_18:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 8));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 8) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x59:
switchD_0072789e_caseD_59:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 9));
          *(undefined1 (*) [16])(param_1[4] + 9) = in_XMM0;
        case 0x49:
switchD_0072789e_caseD_49:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 9));
          *(undefined1 (*) [16])(param_1[3] + 9) = in_XMM0;
        case 0x39:
switchD_0072789e_caseD_39:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 9));
          *(undefined1 (*) [16])(param_1[2] + 9) = in_XMM0;
        case 0x29:
switchD_0072789e_caseD_29:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 9));
          *(undefined1 (*) [16])(param_1[1] + 9) = in_XMM0;
switchD_0072789e_caseD_19:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 9));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 9) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x5a:
switchD_0072789e_caseD_5a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 10));
          *(undefined1 (*) [16])(param_1[4] + 10) = in_XMM0;
        case 0x4a:
switchD_0072789e_caseD_4a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 10));
          *(undefined1 (*) [16])(param_1[3] + 10) = in_XMM0;
        case 0x3a:
switchD_0072789e_caseD_3a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 10));
          *(undefined1 (*) [16])(param_1[2] + 10) = in_XMM0;
        case 0x2a:
switchD_0072789e_caseD_2a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 10));
          *(undefined1 (*) [16])(param_1[1] + 10) = in_XMM0;
switchD_0072789e_caseD_1a:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 10));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 10) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x5b:
switchD_0072789e_caseD_5b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xb));
          *(undefined1 (*) [16])(param_1[4] + 0xb) = in_XMM0;
        case 0x4b:
switchD_0072789e_caseD_4b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xb));
          *(undefined1 (*) [16])(param_1[3] + 0xb) = in_XMM0;
        case 0x3b:
switchD_0072789e_caseD_3b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xb));
          *(undefined1 (*) [16])(param_1[2] + 0xb) = in_XMM0;
        case 0x2b:
switchD_0072789e_caseD_2b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xb));
          *(undefined1 (*) [16])(param_1[1] + 0xb) = in_XMM0;
switchD_0072789e_caseD_1b:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xb));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xb) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x5c:
switchD_0072789e_caseD_5c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xc));
          *(undefined1 (*) [16])(param_1[4] + 0xc) = in_XMM0;
        case 0x4c:
switchD_0072789e_caseD_4c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xc));
          *(undefined1 (*) [16])(param_1[3] + 0xc) = in_XMM0;
        case 0x3c:
switchD_0072789e_caseD_3c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xc));
          *(undefined1 (*) [16])(param_1[2] + 0xc) = in_XMM0;
        case 0x2c:
switchD_0072789e_caseD_2c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xc));
          *(undefined1 (*) [16])(param_1[1] + 0xc) = in_XMM0;
switchD_0072789e_caseD_1c:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xc));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xc) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x5d:
switchD_0072789e_caseD_5d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xd));
          *(undefined1 (*) [16])(param_1[4] + 0xd) = in_XMM0;
        case 0x4d:
switchD_0072789e_caseD_4d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xd));
          *(undefined1 (*) [16])(param_1[3] + 0xd) = in_XMM0;
        case 0x3d:
switchD_0072789e_caseD_3d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xd));
          *(undefined1 (*) [16])(param_1[2] + 0xd) = in_XMM0;
        case 0x2d:
switchD_0072789e_caseD_2d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xd));
          *(undefined1 (*) [16])(param_1[1] + 0xd) = in_XMM0;
switchD_0072789e_caseD_1d:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xd));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xd) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x5e:
switchD_0072789e_caseD_5e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xe));
          *(undefined1 (*) [16])(param_1[4] + 0xe) = in_XMM0;
        case 0x4e:
switchD_0072789e_caseD_4e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xe));
          *(undefined1 (*) [16])(param_1[3] + 0xe) = in_XMM0;
        case 0x3e:
switchD_0072789e_caseD_3e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xe));
          *(undefined1 (*) [16])(param_1[2] + 0xe) = in_XMM0;
        case 0x2e:
switchD_0072789e_caseD_2e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xe));
          *(undefined1 (*) [16])(param_1[1] + 0xe) = in_XMM0;
switchD_0072789e_caseD_1e:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xe));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xe) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x5f:
switchD_0072789e_caseD_5f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xf));
          *(undefined1 (*) [16])(param_1[4] + 0xf) = in_XMM0;
        case 0x4f:
switchD_0072789e_caseD_4f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xf));
          *(undefined1 (*) [16])(param_1[3] + 0xf) = in_XMM0;
        case 0x3f:
switchD_0072789e_caseD_3f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xf));
          *(undefined1 (*) [16])(param_1[2] + 0xf) = in_XMM0;
        case 0x2f:
switchD_0072789e_caseD_2f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xf));
          *(undefined1 (*) [16])(param_1[1] + 0xf) = in_XMM0;
switchD_0072789e_caseD_1f:
          auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xf));
          auVar145 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xf) = auVar144;
          *param_1 = auVar145;
          return pcVar127;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 2:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x12);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x12),2);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x22);
          auVar13._16_16_ = auVar144;
          auVar13._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar13._2_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x32);
          auVar14._16_16_ = auVar145;
          auVar14._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar14._2_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x42);
          auVar15._16_16_ = auVar144;
          auVar15._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar15._2_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x52);
          auVar16._16_16_ = auVar145;
          auVar16._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar16._2_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x62);
          auVar17._16_16_ = auVar144;
          auVar17._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar17._2_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x72);
          auVar18._16_16_ = auVar145;
          auVar18._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar18._2_16_;
          auVar19._16_16_ = auVar144;
          auVar19._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x82);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar19._2_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 3:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x13);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x13),3);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x23);
          auVar20._16_16_ = auVar144;
          auVar20._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar20._3_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x33);
          auVar21._16_16_ = auVar145;
          auVar21._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar21._3_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x43);
          auVar22._16_16_ = auVar144;
          auVar22._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar22._3_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x53);
          auVar23._16_16_ = auVar145;
          auVar23._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar23._3_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 99);
          auVar24._16_16_ = auVar144;
          auVar24._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar24._3_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x73);
          auVar25._16_16_ = auVar145;
          auVar25._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar25._3_16_;
          auVar26._16_16_ = auVar144;
          auVar26._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x83);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar26._3_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 4:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x14);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x14),4);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x24);
          auVar27._16_16_ = auVar144;
          auVar27._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar27._4_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x34);
          auVar28._16_16_ = auVar145;
          auVar28._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar28._4_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x44);
          auVar29._16_16_ = auVar144;
          auVar29._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar29._4_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x54);
          auVar30._16_16_ = auVar145;
          auVar30._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar30._4_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 100);
          auVar31._16_16_ = auVar144;
          auVar31._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar31._4_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x74);
          auVar32._16_16_ = auVar145;
          auVar32._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar32._4_16_;
          auVar33._16_16_ = auVar144;
          auVar33._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x84);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar33._4_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 5:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x15);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x15),5);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x25);
          auVar34._16_16_ = auVar144;
          auVar34._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar34._5_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x35);
          auVar35._16_16_ = auVar145;
          auVar35._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar35._5_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x45);
          auVar36._16_16_ = auVar144;
          auVar36._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar36._5_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x55);
          auVar37._16_16_ = auVar145;
          auVar37._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar37._5_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x65);
          auVar38._16_16_ = auVar144;
          auVar38._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar38._5_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x75);
          auVar39._16_16_ = auVar145;
          auVar39._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar39._5_16_;
          auVar40._16_16_ = auVar144;
          auVar40._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x85);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar40._5_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 6:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x16);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x16),6);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x26);
          auVar41._16_16_ = auVar144;
          auVar41._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar41._6_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x36);
          auVar42._16_16_ = auVar145;
          auVar42._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar42._6_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x46);
          auVar43._16_16_ = auVar144;
          auVar43._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar43._6_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x56);
          auVar44._16_16_ = auVar145;
          auVar44._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar44._6_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x66);
          auVar45._16_16_ = auVar144;
          auVar45._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar45._6_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x76);
          auVar46._16_16_ = auVar145;
          auVar46._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar46._6_16_;
          auVar47._16_16_ = auVar144;
          auVar47._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x86);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar47._6_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 7:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x17);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x17),7);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x27);
          auVar48._16_16_ = auVar144;
          auVar48._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar48._7_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x37);
          auVar49._16_16_ = auVar145;
          auVar49._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar49._7_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x47);
          auVar50._16_16_ = auVar144;
          auVar50._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar50._7_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x57);
          auVar51._16_16_ = auVar145;
          auVar51._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar51._7_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x67);
          auVar52._16_16_ = auVar144;
          auVar52._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar52._7_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x77);
          auVar53._16_16_ = auVar145;
          auVar53._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar53._7_16_;
          auVar54._16_16_ = auVar144;
          auVar54._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x87);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar54._7_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 8:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x18);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x18),8);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x28);
          auVar55._16_16_ = auVar144;
          auVar55._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar55._8_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x38);
          auVar56._16_16_ = auVar145;
          auVar56._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar56._8_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x48);
          auVar57._16_16_ = auVar144;
          auVar57._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar57._8_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x58);
          auVar58._16_16_ = auVar145;
          auVar58._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar58._8_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x68);
          auVar59._16_16_ = auVar144;
          auVar59._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar59._8_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x78);
          auVar60._16_16_ = auVar145;
          auVar60._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar60._8_16_;
          auVar61._16_16_ = auVar144;
          auVar61._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x88);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar61._8_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 9:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x19);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x19),9);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x29);
          auVar62._16_16_ = auVar144;
          auVar62._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar62._9_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x39);
          auVar63._16_16_ = auVar145;
          auVar63._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar63._9_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x49);
          auVar64._16_16_ = auVar144;
          auVar64._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar64._9_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x59);
          auVar65._16_16_ = auVar145;
          auVar65._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar65._9_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x69);
          auVar66._16_16_ = auVar144;
          auVar66._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar66._9_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x79);
          auVar67._16_16_ = auVar145;
          auVar67._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar67._9_16_;
          auVar68._16_16_ = auVar144;
          auVar68._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x89);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar68._9_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 10:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x1a);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x1a),10);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x2a);
          auVar69._16_16_ = auVar144;
          auVar69._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar69._10_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x3a);
          auVar70._16_16_ = auVar145;
          auVar70._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar70._10_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x4a);
          auVar71._16_16_ = auVar144;
          auVar71._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar71._10_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x5a);
          auVar72._16_16_ = auVar145;
          auVar72._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar72._10_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x6a);
          auVar73._16_16_ = auVar144;
          auVar73._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar73._10_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x7a);
          auVar74._16_16_ = auVar145;
          auVar74._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar74._10_16_;
          auVar75._16_16_ = auVar144;
          auVar75._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x8a);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar75._10_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 0xb:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x1b);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x1b),0xb);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x2b);
          auVar76._16_16_ = auVar144;
          auVar76._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar76._11_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x3b);
          auVar77._16_16_ = auVar145;
          auVar77._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar77._11_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x4b);
          auVar78._16_16_ = auVar144;
          auVar78._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar78._11_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x5b);
          auVar79._16_16_ = auVar145;
          auVar79._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar79._11_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x6b);
          auVar80._16_16_ = auVar144;
          auVar80._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar80._11_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x7b);
          auVar81._16_16_ = auVar145;
          auVar81._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar81._11_16_;
          auVar82._16_16_ = auVar144;
          auVar82._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x8b);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar82._11_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 0xc:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x1c);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x1c),0xc);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x2c);
          auVar83._16_16_ = auVar144;
          auVar83._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar83._12_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x3c);
          auVar84._16_16_ = auVar145;
          auVar84._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar84._12_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x4c);
          auVar85._16_16_ = auVar144;
          auVar85._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar85._12_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x5c);
          auVar86._16_16_ = auVar145;
          auVar86._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar86._12_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x6c);
          auVar87._16_16_ = auVar144;
          auVar87._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar87._12_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x7c);
          auVar88._16_16_ = auVar145;
          auVar88._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar88._12_16_;
          auVar89._16_16_ = auVar144;
          auVar89._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x8c);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar89._12_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 0xd:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x1d);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x1d),0xd);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x2d);
          auVar90._16_16_ = auVar144;
          auVar90._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar90._13_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x3d);
          auVar91._16_16_ = auVar145;
          auVar91._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar91._13_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x4d);
          auVar92._16_16_ = auVar144;
          auVar92._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar92._13_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x5d);
          auVar93._16_16_ = auVar145;
          auVar93._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar93._13_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x6d);
          auVar94._16_16_ = auVar144;
          auVar94._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar94._13_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x7d);
          auVar95._16_16_ = auVar145;
          auVar95._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar95._13_16_;
          auVar96._16_16_ = auVar144;
          auVar96._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x8d);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar96._13_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 0xe:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x1e);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x1e),0xe);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x2e);
          auVar97._16_16_ = auVar144;
          auVar97._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar97._14_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x3e);
          auVar98._16_16_ = auVar145;
          auVar98._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar98._14_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x4e);
          auVar99._16_16_ = auVar144;
          auVar99._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar99._14_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x5e);
          auVar100._16_16_ = auVar145;
          auVar100._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar100._14_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x6e);
          auVar101._16_16_ = auVar144;
          auVar101._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar101._14_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x7e);
          auVar102._16_16_ = auVar145;
          auVar102._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar102._14_16_;
          auVar103._16_16_ = auVar144;
          auVar103._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x8e);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar103._14_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
        break;
      case 0xf:
        do {
          uVar133 = uVar131;
          auVar144 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar137 - 0x1f);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar137 - 0x1f),0xf);
          *(undefined1 (*) [16])(uVar130 - 0x10) = in_XMM1;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x2f);
          auVar104._16_16_ = auVar144;
          auVar104._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x20) = auVar104._15_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x3f);
          auVar105._16_16_ = auVar145;
          auVar105._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x30) = auVar105._15_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x4f);
          auVar106._16_16_ = auVar144;
          auVar106._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x40) = auVar106._15_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x5f);
          auVar107._16_16_ = auVar145;
          auVar107._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x50) = auVar107._15_16_;
          auVar145 = *(undefined1 (*) [16])(uVar137 - 0x6f);
          auVar108._16_16_ = auVar144;
          auVar108._0_16_ = auVar145;
          *(undefined1 (*) [16])(uVar130 - 0x60) = auVar108._15_16_;
          auVar144 = *(undefined1 (*) [16])(uVar137 - 0x7f);
          auVar109._16_16_ = auVar145;
          auVar109._0_16_ = auVar144;
          *(undefined1 (*) [16])(uVar130 - 0x70) = auVar109._15_16_;
          auVar110._16_16_ = auVar144;
          auVar110._0_16_ = *(undefined1 (*) [16])(uVar137 - 0x8f);
          *(undefined1 (*) [16])(uVar130 - 0x80) = auVar110._15_16_;
          uVar130 = uVar130 - 0x80;
          uVar137 = uVar137 - 0x80;
          uVar131 = uVar133 - 0x80;
        } while (0x7f < uVar133);
        *pauVar138 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar130 - uVar133);
        param_2 = (undefined1 (*) [16])(uVar137 - uVar133);
        switch(uVar133) {
        case 0:
          goto switchD_0072789e_caseD_0;
        case 1:
          goto switchD_0072789e_caseD_1;
        case 2:
          goto switchD_0072789e_caseD_2;
        case 3:
          goto switchD_0072789e_caseD_3;
        case 4:
          goto switchD_0072789e_caseD_4;
        case 5:
          goto switchD_0072789e_caseD_5;
        case 6:
          goto switchD_0072789e_caseD_6;
        case 7:
          goto switchD_0072789e_caseD_7;
        case 8:
          goto switchD_0072789e_caseD_8;
        case 9:
          goto switchD_0072789e_caseD_9;
        case 10:
          goto switchD_0072789e_caseD_a;
        case 0xb:
          goto switchD_0072789e_caseD_b;
        case 0xc:
          goto switchD_0072789e_caseD_c;
        case 0xd:
          goto switchD_0072789e_caseD_d;
        case 0xe:
          goto switchD_0072789e_caseD_e;
        case 0xf:
          goto switchD_0072789e_caseD_f;
        case 0x11:
          goto switchD_0072789e_caseD_11;
        case 0x12:
          goto switchD_0072789e_caseD_12;
        case 0x13:
          goto switchD_0072789e_caseD_13;
        case 0x14:
          goto switchD_0072789e_caseD_14;
        case 0x15:
          goto switchD_0072789e_caseD_15;
        case 0x16:
          goto switchD_0072789e_caseD_16;
        case 0x17:
          goto switchD_0072789e_caseD_17;
        case 0x18:
          goto switchD_0072789e_caseD_18;
        case 0x19:
          goto switchD_0072789e_caseD_19;
        case 0x1a:
          goto switchD_0072789e_caseD_1a;
        case 0x1b:
          goto switchD_0072789e_caseD_1b;
        case 0x1c:
          goto switchD_0072789e_caseD_1c;
        case 0x1d:
          goto switchD_0072789e_caseD_1d;
        case 0x1e:
          goto switchD_0072789e_caseD_1e;
        case 0x1f:
          goto switchD_0072789e_caseD_1f;
        case 0x20:
          goto switchD_0072789e_caseD_20;
        case 0x21:
          goto switchD_0072789e_caseD_21;
        case 0x22:
          goto switchD_0072789e_caseD_22;
        case 0x23:
          goto switchD_0072789e_caseD_23;
        case 0x24:
          goto switchD_0072789e_caseD_24;
        case 0x25:
          goto switchD_0072789e_caseD_25;
        case 0x26:
          goto switchD_0072789e_caseD_26;
        case 0x27:
          goto switchD_0072789e_caseD_27;
        case 0x28:
          goto switchD_0072789e_caseD_28;
        case 0x29:
          goto switchD_0072789e_caseD_29;
        case 0x2a:
          goto switchD_0072789e_caseD_2a;
        case 0x2b:
          goto switchD_0072789e_caseD_2b;
        case 0x2c:
          goto switchD_0072789e_caseD_2c;
        case 0x2d:
          goto switchD_0072789e_caseD_2d;
        case 0x2e:
          goto switchD_0072789e_caseD_2e;
        case 0x2f:
          goto switchD_0072789e_caseD_2f;
        case 0x30:
          goto switchD_0072789e_caseD_30;
        case 0x31:
          goto switchD_0072789e_caseD_31;
        case 0x32:
          goto switchD_0072789e_caseD_32;
        case 0x33:
          goto switchD_0072789e_caseD_33;
        case 0x34:
          goto switchD_0072789e_caseD_34;
        case 0x35:
          goto switchD_0072789e_caseD_35;
        case 0x36:
          goto switchD_0072789e_caseD_36;
        case 0x37:
          goto switchD_0072789e_caseD_37;
        case 0x38:
          goto switchD_0072789e_caseD_38;
        case 0x39:
          goto switchD_0072789e_caseD_39;
        case 0x3a:
          goto switchD_0072789e_caseD_3a;
        case 0x3b:
          goto switchD_0072789e_caseD_3b;
        case 0x3c:
          goto switchD_0072789e_caseD_3c;
        case 0x3d:
          goto switchD_0072789e_caseD_3d;
        case 0x3e:
          goto switchD_0072789e_caseD_3e;
        case 0x3f:
          goto switchD_0072789e_caseD_3f;
        case 0x40:
          goto switchD_0072789e_caseD_40;
        case 0x41:
          goto switchD_0072789e_caseD_41;
        case 0x42:
          goto switchD_0072789e_caseD_42;
        case 0x43:
          goto switchD_0072789e_caseD_43;
        case 0x44:
          goto switchD_0072789e_caseD_44;
        case 0x45:
          goto switchD_0072789e_caseD_45;
        case 0x46:
          goto switchD_0072789e_caseD_46;
        case 0x47:
          goto switchD_0072789e_caseD_47;
        case 0x48:
          goto switchD_0072789e_caseD_48;
        case 0x49:
          goto switchD_0072789e_caseD_49;
        case 0x4a:
          goto switchD_0072789e_caseD_4a;
        case 0x4b:
          goto switchD_0072789e_caseD_4b;
        case 0x4c:
          goto switchD_0072789e_caseD_4c;
        case 0x4d:
          goto switchD_0072789e_caseD_4d;
        case 0x4e:
          goto switchD_0072789e_caseD_4e;
        case 0x4f:
          goto switchD_0072789e_caseD_4f;
        case 0x50:
          goto switchD_0072789e_caseD_50;
        case 0x51:
          goto switchD_0072789e_caseD_51;
        case 0x52:
          goto switchD_0072789e_caseD_52;
        case 0x53:
          goto switchD_0072789e_caseD_53;
        case 0x54:
          goto switchD_0072789e_caseD_54;
        case 0x55:
          goto switchD_0072789e_caseD_55;
        case 0x56:
          goto switchD_0072789e_caseD_56;
        case 0x57:
          goto switchD_0072789e_caseD_57;
        case 0x58:
          goto switchD_0072789e_caseD_58;
        case 0x59:
          goto switchD_0072789e_caseD_59;
        case 0x5a:
          goto switchD_0072789e_caseD_5a;
        case 0x5b:
          goto switchD_0072789e_caseD_5b;
        case 0x5c:
          goto switchD_0072789e_caseD_5c;
        case 0x5d:
          goto switchD_0072789e_caseD_5d;
        case 0x5e:
          goto switchD_0072789e_caseD_5e;
        case 0x5f:
          goto switchD_0072789e_caseD_5f;
        case 0x60:
          goto switchD_0072789e_caseD_60;
        case 0x61:
          goto switchD_0072789e_caseD_61;
        case 0x62:
          goto switchD_0072789e_caseD_62;
        case 99:
          goto switchD_0072789e_caseD_63;
        case 100:
          goto switchD_0072789e_caseD_64;
        case 0x65:
          goto switchD_0072789e_caseD_65;
        case 0x66:
          goto switchD_0072789e_caseD_66;
        case 0x67:
          goto switchD_0072789e_caseD_67;
        case 0x68:
          goto switchD_0072789e_caseD_68;
        case 0x69:
          goto switchD_0072789e_caseD_69;
        case 0x6a:
          goto switchD_0072789e_caseD_6a;
        case 0x6b:
          goto switchD_0072789e_caseD_6b;
        case 0x6c:
          goto switchD_0072789e_caseD_6c;
        case 0x6d:
          goto switchD_0072789e_caseD_6d;
        case 0x6e:
          goto switchD_0072789e_caseD_6e;
        case 0x6f:
          goto switchD_0072789e_caseD_6f;
        case 0x70:
          goto switchD_0072789e_caseD_70;
        case 0x71:
          goto switchD_0072789e_caseD_71;
        case 0x72:
          goto switchD_0072789e_caseD_72;
        case 0x73:
          goto switchD_0072789e_caseD_73;
        case 0x74:
          goto switchD_0072789e_caseD_74;
        case 0x75:
          goto switchD_0072789e_caseD_75;
        case 0x76:
          goto switchD_0072789e_caseD_76;
        case 0x77:
          goto switchD_0072789e_caseD_77;
        case 0x78:
          goto switchD_0072789e_caseD_78;
        case 0x79:
          goto switchD_0072789e_caseD_79;
        case 0x7a:
          goto switchD_0072789e_caseD_7a;
        case 0x7b:
          goto switchD_0072789e_caseD_7b;
        case 0x7c:
          goto switchD_0072789e_caseD_7c;
        case 0x7d:
          goto switchD_0072789e_caseD_7d;
        case 0x7e:
          goto switchD_0072789e_caseD_7e;
        case 0x7f:
          goto switchD_0072789e_caseD_7f;
        }
      }
switchD_0072789e_caseD_10:
      auVar144 = lddqu(in_XMM0,*param_2);
      *param_1 = auVar144;
switchD_0072789e_caseD_0:
      return pcVar127;
    }
    in_XMM0 = *param_2;
    uVar137 = (ulong)param_1 & 0xfffffffffffffff0;
    pauVar138 = (undefined1 (*) [16])(uVar137 + 0x10);
    uVar130 = (long)param_3 - ((long)pauVar138 - (long)param_1);
    puVar135 = (undefined8 *)((long)param_2 + ((long)pauVar138 - (long)param_1));
    if (((ulong)puVar135 & 0xf) == 0) {
      if ((uVar130 >> 8) + uVar130 < DAT_0093d718) {
        do {
          uVar137 = uVar130;
          uVar130 = uVar137 - 0x80;
          uVar5 = puVar135[1];
          *(undefined8 *)*pauVar138 = *puVar135;
          *(undefined8 *)(*pauVar138 + 8) = uVar5;
          uVar5 = puVar135[3];
          *(undefined8 *)pauVar138[1] = puVar135[2];
          *(undefined8 *)(pauVar138[1] + 8) = uVar5;
          uVar5 = puVar135[5];
          *(undefined8 *)pauVar138[2] = puVar135[4];
          *(undefined8 *)(pauVar138[2] + 8) = uVar5;
          uVar5 = puVar135[7];
          *(undefined8 *)pauVar138[3] = puVar135[6];
          *(undefined8 *)(pauVar138[3] + 8) = uVar5;
          in_XMM1 = *(undefined1 (*) [16])(puVar135 + 8);
          pauVar138[4] = in_XMM1;
          uVar5 = puVar135[0xb];
          *(undefined8 *)pauVar138[5] = puVar135[10];
          *(undefined8 *)(pauVar138[5] + 8) = uVar5;
          uVar5 = puVar135[0xd];
          *(undefined8 *)pauVar138[6] = puVar135[0xc];
          *(undefined8 *)(pauVar138[6] + 8) = uVar5;
          uVar5 = puVar135[0xf];
          *(undefined8 *)pauVar138[7] = puVar135[0xe];
          *(undefined8 *)(pauVar138[7] + 8) = uVar5;
          puVar135 = puVar135 + 0x10;
          pauVar138 = pauVar138 + 8;
        } while (0x7f < uVar130);
        *param_1 = in_XMM0;
        puVar136 = (undefined1 *)((long)puVar135 + uVar130);
        puVar140 = pauVar138[-8] + uVar137;
        switch(uVar130) {
        case 0:
          goto switchD_0072788a_caseD_0;
        case 1:
          goto switchD_0072788a_caseD_1;
        case 2:
          goto switchD_0072788a_caseD_2;
        case 3:
          goto switchD_0072788a_caseD_3;
        case 4:
          goto switchD_0072788a_caseD_4;
        case 5:
          goto switchD_0072788a_caseD_5;
        case 6:
          goto switchD_0072788a_caseD_6;
        case 7:
          goto switchD_0072788a_caseD_7;
        case 8:
          goto switchD_0072788a_caseD_8;
        case 9:
          goto switchD_0072788a_caseD_9;
        case 10:
          goto switchD_0072788a_caseD_a;
        case 0xb:
          goto switchD_0072788a_caseD_b;
        case 0xc:
          goto switchD_0072788a_caseD_c;
        case 0xd:
          goto switchD_0072788a_caseD_d;
        case 0xe:
          goto switchD_0072788a_caseD_e;
        case 0xf:
          goto switchD_0072788a_caseD_f;
        case 0x11:
          goto switchD_0072788a_caseD_11;
        case 0x12:
          goto switchD_0072788a_caseD_12;
        case 0x13:
          goto switchD_0072788a_caseD_13;
        case 0x14:
          goto switchD_0072788a_caseD_14;
        case 0x15:
          goto switchD_0072788a_caseD_15;
        case 0x16:
          goto switchD_0072788a_caseD_16;
        case 0x17:
          goto switchD_0072788a_caseD_17;
        case 0x18:
          goto switchD_0072788a_caseD_18;
        case 0x19:
          goto switchD_0072788a_caseD_19;
        case 0x1a:
          goto switchD_0072788a_caseD_1a;
        case 0x1b:
          goto switchD_0072788a_caseD_1b;
        case 0x1c:
          goto switchD_0072788a_caseD_1c;
        case 0x1d:
          goto switchD_0072788a_caseD_1d;
        case 0x1e:
          goto switchD_0072788a_caseD_1e;
        case 0x1f:
          goto switchD_0072788a_caseD_1f;
        case 0x20:
          goto switchD_0072788a_caseD_20;
        case 0x21:
          goto switchD_0072788a_caseD_21;
        case 0x22:
          goto switchD_0072788a_caseD_22;
        case 0x23:
          goto switchD_0072788a_caseD_23;
        case 0x24:
          goto switchD_0072788a_caseD_24;
        case 0x25:
          goto switchD_0072788a_caseD_25;
        case 0x26:
          goto switchD_0072788a_caseD_26;
        case 0x27:
          goto switchD_0072788a_caseD_27;
        case 0x28:
          goto switchD_0072788a_caseD_28;
        case 0x29:
          goto switchD_0072788a_caseD_29;
        case 0x2a:
          goto switchD_0072788a_caseD_2a;
        case 0x2b:
          goto switchD_0072788a_caseD_2b;
        case 0x2c:
          goto switchD_0072788a_caseD_2c;
        case 0x2d:
          goto switchD_0072788a_caseD_2d;
        case 0x2e:
          goto switchD_0072788a_caseD_2e;
        case 0x2f:
          goto switchD_0072788a_caseD_2f;
        case 0x30:
          goto switchD_0072788a_caseD_30;
        case 0x31:
          goto switchD_0072788a_caseD_31;
        case 0x32:
          goto switchD_0072788a_caseD_32;
        case 0x33:
          goto switchD_0072788a_caseD_33;
        case 0x34:
          goto switchD_0072788a_caseD_34;
        case 0x35:
          goto switchD_0072788a_caseD_35;
        case 0x36:
          goto switchD_0072788a_caseD_36;
        case 0x37:
          goto switchD_0072788a_caseD_37;
        case 0x38:
          goto switchD_0072788a_caseD_38;
        case 0x39:
          goto switchD_0072788a_caseD_39;
        case 0x3a:
          goto switchD_0072788a_caseD_3a;
        case 0x3b:
          goto switchD_0072788a_caseD_3b;
        case 0x3c:
          goto switchD_0072788a_caseD_3c;
        case 0x3d:
          goto switchD_0072788a_caseD_3d;
        case 0x3e:
          goto switchD_0072788a_caseD_3e;
        case 0x3f:
          goto switchD_0072788a_caseD_3f;
        case 0x40:
          goto switchD_0072788a_caseD_40;
        case 0x41:
          goto switchD_0072788a_caseD_41;
        case 0x42:
          goto switchD_0072788a_caseD_42;
        case 0x43:
          goto switchD_0072788a_caseD_43;
        case 0x44:
          goto switchD_0072788a_caseD_44;
        case 0x45:
          goto switchD_0072788a_caseD_45;
        case 0x46:
          goto switchD_0072788a_caseD_46;
        case 0x47:
          goto switchD_0072788a_caseD_47;
        case 0x48:
          goto switchD_0072788a_caseD_48;
        case 0x49:
          goto switchD_0072788a_caseD_49;
        case 0x4a:
          goto switchD_0072788a_caseD_4a;
        case 0x4b:
          goto switchD_0072788a_caseD_4b;
        case 0x4c:
          goto switchD_0072788a_caseD_4c;
        case 0x4d:
          goto switchD_0072788a_caseD_4d;
        case 0x4e:
          goto switchD_0072788a_caseD_4e;
        case 0x4f:
          goto switchD_0072788a_caseD_4f;
        case 0x50:
          goto switchD_0072788a_caseD_50;
        case 0x51:
          goto switchD_0072788a_caseD_51;
        case 0x52:
          goto switchD_0072788a_caseD_52;
        case 0x53:
          goto switchD_0072788a_caseD_53;
        case 0x54:
          goto switchD_0072788a_caseD_54;
        case 0x55:
          goto switchD_0072788a_caseD_55;
        case 0x56:
          goto switchD_0072788a_caseD_56;
        case 0x57:
          goto switchD_0072788a_caseD_57;
        case 0x58:
          goto switchD_0072788a_caseD_58;
        case 0x59:
          goto switchD_0072788a_caseD_59;
        case 0x5a:
          goto switchD_0072788a_caseD_5a;
        case 0x5b:
          goto switchD_0072788a_caseD_5b;
        case 0x5c:
          goto switchD_0072788a_caseD_5c;
        case 0x5d:
          goto switchD_0072788a_caseD_5d;
        case 0x5e:
          goto switchD_0072788a_caseD_5e;
        case 0x5f:
          goto switchD_0072788a_caseD_5f;
        case 0x60:
          goto switchD_0072788a_caseD_60;
        case 0x61:
          goto switchD_0072788a_caseD_61;
        case 0x62:
          goto switchD_0072788a_caseD_62;
        case 99:
          goto switchD_0072788a_caseD_63;
        case 100:
          goto switchD_0072788a_caseD_64;
        case 0x65:
          goto switchD_0072788a_caseD_65;
        case 0x66:
          goto switchD_0072788a_caseD_66;
        case 0x67:
          goto switchD_0072788a_caseD_67;
        case 0x68:
          goto switchD_0072788a_caseD_68;
        case 0x69:
          goto switchD_0072788a_caseD_69;
        case 0x6a:
          goto switchD_0072788a_caseD_6a;
        case 0x6b:
          goto switchD_0072788a_caseD_6b;
        case 0x6c:
          goto switchD_0072788a_caseD_6c;
        case 0x6d:
          goto switchD_0072788a_caseD_6d;
        case 0x6e:
          goto switchD_0072788a_caseD_6e;
        case 0x6f:
          goto switchD_0072788a_caseD_6f;
        case 0x70:
          goto switchD_0072788a_caseD_70;
        case 0x71:
          goto switchD_0072788a_caseD_71;
        case 0x72:
          goto switchD_0072788a_caseD_72;
        case 0x73:
          goto switchD_0072788a_caseD_73;
        case 0x74:
          goto switchD_0072788a_caseD_74;
        case 0x75:
          goto switchD_0072788a_caseD_75;
        case 0x76:
          goto switchD_0072788a_caseD_76;
        case 0x77:
          goto switchD_0072788a_caseD_77;
        case 0x78:
          goto switchD_0072788a_caseD_78;
        case 0x79:
          goto switchD_0072788a_caseD_79;
        case 0x7a:
          goto switchD_0072788a_caseD_7a;
        case 0x7b:
          goto switchD_0072788a_caseD_7b;
        case 0x7c:
          goto switchD_0072788a_caseD_7c;
        case 0x7d:
          goto switchD_0072788a_caseD_7d;
        case 0x7e:
          goto switchD_0072788a_caseD_7e;
        case 0x7f:
          goto switchD_0072788a_caseD_7f;
        }
        goto switchD_0072788a_caseD_10;
      }
LAB_00729110:
      uVar5 = *puVar135;
      uVar111 = puVar135[1];
      *param_1 = in_XMM0;
      *(undefined8 *)*pauVar138 = uVar5;
      *(undefined8 *)(uVar137 + 0x18) = uVar111;
      uVar130 = uVar130 - 0x10;
      puVar135 = puVar135 + 2;
      puVar139 = (undefined8 *)(uVar137 + 0x20);
      uVar137 = DAT_0093d708;
      if (uVar130 <= DAT_0093d708) {
        uVar137 = uVar130;
      }
      uVar130 = uVar130 - uVar137;
      if (0x1000 < uVar130) {
        if (uVar137 << 3 < uVar130) {
          uVar130 = uVar130 + uVar137;
          uVar137 = 0;
        }
        uVar131 = uVar130 - 0x80;
        do {
          uVar130 = uVar131;
          uVar131 = uVar130 - 0x80;
          uVar5 = puVar135[1];
          uVar111 = puVar135[2];
          uVar112 = puVar135[3];
          uVar113 = puVar135[4];
          uVar114 = puVar135[5];
          uVar115 = puVar135[6];
          uVar116 = puVar135[7];
          uVar117 = puVar135[8];
          uVar118 = puVar135[9];
          uVar119 = puVar135[10];
          uVar120 = puVar135[0xb];
          uVar121 = puVar135[0xc];
          uVar122 = puVar135[0xd];
          uVar123 = puVar135[0xe];
          uVar124 = puVar135[0xf];
          *puVar139 = *puVar135;
          puVar139[1] = uVar5;
          puVar139[2] = uVar111;
          puVar139[3] = uVar112;
          puVar139[4] = uVar113;
          puVar139[5] = uVar114;
          puVar139[6] = uVar115;
          puVar139[7] = uVar116;
          puVar139[8] = uVar117;
          puVar139[9] = uVar118;
          puVar139[10] = uVar119;
          puVar139[0xb] = uVar120;
          puVar139[0xc] = uVar121;
          puVar139[0xd] = uVar122;
          puVar139[0xe] = uVar123;
          puVar139[0xf] = uVar124;
          puVar135 = puVar135 + 0x10;
          puVar139 = puVar139 + 0x10;
        } while (0x7f < uVar130);
        if (uVar137 < 0x80) goto LAB_0072927d;
      }
      uVar131 = (uVar130 + uVar137) - 0x80;
      do {
        bVar143 = 0x7f < uVar131;
        uVar131 = uVar131 - 0x80;
        uVar5 = puVar135[1];
        uVar111 = puVar135[2];
        uVar112 = puVar135[3];
        uVar113 = puVar135[4];
        uVar114 = puVar135[5];
        uVar115 = puVar135[6];
        uVar116 = puVar135[7];
        uVar117 = puVar135[8];
        uVar118 = puVar135[9];
        uVar119 = puVar135[10];
        uVar120 = puVar135[0xb];
        uVar121 = puVar135[0xc];
        uVar122 = puVar135[0xd];
        uVar123 = puVar135[0xe];
        uVar124 = puVar135[0xf];
        *puVar139 = *puVar135;
        puVar139[1] = uVar5;
        puVar139[2] = uVar111;
        puVar139[3] = uVar112;
        puVar139[4] = uVar113;
        puVar139[5] = uVar114;
        puVar139[6] = uVar115;
        puVar139[7] = uVar116;
        puVar139[8] = uVar117;
        puVar139[9] = uVar118;
        puVar139[10] = uVar119;
        puVar139[0xb] = uVar120;
        puVar139[0xc] = uVar121;
        puVar139[0xd] = uVar122;
        puVar139[0xe] = uVar123;
        puVar139[0xf] = uVar124;
        puVar135 = puVar135 + 0x10;
        puVar139 = puVar139 + 0x10;
      } while (bVar143);
LAB_0072927d:
      lVar132 = uVar131 + 0x80;
                    /* WARNING: Could not recover jumptable at 0x00729299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar127 = (char *)(*(code *)((long)&switchD_0072788a::switchdataD_0082b430 +
                                   (long)(int)(&switchD_0072788a::switchdataD_0082b430)[lVar132]))
                                   ((long)puVar139 + lVar132,(long)puVar135 + lVar132,
                                    (code *)((long)&switchD_0072788a::switchdataD_0082b430 +
                                            (long)(int)(&switchD_0072788a::switchdataD_0082b430)
                                                       [lVar132]));
      return pcVar127;
    }
    if (DAT_0093d710 <= uVar130) goto LAB_00729110;
    uVar130 = uVar130 - 0x80;
    switch((ulong)puVar135 & 0xf) {
    case 1:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -1);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -1);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 0xf);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x1f);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x2f);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x3f);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x4f);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x6f);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x5f);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,1);
        pauVar138[6] = auVar104._1_16_;
        pauVar138[5] = auVar105._1_16_;
        pauVar138[4] = auVar106._1_16_;
        pauVar138[3] = auVar107._1_16_;
        pauVar138[2] = auVar108._1_16_;
        pauVar138[1] = auVar109._1_16_;
        *pauVar138 = auVar110._1_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
switchD_0072788a_caseD_1:
        puVar140[-1] = puVar136[-1];
        return pcVar127;
      case 2:
switchD_0072788a_caseD_2:
        *(undefined2 *)(puVar140 + -2) = *(undefined2 *)(puVar136 + -2);
        return pcVar127;
      case 3:
switchD_0072788a_caseD_3:
        uVar3 = *(undefined2 *)(puVar136 + -2);
        *(undefined2 *)(puVar140 + -3) = *(undefined2 *)(puVar136 + -3);
        *(undefined2 *)(puVar140 + -2) = uVar3;
        return pcVar127;
      case 4:
switchD_0072788a_caseD_4:
        *(undefined4 *)(puVar140 + -4) = *(undefined4 *)(puVar136 + -4);
        return pcVar127;
      case 5:
switchD_0072788a_caseD_5:
        uVar4 = *(undefined4 *)(puVar136 + -4);
        *(undefined4 *)(puVar140 + -5) = *(undefined4 *)(puVar136 + -5);
        *(undefined4 *)(puVar140 + -4) = uVar4;
        return pcVar127;
      case 6:
switchD_0072788a_caseD_6:
        uVar4 = *(undefined4 *)(puVar136 + -4);
        *(undefined4 *)(puVar140 + -6) = *(undefined4 *)(puVar136 + -6);
        *(undefined4 *)(puVar140 + -4) = uVar4;
        return pcVar127;
      case 7:
switchD_0072788a_caseD_7:
        uVar4 = *(undefined4 *)(puVar136 + -4);
        *(undefined4 *)(puVar140 + -7) = *(undefined4 *)(puVar136 + -7);
        *(undefined4 *)(puVar140 + -4) = uVar4;
        return pcVar127;
      case 8:
switchD_0072788a_caseD_8:
        *(undefined8 *)(puVar140 + -8) = *(undefined8 *)(puVar136 + -8);
        return pcVar127;
      case 9:
switchD_0072788a_caseD_9:
        uVar4 = *(undefined4 *)(puVar136 + -4);
        *(undefined8 *)(puVar140 + -9) = *(undefined8 *)(puVar136 + -9);
        *(undefined4 *)(puVar140 + -4) = uVar4;
        return pcVar127;
      case 10:
switchD_0072788a_caseD_a:
        uVar4 = *(undefined4 *)(puVar136 + -4);
        *(undefined8 *)(puVar140 + -10) = *(undefined8 *)(puVar136 + -10);
        *(undefined4 *)(puVar140 + -4) = uVar4;
        return pcVar127;
      case 0xb:
switchD_0072788a_caseD_b:
        uVar4 = *(undefined4 *)(puVar136 + -4);
        *(undefined8 *)(puVar140 + -0xb) = *(undefined8 *)(puVar136 + -0xb);
        *(undefined4 *)(puVar140 + -4) = uVar4;
        return pcVar127;
      case 0xc:
switchD_0072788a_caseD_c:
        uVar4 = *(undefined4 *)(puVar136 + -4);
        *(undefined8 *)(puVar140 + -0xc) = *(undefined8 *)(puVar136 + -0xc);
        *(undefined4 *)(puVar140 + -4) = uVar4;
        return pcVar127;
      case 0xd:
switchD_0072788a_caseD_d:
        uVar5 = *(undefined8 *)(puVar136 + -8);
        *(undefined8 *)(puVar140 + -0xd) = *(undefined8 *)(puVar136 + -0xd);
        *(undefined8 *)(puVar140 + -8) = uVar5;
        return pcVar127;
      case 0xe:
switchD_0072788a_caseD_e:
        uVar5 = *(undefined8 *)(puVar136 + -8);
        *(undefined8 *)(puVar140 + -0xe) = *(undefined8 *)(puVar136 + -0xe);
        *(undefined8 *)(puVar140 + -8) = uVar5;
        return pcVar127;
      case 0xf:
switchD_0072788a_caseD_f:
        uVar5 = *(undefined8 *)(puVar136 + -8);
        *(undefined8 *)(puVar140 + -0xf) = *(undefined8 *)(puVar136 + -0xf);
        *(undefined8 *)(puVar140 + -8) = uVar5;
        return pcVar127;
      case 0x10:
        break;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x50:
switchD_0072788a_caseD_50:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x50));
        *(undefined1 (*) [16])(puVar140 + -0x50) = in_XMM0;
      case 0x40:
switchD_0072788a_caseD_40:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x40));
        *(undefined1 (*) [16])(puVar140 + -0x40) = in_XMM0;
      case 0x30:
switchD_0072788a_caseD_30:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x30));
        *(undefined1 (*) [16])(puVar140 + -0x30) = in_XMM0;
      case 0x20:
switchD_0072788a_caseD_20:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x20));
        *(undefined1 (*) [16])(puVar140 + -0x20) = in_XMM0;
        break;
      case 0x51:
switchD_0072788a_caseD_51:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x51));
        *(undefined1 (*) [16])(puVar140 + -0x51) = in_XMM0;
      case 0x41:
switchD_0072788a_caseD_41:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x41));
        *(undefined1 (*) [16])(puVar140 + -0x41) = in_XMM0;
      case 0x31:
switchD_0072788a_caseD_31:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x31));
        *(undefined1 (*) [16])(puVar140 + -0x31) = in_XMM0;
      case 0x21:
switchD_0072788a_caseD_21:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x21));
        *(undefined1 (*) [16])(puVar140 + -0x21) = in_XMM0;
switchD_0072788a_caseD_11:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x11));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x11) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x52:
switchD_0072788a_caseD_52:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x52));
        *(undefined1 (*) [16])(puVar140 + -0x52) = in_XMM0;
      case 0x42:
switchD_0072788a_caseD_42:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x42));
        *(undefined1 (*) [16])(puVar140 + -0x42) = in_XMM0;
      case 0x32:
switchD_0072788a_caseD_32:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x32));
        *(undefined1 (*) [16])(puVar140 + -0x32) = in_XMM0;
      case 0x22:
switchD_0072788a_caseD_22:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x22));
        *(undefined1 (*) [16])(puVar140 + -0x22) = in_XMM0;
switchD_0072788a_caseD_12:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x12));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x12) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x53:
switchD_0072788a_caseD_53:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x53));
        *(undefined1 (*) [16])(puVar140 + -0x53) = in_XMM0;
      case 0x43:
switchD_0072788a_caseD_43:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x43));
        *(undefined1 (*) [16])(puVar140 + -0x43) = in_XMM0;
      case 0x33:
switchD_0072788a_caseD_33:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x33));
        *(undefined1 (*) [16])(puVar140 + -0x33) = in_XMM0;
      case 0x23:
switchD_0072788a_caseD_23:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x23));
        *(undefined1 (*) [16])(puVar140 + -0x23) = in_XMM0;
switchD_0072788a_caseD_13:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x13));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x13) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x54:
switchD_0072788a_caseD_54:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x54));
        *(undefined1 (*) [16])(puVar140 + -0x54) = in_XMM0;
      case 0x44:
switchD_0072788a_caseD_44:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x44));
        *(undefined1 (*) [16])(puVar140 + -0x44) = in_XMM0;
      case 0x34:
switchD_0072788a_caseD_34:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x34));
        *(undefined1 (*) [16])(puVar140 + -0x34) = in_XMM0;
      case 0x24:
switchD_0072788a_caseD_24:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x24));
        *(undefined1 (*) [16])(puVar140 + -0x24) = in_XMM0;
switchD_0072788a_caseD_14:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x14));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x14) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x55:
switchD_0072788a_caseD_55:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x55));
        *(undefined1 (*) [16])(puVar140 + -0x55) = in_XMM0;
      case 0x45:
switchD_0072788a_caseD_45:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x45));
        *(undefined1 (*) [16])(puVar140 + -0x45) = in_XMM0;
      case 0x35:
switchD_0072788a_caseD_35:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x35));
        *(undefined1 (*) [16])(puVar140 + -0x35) = in_XMM0;
      case 0x25:
switchD_0072788a_caseD_25:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x25));
        *(undefined1 (*) [16])(puVar140 + -0x25) = in_XMM0;
switchD_0072788a_caseD_15:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x15));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x15) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x56:
switchD_0072788a_caseD_56:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x56));
        *(undefined1 (*) [16])(puVar140 + -0x56) = in_XMM0;
      case 0x46:
switchD_0072788a_caseD_46:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x46));
        *(undefined1 (*) [16])(puVar140 + -0x46) = in_XMM0;
      case 0x36:
switchD_0072788a_caseD_36:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x36));
        *(undefined1 (*) [16])(puVar140 + -0x36) = in_XMM0;
      case 0x26:
switchD_0072788a_caseD_26:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x26));
        *(undefined1 (*) [16])(puVar140 + -0x26) = in_XMM0;
switchD_0072788a_caseD_16:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x16));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x16) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x57:
switchD_0072788a_caseD_57:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x57));
        *(undefined1 (*) [16])(puVar140 + -0x57) = in_XMM0;
      case 0x47:
switchD_0072788a_caseD_47:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x47));
        *(undefined1 (*) [16])(puVar140 + -0x47) = in_XMM0;
      case 0x37:
switchD_0072788a_caseD_37:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x37));
        *(undefined1 (*) [16])(puVar140 + -0x37) = in_XMM0;
      case 0x27:
switchD_0072788a_caseD_27:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x27));
        *(undefined1 (*) [16])(puVar140 + -0x27) = in_XMM0;
switchD_0072788a_caseD_17:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x17));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x17) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x58:
switchD_0072788a_caseD_58:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x58));
        *(undefined1 (*) [16])(puVar140 + -0x58) = in_XMM0;
      case 0x48:
switchD_0072788a_caseD_48:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x48));
        *(undefined1 (*) [16])(puVar140 + -0x48) = in_XMM0;
      case 0x38:
switchD_0072788a_caseD_38:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x38));
        *(undefined1 (*) [16])(puVar140 + -0x38) = in_XMM0;
      case 0x28:
switchD_0072788a_caseD_28:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x28));
        *(undefined1 (*) [16])(puVar140 + -0x28) = in_XMM0;
switchD_0072788a_caseD_18:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x18));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x18) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x59:
switchD_0072788a_caseD_59:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x59));
        *(undefined1 (*) [16])(puVar140 + -0x59) = in_XMM0;
      case 0x49:
switchD_0072788a_caseD_49:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x49));
        *(undefined1 (*) [16])(puVar140 + -0x49) = in_XMM0;
      case 0x39:
switchD_0072788a_caseD_39:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x39));
        *(undefined1 (*) [16])(puVar140 + -0x39) = in_XMM0;
      case 0x29:
switchD_0072788a_caseD_29:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x29));
        *(undefined1 (*) [16])(puVar140 + -0x29) = in_XMM0;
switchD_0072788a_caseD_19:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x19));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x19) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x5a:
switchD_0072788a_caseD_5a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x5a));
        *(undefined1 (*) [16])(puVar140 + -0x5a) = in_XMM0;
      case 0x4a:
switchD_0072788a_caseD_4a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x4a));
        *(undefined1 (*) [16])(puVar140 + -0x4a) = in_XMM0;
      case 0x3a:
switchD_0072788a_caseD_3a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x3a));
        *(undefined1 (*) [16])(puVar140 + -0x3a) = in_XMM0;
      case 0x2a:
switchD_0072788a_caseD_2a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x2a));
        *(undefined1 (*) [16])(puVar140 + -0x2a) = in_XMM0;
switchD_0072788a_caseD_1a:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x1a));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x1a) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x5b:
switchD_0072788a_caseD_5b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x5b));
        *(undefined1 (*) [16])(puVar140 + -0x5b) = in_XMM0;
      case 0x4b:
switchD_0072788a_caseD_4b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x4b));
        *(undefined1 (*) [16])(puVar140 + -0x4b) = in_XMM0;
      case 0x3b:
switchD_0072788a_caseD_3b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x3b));
        *(undefined1 (*) [16])(puVar140 + -0x3b) = in_XMM0;
      case 0x2b:
switchD_0072788a_caseD_2b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x2b));
        *(undefined1 (*) [16])(puVar140 + -0x2b) = in_XMM0;
switchD_0072788a_caseD_1b:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x1b));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x1b) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x5c:
switchD_0072788a_caseD_5c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x5c));
        *(undefined1 (*) [16])(puVar140 + -0x5c) = in_XMM0;
      case 0x4c:
switchD_0072788a_caseD_4c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x4c));
        *(undefined1 (*) [16])(puVar140 + -0x4c) = in_XMM0;
      case 0x3c:
switchD_0072788a_caseD_3c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x3c));
        *(undefined1 (*) [16])(puVar140 + -0x3c) = in_XMM0;
      case 0x2c:
switchD_0072788a_caseD_2c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x2c));
        *(undefined1 (*) [16])(puVar140 + -0x2c) = in_XMM0;
switchD_0072788a_caseD_1c:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x1c));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x1c) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x5d:
switchD_0072788a_caseD_5d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x5d));
        *(undefined1 (*) [16])(puVar140 + -0x5d) = in_XMM0;
      case 0x4d:
switchD_0072788a_caseD_4d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x4d));
        *(undefined1 (*) [16])(puVar140 + -0x4d) = in_XMM0;
      case 0x3d:
switchD_0072788a_caseD_3d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x3d));
        *(undefined1 (*) [16])(puVar140 + -0x3d) = in_XMM0;
      case 0x2d:
switchD_0072788a_caseD_2d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x2d));
        *(undefined1 (*) [16])(puVar140 + -0x2d) = in_XMM0;
switchD_0072788a_caseD_1d:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x1d));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x1d) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x5e:
switchD_0072788a_caseD_5e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x5e));
        *(undefined1 (*) [16])(puVar140 + -0x5e) = in_XMM0;
      case 0x4e:
switchD_0072788a_caseD_4e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x4e));
        *(undefined1 (*) [16])(puVar140 + -0x4e) = in_XMM0;
      case 0x3e:
switchD_0072788a_caseD_3e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x3e));
        *(undefined1 (*) [16])(puVar140 + -0x3e) = in_XMM0;
      case 0x2e:
switchD_0072788a_caseD_2e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x2e));
        *(undefined1 (*) [16])(puVar140 + -0x2e) = in_XMM0;
switchD_0072788a_caseD_1e:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x1e));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x1e) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x5f:
switchD_0072788a_caseD_5f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x5f));
        *(undefined1 (*) [16])(puVar140 + -0x5f) = in_XMM0;
      case 0x4f:
switchD_0072788a_caseD_4f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x4f));
        *(undefined1 (*) [16])(puVar140 + -0x4f) = in_XMM0;
      case 0x3f:
switchD_0072788a_caseD_3f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x3f));
        *(undefined1 (*) [16])(puVar140 + -0x3f) = in_XMM0;
      case 0x2f:
switchD_0072788a_caseD_2f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x2f));
        *(undefined1 (*) [16])(puVar140 + -0x2f) = in_XMM0;
switchD_0072788a_caseD_1f:
        auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x1f));
        auVar145 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar136 + -0x10));
        *(undefined1 (*) [16])(puVar140 + -0x1f) = auVar144;
        *(undefined1 (*) [16])(puVar140 + -0x10) = auVar145;
        return pcVar127;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 2:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -2);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -2);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 0xe);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x1e);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x2e);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x3e);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x4e);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x6e);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x5e);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,2);
        pauVar138[6] = auVar104._2_16_;
        pauVar138[5] = auVar105._2_16_;
        pauVar138[4] = auVar106._2_16_;
        pauVar138[3] = auVar107._2_16_;
        pauVar138[2] = auVar108._2_16_;
        pauVar138[1] = auVar109._2_16_;
        *pauVar138 = auVar110._2_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 3:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -3);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -3);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 0xd);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x1d);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x2d);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x3d);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x4d);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x6d);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x5d);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,3);
        pauVar138[6] = auVar104._3_16_;
        pauVar138[5] = auVar105._3_16_;
        pauVar138[4] = auVar106._3_16_;
        pauVar138[3] = auVar107._3_16_;
        pauVar138[2] = auVar108._3_16_;
        pauVar138[1] = auVar109._3_16_;
        *pauVar138 = auVar110._3_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 4:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -4);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -4);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 0xc);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x1c);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x2c);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x3c);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x4c);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x6c);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x5c);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,4);
        pauVar138[6] = auVar104._4_16_;
        pauVar138[5] = auVar105._4_16_;
        pauVar138[4] = auVar106._4_16_;
        pauVar138[3] = auVar107._4_16_;
        pauVar138[2] = auVar108._4_16_;
        pauVar138[1] = auVar109._4_16_;
        *pauVar138 = auVar110._4_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 5:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -5);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -5);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 0xb);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x1b);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x2b);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x3b);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x4b);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x6b);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x5b);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,5);
        pauVar138[6] = auVar104._5_16_;
        pauVar138[5] = auVar105._5_16_;
        pauVar138[4] = auVar106._5_16_;
        pauVar138[3] = auVar107._5_16_;
        pauVar138[2] = auVar108._5_16_;
        pauVar138[1] = auVar109._5_16_;
        *pauVar138 = auVar110._5_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 6:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -6);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -6);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 10);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x1a);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x2a);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x3a);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x4a);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x6a);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x5a);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,6);
        pauVar138[6] = auVar104._6_16_;
        pauVar138[5] = auVar105._6_16_;
        pauVar138[4] = auVar106._6_16_;
        pauVar138[3] = auVar107._6_16_;
        pauVar138[2] = auVar108._6_16_;
        pauVar138[1] = auVar109._6_16_;
        *pauVar138 = auVar110._6_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 7:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -7);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -7);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 9);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x19);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x29);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x39);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x49);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x69);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x59);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,7);
        pauVar138[6] = auVar104._7_16_;
        pauVar138[5] = auVar105._7_16_;
        pauVar138[4] = auVar106._7_16_;
        pauVar138[3] = auVar107._7_16_;
        pauVar138[2] = auVar108._7_16_;
        pauVar138[1] = auVar109._7_16_;
        *pauVar138 = auVar110._7_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 8:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])(puVar135 + -1);
        uVar123 = *puVar135;
        uVar124 = puVar135[1];
        uVar121 = puVar135[2];
        uVar122 = puVar135[3];
        uVar119 = puVar135[4];
        uVar120 = puVar135[5];
        uVar117 = puVar135[6];
        uVar118 = puVar135[7];
        uVar115 = puVar135[8];
        uVar116 = puVar135[9];
        uVar113 = puVar135[10];
        uVar114 = puVar135[0xb];
        uVar111 = puVar135[0xc];
        uVar112 = puVar135[0xd];
        puVar139 = puVar135 + 0xe;
        uVar5 = puVar135[0xf];
        puVar135 = puVar135 + 0x10;
        *(undefined8 *)(pauVar138[7] + 8) = *puVar139;
        *(undefined8 *)pauVar138[8] = uVar5;
        *(undefined8 *)(pauVar138[6] + 8) = uVar111;
        *(undefined8 *)pauVar138[7] = uVar112;
        *(undefined8 *)(pauVar138[5] + 8) = uVar113;
        *(undefined8 *)pauVar138[6] = uVar114;
        *(undefined8 *)(pauVar138[4] + 8) = uVar115;
        *(undefined8 *)pauVar138[5] = uVar116;
        *(undefined8 *)(pauVar138[3] + 8) = uVar117;
        *(undefined8 *)pauVar138[4] = uVar118;
        *(undefined8 *)(pauVar138[2] + 8) = uVar119;
        *(undefined8 *)pauVar138[3] = uVar120;
        *(undefined8 *)(pauVar138[1] + 8) = uVar121;
        *(undefined8 *)pauVar138[2] = uVar122;
        *(undefined8 *)(*pauVar138 + 8) = uVar123;
        *(undefined8 *)pauVar138[1] = uVar124;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 9:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -9);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -9);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 7);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x17);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x27);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x37);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x47);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x67);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x57);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,9);
        pauVar138[6] = auVar104._9_16_;
        pauVar138[5] = auVar105._9_16_;
        pauVar138[4] = auVar106._9_16_;
        pauVar138[3] = auVar107._9_16_;
        pauVar138[2] = auVar108._9_16_;
        pauVar138[1] = auVar109._9_16_;
        *pauVar138 = auVar110._9_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 10:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -10);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -10);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 6);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x16);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x26);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x36);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x46);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x66);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x56);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,10);
        pauVar138[6] = auVar104._10_16_;
        pauVar138[5] = auVar105._10_16_;
        pauVar138[4] = auVar106._10_16_;
        pauVar138[3] = auVar107._10_16_;
        pauVar138[2] = auVar108._10_16_;
        pauVar138[1] = auVar109._10_16_;
        *pauVar138 = auVar110._10_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 0xb:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -0xb);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -0xb);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 5);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x15);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x25);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x35);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x45);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x65);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x55);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,0xb);
        pauVar138[6] = auVar104._11_16_;
        pauVar138[5] = auVar105._11_16_;
        pauVar138[4] = auVar106._11_16_;
        pauVar138[3] = auVar107._11_16_;
        pauVar138[2] = auVar108._11_16_;
        pauVar138[1] = auVar109._11_16_;
        *pauVar138 = auVar110._11_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 0xc:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -0xc);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -0xc);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 4);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x14);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x24);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x34);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x44);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 100);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x54);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,0xc);
        pauVar138[6] = auVar104._12_16_;
        pauVar138[5] = auVar105._12_16_;
        pauVar138[4] = auVar106._12_16_;
        pauVar138[3] = auVar107._12_16_;
        pauVar138[2] = auVar108._12_16_;
        pauVar138[1] = auVar109._12_16_;
        *pauVar138 = auVar110._12_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 0xd:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -0xd);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -0xd);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 3);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x13);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x23);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x33);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x43);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 99);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x53);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,0xd);
        pauVar138[6] = auVar104._13_16_;
        pauVar138[5] = auVar105._13_16_;
        pauVar138[4] = auVar106._13_16_;
        pauVar138[3] = auVar107._13_16_;
        pauVar138[2] = auVar108._13_16_;
        pauVar138[1] = auVar109._13_16_;
        *pauVar138 = auVar110._13_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 0xe:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -0xe);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -0xe);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 2);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x12);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x22);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x32);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x42);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x62);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x52);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,0xe);
        pauVar138[6] = auVar104._14_16_;
        pauVar138[5] = auVar105._14_16_;
        pauVar138[4] = auVar106._14_16_;
        pauVar138[3] = auVar107._14_16_;
        pauVar138[2] = auVar108._14_16_;
        pauVar138[1] = auVar109._14_16_;
        *pauVar138 = auVar110._14_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
      break;
    case 0xf:
      do {
        uVar137 = uVar130;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar135 + -0xf);
        auVar110 = *(undefined1 (*) [32])((long)puVar135 + -0xf);
        auVar109 = *(undefined1 (*) [32])((long)puVar135 + 1);
        auVar108 = *(undefined1 (*) [32])((long)puVar135 + 0x11);
        auVar107 = *(undefined1 (*) [32])((long)puVar135 + 0x21);
        auVar106 = *(undefined1 (*) [32])((long)puVar135 + 0x31);
        auVar105 = *(undefined1 (*) [32])((long)puVar135 + 0x41);
        pauVar1 = (undefined1 (*) [32])((long)puVar135 + 0x61);
        auVar104 = *(undefined1 (*) [32])((long)puVar135 + 0x51);
        puVar135 = puVar135 + 0x10;
        pauVar138[7] = SUB3216(*pauVar1,0xf);
        pauVar138[6] = auVar104._15_16_;
        pauVar138[5] = auVar105._15_16_;
        pauVar138[4] = auVar106._15_16_;
        pauVar138[3] = auVar107._15_16_;
        pauVar138[2] = auVar108._15_16_;
        pauVar138[1] = auVar109._15_16_;
        *pauVar138 = auVar110._15_16_;
        pauVar138 = pauVar138 + 8;
        uVar130 = uVar137 - 0x80;
      } while (0x7f < uVar137);
      *param_1 = in_XMM0;
      puVar140 = *pauVar138 + uVar137;
      puVar136 = (undefined1 *)((long)puVar135 + uVar137);
      switch(uVar137) {
      case 0:
        goto switchD_0072788a_caseD_0;
      case 1:
        goto switchD_0072788a_caseD_1;
      case 2:
        goto switchD_0072788a_caseD_2;
      case 3:
        goto switchD_0072788a_caseD_3;
      case 4:
        goto switchD_0072788a_caseD_4;
      case 5:
        goto switchD_0072788a_caseD_5;
      case 6:
        goto switchD_0072788a_caseD_6;
      case 7:
        goto switchD_0072788a_caseD_7;
      case 8:
        goto switchD_0072788a_caseD_8;
      case 9:
        goto switchD_0072788a_caseD_9;
      case 10:
        goto switchD_0072788a_caseD_a;
      case 0xb:
        goto switchD_0072788a_caseD_b;
      case 0xc:
        goto switchD_0072788a_caseD_c;
      case 0xd:
        goto switchD_0072788a_caseD_d;
      case 0xe:
        goto switchD_0072788a_caseD_e;
      case 0xf:
        goto switchD_0072788a_caseD_f;
      case 0x11:
        goto switchD_0072788a_caseD_11;
      case 0x12:
        goto switchD_0072788a_caseD_12;
      case 0x13:
        goto switchD_0072788a_caseD_13;
      case 0x14:
        goto switchD_0072788a_caseD_14;
      case 0x15:
        goto switchD_0072788a_caseD_15;
      case 0x16:
        goto switchD_0072788a_caseD_16;
      case 0x17:
        goto switchD_0072788a_caseD_17;
      case 0x18:
        goto switchD_0072788a_caseD_18;
      case 0x19:
        goto switchD_0072788a_caseD_19;
      case 0x1a:
        goto switchD_0072788a_caseD_1a;
      case 0x1b:
        goto switchD_0072788a_caseD_1b;
      case 0x1c:
        goto switchD_0072788a_caseD_1c;
      case 0x1d:
        goto switchD_0072788a_caseD_1d;
      case 0x1e:
        goto switchD_0072788a_caseD_1e;
      case 0x1f:
        goto switchD_0072788a_caseD_1f;
      case 0x20:
        goto switchD_0072788a_caseD_20;
      case 0x21:
        goto switchD_0072788a_caseD_21;
      case 0x22:
        goto switchD_0072788a_caseD_22;
      case 0x23:
        goto switchD_0072788a_caseD_23;
      case 0x24:
        goto switchD_0072788a_caseD_24;
      case 0x25:
        goto switchD_0072788a_caseD_25;
      case 0x26:
        goto switchD_0072788a_caseD_26;
      case 0x27:
        goto switchD_0072788a_caseD_27;
      case 0x28:
        goto switchD_0072788a_caseD_28;
      case 0x29:
        goto switchD_0072788a_caseD_29;
      case 0x2a:
        goto switchD_0072788a_caseD_2a;
      case 0x2b:
        goto switchD_0072788a_caseD_2b;
      case 0x2c:
        goto switchD_0072788a_caseD_2c;
      case 0x2d:
        goto switchD_0072788a_caseD_2d;
      case 0x2e:
        goto switchD_0072788a_caseD_2e;
      case 0x2f:
        goto switchD_0072788a_caseD_2f;
      case 0x30:
        goto switchD_0072788a_caseD_30;
      case 0x31:
        goto switchD_0072788a_caseD_31;
      case 0x32:
        goto switchD_0072788a_caseD_32;
      case 0x33:
        goto switchD_0072788a_caseD_33;
      case 0x34:
        goto switchD_0072788a_caseD_34;
      case 0x35:
        goto switchD_0072788a_caseD_35;
      case 0x36:
        goto switchD_0072788a_caseD_36;
      case 0x37:
        goto switchD_0072788a_caseD_37;
      case 0x38:
        goto switchD_0072788a_caseD_38;
      case 0x39:
        goto switchD_0072788a_caseD_39;
      case 0x3a:
        goto switchD_0072788a_caseD_3a;
      case 0x3b:
        goto switchD_0072788a_caseD_3b;
      case 0x3c:
        goto switchD_0072788a_caseD_3c;
      case 0x3d:
        goto switchD_0072788a_caseD_3d;
      case 0x3e:
        goto switchD_0072788a_caseD_3e;
      case 0x3f:
        goto switchD_0072788a_caseD_3f;
      case 0x40:
        goto switchD_0072788a_caseD_40;
      case 0x41:
        goto switchD_0072788a_caseD_41;
      case 0x42:
        goto switchD_0072788a_caseD_42;
      case 0x43:
        goto switchD_0072788a_caseD_43;
      case 0x44:
        goto switchD_0072788a_caseD_44;
      case 0x45:
        goto switchD_0072788a_caseD_45;
      case 0x46:
        goto switchD_0072788a_caseD_46;
      case 0x47:
        goto switchD_0072788a_caseD_47;
      case 0x48:
        goto switchD_0072788a_caseD_48;
      case 0x49:
        goto switchD_0072788a_caseD_49;
      case 0x4a:
        goto switchD_0072788a_caseD_4a;
      case 0x4b:
        goto switchD_0072788a_caseD_4b;
      case 0x4c:
        goto switchD_0072788a_caseD_4c;
      case 0x4d:
        goto switchD_0072788a_caseD_4d;
      case 0x4e:
        goto switchD_0072788a_caseD_4e;
      case 0x4f:
        goto switchD_0072788a_caseD_4f;
      case 0x50:
        goto switchD_0072788a_caseD_50;
      case 0x51:
        goto switchD_0072788a_caseD_51;
      case 0x52:
        goto switchD_0072788a_caseD_52;
      case 0x53:
        goto switchD_0072788a_caseD_53;
      case 0x54:
        goto switchD_0072788a_caseD_54;
      case 0x55:
        goto switchD_0072788a_caseD_55;
      case 0x56:
        goto switchD_0072788a_caseD_56;
      case 0x57:
        goto switchD_0072788a_caseD_57;
      case 0x58:
        goto switchD_0072788a_caseD_58;
      case 0x59:
        goto switchD_0072788a_caseD_59;
      case 0x5a:
        goto switchD_0072788a_caseD_5a;
      case 0x5b:
        goto switchD_0072788a_caseD_5b;
      case 0x5c:
        goto switchD_0072788a_caseD_5c;
      case 0x5d:
        goto switchD_0072788a_caseD_5d;
      case 0x5e:
        goto switchD_0072788a_caseD_5e;
      case 0x5f:
        goto switchD_0072788a_caseD_5f;
      case 0x60:
        goto switchD_0072788a_caseD_60;
      case 0x61:
        goto switchD_0072788a_caseD_61;
      case 0x62:
        goto switchD_0072788a_caseD_62;
      case 99:
        goto switchD_0072788a_caseD_63;
      case 100:
        goto switchD_0072788a_caseD_64;
      case 0x65:
        goto switchD_0072788a_caseD_65;
      case 0x66:
        goto switchD_0072788a_caseD_66;
      case 0x67:
        goto switchD_0072788a_caseD_67;
      case 0x68:
        goto switchD_0072788a_caseD_68;
      case 0x69:
        goto switchD_0072788a_caseD_69;
      case 0x6a:
        goto switchD_0072788a_caseD_6a;
      case 0x6b:
        goto switchD_0072788a_caseD_6b;
      case 0x6c:
        goto switchD_0072788a_caseD_6c;
      case 0x6d:
        goto switchD_0072788a_caseD_6d;
      case 0x6e:
        goto switchD_0072788a_caseD_6e;
      case 0x6f:
        goto switchD_0072788a_caseD_6f;
      case 0x70:
        goto switchD_0072788a_caseD_70;
      case 0x71:
        goto switchD_0072788a_caseD_71;
      case 0x72:
        goto switchD_0072788a_caseD_72;
      case 0x73:
        goto switchD_0072788a_caseD_73;
      case 0x74:
        goto switchD_0072788a_caseD_74;
      case 0x75:
        goto switchD_0072788a_caseD_75;
      case 0x76:
        goto switchD_0072788a_caseD_76;
      case 0x77:
        goto switchD_0072788a_caseD_77;
      case 0x78:
        goto switchD_0072788a_caseD_78;
      case 0x79:
        goto switchD_0072788a_caseD_79;
      case 0x7a:
        goto switchD_0072788a_caseD_7a;
      case 0x7b:
        goto switchD_0072788a_caseD_7b;
      case 0x7c:
        goto switchD_0072788a_caseD_7c;
      case 0x7d:
        goto switchD_0072788a_caseD_7d;
      case 0x7e:
        goto switchD_0072788a_caseD_7e;
      case 0x7f:
        goto switchD_0072788a_caseD_7f;
      }
    }
switchD_0072788a_caseD_10:
    auVar144 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x10));
    *(undefined1 (*) [16])(puVar140 + -0x10) = auVar144;
switchD_0072788a_caseD_0:
    return pcVar127;
  }
  if ((byte)param_2 <= (byte)param_1) {
    switch(param_3) {
    case (uint *)0x0:
      goto switchD_0072789e_caseD_0;
    case (uint *)0x1:
      goto switchD_0072789e_caseD_1;
    case (uint *)0x2:
      goto switchD_0072789e_caseD_2;
    case (uint *)0x3:
      goto switchD_0072789e_caseD_3;
    case (uint *)0x4:
      goto switchD_0072789e_caseD_4;
    case (uint *)0x5:
      goto switchD_0072789e_caseD_5;
    case (uint *)0x6:
      goto switchD_0072789e_caseD_6;
    case (uint *)0x7:
      goto switchD_0072789e_caseD_7;
    case (uint *)0x8:
      goto switchD_0072789e_caseD_8;
    case (uint *)0x9:
      goto switchD_0072789e_caseD_9;
    case (uint *)0xa:
      goto switchD_0072789e_caseD_a;
    case (uint *)0xb:
      goto switchD_0072789e_caseD_b;
    case (uint *)0xc:
      goto switchD_0072789e_caseD_c;
    case (uint *)0xd:
      goto switchD_0072789e_caseD_d;
    case (uint *)0xe:
      goto switchD_0072789e_caseD_e;
    case (uint *)0xf:
      goto switchD_0072789e_caseD_f;
    case (uint *)0x10:
      goto switchD_0072789e_caseD_10;
    case (uint *)0x11:
      goto switchD_0072789e_caseD_11;
    case (uint *)0x12:
      goto switchD_0072789e_caseD_12;
    case (uint *)0x13:
      goto switchD_0072789e_caseD_13;
    case (uint *)0x14:
      goto switchD_0072789e_caseD_14;
    case (uint *)0x15:
      goto switchD_0072789e_caseD_15;
    case (uint *)0x16:
      goto switchD_0072789e_caseD_16;
    case (uint *)0x17:
      goto switchD_0072789e_caseD_17;
    case (uint *)0x18:
      goto switchD_0072789e_caseD_18;
    case (uint *)0x19:
      goto switchD_0072789e_caseD_19;
    case (uint *)0x1a:
      goto switchD_0072789e_caseD_1a;
    case (uint *)0x1b:
      goto switchD_0072789e_caseD_1b;
    case (uint *)0x1c:
      goto switchD_0072789e_caseD_1c;
    case (uint *)0x1d:
      goto switchD_0072789e_caseD_1d;
    case (uint *)0x1e:
      goto switchD_0072789e_caseD_1e;
    case (uint *)0x1f:
      goto switchD_0072789e_caseD_1f;
    case (uint *)0x20:
      goto switchD_0072789e_caseD_20;
    case (uint *)0x21:
      goto switchD_0072789e_caseD_21;
    case (uint *)0x22:
      goto switchD_0072789e_caseD_22;
    case (uint *)0x23:
      goto switchD_0072789e_caseD_23;
    case (uint *)0x24:
      goto switchD_0072789e_caseD_24;
    case (uint *)0x25:
      goto switchD_0072789e_caseD_25;
    case (uint *)0x26:
      goto switchD_0072789e_caseD_26;
    case (uint *)0x27:
      goto switchD_0072789e_caseD_27;
    case (uint *)0x28:
      goto switchD_0072789e_caseD_28;
    case (uint *)0x29:
      goto switchD_0072789e_caseD_29;
    case (uint *)0x2a:
      goto switchD_0072789e_caseD_2a;
    case (uint *)0x2b:
      goto switchD_0072789e_caseD_2b;
    case (uint *)0x2c:
      goto switchD_0072789e_caseD_2c;
    case (uint *)0x2d:
      goto switchD_0072789e_caseD_2d;
    case (uint *)0x2e:
      goto switchD_0072789e_caseD_2e;
    case (uint *)0x2f:
      goto switchD_0072789e_caseD_2f;
    case (uint *)0x30:
      goto switchD_0072789e_caseD_30;
    case (uint *)0x31:
      goto switchD_0072789e_caseD_31;
    case (uint *)0x32:
      goto switchD_0072789e_caseD_32;
    case (uint *)0x33:
      goto switchD_0072789e_caseD_33;
    case (uint *)0x34:
      goto switchD_0072789e_caseD_34;
    case (uint *)0x35:
      goto switchD_0072789e_caseD_35;
    case (uint *)0x36:
      goto switchD_0072789e_caseD_36;
    case (uint *)0x37:
      goto switchD_0072789e_caseD_37;
    case (uint *)0x38:
      goto switchD_0072789e_caseD_38;
    case (uint *)0x39:
      goto switchD_0072789e_caseD_39;
    case (uint *)0x3a:
      goto switchD_0072789e_caseD_3a;
    case (uint *)0x3b:
      goto switchD_0072789e_caseD_3b;
    case (uint *)0x3c:
      goto switchD_0072789e_caseD_3c;
    case (uint *)0x3d:
      goto switchD_0072789e_caseD_3d;
    case (uint *)0x3e:
      goto switchD_0072789e_caseD_3e;
    case (uint *)0x3f:
      goto switchD_0072789e_caseD_3f;
    case (uint *)0x40:
      goto switchD_0072789e_caseD_40;
    case (uint *)0x41:
      goto switchD_0072789e_caseD_41;
    case (uint *)0x42:
      goto switchD_0072789e_caseD_42;
    case (uint *)0x43:
      goto switchD_0072789e_caseD_43;
    case (uint *)0x44:
      goto switchD_0072789e_caseD_44;
    case (uint *)0x45:
      goto switchD_0072789e_caseD_45;
    case (uint *)0x46:
      goto switchD_0072789e_caseD_46;
    case (uint *)0x47:
      goto switchD_0072789e_caseD_47;
    case (uint *)0x48:
      goto switchD_0072789e_caseD_48;
    case (uint *)0x49:
      goto switchD_0072789e_caseD_49;
    case (uint *)0x4a:
      goto switchD_0072789e_caseD_4a;
    case (uint *)0x4b:
      goto switchD_0072789e_caseD_4b;
    case (uint *)0x4c:
      goto switchD_0072789e_caseD_4c;
    case (uint *)0x4d:
      goto switchD_0072789e_caseD_4d;
    case (uint *)0x4e:
      goto switchD_0072789e_caseD_4e;
    case (uint *)0x4f:
      goto switchD_0072789e_caseD_4f;
    case (uint *)0x50:
      goto switchD_0072789e_caseD_50;
    case (uint *)0x51:
      goto switchD_0072789e_caseD_51;
    case (uint *)0x52:
      goto switchD_0072789e_caseD_52;
    case (uint *)0x53:
      goto switchD_0072789e_caseD_53;
    case (uint *)0x54:
      goto switchD_0072789e_caseD_54;
    case (uint *)0x55:
      goto switchD_0072789e_caseD_55;
    case (uint *)0x56:
      goto switchD_0072789e_caseD_56;
    case (uint *)0x57:
      goto switchD_0072789e_caseD_57;
    case (uint *)0x58:
      goto switchD_0072789e_caseD_58;
    case (uint *)0x59:
      goto switchD_0072789e_caseD_59;
    case (uint *)0x5a:
      goto switchD_0072789e_caseD_5a;
    case (uint *)0x5b:
      goto switchD_0072789e_caseD_5b;
    case (uint *)0x5c:
      goto switchD_0072789e_caseD_5c;
    case (uint *)0x5d:
      goto switchD_0072789e_caseD_5d;
    case (uint *)0x5e:
      goto switchD_0072789e_caseD_5e;
    case (uint *)0x5f:
      goto switchD_0072789e_caseD_5f;
    case (uint *)0x60:
      break;
    case (uint *)0x61:
      goto switchD_0072789e_caseD_61;
    case (uint *)0x62:
      goto switchD_0072789e_caseD_62;
    case (uint *)0x63:
      goto switchD_0072789e_caseD_63;
    case (uint *)0x64:
      goto switchD_0072789e_caseD_64;
    case (uint *)0x65:
      goto switchD_0072789e_caseD_65;
    case (uint *)0x66:
      goto switchD_0072789e_caseD_66;
    case (uint *)0x67:
      goto switchD_0072789e_caseD_67;
    case (uint *)0x68:
      goto switchD_0072789e_caseD_68;
    case (uint *)0x69:
      goto switchD_0072789e_caseD_69;
    case (uint *)0x6a:
      goto switchD_0072789e_caseD_6a;
    case (uint *)0x6b:
      goto switchD_0072789e_caseD_6b;
    case (uint *)0x6c:
      goto switchD_0072789e_caseD_6c;
    case (uint *)0x6d:
      goto switchD_0072789e_caseD_6d;
    case (uint *)0x6e:
      goto switchD_0072789e_caseD_6e;
    case (uint *)0x6f:
      goto switchD_0072789e_caseD_6f;
    case (uint *)0x80:
      in_XMM0 = lddqu(in_XMM0,param_2[7]);
      param_1[7] = in_XMM0;
    case (uint *)0x70:
switchD_0072789e_caseD_70:
      in_XMM0 = lddqu(in_XMM0,param_2[6]);
      param_1[6] = in_XMM0;
      break;
    case (uint *)0x81:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 1));
      *(undefined1 (*) [16])(param_1[7] + 1) = in_XMM0;
    case (uint *)0x71:
switchD_0072789e_caseD_71:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 1));
      *(undefined1 (*) [16])(param_1[6] + 1) = in_XMM0;
switchD_0072789e_caseD_61:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 1));
      *(undefined1 (*) [16])(param_1[5] + 1) = in_XMM0;
      goto switchD_0072789e_caseD_51;
    case (uint *)0x82:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 2));
      *(undefined1 (*) [16])(param_1[7] + 2) = in_XMM0;
    case (uint *)0x72:
switchD_0072789e_caseD_72:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 2));
      *(undefined1 (*) [16])(param_1[6] + 2) = in_XMM0;
switchD_0072789e_caseD_62:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 2));
      *(undefined1 (*) [16])(param_1[5] + 2) = in_XMM0;
      goto switchD_0072789e_caseD_52;
    case (uint *)0x83:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 3));
      *(undefined1 (*) [16])(param_1[7] + 3) = in_XMM0;
    case (uint *)0x73:
switchD_0072789e_caseD_73:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 3));
      *(undefined1 (*) [16])(param_1[6] + 3) = in_XMM0;
switchD_0072789e_caseD_63:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 3));
      *(undefined1 (*) [16])(param_1[5] + 3) = in_XMM0;
      goto switchD_0072789e_caseD_53;
    case (uint *)0x84:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 4));
      *(undefined1 (*) [16])(param_1[7] + 4) = in_XMM0;
    case (uint *)0x74:
switchD_0072789e_caseD_74:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 4));
      *(undefined1 (*) [16])(param_1[6] + 4) = in_XMM0;
switchD_0072789e_caseD_64:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 4));
      *(undefined1 (*) [16])(param_1[5] + 4) = in_XMM0;
      goto switchD_0072789e_caseD_54;
    case (uint *)0x85:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 5));
      *(undefined1 (*) [16])(param_1[7] + 5) = in_XMM0;
    case (uint *)0x75:
switchD_0072789e_caseD_75:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 5));
      *(undefined1 (*) [16])(param_1[6] + 5) = in_XMM0;
switchD_0072789e_caseD_65:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 5));
      *(undefined1 (*) [16])(param_1[5] + 5) = in_XMM0;
      goto switchD_0072789e_caseD_55;
    case (uint *)0x86:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 6));
      *(undefined1 (*) [16])(param_1[7] + 6) = in_XMM0;
    case (uint *)0x76:
switchD_0072789e_caseD_76:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 6));
      *(undefined1 (*) [16])(param_1[6] + 6) = in_XMM0;
switchD_0072789e_caseD_66:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 6));
      *(undefined1 (*) [16])(param_1[5] + 6) = in_XMM0;
      goto switchD_0072789e_caseD_56;
    case (uint *)0x87:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 7));
      *(undefined1 (*) [16])(param_1[7] + 7) = in_XMM0;
    case (uint *)0x77:
switchD_0072789e_caseD_77:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 7));
      *(undefined1 (*) [16])(param_1[6] + 7) = in_XMM0;
switchD_0072789e_caseD_67:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 7));
      *(undefined1 (*) [16])(param_1[5] + 7) = in_XMM0;
      goto switchD_0072789e_caseD_57;
    case (uint *)0x88:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 8));
      *(undefined1 (*) [16])(param_1[7] + 8) = in_XMM0;
    case (uint *)0x78:
switchD_0072789e_caseD_78:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 8));
      *(undefined1 (*) [16])(param_1[6] + 8) = in_XMM0;
switchD_0072789e_caseD_68:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 8));
      *(undefined1 (*) [16])(param_1[5] + 8) = in_XMM0;
      goto switchD_0072789e_caseD_58;
    case (uint *)0x89:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 9));
      *(undefined1 (*) [16])(param_1[7] + 9) = in_XMM0;
    case (uint *)0x79:
switchD_0072789e_caseD_79:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 9));
      *(undefined1 (*) [16])(param_1[6] + 9) = in_XMM0;
switchD_0072789e_caseD_69:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 9));
      *(undefined1 (*) [16])(param_1[5] + 9) = in_XMM0;
      goto switchD_0072789e_caseD_59;
    case (uint *)0x8a:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 10));
      *(undefined1 (*) [16])(param_1[7] + 10) = in_XMM0;
    case (uint *)0x7a:
switchD_0072789e_caseD_7a:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 10));
      *(undefined1 (*) [16])(param_1[6] + 10) = in_XMM0;
switchD_0072789e_caseD_6a:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 10));
      *(undefined1 (*) [16])(param_1[5] + 10) = in_XMM0;
      goto switchD_0072789e_caseD_5a;
    case (uint *)0x8b:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xb));
      *(undefined1 (*) [16])(param_1[7] + 0xb) = in_XMM0;
    case (uint *)0x7b:
switchD_0072789e_caseD_7b:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xb));
      *(undefined1 (*) [16])(param_1[6] + 0xb) = in_XMM0;
switchD_0072789e_caseD_6b:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xb));
      *(undefined1 (*) [16])(param_1[5] + 0xb) = in_XMM0;
      goto switchD_0072789e_caseD_5b;
    case (uint *)0x8c:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xc));
      *(undefined1 (*) [16])(param_1[7] + 0xc) = in_XMM0;
    case (uint *)0x7c:
switchD_0072789e_caseD_7c:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xc));
      *(undefined1 (*) [16])(param_1[6] + 0xc) = in_XMM0;
switchD_0072789e_caseD_6c:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xc));
      *(undefined1 (*) [16])(param_1[5] + 0xc) = in_XMM0;
      goto switchD_0072789e_caseD_5c;
    case (uint *)0x8d:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xd));
      *(undefined1 (*) [16])(param_1[7] + 0xd) = in_XMM0;
    case (uint *)0x7d:
switchD_0072789e_caseD_7d:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xd));
      *(undefined1 (*) [16])(param_1[6] + 0xd) = in_XMM0;
switchD_0072789e_caseD_6d:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xd));
      *(undefined1 (*) [16])(param_1[5] + 0xd) = in_XMM0;
      goto switchD_0072789e_caseD_5d;
    case (uint *)0x8e:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xe));
      *(undefined1 (*) [16])(param_1[7] + 0xe) = in_XMM0;
    case (uint *)0x7e:
switchD_0072789e_caseD_7e:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xe));
      *(undefined1 (*) [16])(param_1[6] + 0xe) = in_XMM0;
switchD_0072789e_caseD_6e:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xe));
      *(undefined1 (*) [16])(param_1[5] + 0xe) = in_XMM0;
      goto switchD_0072789e_caseD_5e;
    case (uint *)0x8f:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xf));
      *(undefined1 (*) [16])(param_1[7] + 0xf) = in_XMM0;
    case (uint *)0x7f:
switchD_0072789e_caseD_7f:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xf));
      *(undefined1 (*) [16])(param_1[6] + 0xf) = in_XMM0;
switchD_0072789e_caseD_6f:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xf));
      *(undefined1 (*) [16])(param_1[5] + 0xf) = in_XMM0;
      goto switchD_0072789e_caseD_5f;
    }
switchD_0072789e_caseD_60:
    in_XMM0 = lddqu(in_XMM0,param_2[5]);
    param_1[5] = in_XMM0;
    goto switchD_0072789e_caseD_50;
  }
  puVar136 = *param_2 + (long)param_3;
  puVar140 = *param_1 + (long)param_3;
  switch(param_3) {
  case (uint *)0x0:
    goto switchD_0072788a_caseD_0;
  case (uint *)0x1:
    goto switchD_0072788a_caseD_1;
  case (uint *)0x2:
    goto switchD_0072788a_caseD_2;
  case (uint *)0x3:
    goto switchD_0072788a_caseD_3;
  case (uint *)0x4:
    goto switchD_0072788a_caseD_4;
  case (uint *)0x5:
    goto switchD_0072788a_caseD_5;
  case (uint *)0x6:
    goto switchD_0072788a_caseD_6;
  case (uint *)0x7:
    goto switchD_0072788a_caseD_7;
  case (uint *)0x8:
    goto switchD_0072788a_caseD_8;
  case (uint *)0x9:
    goto switchD_0072788a_caseD_9;
  case (uint *)0xa:
    goto switchD_0072788a_caseD_a;
  case (uint *)0xb:
    goto switchD_0072788a_caseD_b;
  case (uint *)0xc:
    goto switchD_0072788a_caseD_c;
  case (uint *)0xd:
    goto switchD_0072788a_caseD_d;
  case (uint *)0xe:
    goto switchD_0072788a_caseD_e;
  case (uint *)0xf:
    goto switchD_0072788a_caseD_f;
  case (uint *)0x10:
    goto switchD_0072788a_caseD_10;
  case (uint *)0x11:
    goto switchD_0072788a_caseD_11;
  case (uint *)0x12:
    goto switchD_0072788a_caseD_12;
  case (uint *)0x13:
    goto switchD_0072788a_caseD_13;
  case (uint *)0x14:
    goto switchD_0072788a_caseD_14;
  case (uint *)0x15:
    goto switchD_0072788a_caseD_15;
  case (uint *)0x16:
    goto switchD_0072788a_caseD_16;
  case (uint *)0x17:
    goto switchD_0072788a_caseD_17;
  case (uint *)0x18:
    goto switchD_0072788a_caseD_18;
  case (uint *)0x19:
    goto switchD_0072788a_caseD_19;
  case (uint *)0x1a:
    goto switchD_0072788a_caseD_1a;
  case (uint *)0x1b:
    goto switchD_0072788a_caseD_1b;
  case (uint *)0x1c:
    goto switchD_0072788a_caseD_1c;
  case (uint *)0x1d:
    goto switchD_0072788a_caseD_1d;
  case (uint *)0x1e:
    goto switchD_0072788a_caseD_1e;
  case (uint *)0x1f:
    goto switchD_0072788a_caseD_1f;
  case (uint *)0x20:
    goto switchD_0072788a_caseD_20;
  case (uint *)0x21:
    goto switchD_0072788a_caseD_21;
  case (uint *)0x22:
    goto switchD_0072788a_caseD_22;
  case (uint *)0x23:
    goto switchD_0072788a_caseD_23;
  case (uint *)0x24:
    goto switchD_0072788a_caseD_24;
  case (uint *)0x25:
    goto switchD_0072788a_caseD_25;
  case (uint *)0x26:
    goto switchD_0072788a_caseD_26;
  case (uint *)0x27:
    goto switchD_0072788a_caseD_27;
  case (uint *)0x28:
    goto switchD_0072788a_caseD_28;
  case (uint *)0x29:
    goto switchD_0072788a_caseD_29;
  case (uint *)0x2a:
    goto switchD_0072788a_caseD_2a;
  case (uint *)0x2b:
    goto switchD_0072788a_caseD_2b;
  case (uint *)0x2c:
    goto switchD_0072788a_caseD_2c;
  case (uint *)0x2d:
    goto switchD_0072788a_caseD_2d;
  case (uint *)0x2e:
    goto switchD_0072788a_caseD_2e;
  case (uint *)0x2f:
    goto switchD_0072788a_caseD_2f;
  case (uint *)0x30:
    goto switchD_0072788a_caseD_30;
  case (uint *)0x31:
    goto switchD_0072788a_caseD_31;
  case (uint *)0x32:
    goto switchD_0072788a_caseD_32;
  case (uint *)0x33:
    goto switchD_0072788a_caseD_33;
  case (uint *)0x34:
    goto switchD_0072788a_caseD_34;
  case (uint *)0x35:
    goto switchD_0072788a_caseD_35;
  case (uint *)0x36:
    goto switchD_0072788a_caseD_36;
  case (uint *)0x37:
    goto switchD_0072788a_caseD_37;
  case (uint *)0x38:
    goto switchD_0072788a_caseD_38;
  case (uint *)0x39:
    goto switchD_0072788a_caseD_39;
  case (uint *)0x3a:
    goto switchD_0072788a_caseD_3a;
  case (uint *)0x3b:
    goto switchD_0072788a_caseD_3b;
  case (uint *)0x3c:
    goto switchD_0072788a_caseD_3c;
  case (uint *)0x3d:
    goto switchD_0072788a_caseD_3d;
  case (uint *)0x3e:
    goto switchD_0072788a_caseD_3e;
  case (uint *)0x3f:
    goto switchD_0072788a_caseD_3f;
  case (uint *)0x40:
    goto switchD_0072788a_caseD_40;
  case (uint *)0x41:
    goto switchD_0072788a_caseD_41;
  case (uint *)0x42:
    goto switchD_0072788a_caseD_42;
  case (uint *)0x43:
    goto switchD_0072788a_caseD_43;
  case (uint *)0x44:
    goto switchD_0072788a_caseD_44;
  case (uint *)0x45:
    goto switchD_0072788a_caseD_45;
  case (uint *)0x46:
    goto switchD_0072788a_caseD_46;
  case (uint *)0x47:
    goto switchD_0072788a_caseD_47;
  case (uint *)0x48:
    goto switchD_0072788a_caseD_48;
  case (uint *)0x49:
    goto switchD_0072788a_caseD_49;
  case (uint *)0x4a:
    goto switchD_0072788a_caseD_4a;
  case (uint *)0x4b:
    goto switchD_0072788a_caseD_4b;
  case (uint *)0x4c:
    goto switchD_0072788a_caseD_4c;
  case (uint *)0x4d:
    goto switchD_0072788a_caseD_4d;
  case (uint *)0x4e:
    goto switchD_0072788a_caseD_4e;
  case (uint *)0x4f:
    goto switchD_0072788a_caseD_4f;
  case (uint *)0x50:
    goto switchD_0072788a_caseD_50;
  case (uint *)0x51:
    goto switchD_0072788a_caseD_51;
  case (uint *)0x52:
    goto switchD_0072788a_caseD_52;
  case (uint *)0x53:
    goto switchD_0072788a_caseD_53;
  case (uint *)0x54:
    goto switchD_0072788a_caseD_54;
  case (uint *)0x55:
    goto switchD_0072788a_caseD_55;
  case (uint *)0x56:
    goto switchD_0072788a_caseD_56;
  case (uint *)0x57:
    goto switchD_0072788a_caseD_57;
  case (uint *)0x58:
    goto switchD_0072788a_caseD_58;
  case (uint *)0x59:
    goto switchD_0072788a_caseD_59;
  case (uint *)0x5a:
    goto switchD_0072788a_caseD_5a;
  case (uint *)0x5b:
    goto switchD_0072788a_caseD_5b;
  case (uint *)0x5c:
    goto switchD_0072788a_caseD_5c;
  case (uint *)0x5d:
    goto switchD_0072788a_caseD_5d;
  case (uint *)0x5e:
    goto switchD_0072788a_caseD_5e;
  case (uint *)0x5f:
    goto switchD_0072788a_caseD_5f;
  case (uint *)0x60:
    break;
  case (uint *)0x61:
    goto switchD_0072788a_caseD_61;
  case (uint *)0x62:
    goto switchD_0072788a_caseD_62;
  case (uint *)0x63:
    goto switchD_0072788a_caseD_63;
  case (uint *)0x64:
    goto switchD_0072788a_caseD_64;
  case (uint *)0x65:
    goto switchD_0072788a_caseD_65;
  case (uint *)0x66:
    goto switchD_0072788a_caseD_66;
  case (uint *)0x67:
    goto switchD_0072788a_caseD_67;
  case (uint *)0x68:
    goto switchD_0072788a_caseD_68;
  case (uint *)0x69:
    goto switchD_0072788a_caseD_69;
  case (uint *)0x6a:
    goto switchD_0072788a_caseD_6a;
  case (uint *)0x6b:
    goto switchD_0072788a_caseD_6b;
  case (uint *)0x6c:
    goto switchD_0072788a_caseD_6c;
  case (uint *)0x6d:
    goto switchD_0072788a_caseD_6d;
  case (uint *)0x6e:
    goto switchD_0072788a_caseD_6e;
  case (uint *)0x6f:
    goto switchD_0072788a_caseD_6f;
  case (uint *)0x80:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x80));
    *(undefined1 (*) [16])(puVar140 + -0x80) = in_XMM0;
  case (uint *)0x70:
switchD_0072788a_caseD_70:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x70));
    *(undefined1 (*) [16])(puVar140 + -0x70) = in_XMM0;
    break;
  case (uint *)0x81:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x81));
    *(undefined1 (*) [16])(puVar140 + -0x81) = in_XMM0;
  case (uint *)0x71:
switchD_0072788a_caseD_71:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x71));
    *(undefined1 (*) [16])(puVar140 + -0x71) = in_XMM0;
switchD_0072788a_caseD_61:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x61));
    *(undefined1 (*) [16])(puVar140 + -0x61) = in_XMM0;
    goto switchD_0072788a_caseD_51;
  case (uint *)0x82:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x82));
    *(undefined1 (*) [16])(puVar140 + -0x82) = in_XMM0;
  case (uint *)0x72:
switchD_0072788a_caseD_72:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x72));
    *(undefined1 (*) [16])(puVar140 + -0x72) = in_XMM0;
switchD_0072788a_caseD_62:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x62));
    *(undefined1 (*) [16])(puVar140 + -0x62) = in_XMM0;
    goto switchD_0072788a_caseD_52;
  case (uint *)0x83:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x83));
    *(undefined1 (*) [16])(puVar140 + -0x83) = in_XMM0;
  case (uint *)0x73:
switchD_0072788a_caseD_73:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x73));
    *(undefined1 (*) [16])(puVar140 + -0x73) = in_XMM0;
switchD_0072788a_caseD_63:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -99));
    *(undefined1 (*) [16])(puVar140 + -99) = in_XMM0;
    goto switchD_0072788a_caseD_53;
  case (uint *)0x84:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x84));
    *(undefined1 (*) [16])(puVar140 + -0x84) = in_XMM0;
  case (uint *)0x74:
switchD_0072788a_caseD_74:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x74));
    *(undefined1 (*) [16])(puVar140 + -0x74) = in_XMM0;
switchD_0072788a_caseD_64:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -100));
    *(undefined1 (*) [16])(puVar140 + -100) = in_XMM0;
    goto switchD_0072788a_caseD_54;
  case (uint *)0x85:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x85));
    *(undefined1 (*) [16])(puVar140 + -0x85) = in_XMM0;
  case (uint *)0x75:
switchD_0072788a_caseD_75:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x75));
    *(undefined1 (*) [16])(puVar140 + -0x75) = in_XMM0;
switchD_0072788a_caseD_65:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x65));
    *(undefined1 (*) [16])(puVar140 + -0x65) = in_XMM0;
    goto switchD_0072788a_caseD_55;
  case (uint *)0x86:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x86));
    *(undefined1 (*) [16])(puVar140 + -0x86) = in_XMM0;
  case (uint *)0x76:
switchD_0072788a_caseD_76:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x76));
    *(undefined1 (*) [16])(puVar140 + -0x76) = in_XMM0;
switchD_0072788a_caseD_66:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x66));
    *(undefined1 (*) [16])(puVar140 + -0x66) = in_XMM0;
    goto switchD_0072788a_caseD_56;
  case (uint *)0x87:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x87));
    *(undefined1 (*) [16])(puVar140 + -0x87) = in_XMM0;
  case (uint *)0x77:
switchD_0072788a_caseD_77:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x77));
    *(undefined1 (*) [16])(puVar140 + -0x77) = in_XMM0;
switchD_0072788a_caseD_67:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x67));
    *(undefined1 (*) [16])(puVar140 + -0x67) = in_XMM0;
    goto switchD_0072788a_caseD_57;
  case (uint *)0x88:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x88));
    *(undefined1 (*) [16])(puVar140 + -0x88) = in_XMM0;
  case (uint *)0x78:
switchD_0072788a_caseD_78:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x78));
    *(undefined1 (*) [16])(puVar140 + -0x78) = in_XMM0;
switchD_0072788a_caseD_68:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x68));
    *(undefined1 (*) [16])(puVar140 + -0x68) = in_XMM0;
    goto switchD_0072788a_caseD_58;
  case (uint *)0x89:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x89));
    *(undefined1 (*) [16])(puVar140 + -0x89) = in_XMM0;
  case (uint *)0x79:
switchD_0072788a_caseD_79:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x79));
    *(undefined1 (*) [16])(puVar140 + -0x79) = in_XMM0;
switchD_0072788a_caseD_69:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x69));
    *(undefined1 (*) [16])(puVar140 + -0x69) = in_XMM0;
    goto switchD_0072788a_caseD_59;
  case (uint *)0x8a:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x8a));
    *(undefined1 (*) [16])(puVar140 + -0x8a) = in_XMM0;
  case (uint *)0x7a:
switchD_0072788a_caseD_7a:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x7a));
    *(undefined1 (*) [16])(puVar140 + -0x7a) = in_XMM0;
switchD_0072788a_caseD_6a:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x6a));
    *(undefined1 (*) [16])(puVar140 + -0x6a) = in_XMM0;
    goto switchD_0072788a_caseD_5a;
  case (uint *)0x8b:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x8b));
    *(undefined1 (*) [16])(puVar140 + -0x8b) = in_XMM0;
  case (uint *)0x7b:
switchD_0072788a_caseD_7b:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x7b));
    *(undefined1 (*) [16])(puVar140 + -0x7b) = in_XMM0;
switchD_0072788a_caseD_6b:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x6b));
    *(undefined1 (*) [16])(puVar140 + -0x6b) = in_XMM0;
    goto switchD_0072788a_caseD_5b;
  case (uint *)0x8c:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x8c));
    *(undefined1 (*) [16])(puVar140 + -0x8c) = in_XMM0;
  case (uint *)0x7c:
switchD_0072788a_caseD_7c:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x7c));
    *(undefined1 (*) [16])(puVar140 + -0x7c) = in_XMM0;
switchD_0072788a_caseD_6c:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x6c));
    *(undefined1 (*) [16])(puVar140 + -0x6c) = in_XMM0;
    goto switchD_0072788a_caseD_5c;
  case (uint *)0x8d:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x8d));
    *(undefined1 (*) [16])(puVar140 + -0x8d) = in_XMM0;
  case (uint *)0x7d:
switchD_0072788a_caseD_7d:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x7d));
    *(undefined1 (*) [16])(puVar140 + -0x7d) = in_XMM0;
switchD_0072788a_caseD_6d:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x6d));
    *(undefined1 (*) [16])(puVar140 + -0x6d) = in_XMM0;
    goto switchD_0072788a_caseD_5d;
  case (uint *)0x8e:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x8e));
    *(undefined1 (*) [16])(puVar140 + -0x8e) = in_XMM0;
  case (uint *)0x7e:
switchD_0072788a_caseD_7e:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x7e));
    *(undefined1 (*) [16])(puVar140 + -0x7e) = in_XMM0;
switchD_0072788a_caseD_6e:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x6e));
    *(undefined1 (*) [16])(puVar140 + -0x6e) = in_XMM0;
    goto switchD_0072788a_caseD_5e;
  case (uint *)0x8f:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x8f));
    *(undefined1 (*) [16])(puVar140 + -0x8f) = in_XMM0;
  case (uint *)0x7f:
switchD_0072788a_caseD_7f:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x7f));
    *(undefined1 (*) [16])(puVar140 + -0x7f) = in_XMM0;
switchD_0072788a_caseD_6f:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x6f));
    *(undefined1 (*) [16])(puVar140 + -0x6f) = in_XMM0;
    goto switchD_0072788a_caseD_5f;
  }
switchD_0072788a_caseD_60:
  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar136 + -0x60));
  *(undefined1 (*) [16])(puVar140 + -0x60) = in_XMM0;
  goto switchD_0072788a_caseD_50;
}

