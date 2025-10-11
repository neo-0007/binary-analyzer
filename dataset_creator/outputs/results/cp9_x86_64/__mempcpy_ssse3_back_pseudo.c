
undefined1 *
__mempcpy_ssse3_back(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 (*pauVar1) [32];
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [32];
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
  undefined8 uVar110;
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
  undefined1 *puVar126;
  ulong uVar127;
  long lVar128;
  long lVar129;
  undefined8 *puVar130;
  undefined1 *puVar131;
  ulong uVar132;
  undefined1 (*pauVar133) [16];
  undefined8 *puVar134;
  undefined1 *puVar135;
  ulong uVar136;
  bool bVar137;
  undefined1 in_XMM0 [16];
  undefined1 auVar138 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar139 [16];
  
  puVar126 = *param_1 + param_3;
  if (0x8f < param_3) {
    if ((char)(byte)param_2 <= (char)(byte)param_1) {
      if (__x86_data_cache_size * 2 < param_3) {
        puVar126 = *param_1 + param_3;
        uVar4 = *(undefined8 *)(param_2[-1] + param_3);
        uVar110 = *(undefined8 *)(param_2[-1] + param_3 + 8);
        uVar132 = (ulong)puVar126 & 0xfffffffffffffff0;
        lVar128 = (long)param_2 + (param_3 - ((long)puVar126 - uVar132));
        param_3 = param_3 - ((long)puVar126 - uVar132);
        uVar127 = __x86_shared_cache_size_half;
        if (param_3 <= __x86_shared_cache_size_half) {
          uVar127 = param_3;
        }
        param_3 = param_3 - uVar127;
        if (0x1000 < param_3) {
          if (uVar127 << 3 < param_3) {
            param_3 = param_3 + uVar127;
            uVar127 = 0;
          }
          uVar136 = param_3 - 0x80;
          do {
            param_3 = uVar136;
            uVar136 = param_3 - 0x80;
            uVar111 = *(undefined8 *)(lVar128 + -8);
            uVar112 = *(undefined8 *)(lVar128 + -0x20);
            uVar113 = *(undefined8 *)(lVar128 + -0x18);
            uVar114 = *(undefined8 *)(lVar128 + -0x30);
            uVar115 = *(undefined8 *)(lVar128 + -0x28);
            uVar116 = *(undefined8 *)(lVar128 + -0x40);
            uVar117 = *(undefined8 *)(lVar128 + -0x38);
            uVar118 = *(undefined8 *)(lVar128 + -0x50);
            uVar119 = *(undefined8 *)(lVar128 + -0x48);
            uVar120 = *(undefined8 *)(lVar128 + -0x60);
            uVar121 = *(undefined8 *)(lVar128 + -0x58);
            uVar122 = *(undefined8 *)(lVar128 + -0x70);
            uVar123 = *(undefined8 *)(lVar128 + -0x68);
            uVar124 = *(undefined8 *)(lVar128 + -0x80);
            uVar125 = *(undefined8 *)(lVar128 + -0x78);
            *(undefined8 *)(uVar132 - 0x10) = *(undefined8 *)(lVar128 + -0x10);
            *(undefined8 *)(uVar132 - 8) = uVar111;
            *(undefined8 *)(uVar132 - 0x20) = uVar112;
            *(undefined8 *)(uVar132 - 0x18) = uVar113;
            *(undefined8 *)(uVar132 - 0x30) = uVar114;
            *(undefined8 *)(uVar132 - 0x28) = uVar115;
            *(undefined8 *)(uVar132 - 0x40) = uVar116;
            *(undefined8 *)(uVar132 - 0x38) = uVar117;
            *(undefined8 *)(uVar132 - 0x50) = uVar118;
            *(undefined8 *)(uVar132 - 0x48) = uVar119;
            *(undefined8 *)(uVar132 - 0x60) = uVar120;
            *(undefined8 *)(uVar132 - 0x58) = uVar121;
            *(undefined8 *)(uVar132 - 0x70) = uVar122;
            *(undefined8 *)(uVar132 - 0x68) = uVar123;
            *(undefined8 *)(uVar132 - 0x80) = uVar124;
            *(undefined8 *)(uVar132 - 0x78) = uVar125;
            lVar128 = lVar128 + -0x80;
            uVar132 = uVar132 - 0x80;
          } while (0x7f < param_3);
          if (uVar127 < 0x80) goto LAB_0071fa0b;
        }
        uVar136 = (param_3 + uVar127) - 0x80;
        do {
          bVar137 = 0x7f < uVar136;
          uVar136 = uVar136 - 0x80;
          uVar111 = *(undefined8 *)(lVar128 + -8);
          uVar112 = *(undefined8 *)(lVar128 + -0x20);
          uVar113 = *(undefined8 *)(lVar128 + -0x18);
          uVar114 = *(undefined8 *)(lVar128 + -0x30);
          uVar115 = *(undefined8 *)(lVar128 + -0x28);
          uVar116 = *(undefined8 *)(lVar128 + -0x40);
          uVar117 = *(undefined8 *)(lVar128 + -0x38);
          uVar118 = *(undefined8 *)(lVar128 + -0x50);
          uVar119 = *(undefined8 *)(lVar128 + -0x48);
          uVar120 = *(undefined8 *)(lVar128 + -0x60);
          uVar121 = *(undefined8 *)(lVar128 + -0x58);
          uVar122 = *(undefined8 *)(lVar128 + -0x70);
          uVar123 = *(undefined8 *)(lVar128 + -0x68);
          uVar124 = *(undefined8 *)(lVar128 + -0x80);
          uVar125 = *(undefined8 *)(lVar128 + -0x78);
          *(undefined8 *)(uVar132 - 0x10) = *(undefined8 *)(lVar128 + -0x10);
          *(undefined8 *)(uVar132 - 8) = uVar111;
          *(undefined8 *)(uVar132 - 0x20) = uVar112;
          *(undefined8 *)(uVar132 - 0x18) = uVar113;
          *(undefined8 *)(uVar132 - 0x30) = uVar114;
          *(undefined8 *)(uVar132 - 0x28) = uVar115;
          *(undefined8 *)(uVar132 - 0x40) = uVar116;
          *(undefined8 *)(uVar132 - 0x38) = uVar117;
          *(undefined8 *)(uVar132 - 0x50) = uVar118;
          *(undefined8 *)(uVar132 - 0x48) = uVar119;
          *(undefined8 *)(uVar132 - 0x60) = uVar120;
          *(undefined8 *)(uVar132 - 0x58) = uVar121;
          *(undefined8 *)(uVar132 - 0x70) = uVar122;
          *(undefined8 *)(uVar132 - 0x68) = uVar123;
          *(undefined8 *)(uVar132 - 0x80) = uVar124;
          *(undefined8 *)(uVar132 - 0x78) = uVar125;
          lVar128 = lVar128 + -0x80;
          uVar132 = uVar132 - 0x80;
        } while (bVar137);
LAB_0071fa0b:
        *(undefined8 *)(puVar126 + -0x10) = uVar4;
        *(undefined8 *)(puVar126 + -8) = uVar110;
        lVar129 = uVar136 + 0x80;
                    /* WARNING: Could not recover jumptable at 0x0071fa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar126 = (undefined1 *)
                   (*(code *)((long)&switchD_0071de9e::switchdataD_00820fd0 +
                             (long)(int)(&switchD_0071de9e::switchdataD_00820fd0)[lVar129]))
                             (uVar132 - lVar129,lVar128 - lVar129,
                              (code *)((long)&switchD_0071de9e::switchdataD_00820fd0 +
                                      (long)(int)(&switchD_0071de9e::switchdataD_00820fd0)[lVar129])
                             );
        return puVar126;
      }
      puVar131 = *param_1 + param_3;
      in_XMM0 = *(undefined1 (*) [16])(param_2[-1] + param_3);
      pauVar133 = (undefined1 (*) [16])(puVar131 + -0x10);
      uVar136 = (ulong)puVar131 & 0xf;
      uVar132 = (ulong)puVar131 ^ uVar136;
      uVar127 = (long)param_2 + (param_3 - uVar136);
      param_3 = param_3 - uVar136;
      if ((uVar127 & 0xf) == 0) {
        do {
          param_3 = param_3 - 0x80;
          in_XMM1 = *(undefined1 (*) [16])(uVar127 - 0x10);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          uVar4 = *(undefined8 *)(uVar127 - 0x18);
          *(undefined8 *)(uVar132 - 0x20) = *(undefined8 *)(uVar127 - 0x20);
          *(undefined8 *)(uVar132 - 0x18) = uVar4;
          uVar4 = *(undefined8 *)(uVar127 - 0x28);
          *(undefined8 *)(uVar132 - 0x30) = *(undefined8 *)(uVar127 - 0x30);
          *(undefined8 *)(uVar132 - 0x28) = uVar4;
          uVar4 = *(undefined8 *)(uVar127 - 0x38);
          *(undefined8 *)(uVar132 - 0x40) = *(undefined8 *)(uVar127 - 0x40);
          *(undefined8 *)(uVar132 - 0x38) = uVar4;
          uVar4 = *(undefined8 *)(uVar127 - 0x48);
          *(undefined8 *)(uVar132 - 0x50) = *(undefined8 *)(uVar127 - 0x50);
          *(undefined8 *)(uVar132 - 0x48) = uVar4;
          uVar4 = *(undefined8 *)(uVar127 - 0x58);
          *(undefined8 *)(uVar132 - 0x60) = *(undefined8 *)(uVar127 - 0x60);
          *(undefined8 *)(uVar132 - 0x58) = uVar4;
          uVar4 = *(undefined8 *)(uVar127 - 0x68);
          *(undefined8 *)(uVar132 - 0x70) = *(undefined8 *)(uVar127 - 0x70);
          *(undefined8 *)(uVar132 - 0x68) = uVar4;
          uVar4 = *(undefined8 *)(uVar127 - 0x78);
          *(undefined8 *)(uVar132 - 0x80) = *(undefined8 *)(uVar127 - 0x80);
          *(undefined8 *)(uVar132 - 0x78) = uVar4;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
        } while (0x7f < param_3);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - param_3);
        param_2 = (undefined1 (*) [16])(uVar127 - param_3);
        switch(param_3) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        goto switchD_0071de9e_caseD_10;
      }
      param_3 = param_3 - 0x80;
      switch(uVar127 & 0xf) {
      case 1:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x11);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x11),1);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x21);
          auVar5._16_16_ = auVar138;
          auVar5._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar5._1_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x31);
          auVar6._16_16_ = auVar139;
          auVar6._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar6._1_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x41);
          auVar7._16_16_ = auVar138;
          auVar7._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar7._1_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x51);
          auVar8._16_16_ = auVar139;
          auVar8._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar8._1_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x61);
          auVar9._16_16_ = auVar138;
          auVar9._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar9._1_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x71);
          auVar10._16_16_ = auVar139;
          auVar10._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar10._1_16_;
          auVar11._16_16_ = auVar138;
          auVar11._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x81);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar11._1_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
switchD_0071de9e_caseD_1:
          (*param_1)[0] = (*param_2)[0];
          return puVar126;
        case 2:
switchD_0071de9e_caseD_2:
          *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
          return puVar126;
        case 3:
switchD_0071de9e_caseD_3:
          uVar2 = *(undefined2 *)*param_2;
          *(undefined2 *)(*param_1 + 1) = *(undefined2 *)(*param_2 + 1);
          *(undefined2 *)*param_1 = uVar2;
          return puVar126;
        case 4:
switchD_0071de9e_caseD_4:
          *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
          return puVar126;
        case 5:
switchD_0071de9e_caseD_5:
          uVar3 = *(undefined4 *)*param_2;
          *(undefined4 *)(*param_1 + 1) = *(undefined4 *)(*param_2 + 1);
          *(undefined4 *)*param_1 = uVar3;
          return puVar126;
        case 6:
switchD_0071de9e_caseD_6:
          uVar3 = *(undefined4 *)*param_2;
          *(undefined4 *)(*param_1 + 2) = *(undefined4 *)(*param_2 + 2);
          *(undefined4 *)*param_1 = uVar3;
          return puVar126;
        case 7:
switchD_0071de9e_caseD_7:
          uVar3 = *(undefined4 *)*param_2;
          *(undefined4 *)(*param_1 + 3) = *(undefined4 *)(*param_2 + 3);
          *(undefined4 *)*param_1 = uVar3;
          return puVar126;
        case 8:
switchD_0071de9e_caseD_8:
          *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
          return puVar126;
        case 9:
switchD_0071de9e_caseD_9:
          uVar4 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 1) = *(undefined8 *)(*param_2 + 1);
          *(undefined8 *)*param_1 = uVar4;
          return puVar126;
        case 10:
switchD_0071de9e_caseD_a:
          uVar4 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 2) = *(undefined8 *)(*param_2 + 2);
          *(undefined8 *)*param_1 = uVar4;
          return puVar126;
        case 0xb:
switchD_0071de9e_caseD_b:
          uVar4 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 3) = *(undefined8 *)(*param_2 + 3);
          *(undefined8 *)*param_1 = uVar4;
          return puVar126;
        case 0xc:
switchD_0071de9e_caseD_c:
          uVar4 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 4) = *(undefined8 *)(*param_2 + 4);
          *(undefined8 *)*param_1 = uVar4;
          return puVar126;
        case 0xd:
switchD_0071de9e_caseD_d:
          uVar4 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 5) = *(undefined8 *)(*param_2 + 5);
          *(undefined8 *)*param_1 = uVar4;
          return puVar126;
        case 0xe:
switchD_0071de9e_caseD_e:
          uVar4 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 6) = *(undefined8 *)(*param_2 + 6);
          *(undefined8 *)*param_1 = uVar4;
          return puVar126;
        case 0xf:
switchD_0071de9e_caseD_f:
          uVar4 = *(undefined8 *)*param_2;
          *(undefined8 *)(*param_1 + 7) = *(undefined8 *)(*param_2 + 7);
          *(undefined8 *)*param_1 = uVar4;
          return puVar126;
        case 0x10:
          break;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x50:
switchD_0071de9e_caseD_50:
          in_XMM0 = lddqu(in_XMM0,param_2[4]);
          param_1[4] = in_XMM0;
        case 0x40:
switchD_0071de9e_caseD_40:
          in_XMM0 = lddqu(in_XMM0,param_2[3]);
          param_1[3] = in_XMM0;
        case 0x30:
switchD_0071de9e_caseD_30:
          in_XMM0 = lddqu(in_XMM0,param_2[2]);
          param_1[2] = in_XMM0;
        case 0x20:
switchD_0071de9e_caseD_20:
          in_XMM0 = lddqu(in_XMM0,param_2[1]);
          param_1[1] = in_XMM0;
          break;
        case 0x51:
switchD_0071de9e_caseD_51:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 1));
          *(undefined1 (*) [16])(param_1[4] + 1) = in_XMM0;
        case 0x41:
switchD_0071de9e_caseD_41:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 1));
          *(undefined1 (*) [16])(param_1[3] + 1) = in_XMM0;
        case 0x31:
switchD_0071de9e_caseD_31:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 1));
          *(undefined1 (*) [16])(param_1[2] + 1) = in_XMM0;
        case 0x21:
switchD_0071de9e_caseD_21:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 1));
          *(undefined1 (*) [16])(param_1[1] + 1) = in_XMM0;
switchD_0071de9e_caseD_11:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 1));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 1) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x52:
switchD_0071de9e_caseD_52:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 2));
          *(undefined1 (*) [16])(param_1[4] + 2) = in_XMM0;
        case 0x42:
switchD_0071de9e_caseD_42:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 2));
          *(undefined1 (*) [16])(param_1[3] + 2) = in_XMM0;
        case 0x32:
switchD_0071de9e_caseD_32:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 2));
          *(undefined1 (*) [16])(param_1[2] + 2) = in_XMM0;
        case 0x22:
switchD_0071de9e_caseD_22:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 2));
          *(undefined1 (*) [16])(param_1[1] + 2) = in_XMM0;
switchD_0071de9e_caseD_12:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 2));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 2) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x53:
switchD_0071de9e_caseD_53:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 3));
          *(undefined1 (*) [16])(param_1[4] + 3) = in_XMM0;
        case 0x43:
switchD_0071de9e_caseD_43:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 3));
          *(undefined1 (*) [16])(param_1[3] + 3) = in_XMM0;
        case 0x33:
switchD_0071de9e_caseD_33:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 3));
          *(undefined1 (*) [16])(param_1[2] + 3) = in_XMM0;
        case 0x23:
switchD_0071de9e_caseD_23:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 3));
          *(undefined1 (*) [16])(param_1[1] + 3) = in_XMM0;
switchD_0071de9e_caseD_13:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 3));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 3) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x54:
switchD_0071de9e_caseD_54:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 4));
          *(undefined1 (*) [16])(param_1[4] + 4) = in_XMM0;
        case 0x44:
switchD_0071de9e_caseD_44:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 4));
          *(undefined1 (*) [16])(param_1[3] + 4) = in_XMM0;
        case 0x34:
switchD_0071de9e_caseD_34:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 4));
          *(undefined1 (*) [16])(param_1[2] + 4) = in_XMM0;
        case 0x24:
switchD_0071de9e_caseD_24:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 4));
          *(undefined1 (*) [16])(param_1[1] + 4) = in_XMM0;
switchD_0071de9e_caseD_14:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 4));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 4) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x55:
switchD_0071de9e_caseD_55:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 5));
          *(undefined1 (*) [16])(param_1[4] + 5) = in_XMM0;
        case 0x45:
switchD_0071de9e_caseD_45:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 5));
          *(undefined1 (*) [16])(param_1[3] + 5) = in_XMM0;
        case 0x35:
switchD_0071de9e_caseD_35:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 5));
          *(undefined1 (*) [16])(param_1[2] + 5) = in_XMM0;
        case 0x25:
switchD_0071de9e_caseD_25:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 5));
          *(undefined1 (*) [16])(param_1[1] + 5) = in_XMM0;
switchD_0071de9e_caseD_15:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 5));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 5) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x56:
switchD_0071de9e_caseD_56:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 6));
          *(undefined1 (*) [16])(param_1[4] + 6) = in_XMM0;
        case 0x46:
switchD_0071de9e_caseD_46:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 6));
          *(undefined1 (*) [16])(param_1[3] + 6) = in_XMM0;
        case 0x36:
switchD_0071de9e_caseD_36:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 6));
          *(undefined1 (*) [16])(param_1[2] + 6) = in_XMM0;
        case 0x26:
switchD_0071de9e_caseD_26:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 6));
          *(undefined1 (*) [16])(param_1[1] + 6) = in_XMM0;
switchD_0071de9e_caseD_16:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 6));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 6) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x57:
switchD_0071de9e_caseD_57:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 7));
          *(undefined1 (*) [16])(param_1[4] + 7) = in_XMM0;
        case 0x47:
switchD_0071de9e_caseD_47:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 7));
          *(undefined1 (*) [16])(param_1[3] + 7) = in_XMM0;
        case 0x37:
switchD_0071de9e_caseD_37:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 7));
          *(undefined1 (*) [16])(param_1[2] + 7) = in_XMM0;
        case 0x27:
switchD_0071de9e_caseD_27:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 7));
          *(undefined1 (*) [16])(param_1[1] + 7) = in_XMM0;
switchD_0071de9e_caseD_17:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 7));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 7) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x58:
switchD_0071de9e_caseD_58:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 8));
          *(undefined1 (*) [16])(param_1[4] + 8) = in_XMM0;
        case 0x48:
switchD_0071de9e_caseD_48:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 8));
          *(undefined1 (*) [16])(param_1[3] + 8) = in_XMM0;
        case 0x38:
switchD_0071de9e_caseD_38:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 8));
          *(undefined1 (*) [16])(param_1[2] + 8) = in_XMM0;
        case 0x28:
switchD_0071de9e_caseD_28:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 8));
          *(undefined1 (*) [16])(param_1[1] + 8) = in_XMM0;
switchD_0071de9e_caseD_18:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 8));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 8) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x59:
switchD_0071de9e_caseD_59:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 9));
          *(undefined1 (*) [16])(param_1[4] + 9) = in_XMM0;
        case 0x49:
switchD_0071de9e_caseD_49:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 9));
          *(undefined1 (*) [16])(param_1[3] + 9) = in_XMM0;
        case 0x39:
switchD_0071de9e_caseD_39:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 9));
          *(undefined1 (*) [16])(param_1[2] + 9) = in_XMM0;
        case 0x29:
switchD_0071de9e_caseD_29:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 9));
          *(undefined1 (*) [16])(param_1[1] + 9) = in_XMM0;
switchD_0071de9e_caseD_19:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 9));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 9) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x5a:
switchD_0071de9e_caseD_5a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 10));
          *(undefined1 (*) [16])(param_1[4] + 10) = in_XMM0;
        case 0x4a:
switchD_0071de9e_caseD_4a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 10));
          *(undefined1 (*) [16])(param_1[3] + 10) = in_XMM0;
        case 0x3a:
switchD_0071de9e_caseD_3a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 10));
          *(undefined1 (*) [16])(param_1[2] + 10) = in_XMM0;
        case 0x2a:
switchD_0071de9e_caseD_2a:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 10));
          *(undefined1 (*) [16])(param_1[1] + 10) = in_XMM0;
switchD_0071de9e_caseD_1a:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 10));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 10) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x5b:
switchD_0071de9e_caseD_5b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xb));
          *(undefined1 (*) [16])(param_1[4] + 0xb) = in_XMM0;
        case 0x4b:
switchD_0071de9e_caseD_4b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xb));
          *(undefined1 (*) [16])(param_1[3] + 0xb) = in_XMM0;
        case 0x3b:
switchD_0071de9e_caseD_3b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xb));
          *(undefined1 (*) [16])(param_1[2] + 0xb) = in_XMM0;
        case 0x2b:
switchD_0071de9e_caseD_2b:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xb));
          *(undefined1 (*) [16])(param_1[1] + 0xb) = in_XMM0;
switchD_0071de9e_caseD_1b:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xb));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xb) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x5c:
switchD_0071de9e_caseD_5c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xc));
          *(undefined1 (*) [16])(param_1[4] + 0xc) = in_XMM0;
        case 0x4c:
switchD_0071de9e_caseD_4c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xc));
          *(undefined1 (*) [16])(param_1[3] + 0xc) = in_XMM0;
        case 0x3c:
switchD_0071de9e_caseD_3c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xc));
          *(undefined1 (*) [16])(param_1[2] + 0xc) = in_XMM0;
        case 0x2c:
switchD_0071de9e_caseD_2c:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xc));
          *(undefined1 (*) [16])(param_1[1] + 0xc) = in_XMM0;
switchD_0071de9e_caseD_1c:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xc));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xc) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x5d:
switchD_0071de9e_caseD_5d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xd));
          *(undefined1 (*) [16])(param_1[4] + 0xd) = in_XMM0;
        case 0x4d:
switchD_0071de9e_caseD_4d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xd));
          *(undefined1 (*) [16])(param_1[3] + 0xd) = in_XMM0;
        case 0x3d:
switchD_0071de9e_caseD_3d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xd));
          *(undefined1 (*) [16])(param_1[2] + 0xd) = in_XMM0;
        case 0x2d:
switchD_0071de9e_caseD_2d:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xd));
          *(undefined1 (*) [16])(param_1[1] + 0xd) = in_XMM0;
switchD_0071de9e_caseD_1d:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xd));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xd) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x5e:
switchD_0071de9e_caseD_5e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xe));
          *(undefined1 (*) [16])(param_1[4] + 0xe) = in_XMM0;
        case 0x4e:
switchD_0071de9e_caseD_4e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xe));
          *(undefined1 (*) [16])(param_1[3] + 0xe) = in_XMM0;
        case 0x3e:
switchD_0071de9e_caseD_3e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xe));
          *(undefined1 (*) [16])(param_1[2] + 0xe) = in_XMM0;
        case 0x2e:
switchD_0071de9e_caseD_2e:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xe));
          *(undefined1 (*) [16])(param_1[1] + 0xe) = in_XMM0;
switchD_0071de9e_caseD_1e:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xe));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xe) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x5f:
switchD_0071de9e_caseD_5f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[4] + 0xf));
          *(undefined1 (*) [16])(param_1[4] + 0xf) = in_XMM0;
        case 0x4f:
switchD_0071de9e_caseD_4f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[3] + 0xf));
          *(undefined1 (*) [16])(param_1[3] + 0xf) = in_XMM0;
        case 0x3f:
switchD_0071de9e_caseD_3f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[2] + 0xf));
          *(undefined1 (*) [16])(param_1[2] + 0xf) = in_XMM0;
        case 0x2f:
switchD_0071de9e_caseD_2f:
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[1] + 0xf));
          *(undefined1 (*) [16])(param_1[1] + 0xf) = in_XMM0;
switchD_0071de9e_caseD_1f:
          auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(*param_2 + 0xf));
          auVar139 = lddqu(in_XMM1,*param_2);
          *(undefined1 (*) [16])(*param_1 + 0xf) = auVar138;
          *param_1 = auVar139;
          return puVar126;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 2:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x12);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x12),2);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x22);
          auVar12._16_16_ = auVar138;
          auVar12._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar12._2_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x32);
          auVar13._16_16_ = auVar139;
          auVar13._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar13._2_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x42);
          auVar14._16_16_ = auVar138;
          auVar14._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar14._2_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x52);
          auVar15._16_16_ = auVar139;
          auVar15._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar15._2_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x62);
          auVar16._16_16_ = auVar138;
          auVar16._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar16._2_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x72);
          auVar17._16_16_ = auVar139;
          auVar17._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar17._2_16_;
          auVar18._16_16_ = auVar138;
          auVar18._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x82);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar18._2_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 3:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x13);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x13),3);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x23);
          auVar19._16_16_ = auVar138;
          auVar19._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar19._3_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x33);
          auVar20._16_16_ = auVar139;
          auVar20._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar20._3_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x43);
          auVar21._16_16_ = auVar138;
          auVar21._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar21._3_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x53);
          auVar22._16_16_ = auVar139;
          auVar22._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar22._3_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 99);
          auVar23._16_16_ = auVar138;
          auVar23._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar23._3_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x73);
          auVar24._16_16_ = auVar139;
          auVar24._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar24._3_16_;
          auVar25._16_16_ = auVar138;
          auVar25._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x83);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar25._3_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 4:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x14);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x14),4);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x24);
          auVar26._16_16_ = auVar138;
          auVar26._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar26._4_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x34);
          auVar27._16_16_ = auVar139;
          auVar27._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar27._4_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x44);
          auVar28._16_16_ = auVar138;
          auVar28._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar28._4_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x54);
          auVar29._16_16_ = auVar139;
          auVar29._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar29._4_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 100);
          auVar30._16_16_ = auVar138;
          auVar30._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar30._4_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x74);
          auVar31._16_16_ = auVar139;
          auVar31._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar31._4_16_;
          auVar32._16_16_ = auVar138;
          auVar32._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x84);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar32._4_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 5:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x15);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x15),5);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x25);
          auVar33._16_16_ = auVar138;
          auVar33._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar33._5_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x35);
          auVar34._16_16_ = auVar139;
          auVar34._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar34._5_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x45);
          auVar35._16_16_ = auVar138;
          auVar35._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar35._5_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x55);
          auVar36._16_16_ = auVar139;
          auVar36._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar36._5_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x65);
          auVar37._16_16_ = auVar138;
          auVar37._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar37._5_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x75);
          auVar38._16_16_ = auVar139;
          auVar38._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar38._5_16_;
          auVar39._16_16_ = auVar138;
          auVar39._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x85);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar39._5_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 6:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x16);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x16),6);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x26);
          auVar40._16_16_ = auVar138;
          auVar40._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar40._6_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x36);
          auVar41._16_16_ = auVar139;
          auVar41._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar41._6_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x46);
          auVar42._16_16_ = auVar138;
          auVar42._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar42._6_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x56);
          auVar43._16_16_ = auVar139;
          auVar43._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar43._6_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x66);
          auVar44._16_16_ = auVar138;
          auVar44._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar44._6_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x76);
          auVar45._16_16_ = auVar139;
          auVar45._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar45._6_16_;
          auVar46._16_16_ = auVar138;
          auVar46._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x86);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar46._6_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 7:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x17);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x17),7);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x27);
          auVar47._16_16_ = auVar138;
          auVar47._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar47._7_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x37);
          auVar48._16_16_ = auVar139;
          auVar48._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar48._7_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x47);
          auVar49._16_16_ = auVar138;
          auVar49._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar49._7_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x57);
          auVar50._16_16_ = auVar139;
          auVar50._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar50._7_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x67);
          auVar51._16_16_ = auVar138;
          auVar51._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar51._7_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x77);
          auVar52._16_16_ = auVar139;
          auVar52._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar52._7_16_;
          auVar53._16_16_ = auVar138;
          auVar53._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x87);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar53._7_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 8:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x18);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x18),8);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x28);
          auVar54._16_16_ = auVar138;
          auVar54._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar54._8_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x38);
          auVar55._16_16_ = auVar139;
          auVar55._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar55._8_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x48);
          auVar56._16_16_ = auVar138;
          auVar56._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar56._8_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x58);
          auVar57._16_16_ = auVar139;
          auVar57._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar57._8_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x68);
          auVar58._16_16_ = auVar138;
          auVar58._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar58._8_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x78);
          auVar59._16_16_ = auVar139;
          auVar59._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar59._8_16_;
          auVar60._16_16_ = auVar138;
          auVar60._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x88);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar60._8_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 9:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x19);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x19),9);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x29);
          auVar61._16_16_ = auVar138;
          auVar61._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar61._9_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x39);
          auVar62._16_16_ = auVar139;
          auVar62._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar62._9_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x49);
          auVar63._16_16_ = auVar138;
          auVar63._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar63._9_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x59);
          auVar64._16_16_ = auVar139;
          auVar64._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar64._9_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x69);
          auVar65._16_16_ = auVar138;
          auVar65._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar65._9_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x79);
          auVar66._16_16_ = auVar139;
          auVar66._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar66._9_16_;
          auVar67._16_16_ = auVar138;
          auVar67._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x89);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar67._9_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 10:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x1a);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x1a),10);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x2a);
          auVar68._16_16_ = auVar138;
          auVar68._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar68._10_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x3a);
          auVar69._16_16_ = auVar139;
          auVar69._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar69._10_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x4a);
          auVar70._16_16_ = auVar138;
          auVar70._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar70._10_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x5a);
          auVar71._16_16_ = auVar139;
          auVar71._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar71._10_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x6a);
          auVar72._16_16_ = auVar138;
          auVar72._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar72._10_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x7a);
          auVar73._16_16_ = auVar139;
          auVar73._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar73._10_16_;
          auVar74._16_16_ = auVar138;
          auVar74._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x8a);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar74._10_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 0xb:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x1b);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x1b),0xb);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x2b);
          auVar75._16_16_ = auVar138;
          auVar75._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar75._11_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x3b);
          auVar76._16_16_ = auVar139;
          auVar76._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar76._11_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x4b);
          auVar77._16_16_ = auVar138;
          auVar77._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar77._11_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x5b);
          auVar78._16_16_ = auVar139;
          auVar78._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar78._11_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x6b);
          auVar79._16_16_ = auVar138;
          auVar79._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar79._11_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x7b);
          auVar80._16_16_ = auVar139;
          auVar80._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar80._11_16_;
          auVar81._16_16_ = auVar138;
          auVar81._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x8b);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar81._11_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 0xc:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x1c);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x1c),0xc);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x2c);
          auVar82._16_16_ = auVar138;
          auVar82._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar82._12_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x3c);
          auVar83._16_16_ = auVar139;
          auVar83._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar83._12_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x4c);
          auVar84._16_16_ = auVar138;
          auVar84._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar84._12_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x5c);
          auVar85._16_16_ = auVar139;
          auVar85._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar85._12_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x6c);
          auVar86._16_16_ = auVar138;
          auVar86._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar86._12_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x7c);
          auVar87._16_16_ = auVar139;
          auVar87._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar87._12_16_;
          auVar88._16_16_ = auVar138;
          auVar88._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x8c);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar88._12_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 0xd:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x1d);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x1d),0xd);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x2d);
          auVar89._16_16_ = auVar138;
          auVar89._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar89._13_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x3d);
          auVar90._16_16_ = auVar139;
          auVar90._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar90._13_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x4d);
          auVar91._16_16_ = auVar138;
          auVar91._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar91._13_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x5d);
          auVar92._16_16_ = auVar139;
          auVar92._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar92._13_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x6d);
          auVar93._16_16_ = auVar138;
          auVar93._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar93._13_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x7d);
          auVar94._16_16_ = auVar139;
          auVar94._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar94._13_16_;
          auVar95._16_16_ = auVar138;
          auVar95._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x8d);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar95._13_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 0xe:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x1e);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x1e),0xe);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x2e);
          auVar96._16_16_ = auVar138;
          auVar96._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar96._14_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x3e);
          auVar97._16_16_ = auVar139;
          auVar97._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar97._14_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x4e);
          auVar98._16_16_ = auVar138;
          auVar98._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar98._14_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x5e);
          auVar99._16_16_ = auVar139;
          auVar99._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar99._14_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x6e);
          auVar100._16_16_ = auVar138;
          auVar100._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar100._14_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x7e);
          auVar101._16_16_ = auVar139;
          auVar101._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar101._14_16_;
          auVar102._16_16_ = auVar138;
          auVar102._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x8e);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar102._14_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
        break;
      case 0xf:
        do {
          uVar136 = param_3;
          auVar138 = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar127 - 0x1f);
          in_XMM1 = SUB3216(*(undefined1 (*) [32])(uVar127 - 0x1f),0xf);
          *(undefined1 (*) [16])(uVar132 - 0x10) = in_XMM1;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x2f);
          auVar103._16_16_ = auVar138;
          auVar103._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x20) = auVar103._15_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x3f);
          auVar104._16_16_ = auVar139;
          auVar104._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x30) = auVar104._15_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x4f);
          auVar105._16_16_ = auVar138;
          auVar105._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x40) = auVar105._15_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x5f);
          auVar106._16_16_ = auVar139;
          auVar106._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x50) = auVar106._15_16_;
          auVar139 = *(undefined1 (*) [16])(uVar127 - 0x6f);
          auVar107._16_16_ = auVar138;
          auVar107._0_16_ = auVar139;
          *(undefined1 (*) [16])(uVar132 - 0x60) = auVar107._15_16_;
          auVar138 = *(undefined1 (*) [16])(uVar127 - 0x7f);
          auVar108._16_16_ = auVar139;
          auVar108._0_16_ = auVar138;
          *(undefined1 (*) [16])(uVar132 - 0x70) = auVar108._15_16_;
          auVar109._16_16_ = auVar138;
          auVar109._0_16_ = *(undefined1 (*) [16])(uVar127 - 0x8f);
          *(undefined1 (*) [16])(uVar132 - 0x80) = auVar109._15_16_;
          uVar132 = uVar132 - 0x80;
          uVar127 = uVar127 - 0x80;
          param_3 = uVar136 - 0x80;
        } while (0x7f < uVar136);
        *pauVar133 = in_XMM0;
        param_1 = (undefined1 (*) [16])(uVar132 - uVar136);
        param_2 = (undefined1 (*) [16])(uVar127 - uVar136);
        switch(uVar136) {
        case 0:
          goto switchD_0071de9e_caseD_0;
        case 1:
          goto switchD_0071de9e_caseD_1;
        case 2:
          goto switchD_0071de9e_caseD_2;
        case 3:
          goto switchD_0071de9e_caseD_3;
        case 4:
          goto switchD_0071de9e_caseD_4;
        case 5:
          goto switchD_0071de9e_caseD_5;
        case 6:
          goto switchD_0071de9e_caseD_6;
        case 7:
          goto switchD_0071de9e_caseD_7;
        case 8:
          goto switchD_0071de9e_caseD_8;
        case 9:
          goto switchD_0071de9e_caseD_9;
        case 10:
          goto switchD_0071de9e_caseD_a;
        case 0xb:
          goto switchD_0071de9e_caseD_b;
        case 0xc:
          goto switchD_0071de9e_caseD_c;
        case 0xd:
          goto switchD_0071de9e_caseD_d;
        case 0xe:
          goto switchD_0071de9e_caseD_e;
        case 0xf:
          goto switchD_0071de9e_caseD_f;
        case 0x11:
          goto switchD_0071de9e_caseD_11;
        case 0x12:
          goto switchD_0071de9e_caseD_12;
        case 0x13:
          goto switchD_0071de9e_caseD_13;
        case 0x14:
          goto switchD_0071de9e_caseD_14;
        case 0x15:
          goto switchD_0071de9e_caseD_15;
        case 0x16:
          goto switchD_0071de9e_caseD_16;
        case 0x17:
          goto switchD_0071de9e_caseD_17;
        case 0x18:
          goto switchD_0071de9e_caseD_18;
        case 0x19:
          goto switchD_0071de9e_caseD_19;
        case 0x1a:
          goto switchD_0071de9e_caseD_1a;
        case 0x1b:
          goto switchD_0071de9e_caseD_1b;
        case 0x1c:
          goto switchD_0071de9e_caseD_1c;
        case 0x1d:
          goto switchD_0071de9e_caseD_1d;
        case 0x1e:
          goto switchD_0071de9e_caseD_1e;
        case 0x1f:
          goto switchD_0071de9e_caseD_1f;
        case 0x20:
          goto switchD_0071de9e_caseD_20;
        case 0x21:
          goto switchD_0071de9e_caseD_21;
        case 0x22:
          goto switchD_0071de9e_caseD_22;
        case 0x23:
          goto switchD_0071de9e_caseD_23;
        case 0x24:
          goto switchD_0071de9e_caseD_24;
        case 0x25:
          goto switchD_0071de9e_caseD_25;
        case 0x26:
          goto switchD_0071de9e_caseD_26;
        case 0x27:
          goto switchD_0071de9e_caseD_27;
        case 0x28:
          goto switchD_0071de9e_caseD_28;
        case 0x29:
          goto switchD_0071de9e_caseD_29;
        case 0x2a:
          goto switchD_0071de9e_caseD_2a;
        case 0x2b:
          goto switchD_0071de9e_caseD_2b;
        case 0x2c:
          goto switchD_0071de9e_caseD_2c;
        case 0x2d:
          goto switchD_0071de9e_caseD_2d;
        case 0x2e:
          goto switchD_0071de9e_caseD_2e;
        case 0x2f:
          goto switchD_0071de9e_caseD_2f;
        case 0x30:
          goto switchD_0071de9e_caseD_30;
        case 0x31:
          goto switchD_0071de9e_caseD_31;
        case 0x32:
          goto switchD_0071de9e_caseD_32;
        case 0x33:
          goto switchD_0071de9e_caseD_33;
        case 0x34:
          goto switchD_0071de9e_caseD_34;
        case 0x35:
          goto switchD_0071de9e_caseD_35;
        case 0x36:
          goto switchD_0071de9e_caseD_36;
        case 0x37:
          goto switchD_0071de9e_caseD_37;
        case 0x38:
          goto switchD_0071de9e_caseD_38;
        case 0x39:
          goto switchD_0071de9e_caseD_39;
        case 0x3a:
          goto switchD_0071de9e_caseD_3a;
        case 0x3b:
          goto switchD_0071de9e_caseD_3b;
        case 0x3c:
          goto switchD_0071de9e_caseD_3c;
        case 0x3d:
          goto switchD_0071de9e_caseD_3d;
        case 0x3e:
          goto switchD_0071de9e_caseD_3e;
        case 0x3f:
          goto switchD_0071de9e_caseD_3f;
        case 0x40:
          goto switchD_0071de9e_caseD_40;
        case 0x41:
          goto switchD_0071de9e_caseD_41;
        case 0x42:
          goto switchD_0071de9e_caseD_42;
        case 0x43:
          goto switchD_0071de9e_caseD_43;
        case 0x44:
          goto switchD_0071de9e_caseD_44;
        case 0x45:
          goto switchD_0071de9e_caseD_45;
        case 0x46:
          goto switchD_0071de9e_caseD_46;
        case 0x47:
          goto switchD_0071de9e_caseD_47;
        case 0x48:
          goto switchD_0071de9e_caseD_48;
        case 0x49:
          goto switchD_0071de9e_caseD_49;
        case 0x4a:
          goto switchD_0071de9e_caseD_4a;
        case 0x4b:
          goto switchD_0071de9e_caseD_4b;
        case 0x4c:
          goto switchD_0071de9e_caseD_4c;
        case 0x4d:
          goto switchD_0071de9e_caseD_4d;
        case 0x4e:
          goto switchD_0071de9e_caseD_4e;
        case 0x4f:
          goto switchD_0071de9e_caseD_4f;
        case 0x50:
          goto switchD_0071de9e_caseD_50;
        case 0x51:
          goto switchD_0071de9e_caseD_51;
        case 0x52:
          goto switchD_0071de9e_caseD_52;
        case 0x53:
          goto switchD_0071de9e_caseD_53;
        case 0x54:
          goto switchD_0071de9e_caseD_54;
        case 0x55:
          goto switchD_0071de9e_caseD_55;
        case 0x56:
          goto switchD_0071de9e_caseD_56;
        case 0x57:
          goto switchD_0071de9e_caseD_57;
        case 0x58:
          goto switchD_0071de9e_caseD_58;
        case 0x59:
          goto switchD_0071de9e_caseD_59;
        case 0x5a:
          goto switchD_0071de9e_caseD_5a;
        case 0x5b:
          goto switchD_0071de9e_caseD_5b;
        case 0x5c:
          goto switchD_0071de9e_caseD_5c;
        case 0x5d:
          goto switchD_0071de9e_caseD_5d;
        case 0x5e:
          goto switchD_0071de9e_caseD_5e;
        case 0x5f:
          goto switchD_0071de9e_caseD_5f;
        case 0x60:
          goto switchD_0071de9e_caseD_60;
        case 0x61:
          goto switchD_0071de9e_caseD_61;
        case 0x62:
          goto switchD_0071de9e_caseD_62;
        case 99:
          goto switchD_0071de9e_caseD_63;
        case 100:
          goto switchD_0071de9e_caseD_64;
        case 0x65:
          goto switchD_0071de9e_caseD_65;
        case 0x66:
          goto switchD_0071de9e_caseD_66;
        case 0x67:
          goto switchD_0071de9e_caseD_67;
        case 0x68:
          goto switchD_0071de9e_caseD_68;
        case 0x69:
          goto switchD_0071de9e_caseD_69;
        case 0x6a:
          goto switchD_0071de9e_caseD_6a;
        case 0x6b:
          goto switchD_0071de9e_caseD_6b;
        case 0x6c:
          goto switchD_0071de9e_caseD_6c;
        case 0x6d:
          goto switchD_0071de9e_caseD_6d;
        case 0x6e:
          goto switchD_0071de9e_caseD_6e;
        case 0x6f:
          goto switchD_0071de9e_caseD_6f;
        case 0x70:
          goto switchD_0071de9e_caseD_70;
        case 0x71:
          goto switchD_0071de9e_caseD_71;
        case 0x72:
          goto switchD_0071de9e_caseD_72;
        case 0x73:
          goto switchD_0071de9e_caseD_73;
        case 0x74:
          goto switchD_0071de9e_caseD_74;
        case 0x75:
          goto switchD_0071de9e_caseD_75;
        case 0x76:
          goto switchD_0071de9e_caseD_76;
        case 0x77:
          goto switchD_0071de9e_caseD_77;
        case 0x78:
          goto switchD_0071de9e_caseD_78;
        case 0x79:
          goto switchD_0071de9e_caseD_79;
        case 0x7a:
          goto switchD_0071de9e_caseD_7a;
        case 0x7b:
          goto switchD_0071de9e_caseD_7b;
        case 0x7c:
          goto switchD_0071de9e_caseD_7c;
        case 0x7d:
          goto switchD_0071de9e_caseD_7d;
        case 0x7e:
          goto switchD_0071de9e_caseD_7e;
        case 0x7f:
          goto switchD_0071de9e_caseD_7f;
        }
      }
switchD_0071de9e_caseD_10:
      auVar138 = lddqu(in_XMM0,*param_2);
      *param_1 = auVar138;
switchD_0071de9e_caseD_0:
      return puVar126;
    }
    in_XMM0 = *param_2;
    uVar132 = (ulong)param_1 & 0xfffffffffffffff0;
    pauVar133 = (undefined1 (*) [16])(uVar132 + 0x10);
    param_3 = param_3 - ((long)pauVar133 - (long)param_1);
    puVar130 = (undefined8 *)((long)param_2 + ((long)pauVar133 - (long)param_1));
    if (((ulong)puVar130 & 0xf) == 0) {
      if ((param_3 >> 8) + param_3 < __x86_data_cache_size_half) {
        do {
          uVar132 = param_3;
          param_3 = uVar132 - 0x80;
          uVar4 = puVar130[1];
          *(undefined8 *)*pauVar133 = *puVar130;
          *(undefined8 *)(*pauVar133 + 8) = uVar4;
          uVar4 = puVar130[3];
          *(undefined8 *)pauVar133[1] = puVar130[2];
          *(undefined8 *)(pauVar133[1] + 8) = uVar4;
          uVar4 = puVar130[5];
          *(undefined8 *)pauVar133[2] = puVar130[4];
          *(undefined8 *)(pauVar133[2] + 8) = uVar4;
          uVar4 = puVar130[7];
          *(undefined8 *)pauVar133[3] = puVar130[6];
          *(undefined8 *)(pauVar133[3] + 8) = uVar4;
          in_XMM1 = *(undefined1 (*) [16])(puVar130 + 8);
          pauVar133[4] = in_XMM1;
          uVar4 = puVar130[0xb];
          *(undefined8 *)pauVar133[5] = puVar130[10];
          *(undefined8 *)(pauVar133[5] + 8) = uVar4;
          uVar4 = puVar130[0xd];
          *(undefined8 *)pauVar133[6] = puVar130[0xc];
          *(undefined8 *)(pauVar133[6] + 8) = uVar4;
          uVar4 = puVar130[0xf];
          *(undefined8 *)pauVar133[7] = puVar130[0xe];
          *(undefined8 *)(pauVar133[7] + 8) = uVar4;
          puVar130 = puVar130 + 0x10;
          pauVar133 = pauVar133 + 8;
        } while (0x7f < param_3);
        *param_1 = in_XMM0;
        puVar131 = (undefined1 *)((long)puVar130 + param_3);
        puVar135 = pauVar133[-8] + uVar132;
        switch(param_3) {
        case 0:
          goto switchD_0071de8a_caseD_0;
        case 1:
          goto switchD_0071de8a_caseD_1;
        case 2:
          goto switchD_0071de8a_caseD_2;
        case 3:
          goto switchD_0071de8a_caseD_3;
        case 4:
          goto switchD_0071de8a_caseD_4;
        case 5:
          goto switchD_0071de8a_caseD_5;
        case 6:
          goto switchD_0071de8a_caseD_6;
        case 7:
          goto switchD_0071de8a_caseD_7;
        case 8:
          goto switchD_0071de8a_caseD_8;
        case 9:
          goto switchD_0071de8a_caseD_9;
        case 10:
          goto switchD_0071de8a_caseD_a;
        case 0xb:
          goto switchD_0071de8a_caseD_b;
        case 0xc:
          goto switchD_0071de8a_caseD_c;
        case 0xd:
          goto switchD_0071de8a_caseD_d;
        case 0xe:
          goto switchD_0071de8a_caseD_e;
        case 0xf:
          goto switchD_0071de8a_caseD_f;
        case 0x11:
          goto switchD_0071de8a_caseD_11;
        case 0x12:
          goto switchD_0071de8a_caseD_12;
        case 0x13:
          goto switchD_0071de8a_caseD_13;
        case 0x14:
          goto switchD_0071de8a_caseD_14;
        case 0x15:
          goto switchD_0071de8a_caseD_15;
        case 0x16:
          goto switchD_0071de8a_caseD_16;
        case 0x17:
          goto switchD_0071de8a_caseD_17;
        case 0x18:
          goto switchD_0071de8a_caseD_18;
        case 0x19:
          goto switchD_0071de8a_caseD_19;
        case 0x1a:
          goto switchD_0071de8a_caseD_1a;
        case 0x1b:
          goto switchD_0071de8a_caseD_1b;
        case 0x1c:
          goto switchD_0071de8a_caseD_1c;
        case 0x1d:
          goto switchD_0071de8a_caseD_1d;
        case 0x1e:
          goto switchD_0071de8a_caseD_1e;
        case 0x1f:
          goto switchD_0071de8a_caseD_1f;
        case 0x20:
          goto switchD_0071de8a_caseD_20;
        case 0x21:
          goto switchD_0071de8a_caseD_21;
        case 0x22:
          goto switchD_0071de8a_caseD_22;
        case 0x23:
          goto switchD_0071de8a_caseD_23;
        case 0x24:
          goto switchD_0071de8a_caseD_24;
        case 0x25:
          goto switchD_0071de8a_caseD_25;
        case 0x26:
          goto switchD_0071de8a_caseD_26;
        case 0x27:
          goto switchD_0071de8a_caseD_27;
        case 0x28:
          goto switchD_0071de8a_caseD_28;
        case 0x29:
          goto switchD_0071de8a_caseD_29;
        case 0x2a:
          goto switchD_0071de8a_caseD_2a;
        case 0x2b:
          goto switchD_0071de8a_caseD_2b;
        case 0x2c:
          goto switchD_0071de8a_caseD_2c;
        case 0x2d:
          goto switchD_0071de8a_caseD_2d;
        case 0x2e:
          goto switchD_0071de8a_caseD_2e;
        case 0x2f:
          goto switchD_0071de8a_caseD_2f;
        case 0x30:
          goto switchD_0071de8a_caseD_30;
        case 0x31:
          goto switchD_0071de8a_caseD_31;
        case 0x32:
          goto switchD_0071de8a_caseD_32;
        case 0x33:
          goto switchD_0071de8a_caseD_33;
        case 0x34:
          goto switchD_0071de8a_caseD_34;
        case 0x35:
          goto switchD_0071de8a_caseD_35;
        case 0x36:
          goto switchD_0071de8a_caseD_36;
        case 0x37:
          goto switchD_0071de8a_caseD_37;
        case 0x38:
          goto switchD_0071de8a_caseD_38;
        case 0x39:
          goto switchD_0071de8a_caseD_39;
        case 0x3a:
          goto switchD_0071de8a_caseD_3a;
        case 0x3b:
          goto switchD_0071de8a_caseD_3b;
        case 0x3c:
          goto switchD_0071de8a_caseD_3c;
        case 0x3d:
          goto switchD_0071de8a_caseD_3d;
        case 0x3e:
          goto switchD_0071de8a_caseD_3e;
        case 0x3f:
          goto switchD_0071de8a_caseD_3f;
        case 0x40:
          goto switchD_0071de8a_caseD_40;
        case 0x41:
          goto switchD_0071de8a_caseD_41;
        case 0x42:
          goto switchD_0071de8a_caseD_42;
        case 0x43:
          goto switchD_0071de8a_caseD_43;
        case 0x44:
          goto switchD_0071de8a_caseD_44;
        case 0x45:
          goto switchD_0071de8a_caseD_45;
        case 0x46:
          goto switchD_0071de8a_caseD_46;
        case 0x47:
          goto switchD_0071de8a_caseD_47;
        case 0x48:
          goto switchD_0071de8a_caseD_48;
        case 0x49:
          goto switchD_0071de8a_caseD_49;
        case 0x4a:
          goto switchD_0071de8a_caseD_4a;
        case 0x4b:
          goto switchD_0071de8a_caseD_4b;
        case 0x4c:
          goto switchD_0071de8a_caseD_4c;
        case 0x4d:
          goto switchD_0071de8a_caseD_4d;
        case 0x4e:
          goto switchD_0071de8a_caseD_4e;
        case 0x4f:
          goto switchD_0071de8a_caseD_4f;
        case 0x50:
          goto switchD_0071de8a_caseD_50;
        case 0x51:
          goto switchD_0071de8a_caseD_51;
        case 0x52:
          goto switchD_0071de8a_caseD_52;
        case 0x53:
          goto switchD_0071de8a_caseD_53;
        case 0x54:
          goto switchD_0071de8a_caseD_54;
        case 0x55:
          goto switchD_0071de8a_caseD_55;
        case 0x56:
          goto switchD_0071de8a_caseD_56;
        case 0x57:
          goto switchD_0071de8a_caseD_57;
        case 0x58:
          goto switchD_0071de8a_caseD_58;
        case 0x59:
          goto switchD_0071de8a_caseD_59;
        case 0x5a:
          goto switchD_0071de8a_caseD_5a;
        case 0x5b:
          goto switchD_0071de8a_caseD_5b;
        case 0x5c:
          goto switchD_0071de8a_caseD_5c;
        case 0x5d:
          goto switchD_0071de8a_caseD_5d;
        case 0x5e:
          goto switchD_0071de8a_caseD_5e;
        case 0x5f:
          goto switchD_0071de8a_caseD_5f;
        case 0x60:
          goto switchD_0071de8a_caseD_60;
        case 0x61:
          goto switchD_0071de8a_caseD_61;
        case 0x62:
          goto switchD_0071de8a_caseD_62;
        case 99:
          goto switchD_0071de8a_caseD_63;
        case 100:
          goto switchD_0071de8a_caseD_64;
        case 0x65:
          goto switchD_0071de8a_caseD_65;
        case 0x66:
          goto switchD_0071de8a_caseD_66;
        case 0x67:
          goto switchD_0071de8a_caseD_67;
        case 0x68:
          goto switchD_0071de8a_caseD_68;
        case 0x69:
          goto switchD_0071de8a_caseD_69;
        case 0x6a:
          goto switchD_0071de8a_caseD_6a;
        case 0x6b:
          goto switchD_0071de8a_caseD_6b;
        case 0x6c:
          goto switchD_0071de8a_caseD_6c;
        case 0x6d:
          goto switchD_0071de8a_caseD_6d;
        case 0x6e:
          goto switchD_0071de8a_caseD_6e;
        case 0x6f:
          goto switchD_0071de8a_caseD_6f;
        case 0x70:
          goto switchD_0071de8a_caseD_70;
        case 0x71:
          goto switchD_0071de8a_caseD_71;
        case 0x72:
          goto switchD_0071de8a_caseD_72;
        case 0x73:
          goto switchD_0071de8a_caseD_73;
        case 0x74:
          goto switchD_0071de8a_caseD_74;
        case 0x75:
          goto switchD_0071de8a_caseD_75;
        case 0x76:
          goto switchD_0071de8a_caseD_76;
        case 0x77:
          goto switchD_0071de8a_caseD_77;
        case 0x78:
          goto switchD_0071de8a_caseD_78;
        case 0x79:
          goto switchD_0071de8a_caseD_79;
        case 0x7a:
          goto switchD_0071de8a_caseD_7a;
        case 0x7b:
          goto switchD_0071de8a_caseD_7b;
        case 0x7c:
          goto switchD_0071de8a_caseD_7c;
        case 0x7d:
          goto switchD_0071de8a_caseD_7d;
        case 0x7e:
          goto switchD_0071de8a_caseD_7e;
        case 0x7f:
          goto switchD_0071de8a_caseD_7f;
        }
        goto switchD_0071de8a_caseD_10;
      }
LAB_0071f710:
      uVar4 = *puVar130;
      uVar110 = puVar130[1];
      *param_1 = in_XMM0;
      *(undefined8 *)*pauVar133 = uVar4;
      *(undefined8 *)(uVar132 + 0x18) = uVar110;
      param_3 = param_3 - 0x10;
      puVar130 = puVar130 + 2;
      puVar134 = (undefined8 *)(uVar132 + 0x20);
      uVar132 = __x86_shared_cache_size_half;
      if (param_3 <= __x86_shared_cache_size_half) {
        uVar132 = param_3;
      }
      param_3 = param_3 - uVar132;
      if (0x1000 < param_3) {
        if (uVar132 << 3 < param_3) {
          param_3 = param_3 + uVar132;
          uVar132 = 0;
        }
        uVar127 = param_3 - 0x80;
        do {
          param_3 = uVar127;
          uVar127 = param_3 - 0x80;
          uVar4 = puVar130[1];
          uVar110 = puVar130[2];
          uVar111 = puVar130[3];
          uVar112 = puVar130[4];
          uVar113 = puVar130[5];
          uVar114 = puVar130[6];
          uVar115 = puVar130[7];
          uVar116 = puVar130[8];
          uVar117 = puVar130[9];
          uVar118 = puVar130[10];
          uVar119 = puVar130[0xb];
          uVar120 = puVar130[0xc];
          uVar121 = puVar130[0xd];
          uVar122 = puVar130[0xe];
          uVar123 = puVar130[0xf];
          *puVar134 = *puVar130;
          puVar134[1] = uVar4;
          puVar134[2] = uVar110;
          puVar134[3] = uVar111;
          puVar134[4] = uVar112;
          puVar134[5] = uVar113;
          puVar134[6] = uVar114;
          puVar134[7] = uVar115;
          puVar134[8] = uVar116;
          puVar134[9] = uVar117;
          puVar134[10] = uVar118;
          puVar134[0xb] = uVar119;
          puVar134[0xc] = uVar120;
          puVar134[0xd] = uVar121;
          puVar134[0xe] = uVar122;
          puVar134[0xf] = uVar123;
          puVar130 = puVar130 + 0x10;
          puVar134 = puVar134 + 0x10;
        } while (0x7f < param_3);
        if (uVar132 < 0x80) goto LAB_0071f87d;
      }
      uVar127 = (param_3 + uVar132) - 0x80;
      do {
        bVar137 = 0x7f < uVar127;
        uVar127 = uVar127 - 0x80;
        uVar4 = puVar130[1];
        uVar110 = puVar130[2];
        uVar111 = puVar130[3];
        uVar112 = puVar130[4];
        uVar113 = puVar130[5];
        uVar114 = puVar130[6];
        uVar115 = puVar130[7];
        uVar116 = puVar130[8];
        uVar117 = puVar130[9];
        uVar118 = puVar130[10];
        uVar119 = puVar130[0xb];
        uVar120 = puVar130[0xc];
        uVar121 = puVar130[0xd];
        uVar122 = puVar130[0xe];
        uVar123 = puVar130[0xf];
        *puVar134 = *puVar130;
        puVar134[1] = uVar4;
        puVar134[2] = uVar110;
        puVar134[3] = uVar111;
        puVar134[4] = uVar112;
        puVar134[5] = uVar113;
        puVar134[6] = uVar114;
        puVar134[7] = uVar115;
        puVar134[8] = uVar116;
        puVar134[9] = uVar117;
        puVar134[10] = uVar118;
        puVar134[0xb] = uVar119;
        puVar134[0xc] = uVar120;
        puVar134[0xd] = uVar121;
        puVar134[0xe] = uVar122;
        puVar134[0xf] = uVar123;
        puVar130 = puVar130 + 0x10;
        puVar134 = puVar134 + 0x10;
      } while (bVar137);
LAB_0071f87d:
      lVar128 = uVar127 + 0x80;
                    /* WARNING: Could not recover jumptable at 0x0071f899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar126 = (undefined1 *)
                 (*(code *)((long)&switchD_0071de8a::switchdataD_00821210 +
                           (long)(int)(&switchD_0071de8a::switchdataD_00821210)[lVar128]))
                           ((long)puVar134 + lVar128,(long)puVar130 + lVar128,
                            (code *)((long)&switchD_0071de8a::switchdataD_00821210 +
                                    (long)(int)(&switchD_0071de8a::switchdataD_00821210)[lVar128]));
      return puVar126;
    }
    if (__x86_data_cache_size <= param_3) goto LAB_0071f710;
    param_3 = param_3 - 0x80;
    switch((ulong)puVar130 & 0xf) {
    case 1:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -1);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -1);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 0xf);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x1f);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x2f);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x3f);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x4f);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x6f);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x5f);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,1);
        pauVar133[6] = auVar103._1_16_;
        pauVar133[5] = auVar104._1_16_;
        pauVar133[4] = auVar105._1_16_;
        pauVar133[3] = auVar106._1_16_;
        pauVar133[2] = auVar107._1_16_;
        pauVar133[1] = auVar108._1_16_;
        *pauVar133 = auVar109._1_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
switchD_0071de8a_caseD_1:
        puVar135[-1] = puVar131[-1];
        return puVar126;
      case 2:
switchD_0071de8a_caseD_2:
        *(undefined2 *)(puVar135 + -2) = *(undefined2 *)(puVar131 + -2);
        return puVar126;
      case 3:
switchD_0071de8a_caseD_3:
        uVar2 = *(undefined2 *)(puVar131 + -2);
        *(undefined2 *)(puVar135 + -3) = *(undefined2 *)(puVar131 + -3);
        *(undefined2 *)(puVar135 + -2) = uVar2;
        return puVar126;
      case 4:
switchD_0071de8a_caseD_4:
        *(undefined4 *)(puVar135 + -4) = *(undefined4 *)(puVar131 + -4);
        return puVar126;
      case 5:
switchD_0071de8a_caseD_5:
        uVar3 = *(undefined4 *)(puVar131 + -4);
        *(undefined4 *)(puVar135 + -5) = *(undefined4 *)(puVar131 + -5);
        *(undefined4 *)(puVar135 + -4) = uVar3;
        return puVar126;
      case 6:
switchD_0071de8a_caseD_6:
        uVar3 = *(undefined4 *)(puVar131 + -4);
        *(undefined4 *)(puVar135 + -6) = *(undefined4 *)(puVar131 + -6);
        *(undefined4 *)(puVar135 + -4) = uVar3;
        return puVar126;
      case 7:
switchD_0071de8a_caseD_7:
        uVar3 = *(undefined4 *)(puVar131 + -4);
        *(undefined4 *)(puVar135 + -7) = *(undefined4 *)(puVar131 + -7);
        *(undefined4 *)(puVar135 + -4) = uVar3;
        return puVar126;
      case 8:
switchD_0071de8a_caseD_8:
        *(undefined8 *)(puVar135 + -8) = *(undefined8 *)(puVar131 + -8);
        return puVar126;
      case 9:
switchD_0071de8a_caseD_9:
        uVar3 = *(undefined4 *)(puVar131 + -4);
        *(undefined8 *)(puVar135 + -9) = *(undefined8 *)(puVar131 + -9);
        *(undefined4 *)(puVar135 + -4) = uVar3;
        return puVar126;
      case 10:
switchD_0071de8a_caseD_a:
        uVar3 = *(undefined4 *)(puVar131 + -4);
        *(undefined8 *)(puVar135 + -10) = *(undefined8 *)(puVar131 + -10);
        *(undefined4 *)(puVar135 + -4) = uVar3;
        return puVar126;
      case 0xb:
switchD_0071de8a_caseD_b:
        uVar3 = *(undefined4 *)(puVar131 + -4);
        *(undefined8 *)(puVar135 + -0xb) = *(undefined8 *)(puVar131 + -0xb);
        *(undefined4 *)(puVar135 + -4) = uVar3;
        return puVar126;
      case 0xc:
switchD_0071de8a_caseD_c:
        uVar3 = *(undefined4 *)(puVar131 + -4);
        *(undefined8 *)(puVar135 + -0xc) = *(undefined8 *)(puVar131 + -0xc);
        *(undefined4 *)(puVar135 + -4) = uVar3;
        return puVar126;
      case 0xd:
switchD_0071de8a_caseD_d:
        uVar4 = *(undefined8 *)(puVar131 + -8);
        *(undefined8 *)(puVar135 + -0xd) = *(undefined8 *)(puVar131 + -0xd);
        *(undefined8 *)(puVar135 + -8) = uVar4;
        return puVar126;
      case 0xe:
switchD_0071de8a_caseD_e:
        uVar4 = *(undefined8 *)(puVar131 + -8);
        *(undefined8 *)(puVar135 + -0xe) = *(undefined8 *)(puVar131 + -0xe);
        *(undefined8 *)(puVar135 + -8) = uVar4;
        return puVar126;
      case 0xf:
switchD_0071de8a_caseD_f:
        uVar4 = *(undefined8 *)(puVar131 + -8);
        *(undefined8 *)(puVar135 + -0xf) = *(undefined8 *)(puVar131 + -0xf);
        *(undefined8 *)(puVar135 + -8) = uVar4;
        return puVar126;
      case 0x10:
        break;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x50:
switchD_0071de8a_caseD_50:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x50));
        *(undefined1 (*) [16])(puVar135 + -0x50) = in_XMM0;
      case 0x40:
switchD_0071de8a_caseD_40:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x40));
        *(undefined1 (*) [16])(puVar135 + -0x40) = in_XMM0;
      case 0x30:
switchD_0071de8a_caseD_30:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x30));
        *(undefined1 (*) [16])(puVar135 + -0x30) = in_XMM0;
      case 0x20:
switchD_0071de8a_caseD_20:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x20));
        *(undefined1 (*) [16])(puVar135 + -0x20) = in_XMM0;
        break;
      case 0x51:
switchD_0071de8a_caseD_51:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x51));
        *(undefined1 (*) [16])(puVar135 + -0x51) = in_XMM0;
      case 0x41:
switchD_0071de8a_caseD_41:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x41));
        *(undefined1 (*) [16])(puVar135 + -0x41) = in_XMM0;
      case 0x31:
switchD_0071de8a_caseD_31:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x31));
        *(undefined1 (*) [16])(puVar135 + -0x31) = in_XMM0;
      case 0x21:
switchD_0071de8a_caseD_21:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x21));
        *(undefined1 (*) [16])(puVar135 + -0x21) = in_XMM0;
switchD_0071de8a_caseD_11:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x11));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x11) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x52:
switchD_0071de8a_caseD_52:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x52));
        *(undefined1 (*) [16])(puVar135 + -0x52) = in_XMM0;
      case 0x42:
switchD_0071de8a_caseD_42:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x42));
        *(undefined1 (*) [16])(puVar135 + -0x42) = in_XMM0;
      case 0x32:
switchD_0071de8a_caseD_32:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x32));
        *(undefined1 (*) [16])(puVar135 + -0x32) = in_XMM0;
      case 0x22:
switchD_0071de8a_caseD_22:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x22));
        *(undefined1 (*) [16])(puVar135 + -0x22) = in_XMM0;
switchD_0071de8a_caseD_12:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x12));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x12) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x53:
switchD_0071de8a_caseD_53:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x53));
        *(undefined1 (*) [16])(puVar135 + -0x53) = in_XMM0;
      case 0x43:
switchD_0071de8a_caseD_43:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x43));
        *(undefined1 (*) [16])(puVar135 + -0x43) = in_XMM0;
      case 0x33:
switchD_0071de8a_caseD_33:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x33));
        *(undefined1 (*) [16])(puVar135 + -0x33) = in_XMM0;
      case 0x23:
switchD_0071de8a_caseD_23:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x23));
        *(undefined1 (*) [16])(puVar135 + -0x23) = in_XMM0;
switchD_0071de8a_caseD_13:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x13));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x13) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x54:
switchD_0071de8a_caseD_54:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x54));
        *(undefined1 (*) [16])(puVar135 + -0x54) = in_XMM0;
      case 0x44:
switchD_0071de8a_caseD_44:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x44));
        *(undefined1 (*) [16])(puVar135 + -0x44) = in_XMM0;
      case 0x34:
switchD_0071de8a_caseD_34:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x34));
        *(undefined1 (*) [16])(puVar135 + -0x34) = in_XMM0;
      case 0x24:
switchD_0071de8a_caseD_24:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x24));
        *(undefined1 (*) [16])(puVar135 + -0x24) = in_XMM0;
switchD_0071de8a_caseD_14:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x14));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x14) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x55:
switchD_0071de8a_caseD_55:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x55));
        *(undefined1 (*) [16])(puVar135 + -0x55) = in_XMM0;
      case 0x45:
switchD_0071de8a_caseD_45:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x45));
        *(undefined1 (*) [16])(puVar135 + -0x45) = in_XMM0;
      case 0x35:
switchD_0071de8a_caseD_35:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x35));
        *(undefined1 (*) [16])(puVar135 + -0x35) = in_XMM0;
      case 0x25:
switchD_0071de8a_caseD_25:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x25));
        *(undefined1 (*) [16])(puVar135 + -0x25) = in_XMM0;
switchD_0071de8a_caseD_15:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x15));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x15) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x56:
switchD_0071de8a_caseD_56:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x56));
        *(undefined1 (*) [16])(puVar135 + -0x56) = in_XMM0;
      case 0x46:
switchD_0071de8a_caseD_46:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x46));
        *(undefined1 (*) [16])(puVar135 + -0x46) = in_XMM0;
      case 0x36:
switchD_0071de8a_caseD_36:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x36));
        *(undefined1 (*) [16])(puVar135 + -0x36) = in_XMM0;
      case 0x26:
switchD_0071de8a_caseD_26:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x26));
        *(undefined1 (*) [16])(puVar135 + -0x26) = in_XMM0;
switchD_0071de8a_caseD_16:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x16));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x16) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x57:
switchD_0071de8a_caseD_57:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x57));
        *(undefined1 (*) [16])(puVar135 + -0x57) = in_XMM0;
      case 0x47:
switchD_0071de8a_caseD_47:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x47));
        *(undefined1 (*) [16])(puVar135 + -0x47) = in_XMM0;
      case 0x37:
switchD_0071de8a_caseD_37:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x37));
        *(undefined1 (*) [16])(puVar135 + -0x37) = in_XMM0;
      case 0x27:
switchD_0071de8a_caseD_27:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x27));
        *(undefined1 (*) [16])(puVar135 + -0x27) = in_XMM0;
switchD_0071de8a_caseD_17:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x17));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x17) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x58:
switchD_0071de8a_caseD_58:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x58));
        *(undefined1 (*) [16])(puVar135 + -0x58) = in_XMM0;
      case 0x48:
switchD_0071de8a_caseD_48:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x48));
        *(undefined1 (*) [16])(puVar135 + -0x48) = in_XMM0;
      case 0x38:
switchD_0071de8a_caseD_38:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x38));
        *(undefined1 (*) [16])(puVar135 + -0x38) = in_XMM0;
      case 0x28:
switchD_0071de8a_caseD_28:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x28));
        *(undefined1 (*) [16])(puVar135 + -0x28) = in_XMM0;
switchD_0071de8a_caseD_18:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x18));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x18) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x59:
switchD_0071de8a_caseD_59:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x59));
        *(undefined1 (*) [16])(puVar135 + -0x59) = in_XMM0;
      case 0x49:
switchD_0071de8a_caseD_49:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x49));
        *(undefined1 (*) [16])(puVar135 + -0x49) = in_XMM0;
      case 0x39:
switchD_0071de8a_caseD_39:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x39));
        *(undefined1 (*) [16])(puVar135 + -0x39) = in_XMM0;
      case 0x29:
switchD_0071de8a_caseD_29:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x29));
        *(undefined1 (*) [16])(puVar135 + -0x29) = in_XMM0;
switchD_0071de8a_caseD_19:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x19));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x19) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x5a:
switchD_0071de8a_caseD_5a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x5a));
        *(undefined1 (*) [16])(puVar135 + -0x5a) = in_XMM0;
      case 0x4a:
switchD_0071de8a_caseD_4a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x4a));
        *(undefined1 (*) [16])(puVar135 + -0x4a) = in_XMM0;
      case 0x3a:
switchD_0071de8a_caseD_3a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x3a));
        *(undefined1 (*) [16])(puVar135 + -0x3a) = in_XMM0;
      case 0x2a:
switchD_0071de8a_caseD_2a:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x2a));
        *(undefined1 (*) [16])(puVar135 + -0x2a) = in_XMM0;
switchD_0071de8a_caseD_1a:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x1a));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x1a) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x5b:
switchD_0071de8a_caseD_5b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x5b));
        *(undefined1 (*) [16])(puVar135 + -0x5b) = in_XMM0;
      case 0x4b:
switchD_0071de8a_caseD_4b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x4b));
        *(undefined1 (*) [16])(puVar135 + -0x4b) = in_XMM0;
      case 0x3b:
switchD_0071de8a_caseD_3b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x3b));
        *(undefined1 (*) [16])(puVar135 + -0x3b) = in_XMM0;
      case 0x2b:
switchD_0071de8a_caseD_2b:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x2b));
        *(undefined1 (*) [16])(puVar135 + -0x2b) = in_XMM0;
switchD_0071de8a_caseD_1b:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x1b));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x1b) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x5c:
switchD_0071de8a_caseD_5c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x5c));
        *(undefined1 (*) [16])(puVar135 + -0x5c) = in_XMM0;
      case 0x4c:
switchD_0071de8a_caseD_4c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x4c));
        *(undefined1 (*) [16])(puVar135 + -0x4c) = in_XMM0;
      case 0x3c:
switchD_0071de8a_caseD_3c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x3c));
        *(undefined1 (*) [16])(puVar135 + -0x3c) = in_XMM0;
      case 0x2c:
switchD_0071de8a_caseD_2c:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x2c));
        *(undefined1 (*) [16])(puVar135 + -0x2c) = in_XMM0;
switchD_0071de8a_caseD_1c:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x1c));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x1c) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x5d:
switchD_0071de8a_caseD_5d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x5d));
        *(undefined1 (*) [16])(puVar135 + -0x5d) = in_XMM0;
      case 0x4d:
switchD_0071de8a_caseD_4d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x4d));
        *(undefined1 (*) [16])(puVar135 + -0x4d) = in_XMM0;
      case 0x3d:
switchD_0071de8a_caseD_3d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x3d));
        *(undefined1 (*) [16])(puVar135 + -0x3d) = in_XMM0;
      case 0x2d:
switchD_0071de8a_caseD_2d:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x2d));
        *(undefined1 (*) [16])(puVar135 + -0x2d) = in_XMM0;
switchD_0071de8a_caseD_1d:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x1d));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x1d) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x5e:
switchD_0071de8a_caseD_5e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x5e));
        *(undefined1 (*) [16])(puVar135 + -0x5e) = in_XMM0;
      case 0x4e:
switchD_0071de8a_caseD_4e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x4e));
        *(undefined1 (*) [16])(puVar135 + -0x4e) = in_XMM0;
      case 0x3e:
switchD_0071de8a_caseD_3e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x3e));
        *(undefined1 (*) [16])(puVar135 + -0x3e) = in_XMM0;
      case 0x2e:
switchD_0071de8a_caseD_2e:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x2e));
        *(undefined1 (*) [16])(puVar135 + -0x2e) = in_XMM0;
switchD_0071de8a_caseD_1e:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x1e));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x1e) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x5f:
switchD_0071de8a_caseD_5f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x5f));
        *(undefined1 (*) [16])(puVar135 + -0x5f) = in_XMM0;
      case 0x4f:
switchD_0071de8a_caseD_4f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x4f));
        *(undefined1 (*) [16])(puVar135 + -0x4f) = in_XMM0;
      case 0x3f:
switchD_0071de8a_caseD_3f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x3f));
        *(undefined1 (*) [16])(puVar135 + -0x3f) = in_XMM0;
      case 0x2f:
switchD_0071de8a_caseD_2f:
        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x2f));
        *(undefined1 (*) [16])(puVar135 + -0x2f) = in_XMM0;
switchD_0071de8a_caseD_1f:
        auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x1f));
        auVar139 = lddqu(in_XMM1,*(undefined1 (*) [16])(puVar131 + -0x10));
        *(undefined1 (*) [16])(puVar135 + -0x1f) = auVar138;
        *(undefined1 (*) [16])(puVar135 + -0x10) = auVar139;
        return puVar126;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 2:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -2);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -2);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 0xe);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x1e);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x2e);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x3e);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x4e);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x6e);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x5e);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,2);
        pauVar133[6] = auVar103._2_16_;
        pauVar133[5] = auVar104._2_16_;
        pauVar133[4] = auVar105._2_16_;
        pauVar133[3] = auVar106._2_16_;
        pauVar133[2] = auVar107._2_16_;
        pauVar133[1] = auVar108._2_16_;
        *pauVar133 = auVar109._2_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 3:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -3);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -3);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 0xd);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x1d);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x2d);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x3d);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x4d);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x6d);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x5d);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,3);
        pauVar133[6] = auVar103._3_16_;
        pauVar133[5] = auVar104._3_16_;
        pauVar133[4] = auVar105._3_16_;
        pauVar133[3] = auVar106._3_16_;
        pauVar133[2] = auVar107._3_16_;
        pauVar133[1] = auVar108._3_16_;
        *pauVar133 = auVar109._3_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 4:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -4);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -4);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 0xc);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x1c);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x2c);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x3c);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x4c);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x6c);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x5c);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,4);
        pauVar133[6] = auVar103._4_16_;
        pauVar133[5] = auVar104._4_16_;
        pauVar133[4] = auVar105._4_16_;
        pauVar133[3] = auVar106._4_16_;
        pauVar133[2] = auVar107._4_16_;
        pauVar133[1] = auVar108._4_16_;
        *pauVar133 = auVar109._4_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 5:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -5);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -5);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 0xb);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x1b);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x2b);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x3b);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x4b);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x6b);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x5b);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,5);
        pauVar133[6] = auVar103._5_16_;
        pauVar133[5] = auVar104._5_16_;
        pauVar133[4] = auVar105._5_16_;
        pauVar133[3] = auVar106._5_16_;
        pauVar133[2] = auVar107._5_16_;
        pauVar133[1] = auVar108._5_16_;
        *pauVar133 = auVar109._5_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 6:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -6);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -6);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 10);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x1a);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x2a);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x3a);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x4a);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x6a);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x5a);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,6);
        pauVar133[6] = auVar103._6_16_;
        pauVar133[5] = auVar104._6_16_;
        pauVar133[4] = auVar105._6_16_;
        pauVar133[3] = auVar106._6_16_;
        pauVar133[2] = auVar107._6_16_;
        pauVar133[1] = auVar108._6_16_;
        *pauVar133 = auVar109._6_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 7:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -7);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -7);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 9);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x19);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x29);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x39);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x49);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x69);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x59);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,7);
        pauVar133[6] = auVar103._7_16_;
        pauVar133[5] = auVar104._7_16_;
        pauVar133[4] = auVar105._7_16_;
        pauVar133[3] = auVar106._7_16_;
        pauVar133[2] = auVar107._7_16_;
        pauVar133[1] = auVar108._7_16_;
        *pauVar133 = auVar109._7_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 8:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])(puVar130 + -1);
        uVar122 = *puVar130;
        uVar123 = puVar130[1];
        uVar120 = puVar130[2];
        uVar121 = puVar130[3];
        uVar118 = puVar130[4];
        uVar119 = puVar130[5];
        uVar116 = puVar130[6];
        uVar117 = puVar130[7];
        uVar114 = puVar130[8];
        uVar115 = puVar130[9];
        uVar112 = puVar130[10];
        uVar113 = puVar130[0xb];
        uVar110 = puVar130[0xc];
        uVar111 = puVar130[0xd];
        puVar134 = puVar130 + 0xe;
        uVar4 = puVar130[0xf];
        puVar130 = puVar130 + 0x10;
        *(undefined8 *)(pauVar133[7] + 8) = *puVar134;
        *(undefined8 *)pauVar133[8] = uVar4;
        *(undefined8 *)(pauVar133[6] + 8) = uVar110;
        *(undefined8 *)pauVar133[7] = uVar111;
        *(undefined8 *)(pauVar133[5] + 8) = uVar112;
        *(undefined8 *)pauVar133[6] = uVar113;
        *(undefined8 *)(pauVar133[4] + 8) = uVar114;
        *(undefined8 *)pauVar133[5] = uVar115;
        *(undefined8 *)(pauVar133[3] + 8) = uVar116;
        *(undefined8 *)pauVar133[4] = uVar117;
        *(undefined8 *)(pauVar133[2] + 8) = uVar118;
        *(undefined8 *)pauVar133[3] = uVar119;
        *(undefined8 *)(pauVar133[1] + 8) = uVar120;
        *(undefined8 *)pauVar133[2] = uVar121;
        *(undefined8 *)(*pauVar133 + 8) = uVar122;
        *(undefined8 *)pauVar133[1] = uVar123;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 9:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -9);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -9);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 7);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x17);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x27);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x37);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x47);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x67);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x57);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,9);
        pauVar133[6] = auVar103._9_16_;
        pauVar133[5] = auVar104._9_16_;
        pauVar133[4] = auVar105._9_16_;
        pauVar133[3] = auVar106._9_16_;
        pauVar133[2] = auVar107._9_16_;
        pauVar133[1] = auVar108._9_16_;
        *pauVar133 = auVar109._9_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 10:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -10);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -10);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 6);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x16);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x26);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x36);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x46);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x66);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x56);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,10);
        pauVar133[6] = auVar103._10_16_;
        pauVar133[5] = auVar104._10_16_;
        pauVar133[4] = auVar105._10_16_;
        pauVar133[3] = auVar106._10_16_;
        pauVar133[2] = auVar107._10_16_;
        pauVar133[1] = auVar108._10_16_;
        *pauVar133 = auVar109._10_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 0xb:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -0xb);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -0xb);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 5);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x15);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x25);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x35);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x45);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x65);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x55);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,0xb);
        pauVar133[6] = auVar103._11_16_;
        pauVar133[5] = auVar104._11_16_;
        pauVar133[4] = auVar105._11_16_;
        pauVar133[3] = auVar106._11_16_;
        pauVar133[2] = auVar107._11_16_;
        pauVar133[1] = auVar108._11_16_;
        *pauVar133 = auVar109._11_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 0xc:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -0xc);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -0xc);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 4);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x14);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x24);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x34);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x44);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 100);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x54);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,0xc);
        pauVar133[6] = auVar103._12_16_;
        pauVar133[5] = auVar104._12_16_;
        pauVar133[4] = auVar105._12_16_;
        pauVar133[3] = auVar106._12_16_;
        pauVar133[2] = auVar107._12_16_;
        pauVar133[1] = auVar108._12_16_;
        *pauVar133 = auVar109._12_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 0xd:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -0xd);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -0xd);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 3);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x13);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x23);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x33);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x43);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 99);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x53);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,0xd);
        pauVar133[6] = auVar103._13_16_;
        pauVar133[5] = auVar104._13_16_;
        pauVar133[4] = auVar105._13_16_;
        pauVar133[3] = auVar106._13_16_;
        pauVar133[2] = auVar107._13_16_;
        pauVar133[1] = auVar108._13_16_;
        *pauVar133 = auVar109._13_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 0xe:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -0xe);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -0xe);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 2);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x12);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x22);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x32);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x42);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x62);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x52);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,0xe);
        pauVar133[6] = auVar103._14_16_;
        pauVar133[5] = auVar104._14_16_;
        pauVar133[4] = auVar105._14_16_;
        pauVar133[3] = auVar106._14_16_;
        pauVar133[2] = auVar107._14_16_;
        pauVar133[1] = auVar108._14_16_;
        *pauVar133 = auVar109._14_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
      break;
    case 0xf:
      do {
        uVar132 = param_3;
        in_XMM1 = *(undefined1 (*) [16])*(undefined1 (*) [32])((long)puVar130 + -0xf);
        auVar109 = *(undefined1 (*) [32])((long)puVar130 + -0xf);
        auVar108 = *(undefined1 (*) [32])((long)puVar130 + 1);
        auVar107 = *(undefined1 (*) [32])((long)puVar130 + 0x11);
        auVar106 = *(undefined1 (*) [32])((long)puVar130 + 0x21);
        auVar105 = *(undefined1 (*) [32])((long)puVar130 + 0x31);
        auVar104 = *(undefined1 (*) [32])((long)puVar130 + 0x41);
        pauVar1 = (undefined1 (*) [32])((long)puVar130 + 0x61);
        auVar103 = *(undefined1 (*) [32])((long)puVar130 + 0x51);
        puVar130 = puVar130 + 0x10;
        pauVar133[7] = SUB3216(*pauVar1,0xf);
        pauVar133[6] = auVar103._15_16_;
        pauVar133[5] = auVar104._15_16_;
        pauVar133[4] = auVar105._15_16_;
        pauVar133[3] = auVar106._15_16_;
        pauVar133[2] = auVar107._15_16_;
        pauVar133[1] = auVar108._15_16_;
        *pauVar133 = auVar109._15_16_;
        pauVar133 = pauVar133 + 8;
        param_3 = uVar132 - 0x80;
      } while (0x7f < uVar132);
      *param_1 = in_XMM0;
      puVar135 = *pauVar133 + uVar132;
      puVar131 = (undefined1 *)((long)puVar130 + uVar132);
      switch(uVar132) {
      case 0:
        goto switchD_0071de8a_caseD_0;
      case 1:
        goto switchD_0071de8a_caseD_1;
      case 2:
        goto switchD_0071de8a_caseD_2;
      case 3:
        goto switchD_0071de8a_caseD_3;
      case 4:
        goto switchD_0071de8a_caseD_4;
      case 5:
        goto switchD_0071de8a_caseD_5;
      case 6:
        goto switchD_0071de8a_caseD_6;
      case 7:
        goto switchD_0071de8a_caseD_7;
      case 8:
        goto switchD_0071de8a_caseD_8;
      case 9:
        goto switchD_0071de8a_caseD_9;
      case 10:
        goto switchD_0071de8a_caseD_a;
      case 0xb:
        goto switchD_0071de8a_caseD_b;
      case 0xc:
        goto switchD_0071de8a_caseD_c;
      case 0xd:
        goto switchD_0071de8a_caseD_d;
      case 0xe:
        goto switchD_0071de8a_caseD_e;
      case 0xf:
        goto switchD_0071de8a_caseD_f;
      case 0x11:
        goto switchD_0071de8a_caseD_11;
      case 0x12:
        goto switchD_0071de8a_caseD_12;
      case 0x13:
        goto switchD_0071de8a_caseD_13;
      case 0x14:
        goto switchD_0071de8a_caseD_14;
      case 0x15:
        goto switchD_0071de8a_caseD_15;
      case 0x16:
        goto switchD_0071de8a_caseD_16;
      case 0x17:
        goto switchD_0071de8a_caseD_17;
      case 0x18:
        goto switchD_0071de8a_caseD_18;
      case 0x19:
        goto switchD_0071de8a_caseD_19;
      case 0x1a:
        goto switchD_0071de8a_caseD_1a;
      case 0x1b:
        goto switchD_0071de8a_caseD_1b;
      case 0x1c:
        goto switchD_0071de8a_caseD_1c;
      case 0x1d:
        goto switchD_0071de8a_caseD_1d;
      case 0x1e:
        goto switchD_0071de8a_caseD_1e;
      case 0x1f:
        goto switchD_0071de8a_caseD_1f;
      case 0x20:
        goto switchD_0071de8a_caseD_20;
      case 0x21:
        goto switchD_0071de8a_caseD_21;
      case 0x22:
        goto switchD_0071de8a_caseD_22;
      case 0x23:
        goto switchD_0071de8a_caseD_23;
      case 0x24:
        goto switchD_0071de8a_caseD_24;
      case 0x25:
        goto switchD_0071de8a_caseD_25;
      case 0x26:
        goto switchD_0071de8a_caseD_26;
      case 0x27:
        goto switchD_0071de8a_caseD_27;
      case 0x28:
        goto switchD_0071de8a_caseD_28;
      case 0x29:
        goto switchD_0071de8a_caseD_29;
      case 0x2a:
        goto switchD_0071de8a_caseD_2a;
      case 0x2b:
        goto switchD_0071de8a_caseD_2b;
      case 0x2c:
        goto switchD_0071de8a_caseD_2c;
      case 0x2d:
        goto switchD_0071de8a_caseD_2d;
      case 0x2e:
        goto switchD_0071de8a_caseD_2e;
      case 0x2f:
        goto switchD_0071de8a_caseD_2f;
      case 0x30:
        goto switchD_0071de8a_caseD_30;
      case 0x31:
        goto switchD_0071de8a_caseD_31;
      case 0x32:
        goto switchD_0071de8a_caseD_32;
      case 0x33:
        goto switchD_0071de8a_caseD_33;
      case 0x34:
        goto switchD_0071de8a_caseD_34;
      case 0x35:
        goto switchD_0071de8a_caseD_35;
      case 0x36:
        goto switchD_0071de8a_caseD_36;
      case 0x37:
        goto switchD_0071de8a_caseD_37;
      case 0x38:
        goto switchD_0071de8a_caseD_38;
      case 0x39:
        goto switchD_0071de8a_caseD_39;
      case 0x3a:
        goto switchD_0071de8a_caseD_3a;
      case 0x3b:
        goto switchD_0071de8a_caseD_3b;
      case 0x3c:
        goto switchD_0071de8a_caseD_3c;
      case 0x3d:
        goto switchD_0071de8a_caseD_3d;
      case 0x3e:
        goto switchD_0071de8a_caseD_3e;
      case 0x3f:
        goto switchD_0071de8a_caseD_3f;
      case 0x40:
        goto switchD_0071de8a_caseD_40;
      case 0x41:
        goto switchD_0071de8a_caseD_41;
      case 0x42:
        goto switchD_0071de8a_caseD_42;
      case 0x43:
        goto switchD_0071de8a_caseD_43;
      case 0x44:
        goto switchD_0071de8a_caseD_44;
      case 0x45:
        goto switchD_0071de8a_caseD_45;
      case 0x46:
        goto switchD_0071de8a_caseD_46;
      case 0x47:
        goto switchD_0071de8a_caseD_47;
      case 0x48:
        goto switchD_0071de8a_caseD_48;
      case 0x49:
        goto switchD_0071de8a_caseD_49;
      case 0x4a:
        goto switchD_0071de8a_caseD_4a;
      case 0x4b:
        goto switchD_0071de8a_caseD_4b;
      case 0x4c:
        goto switchD_0071de8a_caseD_4c;
      case 0x4d:
        goto switchD_0071de8a_caseD_4d;
      case 0x4e:
        goto switchD_0071de8a_caseD_4e;
      case 0x4f:
        goto switchD_0071de8a_caseD_4f;
      case 0x50:
        goto switchD_0071de8a_caseD_50;
      case 0x51:
        goto switchD_0071de8a_caseD_51;
      case 0x52:
        goto switchD_0071de8a_caseD_52;
      case 0x53:
        goto switchD_0071de8a_caseD_53;
      case 0x54:
        goto switchD_0071de8a_caseD_54;
      case 0x55:
        goto switchD_0071de8a_caseD_55;
      case 0x56:
        goto switchD_0071de8a_caseD_56;
      case 0x57:
        goto switchD_0071de8a_caseD_57;
      case 0x58:
        goto switchD_0071de8a_caseD_58;
      case 0x59:
        goto switchD_0071de8a_caseD_59;
      case 0x5a:
        goto switchD_0071de8a_caseD_5a;
      case 0x5b:
        goto switchD_0071de8a_caseD_5b;
      case 0x5c:
        goto switchD_0071de8a_caseD_5c;
      case 0x5d:
        goto switchD_0071de8a_caseD_5d;
      case 0x5e:
        goto switchD_0071de8a_caseD_5e;
      case 0x5f:
        goto switchD_0071de8a_caseD_5f;
      case 0x60:
        goto switchD_0071de8a_caseD_60;
      case 0x61:
        goto switchD_0071de8a_caseD_61;
      case 0x62:
        goto switchD_0071de8a_caseD_62;
      case 99:
        goto switchD_0071de8a_caseD_63;
      case 100:
        goto switchD_0071de8a_caseD_64;
      case 0x65:
        goto switchD_0071de8a_caseD_65;
      case 0x66:
        goto switchD_0071de8a_caseD_66;
      case 0x67:
        goto switchD_0071de8a_caseD_67;
      case 0x68:
        goto switchD_0071de8a_caseD_68;
      case 0x69:
        goto switchD_0071de8a_caseD_69;
      case 0x6a:
        goto switchD_0071de8a_caseD_6a;
      case 0x6b:
        goto switchD_0071de8a_caseD_6b;
      case 0x6c:
        goto switchD_0071de8a_caseD_6c;
      case 0x6d:
        goto switchD_0071de8a_caseD_6d;
      case 0x6e:
        goto switchD_0071de8a_caseD_6e;
      case 0x6f:
        goto switchD_0071de8a_caseD_6f;
      case 0x70:
        goto switchD_0071de8a_caseD_70;
      case 0x71:
        goto switchD_0071de8a_caseD_71;
      case 0x72:
        goto switchD_0071de8a_caseD_72;
      case 0x73:
        goto switchD_0071de8a_caseD_73;
      case 0x74:
        goto switchD_0071de8a_caseD_74;
      case 0x75:
        goto switchD_0071de8a_caseD_75;
      case 0x76:
        goto switchD_0071de8a_caseD_76;
      case 0x77:
        goto switchD_0071de8a_caseD_77;
      case 0x78:
        goto switchD_0071de8a_caseD_78;
      case 0x79:
        goto switchD_0071de8a_caseD_79;
      case 0x7a:
        goto switchD_0071de8a_caseD_7a;
      case 0x7b:
        goto switchD_0071de8a_caseD_7b;
      case 0x7c:
        goto switchD_0071de8a_caseD_7c;
      case 0x7d:
        goto switchD_0071de8a_caseD_7d;
      case 0x7e:
        goto switchD_0071de8a_caseD_7e;
      case 0x7f:
        goto switchD_0071de8a_caseD_7f;
      }
    }
switchD_0071de8a_caseD_10:
    auVar138 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x10));
    *(undefined1 (*) [16])(puVar135 + -0x10) = auVar138;
switchD_0071de8a_caseD_0:
    return puVar126;
  }
  if ((byte)param_2 <= (byte)param_1) {
    switch(param_3) {
    case 0:
      goto switchD_0071de9e_caseD_0;
    case 1:
      goto switchD_0071de9e_caseD_1;
    case 2:
      goto switchD_0071de9e_caseD_2;
    case 3:
      goto switchD_0071de9e_caseD_3;
    case 4:
      goto switchD_0071de9e_caseD_4;
    case 5:
      goto switchD_0071de9e_caseD_5;
    case 6:
      goto switchD_0071de9e_caseD_6;
    case 7:
      goto switchD_0071de9e_caseD_7;
    case 8:
      goto switchD_0071de9e_caseD_8;
    case 9:
      goto switchD_0071de9e_caseD_9;
    case 10:
      goto switchD_0071de9e_caseD_a;
    case 0xb:
      goto switchD_0071de9e_caseD_b;
    case 0xc:
      goto switchD_0071de9e_caseD_c;
    case 0xd:
      goto switchD_0071de9e_caseD_d;
    case 0xe:
      goto switchD_0071de9e_caseD_e;
    case 0xf:
      goto switchD_0071de9e_caseD_f;
    case 0x10:
      goto switchD_0071de9e_caseD_10;
    case 0x11:
      goto switchD_0071de9e_caseD_11;
    case 0x12:
      goto switchD_0071de9e_caseD_12;
    case 0x13:
      goto switchD_0071de9e_caseD_13;
    case 0x14:
      goto switchD_0071de9e_caseD_14;
    case 0x15:
      goto switchD_0071de9e_caseD_15;
    case 0x16:
      goto switchD_0071de9e_caseD_16;
    case 0x17:
      goto switchD_0071de9e_caseD_17;
    case 0x18:
      goto switchD_0071de9e_caseD_18;
    case 0x19:
      goto switchD_0071de9e_caseD_19;
    case 0x1a:
      goto switchD_0071de9e_caseD_1a;
    case 0x1b:
      goto switchD_0071de9e_caseD_1b;
    case 0x1c:
      goto switchD_0071de9e_caseD_1c;
    case 0x1d:
      goto switchD_0071de9e_caseD_1d;
    case 0x1e:
      goto switchD_0071de9e_caseD_1e;
    case 0x1f:
      goto switchD_0071de9e_caseD_1f;
    case 0x20:
      goto switchD_0071de9e_caseD_20;
    case 0x21:
      goto switchD_0071de9e_caseD_21;
    case 0x22:
      goto switchD_0071de9e_caseD_22;
    case 0x23:
      goto switchD_0071de9e_caseD_23;
    case 0x24:
      goto switchD_0071de9e_caseD_24;
    case 0x25:
      goto switchD_0071de9e_caseD_25;
    case 0x26:
      goto switchD_0071de9e_caseD_26;
    case 0x27:
      goto switchD_0071de9e_caseD_27;
    case 0x28:
      goto switchD_0071de9e_caseD_28;
    case 0x29:
      goto switchD_0071de9e_caseD_29;
    case 0x2a:
      goto switchD_0071de9e_caseD_2a;
    case 0x2b:
      goto switchD_0071de9e_caseD_2b;
    case 0x2c:
      goto switchD_0071de9e_caseD_2c;
    case 0x2d:
      goto switchD_0071de9e_caseD_2d;
    case 0x2e:
      goto switchD_0071de9e_caseD_2e;
    case 0x2f:
      goto switchD_0071de9e_caseD_2f;
    case 0x30:
      goto switchD_0071de9e_caseD_30;
    case 0x31:
      goto switchD_0071de9e_caseD_31;
    case 0x32:
      goto switchD_0071de9e_caseD_32;
    case 0x33:
      goto switchD_0071de9e_caseD_33;
    case 0x34:
      goto switchD_0071de9e_caseD_34;
    case 0x35:
      goto switchD_0071de9e_caseD_35;
    case 0x36:
      goto switchD_0071de9e_caseD_36;
    case 0x37:
      goto switchD_0071de9e_caseD_37;
    case 0x38:
      goto switchD_0071de9e_caseD_38;
    case 0x39:
      goto switchD_0071de9e_caseD_39;
    case 0x3a:
      goto switchD_0071de9e_caseD_3a;
    case 0x3b:
      goto switchD_0071de9e_caseD_3b;
    case 0x3c:
      goto switchD_0071de9e_caseD_3c;
    case 0x3d:
      goto switchD_0071de9e_caseD_3d;
    case 0x3e:
      goto switchD_0071de9e_caseD_3e;
    case 0x3f:
      goto switchD_0071de9e_caseD_3f;
    case 0x40:
      goto switchD_0071de9e_caseD_40;
    case 0x41:
      goto switchD_0071de9e_caseD_41;
    case 0x42:
      goto switchD_0071de9e_caseD_42;
    case 0x43:
      goto switchD_0071de9e_caseD_43;
    case 0x44:
      goto switchD_0071de9e_caseD_44;
    case 0x45:
      goto switchD_0071de9e_caseD_45;
    case 0x46:
      goto switchD_0071de9e_caseD_46;
    case 0x47:
      goto switchD_0071de9e_caseD_47;
    case 0x48:
      goto switchD_0071de9e_caseD_48;
    case 0x49:
      goto switchD_0071de9e_caseD_49;
    case 0x4a:
      goto switchD_0071de9e_caseD_4a;
    case 0x4b:
      goto switchD_0071de9e_caseD_4b;
    case 0x4c:
      goto switchD_0071de9e_caseD_4c;
    case 0x4d:
      goto switchD_0071de9e_caseD_4d;
    case 0x4e:
      goto switchD_0071de9e_caseD_4e;
    case 0x4f:
      goto switchD_0071de9e_caseD_4f;
    case 0x50:
      goto switchD_0071de9e_caseD_50;
    case 0x51:
      goto switchD_0071de9e_caseD_51;
    case 0x52:
      goto switchD_0071de9e_caseD_52;
    case 0x53:
      goto switchD_0071de9e_caseD_53;
    case 0x54:
      goto switchD_0071de9e_caseD_54;
    case 0x55:
      goto switchD_0071de9e_caseD_55;
    case 0x56:
      goto switchD_0071de9e_caseD_56;
    case 0x57:
      goto switchD_0071de9e_caseD_57;
    case 0x58:
      goto switchD_0071de9e_caseD_58;
    case 0x59:
      goto switchD_0071de9e_caseD_59;
    case 0x5a:
      goto switchD_0071de9e_caseD_5a;
    case 0x5b:
      goto switchD_0071de9e_caseD_5b;
    case 0x5c:
      goto switchD_0071de9e_caseD_5c;
    case 0x5d:
      goto switchD_0071de9e_caseD_5d;
    case 0x5e:
      goto switchD_0071de9e_caseD_5e;
    case 0x5f:
      goto switchD_0071de9e_caseD_5f;
    case 0x60:
      break;
    case 0x61:
      goto switchD_0071de9e_caseD_61;
    case 0x62:
      goto switchD_0071de9e_caseD_62;
    case 99:
      goto switchD_0071de9e_caseD_63;
    case 100:
      goto switchD_0071de9e_caseD_64;
    case 0x65:
      goto switchD_0071de9e_caseD_65;
    case 0x66:
      goto switchD_0071de9e_caseD_66;
    case 0x67:
      goto switchD_0071de9e_caseD_67;
    case 0x68:
      goto switchD_0071de9e_caseD_68;
    case 0x69:
      goto switchD_0071de9e_caseD_69;
    case 0x6a:
      goto switchD_0071de9e_caseD_6a;
    case 0x6b:
      goto switchD_0071de9e_caseD_6b;
    case 0x6c:
      goto switchD_0071de9e_caseD_6c;
    case 0x6d:
      goto switchD_0071de9e_caseD_6d;
    case 0x6e:
      goto switchD_0071de9e_caseD_6e;
    case 0x6f:
      goto switchD_0071de9e_caseD_6f;
    case 0x80:
      in_XMM0 = lddqu(in_XMM0,param_2[7]);
      param_1[7] = in_XMM0;
    case 0x70:
switchD_0071de9e_caseD_70:
      in_XMM0 = lddqu(in_XMM0,param_2[6]);
      param_1[6] = in_XMM0;
      break;
    case 0x81:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 1));
      *(undefined1 (*) [16])(param_1[7] + 1) = in_XMM0;
    case 0x71:
switchD_0071de9e_caseD_71:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 1));
      *(undefined1 (*) [16])(param_1[6] + 1) = in_XMM0;
switchD_0071de9e_caseD_61:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 1));
      *(undefined1 (*) [16])(param_1[5] + 1) = in_XMM0;
      goto switchD_0071de9e_caseD_51;
    case 0x82:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 2));
      *(undefined1 (*) [16])(param_1[7] + 2) = in_XMM0;
    case 0x72:
switchD_0071de9e_caseD_72:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 2));
      *(undefined1 (*) [16])(param_1[6] + 2) = in_XMM0;
switchD_0071de9e_caseD_62:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 2));
      *(undefined1 (*) [16])(param_1[5] + 2) = in_XMM0;
      goto switchD_0071de9e_caseD_52;
    case 0x83:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 3));
      *(undefined1 (*) [16])(param_1[7] + 3) = in_XMM0;
    case 0x73:
switchD_0071de9e_caseD_73:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 3));
      *(undefined1 (*) [16])(param_1[6] + 3) = in_XMM0;
switchD_0071de9e_caseD_63:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 3));
      *(undefined1 (*) [16])(param_1[5] + 3) = in_XMM0;
      goto switchD_0071de9e_caseD_53;
    case 0x84:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 4));
      *(undefined1 (*) [16])(param_1[7] + 4) = in_XMM0;
    case 0x74:
switchD_0071de9e_caseD_74:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 4));
      *(undefined1 (*) [16])(param_1[6] + 4) = in_XMM0;
switchD_0071de9e_caseD_64:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 4));
      *(undefined1 (*) [16])(param_1[5] + 4) = in_XMM0;
      goto switchD_0071de9e_caseD_54;
    case 0x85:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 5));
      *(undefined1 (*) [16])(param_1[7] + 5) = in_XMM0;
    case 0x75:
switchD_0071de9e_caseD_75:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 5));
      *(undefined1 (*) [16])(param_1[6] + 5) = in_XMM0;
switchD_0071de9e_caseD_65:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 5));
      *(undefined1 (*) [16])(param_1[5] + 5) = in_XMM0;
      goto switchD_0071de9e_caseD_55;
    case 0x86:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 6));
      *(undefined1 (*) [16])(param_1[7] + 6) = in_XMM0;
    case 0x76:
switchD_0071de9e_caseD_76:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 6));
      *(undefined1 (*) [16])(param_1[6] + 6) = in_XMM0;
switchD_0071de9e_caseD_66:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 6));
      *(undefined1 (*) [16])(param_1[5] + 6) = in_XMM0;
      goto switchD_0071de9e_caseD_56;
    case 0x87:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 7));
      *(undefined1 (*) [16])(param_1[7] + 7) = in_XMM0;
    case 0x77:
switchD_0071de9e_caseD_77:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 7));
      *(undefined1 (*) [16])(param_1[6] + 7) = in_XMM0;
switchD_0071de9e_caseD_67:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 7));
      *(undefined1 (*) [16])(param_1[5] + 7) = in_XMM0;
      goto switchD_0071de9e_caseD_57;
    case 0x88:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 8));
      *(undefined1 (*) [16])(param_1[7] + 8) = in_XMM0;
    case 0x78:
switchD_0071de9e_caseD_78:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 8));
      *(undefined1 (*) [16])(param_1[6] + 8) = in_XMM0;
switchD_0071de9e_caseD_68:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 8));
      *(undefined1 (*) [16])(param_1[5] + 8) = in_XMM0;
      goto switchD_0071de9e_caseD_58;
    case 0x89:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 9));
      *(undefined1 (*) [16])(param_1[7] + 9) = in_XMM0;
    case 0x79:
switchD_0071de9e_caseD_79:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 9));
      *(undefined1 (*) [16])(param_1[6] + 9) = in_XMM0;
switchD_0071de9e_caseD_69:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 9));
      *(undefined1 (*) [16])(param_1[5] + 9) = in_XMM0;
      goto switchD_0071de9e_caseD_59;
    case 0x8a:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 10));
      *(undefined1 (*) [16])(param_1[7] + 10) = in_XMM0;
    case 0x7a:
switchD_0071de9e_caseD_7a:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 10));
      *(undefined1 (*) [16])(param_1[6] + 10) = in_XMM0;
switchD_0071de9e_caseD_6a:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 10));
      *(undefined1 (*) [16])(param_1[5] + 10) = in_XMM0;
      goto switchD_0071de9e_caseD_5a;
    case 0x8b:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xb));
      *(undefined1 (*) [16])(param_1[7] + 0xb) = in_XMM0;
    case 0x7b:
switchD_0071de9e_caseD_7b:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xb));
      *(undefined1 (*) [16])(param_1[6] + 0xb) = in_XMM0;
switchD_0071de9e_caseD_6b:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xb));
      *(undefined1 (*) [16])(param_1[5] + 0xb) = in_XMM0;
      goto switchD_0071de9e_caseD_5b;
    case 0x8c:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xc));
      *(undefined1 (*) [16])(param_1[7] + 0xc) = in_XMM0;
    case 0x7c:
switchD_0071de9e_caseD_7c:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xc));
      *(undefined1 (*) [16])(param_1[6] + 0xc) = in_XMM0;
switchD_0071de9e_caseD_6c:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xc));
      *(undefined1 (*) [16])(param_1[5] + 0xc) = in_XMM0;
      goto switchD_0071de9e_caseD_5c;
    case 0x8d:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xd));
      *(undefined1 (*) [16])(param_1[7] + 0xd) = in_XMM0;
    case 0x7d:
switchD_0071de9e_caseD_7d:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xd));
      *(undefined1 (*) [16])(param_1[6] + 0xd) = in_XMM0;
switchD_0071de9e_caseD_6d:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xd));
      *(undefined1 (*) [16])(param_1[5] + 0xd) = in_XMM0;
      goto switchD_0071de9e_caseD_5d;
    case 0x8e:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xe));
      *(undefined1 (*) [16])(param_1[7] + 0xe) = in_XMM0;
    case 0x7e:
switchD_0071de9e_caseD_7e:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xe));
      *(undefined1 (*) [16])(param_1[6] + 0xe) = in_XMM0;
switchD_0071de9e_caseD_6e:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xe));
      *(undefined1 (*) [16])(param_1[5] + 0xe) = in_XMM0;
      goto switchD_0071de9e_caseD_5e;
    case 0x8f:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[7] + 0xf));
      *(undefined1 (*) [16])(param_1[7] + 0xf) = in_XMM0;
    case 0x7f:
switchD_0071de9e_caseD_7f:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[6] + 0xf));
      *(undefined1 (*) [16])(param_1[6] + 0xf) = in_XMM0;
switchD_0071de9e_caseD_6f:
      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_2[5] + 0xf));
      *(undefined1 (*) [16])(param_1[5] + 0xf) = in_XMM0;
      goto switchD_0071de9e_caseD_5f;
    }
switchD_0071de9e_caseD_60:
    in_XMM0 = lddqu(in_XMM0,param_2[5]);
    param_1[5] = in_XMM0;
    goto switchD_0071de9e_caseD_50;
  }
  puVar131 = *param_2 + param_3;
  puVar135 = *param_1 + param_3;
  switch(param_3) {
  case 0:
    goto switchD_0071de8a_caseD_0;
  case 1:
    goto switchD_0071de8a_caseD_1;
  case 2:
    goto switchD_0071de8a_caseD_2;
  case 3:
    goto switchD_0071de8a_caseD_3;
  case 4:
    goto switchD_0071de8a_caseD_4;
  case 5:
    goto switchD_0071de8a_caseD_5;
  case 6:
    goto switchD_0071de8a_caseD_6;
  case 7:
    goto switchD_0071de8a_caseD_7;
  case 8:
    goto switchD_0071de8a_caseD_8;
  case 9:
    goto switchD_0071de8a_caseD_9;
  case 10:
    goto switchD_0071de8a_caseD_a;
  case 0xb:
    goto switchD_0071de8a_caseD_b;
  case 0xc:
    goto switchD_0071de8a_caseD_c;
  case 0xd:
    goto switchD_0071de8a_caseD_d;
  case 0xe:
    goto switchD_0071de8a_caseD_e;
  case 0xf:
    goto switchD_0071de8a_caseD_f;
  case 0x10:
    goto switchD_0071de8a_caseD_10;
  case 0x11:
    goto switchD_0071de8a_caseD_11;
  case 0x12:
    goto switchD_0071de8a_caseD_12;
  case 0x13:
    goto switchD_0071de8a_caseD_13;
  case 0x14:
    goto switchD_0071de8a_caseD_14;
  case 0x15:
    goto switchD_0071de8a_caseD_15;
  case 0x16:
    goto switchD_0071de8a_caseD_16;
  case 0x17:
    goto switchD_0071de8a_caseD_17;
  case 0x18:
    goto switchD_0071de8a_caseD_18;
  case 0x19:
    goto switchD_0071de8a_caseD_19;
  case 0x1a:
    goto switchD_0071de8a_caseD_1a;
  case 0x1b:
    goto switchD_0071de8a_caseD_1b;
  case 0x1c:
    goto switchD_0071de8a_caseD_1c;
  case 0x1d:
    goto switchD_0071de8a_caseD_1d;
  case 0x1e:
    goto switchD_0071de8a_caseD_1e;
  case 0x1f:
    goto switchD_0071de8a_caseD_1f;
  case 0x20:
    goto switchD_0071de8a_caseD_20;
  case 0x21:
    goto switchD_0071de8a_caseD_21;
  case 0x22:
    goto switchD_0071de8a_caseD_22;
  case 0x23:
    goto switchD_0071de8a_caseD_23;
  case 0x24:
    goto switchD_0071de8a_caseD_24;
  case 0x25:
    goto switchD_0071de8a_caseD_25;
  case 0x26:
    goto switchD_0071de8a_caseD_26;
  case 0x27:
    goto switchD_0071de8a_caseD_27;
  case 0x28:
    goto switchD_0071de8a_caseD_28;
  case 0x29:
    goto switchD_0071de8a_caseD_29;
  case 0x2a:
    goto switchD_0071de8a_caseD_2a;
  case 0x2b:
    goto switchD_0071de8a_caseD_2b;
  case 0x2c:
    goto switchD_0071de8a_caseD_2c;
  case 0x2d:
    goto switchD_0071de8a_caseD_2d;
  case 0x2e:
    goto switchD_0071de8a_caseD_2e;
  case 0x2f:
    goto switchD_0071de8a_caseD_2f;
  case 0x30:
    goto switchD_0071de8a_caseD_30;
  case 0x31:
    goto switchD_0071de8a_caseD_31;
  case 0x32:
    goto switchD_0071de8a_caseD_32;
  case 0x33:
    goto switchD_0071de8a_caseD_33;
  case 0x34:
    goto switchD_0071de8a_caseD_34;
  case 0x35:
    goto switchD_0071de8a_caseD_35;
  case 0x36:
    goto switchD_0071de8a_caseD_36;
  case 0x37:
    goto switchD_0071de8a_caseD_37;
  case 0x38:
    goto switchD_0071de8a_caseD_38;
  case 0x39:
    goto switchD_0071de8a_caseD_39;
  case 0x3a:
    goto switchD_0071de8a_caseD_3a;
  case 0x3b:
    goto switchD_0071de8a_caseD_3b;
  case 0x3c:
    goto switchD_0071de8a_caseD_3c;
  case 0x3d:
    goto switchD_0071de8a_caseD_3d;
  case 0x3e:
    goto switchD_0071de8a_caseD_3e;
  case 0x3f:
    goto switchD_0071de8a_caseD_3f;
  case 0x40:
    goto switchD_0071de8a_caseD_40;
  case 0x41:
    goto switchD_0071de8a_caseD_41;
  case 0x42:
    goto switchD_0071de8a_caseD_42;
  case 0x43:
    goto switchD_0071de8a_caseD_43;
  case 0x44:
    goto switchD_0071de8a_caseD_44;
  case 0x45:
    goto switchD_0071de8a_caseD_45;
  case 0x46:
    goto switchD_0071de8a_caseD_46;
  case 0x47:
    goto switchD_0071de8a_caseD_47;
  case 0x48:
    goto switchD_0071de8a_caseD_48;
  case 0x49:
    goto switchD_0071de8a_caseD_49;
  case 0x4a:
    goto switchD_0071de8a_caseD_4a;
  case 0x4b:
    goto switchD_0071de8a_caseD_4b;
  case 0x4c:
    goto switchD_0071de8a_caseD_4c;
  case 0x4d:
    goto switchD_0071de8a_caseD_4d;
  case 0x4e:
    goto switchD_0071de8a_caseD_4e;
  case 0x4f:
    goto switchD_0071de8a_caseD_4f;
  case 0x50:
    goto switchD_0071de8a_caseD_50;
  case 0x51:
    goto switchD_0071de8a_caseD_51;
  case 0x52:
    goto switchD_0071de8a_caseD_52;
  case 0x53:
    goto switchD_0071de8a_caseD_53;
  case 0x54:
    goto switchD_0071de8a_caseD_54;
  case 0x55:
    goto switchD_0071de8a_caseD_55;
  case 0x56:
    goto switchD_0071de8a_caseD_56;
  case 0x57:
    goto switchD_0071de8a_caseD_57;
  case 0x58:
    goto switchD_0071de8a_caseD_58;
  case 0x59:
    goto switchD_0071de8a_caseD_59;
  case 0x5a:
    goto switchD_0071de8a_caseD_5a;
  case 0x5b:
    goto switchD_0071de8a_caseD_5b;
  case 0x5c:
    goto switchD_0071de8a_caseD_5c;
  case 0x5d:
    goto switchD_0071de8a_caseD_5d;
  case 0x5e:
    goto switchD_0071de8a_caseD_5e;
  case 0x5f:
    goto switchD_0071de8a_caseD_5f;
  case 0x60:
    break;
  case 0x61:
    goto switchD_0071de8a_caseD_61;
  case 0x62:
    goto switchD_0071de8a_caseD_62;
  case 99:
    goto switchD_0071de8a_caseD_63;
  case 100:
    goto switchD_0071de8a_caseD_64;
  case 0x65:
    goto switchD_0071de8a_caseD_65;
  case 0x66:
    goto switchD_0071de8a_caseD_66;
  case 0x67:
    goto switchD_0071de8a_caseD_67;
  case 0x68:
    goto switchD_0071de8a_caseD_68;
  case 0x69:
    goto switchD_0071de8a_caseD_69;
  case 0x6a:
    goto switchD_0071de8a_caseD_6a;
  case 0x6b:
    goto switchD_0071de8a_caseD_6b;
  case 0x6c:
    goto switchD_0071de8a_caseD_6c;
  case 0x6d:
    goto switchD_0071de8a_caseD_6d;
  case 0x6e:
    goto switchD_0071de8a_caseD_6e;
  case 0x6f:
    goto switchD_0071de8a_caseD_6f;
  case 0x80:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x80));
    *(undefined1 (*) [16])(puVar135 + -0x80) = in_XMM0;
  case 0x70:
switchD_0071de8a_caseD_70:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x70));
    *(undefined1 (*) [16])(puVar135 + -0x70) = in_XMM0;
    break;
  case 0x81:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x81));
    *(undefined1 (*) [16])(puVar135 + -0x81) = in_XMM0;
  case 0x71:
switchD_0071de8a_caseD_71:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x71));
    *(undefined1 (*) [16])(puVar135 + -0x71) = in_XMM0;
switchD_0071de8a_caseD_61:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x61));
    *(undefined1 (*) [16])(puVar135 + -0x61) = in_XMM0;
    goto switchD_0071de8a_caseD_51;
  case 0x82:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x82));
    *(undefined1 (*) [16])(puVar135 + -0x82) = in_XMM0;
  case 0x72:
switchD_0071de8a_caseD_72:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x72));
    *(undefined1 (*) [16])(puVar135 + -0x72) = in_XMM0;
switchD_0071de8a_caseD_62:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x62));
    *(undefined1 (*) [16])(puVar135 + -0x62) = in_XMM0;
    goto switchD_0071de8a_caseD_52;
  case 0x83:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x83));
    *(undefined1 (*) [16])(puVar135 + -0x83) = in_XMM0;
  case 0x73:
switchD_0071de8a_caseD_73:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x73));
    *(undefined1 (*) [16])(puVar135 + -0x73) = in_XMM0;
switchD_0071de8a_caseD_63:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -99));
    *(undefined1 (*) [16])(puVar135 + -99) = in_XMM0;
    goto switchD_0071de8a_caseD_53;
  case 0x84:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x84));
    *(undefined1 (*) [16])(puVar135 + -0x84) = in_XMM0;
  case 0x74:
switchD_0071de8a_caseD_74:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x74));
    *(undefined1 (*) [16])(puVar135 + -0x74) = in_XMM0;
switchD_0071de8a_caseD_64:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -100));
    *(undefined1 (*) [16])(puVar135 + -100) = in_XMM0;
    goto switchD_0071de8a_caseD_54;
  case 0x85:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x85));
    *(undefined1 (*) [16])(puVar135 + -0x85) = in_XMM0;
  case 0x75:
switchD_0071de8a_caseD_75:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x75));
    *(undefined1 (*) [16])(puVar135 + -0x75) = in_XMM0;
switchD_0071de8a_caseD_65:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x65));
    *(undefined1 (*) [16])(puVar135 + -0x65) = in_XMM0;
    goto switchD_0071de8a_caseD_55;
  case 0x86:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x86));
    *(undefined1 (*) [16])(puVar135 + -0x86) = in_XMM0;
  case 0x76:
switchD_0071de8a_caseD_76:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x76));
    *(undefined1 (*) [16])(puVar135 + -0x76) = in_XMM0;
switchD_0071de8a_caseD_66:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x66));
    *(undefined1 (*) [16])(puVar135 + -0x66) = in_XMM0;
    goto switchD_0071de8a_caseD_56;
  case 0x87:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x87));
    *(undefined1 (*) [16])(puVar135 + -0x87) = in_XMM0;
  case 0x77:
switchD_0071de8a_caseD_77:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x77));
    *(undefined1 (*) [16])(puVar135 + -0x77) = in_XMM0;
switchD_0071de8a_caseD_67:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x67));
    *(undefined1 (*) [16])(puVar135 + -0x67) = in_XMM0;
    goto switchD_0071de8a_caseD_57;
  case 0x88:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x88));
    *(undefined1 (*) [16])(puVar135 + -0x88) = in_XMM0;
  case 0x78:
switchD_0071de8a_caseD_78:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x78));
    *(undefined1 (*) [16])(puVar135 + -0x78) = in_XMM0;
switchD_0071de8a_caseD_68:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x68));
    *(undefined1 (*) [16])(puVar135 + -0x68) = in_XMM0;
    goto switchD_0071de8a_caseD_58;
  case 0x89:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x89));
    *(undefined1 (*) [16])(puVar135 + -0x89) = in_XMM0;
  case 0x79:
switchD_0071de8a_caseD_79:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x79));
    *(undefined1 (*) [16])(puVar135 + -0x79) = in_XMM0;
switchD_0071de8a_caseD_69:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x69));
    *(undefined1 (*) [16])(puVar135 + -0x69) = in_XMM0;
    goto switchD_0071de8a_caseD_59;
  case 0x8a:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x8a));
    *(undefined1 (*) [16])(puVar135 + -0x8a) = in_XMM0;
  case 0x7a:
switchD_0071de8a_caseD_7a:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x7a));
    *(undefined1 (*) [16])(puVar135 + -0x7a) = in_XMM0;
switchD_0071de8a_caseD_6a:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x6a));
    *(undefined1 (*) [16])(puVar135 + -0x6a) = in_XMM0;
    goto switchD_0071de8a_caseD_5a;
  case 0x8b:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x8b));
    *(undefined1 (*) [16])(puVar135 + -0x8b) = in_XMM0;
  case 0x7b:
switchD_0071de8a_caseD_7b:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x7b));
    *(undefined1 (*) [16])(puVar135 + -0x7b) = in_XMM0;
switchD_0071de8a_caseD_6b:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x6b));
    *(undefined1 (*) [16])(puVar135 + -0x6b) = in_XMM0;
    goto switchD_0071de8a_caseD_5b;
  case 0x8c:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x8c));
    *(undefined1 (*) [16])(puVar135 + -0x8c) = in_XMM0;
  case 0x7c:
switchD_0071de8a_caseD_7c:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x7c));
    *(undefined1 (*) [16])(puVar135 + -0x7c) = in_XMM0;
switchD_0071de8a_caseD_6c:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x6c));
    *(undefined1 (*) [16])(puVar135 + -0x6c) = in_XMM0;
    goto switchD_0071de8a_caseD_5c;
  case 0x8d:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x8d));
    *(undefined1 (*) [16])(puVar135 + -0x8d) = in_XMM0;
  case 0x7d:
switchD_0071de8a_caseD_7d:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x7d));
    *(undefined1 (*) [16])(puVar135 + -0x7d) = in_XMM0;
switchD_0071de8a_caseD_6d:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x6d));
    *(undefined1 (*) [16])(puVar135 + -0x6d) = in_XMM0;
    goto switchD_0071de8a_caseD_5d;
  case 0x8e:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x8e));
    *(undefined1 (*) [16])(puVar135 + -0x8e) = in_XMM0;
  case 0x7e:
switchD_0071de8a_caseD_7e:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x7e));
    *(undefined1 (*) [16])(puVar135 + -0x7e) = in_XMM0;
switchD_0071de8a_caseD_6e:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x6e));
    *(undefined1 (*) [16])(puVar135 + -0x6e) = in_XMM0;
    goto switchD_0071de8a_caseD_5e;
  case 0x8f:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x8f));
    *(undefined1 (*) [16])(puVar135 + -0x8f) = in_XMM0;
  case 0x7f:
switchD_0071de8a_caseD_7f:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x7f));
    *(undefined1 (*) [16])(puVar135 + -0x7f) = in_XMM0;
switchD_0071de8a_caseD_6f:
    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x6f));
    *(undefined1 (*) [16])(puVar135 + -0x6f) = in_XMM0;
    goto switchD_0071de8a_caseD_5f;
  }
switchD_0071de8a_caseD_60:
  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar131 + -0x60));
  *(undefined1 (*) [16])(puVar135 + -0x60) = in_XMM0;
  goto switchD_0071de8a_caseD_50;
}

