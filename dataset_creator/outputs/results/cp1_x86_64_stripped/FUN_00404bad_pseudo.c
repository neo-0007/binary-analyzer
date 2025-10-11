
/* WARNING: Removing unreachable block (ram,0x006f807e) */
/* WARNING: Removing unreachable block (ram,0x006f9b49) */
/* WARNING: Removing unreachable block (ram,0x006f9b5e) */
/* WARNING: Removing unreachable block (ram,0x006f9829) */
/* WARNING: Removing unreachable block (ram,0x006f9c53) */
/* WARNING: Removing unreachable block (ram,0x006f7fc8) */
/* WARNING: Removing unreachable block (ram,0x006f8023) */

ulong FUN_00404bad(void)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  unkbyte10 Var7;
  unkbyte10 Var8;
  unkbyte10 Var9;
  unkbyte10 Var10;
  unkbyte10 Var11;
  unkbyte10 Var12;
  unkbyte10 Var13;
  byte bVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  long in_RAX;
  undefined8 uVar23;
  ulong uVar24;
  byte *pbVar25;
  unkbyte10 *pVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  char *pcVar30;
  undefined2 *puVar31;
  char *pcVar32;
  undefined4 *puVar33;
  undefined8 uVar34;
  undefined1 *puVar35;
  long *plVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  byte *pbVar40;
  byte *pbVar41;
  long lVar42;
  long unaff_RBP;
  undefined1 *puVar43;
  long lVar44;
  byte *pbVar45;
  undefined1 *puVar46;
  ulong unaff_R13;
  char *pcVar47;
  int iVar48;
  byte *unaff_R14;
  undefined1 uVar49;
  uint *unaff_R15;
  long in_FS_OFFSET;
  bool bVar50;
  byte bVar51;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined8 extraout_XMM0_Qb;
  
  bVar51 = 0;
  pbVar41 = (byte *)(in_RAX + 2);
  do {
    pbVar45 = pbVar41;
    uVar21 = (uint)*pbVar45;
    pbVar41 = pbVar45 + 1;
  } while (uVar21 - 0x30 < 10);
LAB_006f53b7:
  cVar15 = (char)uVar21;
  uVar20 = (uint)unaff_R13;
  *(byte **)(unaff_RBP + -0x618) = pbVar45 + 1;
  switch(uVar21 - 0x4c & 0xff) {
  case 0:
  case 0x25:
    uVar21 = (uint)pbVar45[1];
    *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 3;
    pbVar45 = *(byte **)(unaff_RBP + -0x618);
    break;
  case 0x15:
    bVar14 = pbVar45[1];
    uVar21 = (uint)bVar14;
    if ((((bVar14 & 0xf7) == 0x53) || (bVar14 == 0x73)) && (*(int *)(unaff_RBP + -0x690) == 0)) {
      *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x100;
      pbVar45 = *(byte **)(unaff_RBP + -0x618);
      break;
    }
    goto LAB_006f5452;
  case 0x1c:
    uVar21 = (uint)pbVar45[1];
    if (pbVar45[1] == 0x68) {
      uVar21 = (uint)pbVar45[2];
      pbVar45 = pbVar45 + 2;
      *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x200;
    }
    else {
      *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 4;
      pbVar45 = *(byte **)(unaff_RBP + -0x618);
    }
    break;
  case 0x1e:
  case 0x28:
  case 0x2e:
    *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 1;
    uVar21 = (uint)pbVar45[1];
    pbVar45 = *(byte **)(unaff_RBP + -0x618);
    break;
  case 0x20:
    uVar21 = (uint)pbVar45[1];
    if (pbVar45[1] == 0x6c) {
      uVar21 = (uint)pbVar45[2];
      *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 3;
      pbVar45 = pbVar45 + 2;
    }
    else {
      *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 1;
      pbVar45 = *(byte **)(unaff_RBP + -0x618);
    }
    break;
  case 0x21:
    uVar21 = (uint)pbVar45[1];
    if (pbVar45[1] == 0x6c) {
      uVar21 = (uint)pbVar45[2];
      pbVar45 = pbVar45 + 2;
      *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x2001;
    }
    else {
      *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x2000;
      pbVar45 = *(byte **)(unaff_RBP + -0x618);
    }
  }
  cVar15 = (char)uVar21;
  if (cVar15 == '\0') goto switchD_006f555e_default;
  *(byte **)(unaff_RBP + -0x618) = pbVar45 + 1;
  if (*(int *)(unaff_RBP + -0x610) == 0) {
    bVar14 = (byte)(uVar21 - 0x43);
    if ((0x2b < bVar14) || ((0xfffff7fefefffffeU >> ((ulong)(uVar21 - 0x43) & 0x3f) & 1) != 0))
    goto LAB_006f5452;
    pbVar41 = unaff_R14;
    switch(bVar14) {
    case 0:
      goto switchD_006f5e94_caseD_43;
    default:
      goto switchD_006f555e_default;
    case 2:
    case 3:
    case 4:
    case 0x1e:
    case 0x22:
    case 0x23:
    case 0x24:
      goto switchD_006f5835_caseD_2;
    case 0x10:
      goto switchD_006f5e94_caseD_53;
    case 0x15:
      *(byte **)(unaff_RBP + -0x620) = unaff_R14;
      goto switchD_006f555e_caseD_58;
    case 0x18:
switchD_006f5e94_caseD_5b:
      *(byte **)(unaff_RBP + -0x620) = unaff_R14;
      goto switchD_006f555e_caseD_5b;
    case 0x20:
      goto switchD_006f5e94_caseD_63;
    case 0x21:
      *(byte **)(unaff_RBP + -0x620) = unaff_R14;
      goto switchD_006f555e_caseD_64;
    case 0x26:
      *(byte **)(unaff_RBP + -0x620) = unaff_R14;
      goto switchD_006f555e_caseD_69;
    case 0x2b:
      goto switchD_006f5835_caseD_2b;
    }
  }
LAB_006f5452:
  *(undefined4 *)(unaff_RBP + -0x610) = *(undefined4 *)(in_FS_OFFSET + -0x58);
  uVar24 = unaff_R13 & 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  *(byte **)(unaff_RBP + -0x630) = pbVar45;
  lVar44 = *(long *)(unaff_RBP + -0x658);
  *(char *)(unaff_RBP + -0x620) = cVar15;
  iVar19 = *(int *)(unaff_RBP + -0x600);
  do {
    while ((int)uVar24 == -1) {
      iVar48 = *(int *)(in_FS_OFFSET + -0x58);
joined_r0x006f54ce:
      if (iVar48 == 4) {
        iVar19 = -1;
        if (*(int *)(unaff_RBP + -0x640) != 0) {
          iVar19 = *(int *)(unaff_RBP + -0x640);
        }
        *(int *)(unaff_RBP + -0x640) = iVar19;
        goto switchD_006f555e_default;
      }
      uVar24 = 0xffffffff;
      uVar20 = 0xffffffff;
      if ((*(ushort *)(*(long *)(lVar44 + 0x68) + -2) & 0x2000) == 0) goto LAB_006f54ee;
    }
    pbVar41 = *(byte **)(unaff_R15 + 2);
    if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
      *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
      uVar24 = (ulong)*pbVar41;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f55a0;
      uVar24 = FUN_007067b0(unaff_R15);
      if ((int)uVar24 == -1) {
        iVar19 = *(int *)(in_FS_OFFSET + -0x58);
        iVar48 = iVar19;
        goto joined_r0x006f54ce;
      }
    }
    uVar20 = (uint)uVar24;
    unaff_R14 = unaff_R14 + 1;
  } while ((*(ushort *)(*(long *)(lVar44 + 0x68) + (long)(int)uVar20 * 2) & 0x2000) != 0);
LAB_006f54ee:
  lVar44 = -0x58;
  unaff_R13 = (ulong)uVar20;
  *(int *)(unaff_RBP + -0x600) = iVar19;
  pbVar45 = *(byte **)(unaff_RBP + -0x630);
  bVar14 = *(byte *)(unaff_RBP + -0x620);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x610);
  if (uVar20 == 0xffffffff) {
    if (0x67 < bVar14) {
      bVar14 = bVar14 + 0x97;
      if (0xf < bVar14) goto switchD_006f555e_default;
      if ((1L << (bVar14 & 0x3f) & 0x90c1U) == 0) {
        if (bVar14 == 10) goto LAB_006f7873;
        if (bVar14 == 5) goto switchD_006f5835_caseD_2b;
        goto switchD_006f555e_default;
      }
switchD_006f5e94_caseD_58:
      goto LAB_006f623a;
    }
    if (bVar14 < 0x25) goto switchD_006f555e_default;
    pbVar41 = unaff_R14;
    switch(bVar14) {
    case 0x25:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f86a4:
      iVar19 = -1;
      if (*(int *)(unaff_RBP + -0x640) != 0) {
        iVar19 = *(int *)(unaff_RBP + -0x640);
      }
      *(int *)(unaff_RBP + -0x640) = iVar19;
      goto switchD_006f555e_default;
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x42:
    case 0x44:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x59:
    case 0x5a:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x62:
      goto switchD_006f555e_default;
    case 0x41:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
      goto LAB_006f6a75;
    case 0x43:
      goto switchD_006f5e94_caseD_43;
    case 0x53:
      goto switchD_006f5e94_caseD_53;
    case 0x58:
    case 100:
      goto switchD_006f5e94_caseD_58;
    case 0x5b:
      goto switchD_006f5e94_caseD_5b;
    case 99:
      goto switchD_006f5e94_caseD_63;
    default:
      goto switchD_006f555e_default;
    }
  }
  *(undefined8 *)(unaff_RBP + -0x610) = 0xffffffffffffffa8;
  *(byte **)(unaff_RBP + -0x620) = unaff_R14 + -1;
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f553d;
  FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
  if (0x53 < (byte)(bVar14 - 0x25)) goto switchD_006f555e_default;
  lVar44 = *(long *)(unaff_RBP + -0x610);
  switch(bVar14) {
  case 0x25:
    pbVar41 = *(byte **)(unaff_R15 + 2);
    if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
      *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
      unaff_R13 = (ulong)*pbVar41;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f934c;
      uVar21 = FUN_007067b0(unaff_R15);
      unaff_R13 = (ulong)uVar21;
      if (uVar21 == 0xffffffff) goto LAB_006f86a4;
    }
    if ((int)unaff_R13 == 0x25) goto LAB_006f6de8;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7e38;
    FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
    goto switchD_006f555e_default;
  default:
    goto switchD_006f555e_default;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    unaff_R14 = *(byte **)(unaff_RBP + -0x620);
    goto switchD_006f5835_caseD_2;
  case 0x43:
    pbVar41 = *(byte **)(unaff_RBP + -0x620);
switchD_006f5e94_caseD_43:
    iVar19 = 1;
    if (*(int *)(unaff_RBP + -0x638) != -1) {
      iVar19 = *(int *)(unaff_RBP + -0x638);
    }
    *(int *)(unaff_RBP + -0x638) = iVar19;
    uVar21 = *(uint *)(unaff_RBP + -0x63c) & 8;
    *(uint *)(unaff_RBP + -0x610) = uVar21;
    if (uVar21 == 0) {
      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) == 0) {
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar27;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar38 = uVar21;
LAB_006fa062:
            if (uVar38 < 0x30) goto code_r0x006fa067;
            lVar39 = lVar44 + 8;
            if (iVar19 != 1) {
              lVar29 = lVar44 + 0x10;
              do {
                lVar39 = lVar29;
                lVar29 = lVar39 + 8;
              } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar39;
            if (!bVar50) goto LAB_006fa07d;
LAB_006fa075:
            uVar21 = uVar38;
            *(uint *)(unaff_RBP + -0x540) = uVar21;
          }
LAB_006fa07d:
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar27;
        }
        if (*(long *)(unaff_RBP + -0x6b8) == 0) goto switchD_006f555e_default;
      }
      else {
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          plVar36 = (long *)*puVar27;
          *(long **)(unaff_RBP + -0x670) = plVar36;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar38 = uVar21;
LAB_006f93a1:
            if (uVar38 < 0x30) goto code_r0x006f93a6;
            lVar39 = lVar44 + 8;
            if (iVar19 != 1) {
              lVar29 = lVar44 + 0x10;
              do {
                lVar39 = lVar29;
                lVar29 = lVar39 + 8;
              } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar39;
            if (!bVar50) goto LAB_006f93bc;
LAB_006f93b4:
            uVar21 = uVar38;
            *(uint *)(unaff_RBP + -0x540) = uVar21;
          }
LAB_006f93bc:
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          plVar36 = (long *)*puVar27;
          *(long **)(unaff_RBP + -0x670) = plVar36;
        }
        if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
        lVar44 = 0x400;
        if (*(int *)(unaff_RBP + -0x638) < 0x401) {
          lVar44 = (long)*(int *)(unaff_RBP + -0x638);
        }
        *(long *)(unaff_RBP + -0x698) = lVar44;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5b72;
        lVar44 = FUN_007101b0(lVar44 * 4);
        *(long *)(unaff_RBP + -0x6b8) = lVar44;
        *plVar36 = lVar44;
        if (lVar44 == 0) {
          uVar22 = 0xffffffff;
          if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
            uVar22 = *(undefined4 *)(unaff_RBP + -0x640);
          }
          *(undefined4 *)(unaff_RBP + -0x640) = uVar22;
          goto switchD_006f555e_default;
        }
        if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f8038:
          puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
          *(undefined8 *)((long)register0x00000020 + -8) =
               *(undefined8 *)((long)register0x00000020 + -8);
          lVar44 = 1;
          uVar23 = *(undefined8 *)(unaff_RBP + -0x6d0);
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x118) = uVar23;
          *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120);
          lVar39 = 0;
        }
        else {
          lVar39 = **(long **)(unaff_RBP + -0x6d0);
          lVar44 = lVar39 + 1;
          puVar46 = (undefined1 *)register0x00000020;
          if (lVar39 == 0x20) goto LAB_006f8038;
        }
        plVar36 = *(long **)(unaff_RBP + -0x6d0);
        lVar29 = *(long *)(unaff_RBP + -0x670);
        *plVar36 = lVar44;
        plVar36[lVar39 + 2] = lVar29;
        register0x00000020 = (BADSPACEBASE *)puVar46;
      }
    }
    if (uVar20 == 0xffffffff) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    }
    else {
      pbVar45 = *(byte **)(unaff_R15 + 2);
      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
        unaff_R13 = (ulong)*pbVar45;
LAB_006f5be0:
        *(undefined8 *)(unaff_RBP + -0x540) = 0;
        *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
        *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
        iVar19 = *(int *)(unaff_RBP + -0x638);
        *(long *)(unaff_RBP + -0x638) = (long)iVar19;
        *(int *)(unaff_RBP + -0x620) = iVar19 + -1;
        unaff_R14 = pbVar41;
        do {
          *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
          if ((*(int *)(unaff_RBP + -0x610) == 0) && (*(int *)(unaff_RBP + -0x63c) != 0)) {
            lVar39 = **(long **)(unaff_RBP + -0x670);
            lVar44 = *(long *)(unaff_RBP + -0x698) * 4;
            if (*(long *)(unaff_RBP + -0x6b8) == lVar39 + lVar44) {
              lVar29 = *(long *)(unaff_RBP + -0x698);
              lVar42 = (long)*(int *)(unaff_RBP + -0x620);
              if (lVar29 <= *(long *)(unaff_RBP + -0x638)) {
                lVar42 = lVar29;
              }
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9afd;
              lVar39 = FUN_00710840(lVar39,(lVar42 + lVar29) * 4);
              if (lVar39 == 0) {
                plVar36 = *(long **)(unaff_RBP + -0x670);
                *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                lVar39 = *plVar36;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc973;
                lVar39 = FUN_00710840(lVar39,lVar44 + 4);
                if (lVar39 == 0) {
                  *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                  goto switchD_006f555e_default;
                }
                *plVar36 = lVar39;
                *(long *)(unaff_RBP + -0x6b8) = lVar39 + lVar44;
              }
              else {
                *(long *)(unaff_RBP + -0x698) = lVar42 + lVar29;
                **(long **)(unaff_RBP + -0x670) = lVar39;
                *(long *)(unaff_RBP + -0x6b8) = lVar39 + lVar44;
              }
            }
          }
          uVar23 = 0;
          if (*(int *)(unaff_RBP + -0x610) == 0) {
            uVar23 = *(undefined8 *)(unaff_RBP + -0x6b8);
          }
          while( true ) {
            unaff_R14 = unaff_R14 + 1;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5cb3;
            lVar44 = FUN_007569f0(uVar23,unaff_RBP + -0x50,1);
            if (lVar44 != -2) break;
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              unaff_R13 = (ulong)*pbVar41;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5ccf;
              uVar21 = FUN_007067b0(unaff_R15);
              unaff_R13 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                goto switchD_006f555e_default;
              }
            }
            *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
          }
          if (lVar44 != 1) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
            goto switchD_006f555e_default;
          }
          *(long *)(unaff_RBP + -0x6b8) = *(long *)(unaff_RBP + -0x6b8) + 4;
          if (*(int *)(unaff_RBP + -0x620) < 1) goto LAB_006f8d02;
          pbVar41 = *(byte **)(unaff_R15 + 2);
          if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
            unaff_R13 = (ulong)*pbVar41;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8ce5;
            uVar21 = FUN_007067b0(unaff_R15);
            unaff_R13 = (ulong)uVar21;
            if (uVar21 == 0xffffffff) goto code_r0x006f8cf1;
          }
          *(int *)(unaff_RBP + -0x620) = *(int *)(unaff_RBP + -0x620) + -1;
          *(long *)(unaff_RBP + -0x638) = *(long *)(unaff_RBP + -0x638) + -1;
        } while( true );
      }
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f85e4;
      uVar21 = FUN_007067b0(unaff_R15);
      unaff_R13 = (ulong)uVar21;
      if (uVar21 != 0xffffffff) goto LAB_006f5be0;
    }
    iVar19 = -1;
    if (*(int *)(unaff_RBP + -0x640) != 0) {
      iVar19 = *(int *)(unaff_RBP + -0x640);
    }
    *(int *)(unaff_RBP + -0x640) = iVar19;
    goto switchD_006f555e_default;
  case 0x53:
    unaff_R14 = *(byte **)(unaff_RBP + -0x620);
    goto switchD_006f5e94_caseD_53;
  case 0x58:
  case 0x78:
switchD_006f555e_caseD_58:
    *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
    break;
  case 0x5b:
switchD_006f555e_caseD_5b:
    uVar21 = *(uint *)(unaff_RBP + -0x63c);
    uVar38 = uVar21 & 8;
    *(uint *)(unaff_RBP + -0x610) = uVar21 & 1;
    if ((uVar21 & 1) == 0) {
      if (uVar38 == 0) {
        if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
            uVar21 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar21 < 0x30) {
              plVar36 = (long *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
            }
            else {
              plVar36 = *(long **)(unaff_RBP + -0x5a0);
              *(long **)(unaff_RBP + -0x5a0) = plVar36 + 1;
            }
            plVar36 = (long *)*plVar36;
            *(long **)(unaff_RBP + -0x670) = plVar36;
            if (plVar36 != (long *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7f94;
              lVar44 = FUN_007101b0(100);
              *(long *)(unaff_RBP + -0x6c0) = lVar44;
              *plVar36 = lVar44;
              if (lVar44 != 0) {
                if ((*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) ||
                   (lVar44 = **(long **)(unaff_RBP + -0x6d0), lVar44 == 0x20)) goto LAB_006f7fdd;
LAB_006f692c:
                lVar39 = lVar44 + 1;
                puVar46 = (undefined1 *)register0x00000020;
                goto LAB_006f6930;
              }
              uVar22 = 0xffffffff;
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                uVar22 = *(undefined4 *)(unaff_RBP + -0x640);
              }
              *(undefined4 *)(unaff_RBP + -0x640) = uVar22;
            }
            goto switchD_006f555e_default;
          }
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 == 0) goto LAB_006fa161;
          lVar44 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar20 = uVar21;
          goto LAB_006fa12a;
        }
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar27;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar37 = uVar21;
LAB_006fc9cf:
            if (uVar37 < 0x30) goto code_r0x006fc9d4;
            lVar39 = lVar44 + 8;
            if (iVar19 != 1) {
              lVar29 = lVar44 + 0x10;
              do {
                lVar39 = lVar29;
                lVar29 = lVar39 + 8;
              } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar39;
            if (bVar50) {
LAB_006fc9fd:
              uVar21 = uVar37;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
          }
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar27;
        }
        lVar44 = *(long *)(unaff_RBP + -0x6c0);
joined_r0x006f9f33:
        if (lVar44 == 0) goto switchD_006f555e_default;
      }
    }
    else if (uVar38 == 0) {
      if ((uVar21 & 0x2100) == 0) {
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar27;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar37 = uVar21;
LAB_006faf95:
            if (uVar37 < 0x30) goto code_r0x006faf9a;
            lVar39 = lVar44 + 8;
            if (iVar19 != 1) {
              lVar29 = lVar44 + 0x10;
              do {
                lVar39 = lVar29;
                lVar29 = lVar39 + 8;
              } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar39;
            if (bVar50) {
LAB_006fafc3:
              uVar21 = uVar37;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
          }
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar27;
        }
        lVar44 = *(long *)(unaff_RBP + -0x6b8);
        goto joined_r0x006f9f33;
      }
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar21 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
        }
        plVar36 = (long *)*puVar27;
        *(long **)(unaff_RBP + -0x670) = plVar36;
      }
      else {
        puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar34 = *puVar27;
        uVar4 = puVar27[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
        uVar23 = puVar27[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
        uVar21 = *(uint *)(unaff_RBP + -0x540);
        iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar19 != 0) {
          lVar44 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar37 = uVar21;
LAB_006f9e95:
          if (uVar37 < 0x30) goto code_r0x006f9e9a;
          lVar39 = lVar44 + 8;
          if (iVar19 != 1) {
            lVar29 = lVar44 + 0x10;
            do {
              lVar39 = lVar29;
              lVar29 = lVar39 + 8;
            } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar39;
          if (bVar50) {
LAB_006f9ec3:
            uVar21 = uVar37;
            *(uint *)(unaff_RBP + -0x540) = uVar21;
          }
        }
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
        }
        plVar36 = (long *)*puVar27;
        *(long **)(unaff_RBP + -0x670) = plVar36;
      }
      if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f68fc;
      lVar44 = FUN_007101b0(400);
      *(long *)(unaff_RBP + -0x6b8) = lVar44;
      *plVar36 = lVar44;
      if (lVar44 == 0) {
        uVar22 = 0xffffffff;
        if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
          uVar22 = *(undefined4 *)(unaff_RBP + -0x640);
        }
        *(undefined4 *)(unaff_RBP + -0x640) = uVar22;
        goto switchD_006f555e_default;
      }
      if ((*(long **)(unaff_RBP + -0x6d0) != (long *)0x0) &&
         (lVar44 = **(long **)(unaff_RBP + -0x6d0), lVar44 != 0x20)) goto LAB_006f692c;
LAB_006f7fdd:
      puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
      *(undefined8 *)((long)register0x00000020 + -8) =
           *(undefined8 *)((long)register0x00000020 + -8);
      lVar39 = 1;
      uVar23 = *(undefined8 *)(unaff_RBP + -0x6d0);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x118) = uVar23;
      *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120);
      lVar44 = 0;
LAB_006f6930:
      plVar36 = *(long **)(unaff_RBP + -0x6d0);
      lVar29 = *(long *)(unaff_RBP + -0x670);
      *plVar36 = lVar39;
      plVar36[lVar44 + 2] = lVar29;
      *(undefined8 *)(unaff_RBP + -0x698) = 100;
      register0x00000020 = (BADSPACEBASE *)puVar46;
    }
    bVar14 = pbVar45[1];
    *(undefined1 *)(unaff_RBP + -0x648) = 0;
    if (bVar14 == 0x5e) {
      *(undefined1 *)(unaff_RBP + -0x648) = 1;
      *(byte **)(unaff_RBP + -0x618) = pbVar45 + 2;
    }
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6989;
    cVar15 = FUN_007125e0(unaff_RBP + -0x460,0x100,1);
    if (cVar15 == '\0') {
      *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    }
    else {
      puVar27 = *(undefined8 **)(unaff_RBP + -0x460);
      *puVar27 = 0;
      puVar27[0x1f] = 0;
      uVar24 = (ulong)(((int)puVar27 -
                       (int)(undefined8 *)((ulong)(puVar27 + 1) & 0xfffffffffffffff8)) + 0x100U >> 3
                      );
      puVar27 = (undefined8 *)((ulong)(puVar27 + 1) & 0xfffffffffffffff8);
      for (; uVar24 != 0; uVar24 = uVar24 - 1) {
        *puVar27 = 0;
        puVar27 = puVar27 + (ulong)bVar51 * -2 + 1;
      }
      bVar14 = **(byte **)(unaff_RBP + -0x618);
      uVar24 = (ulong)bVar14;
      if ((bVar14 == 0x5d) || (bVar14 == 0x2d)) {
        lVar44 = *(long *)(unaff_RBP + -0x618);
        *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar24) = 1;
        uVar24 = (ulong)*(byte *)(lVar44 + 1);
        *(long *)(unaff_RBP + -0x618) = lVar44 + 1;
      }
      pbVar41 = *(byte **)(unaff_RBP + -0x618);
      if ((char)uVar24 == '\0') {
        uVar24 = FUN_006f9df5();
        return uVar24;
      }
      while( true ) {
        pbVar45 = pbVar41 + 1;
        if ((char)uVar24 == ']') break;
        if (((((char)uVar24 == '-') && (bVar14 = *pbVar45, bVar14 != 0)) && (bVar14 != 0x5d)) &&
           (bVar17 = pbVar41[-1], bVar17 <= bVar14)) {
          if (bVar17 < bVar14) {
            do {
              uVar24 = (ulong)bVar17;
              bVar17 = bVar17 + 1;
              *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar24) = 1;
              bVar14 = *pbVar45;
            } while (bVar17 < bVar14);
            goto LAB_006f6a06;
          }
        }
        else {
          *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar24) = 1;
          bVar14 = *pbVar45;
LAB_006f6a06:
          if (bVar14 == 0) goto switchD_006f555e_default;
        }
        uVar24 = (ulong)bVar14;
        pbVar41 = pbVar45;
      }
      *(byte **)(unaff_RBP + -0x618) = pbVar45;
      if (*(int *)(unaff_RBP + -0x610) == 0) {
        if (uVar20 == 0xffffffff) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f99b8:
          iVar19 = -1;
          if (*(int *)(unaff_RBP + -0x640) != 0) {
            iVar19 = *(int *)(unaff_RBP + -0x640);
          }
          *(int *)(unaff_RBP + -0x640) = iVar19;
        }
        else {
          pbVar41 = *(byte **)(unaff_R15 + 2);
          if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
            unaff_R13 = (ulong)*pbVar41;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9d5b;
            uVar21 = FUN_007067b0(unaff_R15);
            unaff_R13 = (ulong)uVar21;
            if (uVar21 == 0xffffffff) goto LAB_006f99b8;
          }
          unaff_R14 = *(byte **)(unaff_RBP + -0x620);
          if (*(char *)(unaff_RBP + -0x648) ==
              *(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13)) {
            unaff_R14 = *(byte **)(unaff_RBP + -0x620);
          }
          else {
            puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
            *(uint *)(unaff_RBP + -0x630) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
            iVar19 = *(int *)(unaff_RBP + -0x638);
            do {
              unaff_R14 = unaff_R14 + 1;
              if (uVar38 == 0) {
                iVar48 = *(int *)(unaff_RBP + -0x630);
                *puVar46 = (char)unaff_R13;
                puVar46 = puVar46 + 1;
                if ((iVar48 != 0) &&
                   (lVar44 = **(long **)(unaff_RBP + -0x670),
                   puVar46 == (undefined1 *)(lVar44 + *(long *)(unaff_RBP + -0x698)))) {
                  *(undefined4 *)(unaff_RBP + -0x650) = 0;
                  *(uint **)(unaff_RBP + -0x638) = unaff_R15;
                  uVar24 = *(long *)(unaff_RBP + -0x698) + 1;
                  uVar28 = *(long *)(unaff_RBP + -0x698) * 2;
                  while( true ) {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9965;
                    lVar44 = FUN_00710840(lVar44,uVar28);
                    if (lVar44 != 0) break;
                    if (uVar28 <= uVar24) {
                      unaff_R15 = *(uint **)(unaff_RBP + -0x638);
                      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                        plVar36 = *(long **)(unaff_RBP + -0x670);
                        *(undefined8 *)(unaff_RBP + -0x670) = 0;
                        *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                        *(undefined1 *)(*plVar36 + -1 + *(long *)(unaff_RBP + -0x698)) = 0;
                      }
                      else {
                        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                      }
                      goto switchD_006f555e_default;
                    }
                    lVar44 = **(long **)(unaff_RBP + -0x670);
                    uVar28 = uVar24;
                  }
                  unaff_R15 = *(uint **)(unaff_RBP + -0x638);
                  uVar38 = *(uint *)(unaff_RBP + -0x650);
                  **(long **)(unaff_RBP + -0x670) = lVar44;
                  puVar46 = (undefined1 *)(lVar44 + *(long *)(unaff_RBP + -0x698));
                  *(ulong *)(unaff_RBP + -0x698) = uVar28;
                }
              }
              if ((-1 < iVar19) && (iVar19 = iVar19 + -1, iVar19 == 0)) {
                *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                goto LAB_006f855e;
              }
              pbVar41 = *(byte **)(unaff_R15 + 2);
              if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
                *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
                unaff_R13 = (ulong)*pbVar41;
              }
              else {
                *(undefined1 **)(unaff_RBP + -0x638) = puVar46;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f852c;
                uVar21 = FUN_007067b0(unaff_R15);
                puVar46 = *(undefined1 **)(unaff_RBP + -0x638);
                unaff_R13 = (ulong)uVar21;
                if (uVar21 == 0xffffffff) {
                  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                  goto LAB_006f855e;
                }
              }
            } while (*(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13) !=
                     *(char *)(unaff_RBP + -0x648));
            *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
          }
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9d4e;
          FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
LAB_006f855e:
          if (unaff_R14 != *(byte **)(unaff_RBP + -0x620)) goto LAB_006f7aa5;
        }
      }
      else {
        if (uVar20 != 0xffffffff) {
          pbVar41 = *(byte **)(unaff_R15 + 2);
          if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
            unaff_R13 = (ulong)*pbVar41;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9f71;
            uVar21 = FUN_007067b0(unaff_R15);
            unaff_R13 = (ulong)uVar21;
            if (uVar21 == 0xffffffff) goto LAB_006f977e;
          }
          unaff_R14 = *(byte **)(unaff_RBP + -0x620);
          *(undefined8 *)(unaff_RBP + -0x540) = 0;
          *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
          if (*(char *)(unaff_RBP + -0x648) !=
              *(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13)) {
            *(uint *)(unaff_RBP + -0x610) = uVar38;
            *(undefined8 *)(unaff_RBP + -0x650) = 0;
            lVar44 = *(long *)(unaff_RBP + -0x6b8);
            iVar19 = *(int *)(unaff_RBP + -0x638);
            *(uint *)(unaff_RBP + -0x668) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
            *(long *)(unaff_RBP + -0x660) = unaff_RBP + -0x50;
LAB_006f82b1:
            unaff_R14 = unaff_R14 + 1;
            if (*(int *)(unaff_RBP + -0x610) == 0) {
              *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
              uVar23 = *(undefined8 *)(unaff_RBP + -0x660);
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f82da;
              lVar39 = FUN_007569f0(lVar44,uVar23,1);
              if (lVar39 == -2) {
                *(long *)(unaff_RBP + -0x650) = *(long *)(unaff_RBP + -0x650) + 1;
                if (0xf < *(ulong *)(unaff_RBP + -0x650)) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f841a;
                  FUN_006e2220("cnt < MB_LEN_MAX","vfscanf-internal.c",0xa77,"__vfscanf_internal");
                }
                goto LAB_006f8272;
              }
              lVar44 = lVar44 + 4;
              if (*(int *)(unaff_RBP + -0x668) == 0) {
                *(undefined8 *)(unaff_RBP + -0x650) = 0;
              }
              else {
                *(undefined8 *)(unaff_RBP + -0x650) = 0;
                lVar29 = **(long **)(unaff_RBP + -0x670);
                lVar39 = *(long *)(unaff_RBP + -0x698) * 4;
                if (lVar44 == lVar29 + lVar39) {
                  lVar44 = *(long *)(unaff_RBP + -0x698);
                  *(long *)(unaff_RBP + -0x638) = lVar39;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8342;
                  lVar44 = FUN_00710840(lVar29,lVar44 * 8);
                  lVar39 = *(long *)(unaff_RBP + -0x638);
                  if (lVar44 != 0) {
                    *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) << 1;
                    **(long **)(unaff_RBP + -0x670) = lVar44;
                    lVar44 = lVar44 + lVar39;
                    goto code_r0x006f8260;
                  }
                  *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                  uVar23 = **(undefined8 **)(unaff_RBP + -0x670);
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb5f6;
                  lVar44 = FUN_00710840(uVar23,lVar39 + 4);
                  if (lVar44 != 0) {
                    **(long **)(unaff_RBP + -0x670) = lVar44;
                    uVar24 = FUN_006f8260();
                    return uVar24;
                  }
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                    plVar36 = *(long **)(unaff_RBP + -0x670);
                    *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                    *(undefined8 *)(unaff_RBP + -0x670) = 0;
                    *(undefined4 *)(*plVar36 + -4 + *(long *)(unaff_RBP + -0x638)) = 0;
                  }
                  else {
                    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                  }
                  goto switchD_006f555e_default;
                }
              }
            }
code_r0x006f8260:
            if ((-1 < iVar19) && (iVar19 = iVar19 + -1, iVar19 < 1)) {
              *(long *)(unaff_RBP + -0x6b8) = lVar44;
              uVar38 = *(uint *)(unaff_RBP + -0x610);
              lVar44 = *(long *)(unaff_RBP + -0x650);
              goto LAB_006f83af;
            }
LAB_006f8272:
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              unaff_R13 = (ulong)*pbVar41;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8378;
              uVar21 = FUN_007067b0(unaff_R15);
              unaff_R13 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                *(long *)(unaff_RBP + -0x6b8) = lVar44;
                uVar38 = *(uint *)(unaff_RBP + -0x610);
                lVar44 = *(long *)(unaff_RBP + -0x650);
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                goto LAB_006f83af;
              }
            }
            if (*(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13) ==
                *(char *)(unaff_RBP + -0x648)) goto LAB_006f9c20;
            goto LAB_006f82b1;
          }
          unaff_R14 = *(byte **)(unaff_RBP + -0x620);
          lVar44 = 0;
          goto LAB_006f9c3a;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f977e:
        iVar19 = -1;
        if (*(int *)(unaff_RBP + -0x640) != 0) {
          iVar19 = *(int *)(unaff_RBP + -0x640);
        }
        *(int *)(unaff_RBP + -0x640) = iVar19;
      }
    }
    goto switchD_006f555e_default;
  case 99:
    pbVar41 = *(byte **)(unaff_RBP + -0x620);
switchD_006f5e94_caseD_63:
    uVar21 = *(uint *)(unaff_RBP + -0x63c);
    *(uint *)(unaff_RBP + -0x610) = uVar21 & 1;
    if ((uVar21 & 1) != 0) goto switchD_006f5e94_caseD_43;
    iVar19 = 1;
    if (*(int *)(unaff_RBP + -0x638) != -1) {
      iVar19 = *(int *)(unaff_RBP + -0x638);
    }
    *(int *)(unaff_RBP + -0x638) = iVar19;
    if ((uVar21 & 8) == 0) {
      if ((uVar21 & 0x2100) == 0) {
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar38 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar38 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar38 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar38 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar27;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar38 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar37 = uVar38;
LAB_006fb4ac:
            if (uVar37 < 0x30) goto code_r0x006fb4b1;
            lVar39 = lVar44 + 8;
            if (iVar19 != 1) {
              lVar29 = lVar44 + 0x10;
              do {
                lVar39 = lVar29;
                lVar29 = lVar39 + 8;
              } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar39;
            if (bVar50) {
LAB_006fb4e1:
              uVar38 = uVar37;
              *(uint *)(unaff_RBP + -0x540) = uVar38;
            }
          }
          if (uVar38 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar38 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar38 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar27;
        }
        if (*(long *)(unaff_RBP + -0x6c0) == 0) goto switchD_006f555e_default;
      }
      else {
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar38 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar38 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar38 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar38 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          plVar36 = (long *)*puVar27;
          *(long **)(unaff_RBP + -0x670) = plVar36;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar38 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar37 = uVar38;
LAB_006fb574:
            if (uVar37 < 0x30) goto code_r0x006fb579;
            lVar39 = lVar44 + 8;
            if (iVar19 != 1) {
              lVar29 = lVar44 + 0x10;
              do {
                lVar39 = lVar29;
                lVar29 = lVar39 + 8;
              } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar39;
            if (bVar50) {
LAB_006fb5a2:
              uVar38 = uVar37;
              *(uint *)(unaff_RBP + -0x540) = uVar38;
            }
          }
          if (uVar38 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar38 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar38 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          plVar36 = (long *)*puVar27;
          *(long **)(unaff_RBP + -0x670) = plVar36;
        }
        if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
        lVar44 = 0x400;
        if (*(int *)(unaff_RBP + -0x638) < 0x401) {
          lVar44 = (long)*(int *)(unaff_RBP + -0x638);
        }
        *(long *)(unaff_RBP + -0x698) = lVar44;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f66f5;
        lVar44 = FUN_007101b0(lVar44);
        *(long *)(unaff_RBP + -0x6c0) = lVar44;
        *plVar36 = lVar44;
        if (lVar44 == 0) {
          uVar22 = 0xffffffff;
          if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
            uVar22 = *(undefined4 *)(unaff_RBP + -0x640);
          }
          *(undefined4 *)(unaff_RBP + -0x640) = uVar22;
          goto switchD_006f555e_default;
        }
        if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f9c68:
          puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
          *(undefined8 *)((long)register0x00000020 + -8) =
               *(undefined8 *)((long)register0x00000020 + -8);
          lVar44 = 1;
          uVar23 = *(undefined8 *)(unaff_RBP + -0x6d0);
          *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x118) = uVar23;
          *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120);
          lVar39 = 0;
        }
        else {
          lVar39 = **(long **)(unaff_RBP + -0x6d0);
          lVar44 = lVar39 + 1;
          puVar46 = (undefined1 *)register0x00000020;
          if (lVar39 == 0x20) goto LAB_006f9c68;
        }
        plVar36 = *(long **)(unaff_RBP + -0x6d0);
        lVar29 = *(long *)(unaff_RBP + -0x670);
        *plVar36 = lVar44;
        plVar36[lVar39 + 2] = lVar29;
        register0x00000020 = (BADSPACEBASE *)puVar46;
      }
    }
    if (uVar20 != 0xffffffff) {
      pbVar45 = *(byte **)(unaff_R15 + 2);
      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
        unaff_R13 = (ulong)*pbVar45;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9438;
        uVar20 = FUN_007067b0(unaff_R15);
        unaff_R13 = (ulong)uVar20;
        if (uVar20 == 0xffffffff) goto LAB_006f9447;
      }
      unaff_R14 = pbVar41 + 1;
      if ((uVar21 & 8) != 0) {
        iVar19 = *(int *)(unaff_RBP + -0x638);
        if (1 < iVar19) {
          do {
            pbVar45 = *(byte **)(unaff_R15 + 2);
            if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
              unaff_R13 = (ulong)*pbVar45;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8b70;
              uVar21 = FUN_007067b0(unaff_R15);
              unaff_R13 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                break;
              }
            }
            unaff_R14 = unaff_R14 + 1;
          } while (unaff_R14 != pbVar41 + (ulong)(iVar19 - 2) + 2);
        }
        goto LAB_006f510e;
      }
      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
        *(byte **)(unaff_RBP + -0x620) = unaff_R14;
        *(long *)(unaff_RBP + -0x630) = (long)*(int *)(unaff_RBP + -0x638);
        puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
        *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x638) + -1;
        lVar44 = *(long *)(unaff_RBP + -0x698);
        do {
          lVar39 = lVar44;
          if (puVar46 == (undefined1 *)(**(long **)(unaff_RBP + -0x670) + lVar44)) {
            lVar39 = (long)*(int *)(unaff_RBP + -0x610);
            if (lVar44 < (*(long *)(unaff_RBP + -0x630) + *(long *)(unaff_RBP + -0x620)) -
                         (long)unaff_R14) {
              lVar39 = lVar44;
            }
            *(long *)(unaff_RBP + -0x638) = lVar39 + lVar44;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9594;
            lVar29 = FUN_00710840();
            lVar39 = *(long *)(unaff_RBP + -0x638);
            if (lVar29 == 0) {
              lVar39 = lVar44 + 1;
              uVar23 = **(undefined8 **)(unaff_RBP + -0x670);
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb89e;
              lVar29 = FUN_00710840(uVar23,lVar39);
              if (lVar29 == 0) {
                *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                goto switchD_006f555e_default;
              }
              **(long **)(unaff_RBP + -0x670) = lVar29;
              puVar46 = (undefined1 *)(lVar29 + lVar44);
            }
            else {
              **(long **)(unaff_RBP + -0x670) = lVar29;
              puVar46 = (undefined1 *)(lVar29 + lVar44);
            }
          }
          *puVar46 = (char)unaff_R13;
          puVar46 = puVar46 + 1;
          if (*(int *)(unaff_RBP + -0x610) < 1) {
            *(long *)(unaff_RBP + -0x698) = lVar39;
            goto LAB_006f952c;
          }
          pbVar41 = *(byte **)(unaff_R15 + 2);
          if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
            unaff_R13 = (ulong)*pbVar41;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9506;
            uVar21 = FUN_007067b0(unaff_R15);
            unaff_R13 = (ulong)uVar21;
            if (uVar21 == 0xffffffff) goto code_r0x006f950e;
          }
          *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x610) + -1;
          unaff_R14 = unaff_R14 + 1;
          lVar44 = lVar39;
        } while( true );
      }
      puVar35 = *(undefined1 **)(unaff_RBP + -0x6c0);
      lVar44 = (long)unaff_R14 - (long)puVar35;
      *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x638) + (int)puVar35;
      do {
        while( true ) {
          iVar19 = *(int *)(unaff_RBP + -0x610);
          unaff_R14 = puVar35 + lVar44;
          puVar46 = puVar35 + 1;
          *puVar35 = (char)unaff_R13;
          if (iVar19 - (int)puVar46 < 1) goto LAB_006f67ef;
          pbVar41 = *(byte **)(unaff_R15 + 2);
          puVar35 = puVar46;
          if (*(byte **)(unaff_R15 + 4) <= pbVar41) break;
          *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
          unaff_R13 = (ulong)*pbVar41;
        }
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f67d6;
        uVar21 = FUN_007067b0(unaff_R15);
        unaff_R13 = (ulong)uVar21;
      } while (uVar21 != 0xffffffff);
      *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
      goto LAB_006f67ef;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f9447:
    iVar19 = -1;
    if (*(int *)(unaff_RBP + -0x640) != 0) {
      iVar19 = *(int *)(unaff_RBP + -0x640);
    }
    *(int *)(unaff_RBP + -0x640) = iVar19;
    goto switchD_006f555e_default;
  case 100:
switchD_006f555e_caseD_64:
    *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x40;
    *(undefined4 *)(unaff_RBP + -0x610) = 10;
    break;
  case 0x69:
switchD_006f555e_caseD_69:
    *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x40;
    *(undefined4 *)(unaff_RBP + -0x610) = 0;
    break;
  case 0x6e:
    unaff_R14 = *(byte **)(unaff_RBP + -0x620);
switchD_006f5835_caseD_2b:
    uVar21 = *(uint *)(unaff_RBP + -0x63c);
    *(uint *)(unaff_RBP + -0x610) = uVar21 & 8;
    if ((uVar21 & 8) != 0) goto LAB_006f6de8;
    if ((uVar21 & 1) == 0) {
      if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
        *(uint *)(unaff_RBP + -0x610) = uVar21 & 0x200;
        if ((uVar21 & 0x200) == 0) {
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
            uVar21 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
            }
            puVar33 = (undefined4 *)*puVar27;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar34 = *puVar27;
            uVar4 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
            uVar23 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar44 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar20 = uVar21;
LAB_006fb04d:
              if (uVar20 < 0x30) goto code_r0x006fb052;
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
              }
              *(long *)(unaff_RBP + -0x538) = lVar39;
              if (bVar50) {
LAB_006fb081:
                uVar21 = uVar20;
                *(uint *)(unaff_RBP + -0x540) = uVar21;
              }
            }
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
            }
            puVar33 = (undefined4 *)*puVar27;
          }
          *puVar33 = (int)unaff_R14;
        }
        else {
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
            uVar21 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
            }
            puVar46 = (undefined1 *)*puVar27;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar34 = *puVar27;
            uVar4 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
            uVar23 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar44 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar20 = uVar21;
LAB_006fc816:
              if (uVar20 < 0x30) goto code_r0x006fc81b;
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
              }
              *(long *)(unaff_RBP + -0x538) = lVar39;
              if (bVar50) {
LAB_006fc849:
                uVar21 = uVar20;
                *(uint *)(unaff_RBP + -0x540) = uVar21;
              }
            }
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
            }
            puVar46 = (undefined1 *)*puVar27;
          }
          *puVar46 = (char)unaff_R14;
          *(undefined4 *)(unaff_RBP + -0x610) = 0;
        }
      }
      else {
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          puVar31 = (undefined2 *)*puVar27;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar20 = uVar21;
LAB_006fb3c9:
            if (uVar20 < 0x30) goto code_r0x006fb3ce;
            lVar39 = lVar44 + 8;
            if (iVar19 != 1) {
              lVar29 = lVar44 + 0x10;
              do {
                lVar39 = lVar29;
                lVar29 = lVar39 + 8;
              } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar39;
            if (bVar50) {
LAB_006fb3f7:
              uVar21 = uVar20;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
          }
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          puVar31 = (undefined2 *)*puVar27;
        }
        *puVar31 = (short)unaff_R14;
        *(undefined4 *)(unaff_RBP + -0x610) = 0;
      }
    }
    else {
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar21 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
        }
        plVar36 = (long *)*puVar27;
      }
      else {
        puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar34 = *puVar27;
        uVar4 = puVar27[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
        uVar23 = puVar27[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
        uVar21 = *(uint *)(unaff_RBP + -0x540);
        iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar19 != 0) {
          lVar44 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar20 = uVar21;
LAB_006fa1cf:
          if (uVar20 < 0x30) goto code_r0x006fa1d4;
          lVar39 = lVar44 + 8;
          if (iVar19 != 1) {
            lVar29 = lVar44 + 0x10;
            do {
              lVar39 = lVar29;
              lVar29 = lVar39 + 8;
            } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar39;
          if (!bVar50) goto LAB_006fa1ea;
LAB_006fa1e2:
          uVar21 = uVar20;
          *(uint *)(unaff_RBP + -0x540) = uVar21;
        }
LAB_006fa1ea:
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
        }
        plVar36 = (long *)*puVar27;
      }
      *plVar36 = (long)unaff_R14;
    }
    goto LAB_006f510e;
  case 0x6f:
    *(undefined4 *)(unaff_RBP + -0x610) = 8;
    goto LAB_006f62d6;
  case 0x70:
    *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
    *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0xfffffff9 | 0x1001;
    break;
  case 0x73:
    unaff_R14 = *(byte **)(unaff_RBP + -0x620);
LAB_006f7873:
    uVar21 = *(uint *)(unaff_RBP + -0x63c);
    *(uint *)(unaff_RBP + -0x610) = uVar21 & 1;
    if ((uVar21 & 1) == 0) {
      uVar38 = uVar21 & 8;
      if (uVar38 == 0) {
        if ((uVar21 & 0x2100) == 0) {
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
            uVar21 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
            }
            *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar27;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar34 = *puVar27;
            uVar4 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
            uVar23 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar39 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar37 = uVar21;
LAB_006fb2eb:
              if (uVar37 < 0x30) goto code_r0x006fb2f0;
              lVar29 = lVar39 + 8;
              if (iVar19 != 1) {
                lVar42 = lVar39 + 0x10;
                do {
                  lVar29 = lVar42;
                  lVar42 = lVar29 + 8;
                } while (lVar39 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar29 + 8);
              }
              *(long *)(unaff_RBP + -0x538) = lVar29;
              if (bVar50) {
LAB_006fb319:
                uVar21 = uVar37;
                *(uint *)(unaff_RBP + -0x540) = uVar21;
              }
            }
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
            }
            *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar27;
          }
          if (*(long *)(unaff_RBP + -0x6c0) == 0) goto switchD_006f555e_default;
        }
        else {
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
            uVar21 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
            }
            plVar36 = (long *)*puVar27;
            *(long **)(unaff_RBP + -0x670) = plVar36;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar34 = *puVar27;
            uVar4 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
            uVar23 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar39 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar37 = uVar21;
LAB_006fa618:
              if (uVar37 < 0x30) goto code_r0x006fa61d;
              lVar29 = lVar39 + 8;
              if (iVar19 != 1) {
                lVar42 = lVar39 + 0x10;
                do {
                  lVar29 = lVar42;
                  lVar42 = lVar29 + 8;
                } while (lVar39 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar29 + 8);
              }
              *(long *)(unaff_RBP + -0x538) = lVar29;
              if (!bVar50) goto LAB_006fa633;
LAB_006fa62b:
              uVar21 = uVar37;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
LAB_006fa633:
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
            }
            plVar36 = (long *)*puVar27;
            *(long **)(unaff_RBP + -0x670) = plVar36;
          }
          *(long *)(unaff_RBP + -0x630) = lVar44;
          if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f78f6;
          lVar44 = FUN_007101b0(100);
          *(long *)(unaff_RBP + -0x6c0) = lVar44;
          *plVar36 = lVar44;
          if (lVar44 == 0) {
            uVar22 = 0xffffffff;
            if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
              uVar22 = *(undefined4 *)(unaff_RBP + -0x640);
            }
            *(undefined4 *)(unaff_RBP + -0x640) = uVar22;
            goto switchD_006f555e_default;
          }
          lVar44 = *(long *)(unaff_RBP + -0x630);
          if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f983e:
            puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
            *(undefined8 *)((long)register0x00000020 + -8) =
                 *(undefined8 *)((long)register0x00000020 + -8);
            lVar39 = 1;
            uVar23 = *(undefined8 *)(unaff_RBP + -0x6d0);
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x118) = uVar23;
            *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120)
            ;
            lVar29 = 0;
          }
          else {
            lVar29 = **(long **)(unaff_RBP + -0x6d0);
            lVar39 = lVar29 + 1;
            puVar46 = (undefined1 *)register0x00000020;
            if (lVar29 == 0x20) goto LAB_006f983e;
          }
          plVar36 = *(long **)(unaff_RBP + -0x6d0);
          lVar42 = *(long *)(unaff_RBP + -0x670);
          *(undefined8 *)(unaff_RBP + -0x698) = 100;
          *plVar36 = lVar39;
          plVar36[lVar29 + 2] = lVar42;
          register0x00000020 = (BADSPACEBASE *)puVar46;
        }
      }
      if (uVar20 != 0xffffffff) {
        pbVar41 = *(byte **)(unaff_R15 + 2);
        if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
          *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
          unaff_R13 = (ulong)*pbVar41;
        }
        else {
          *(long *)(unaff_RBP + -0x630) = lVar44;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9b72;
          uVar21 = FUN_007067b0(unaff_R15);
          lVar44 = *(long *)(unaff_RBP + -0x630);
          unaff_R13 = (ulong)uVar21;
          if (uVar21 == 0xffffffff) goto LAB_006f9b88;
        }
        if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                      (long)(int)unaff_R13 * 2) & 0x20) == 0) {
          *(long *)(unaff_RBP + -0x648) = lVar44;
          lVar44 = *(long *)(unaff_RBP + -0x658);
          iVar19 = *(int *)(unaff_RBP + -0x638);
          *(uint *)(unaff_RBP + -0x620) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
          puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
          do {
            unaff_R14 = unaff_R14 + 1;
            if (uVar38 == 0) {
              iVar48 = *(int *)(unaff_RBP + -0x620);
              *puVar46 = (char)unaff_R13;
              puVar46 = puVar46 + 1;
              if ((iVar48 != 0) &&
                 (lVar39 = **(long **)(unaff_RBP + -0x670),
                 *(long *)(unaff_RBP + -0x630) = *(long *)(unaff_RBP + -0x698),
                 puVar46 == (undefined1 *)(*(long *)(unaff_RBP + -0x698) + lVar39))) {
                *(uint **)(unaff_RBP + -0x660) = unaff_R15;
                *(undefined4 *)(unaff_RBP + -0x650) = 0;
                *(long *)(unaff_RBP + -0x638) = *(long *)(unaff_RBP + -0x698) * 2;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8be6;
                lVar39 = FUN_00710840();
                uVar23 = *(undefined8 *)(unaff_RBP + -0x638);
                uVar38 = *(uint *)(unaff_RBP + -0x650);
                unaff_R15 = *(uint **)(unaff_RBP + -0x660);
                if (lVar39 == 0) {
                  *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                  uVar23 = *(undefined8 *)(unaff_RBP + -0x698);
                  *(uint **)(unaff_RBP + -0x650) = unaff_R15;
                  uVar34 = **(undefined8 **)(unaff_RBP + -0x670);
                  *(uint *)(unaff_RBP + -0x638) = uVar38;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb166;
                  lVar39 = FUN_00710840(uVar34,uVar23);
                  uVar38 = *(uint *)(unaff_RBP + -0x638);
                  unaff_R15 = *(uint **)(unaff_RBP + -0x650);
                  if (lVar39 == 0) {
                    if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                      plVar36 = *(long **)(unaff_RBP + -0x670);
                      *(undefined8 *)(unaff_RBP + -0x670) = 0;
                      *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                      *(undefined1 *)(*plVar36 + -1 + *(long *)(unaff_RBP + -0x630)) = 0;
                    }
                    else {
                      *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                    }
                    goto switchD_006f555e_default;
                  }
                  **(long **)(unaff_RBP + -0x670) = lVar39;
                  puVar46 = (undefined1 *)(lVar39 + *(long *)(unaff_RBP + -0x630));
                }
                else {
                  **(long **)(unaff_RBP + -0x670) = lVar39;
                  puVar46 = (undefined1 *)(lVar39 + *(long *)(unaff_RBP + -0x698));
                  *(undefined8 *)(unaff_RBP + -0x698) = uVar23;
                }
              }
            }
            if ((0 < iVar19) && (iVar19 = iVar19 + -1, iVar19 == 0)) {
              *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
              goto LAB_006f7aa5;
            }
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              unaff_R13 = (ulong)*pbVar41;
            }
            else {
              *(uint *)(unaff_RBP + -0x638) = uVar38;
              *(uint **)(unaff_RBP + -0x630) = unaff_R15;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7a6b;
              uVar21 = FUN_007067b0(unaff_R15);
              unaff_R15 = *(uint **)(unaff_RBP + -0x630);
              uVar38 = *(uint *)(unaff_RBP + -0x638);
              unaff_R13 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                unaff_R13 = 0xffffffff;
                *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
                *(undefined4 *)(unaff_RBP + -0x600) =
                     *(undefined4 *)(in_FS_OFFSET + *(long *)(unaff_RBP + -0x648));
                goto LAB_006f7aa5;
              }
            }
          } while ((*(byte *)(*(long *)(lVar44 + 0x68) + 1 + (long)(int)unaff_R13 * 2) & 0x20) == 0)
          ;
          *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
        }
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f981c;
        FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
LAB_006f7aa5:
        if (uVar38 == 0) {
          puVar46 = *(undefined1 **)(unaff_RBP + -0x6c0);
          *puVar46 = 0;
          puVar46 = puVar46 + 1;
          if (((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) &&
             (plVar36 = *(long **)(unaff_RBP + -0x670),
             (long)puVar46 - *plVar36 != *(long *)(unaff_RBP + -0x698))) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7ae6;
            lVar44 = FUN_00710840();
            if (lVar44 != 0) {
              *plVar36 = lVar44;
            }
          }
          *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
          *(undefined4 *)(unaff_RBP + -0x610) = 0;
          *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
          *(undefined8 *)(unaff_RBP + -0x670) = 0;
        }
        goto LAB_006f510e;
      }
      *(undefined4 *)(in_FS_OFFSET + lVar44) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f9b88:
      iVar19 = -1;
      if (*(int *)(unaff_RBP + -0x640) != 0) {
        iVar19 = *(int *)(unaff_RBP + -0x640);
      }
      *(int *)(unaff_RBP + -0x640) = iVar19;
    }
    else {
switchD_006f5e94_caseD_53:
      uVar21 = *(uint *)(unaff_RBP + -0x63c) & 8;
      *(uint *)(unaff_RBP + -0x610) = uVar21;
      if (uVar21 == 0) {
        if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) == 0) {
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
            uVar21 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
            }
            *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar27;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar34 = *puVar27;
            uVar4 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
            uVar23 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar44 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar38 = uVar21;
LAB_006faa93:
              if (uVar38 < 0x30) goto code_r0x006faa98;
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
              }
              *(long *)(unaff_RBP + -0x538) = lVar39;
              if (!bVar50) goto LAB_006faaae;
LAB_006faaa6:
              uVar21 = uVar38;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
LAB_006faaae:
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
            }
            *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar27;
          }
          if (*(long *)(unaff_RBP + -0x6b8) == 0) goto switchD_006f555e_default;
        }
        else {
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
            uVar21 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
            }
            plVar36 = (long *)*puVar27;
            *(long **)(unaff_RBP + -0x670) = plVar36;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar34 = *puVar27;
            uVar4 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
            uVar23 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar34;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar44 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar38 = uVar21;
LAB_006f8c7a:
              if (uVar38 < 0x30) goto code_r0x006f8c7f;
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
              }
              *(long *)(unaff_RBP + -0x538) = lVar39;
              if (!bVar50) goto LAB_006f8c95;
LAB_006f8c8d:
              uVar21 = uVar38;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
LAB_006f8c95:
            if (uVar21 < 0x30) {
              puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
            }
            else {
              puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
            }
            plVar36 = (long *)*puVar27;
            *(long **)(unaff_RBP + -0x670) = plVar36;
          }
          if (plVar36 == (long *)0x0) goto switchD_006f555e_default;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5987;
          lVar44 = FUN_007101b0(400);
          *(long *)(unaff_RBP + -0x6b8) = lVar44;
          *plVar36 = lVar44;
          if (lVar44 == 0) {
            uVar22 = 0xffffffff;
            if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
              uVar22 = *(undefined4 *)(unaff_RBP + -0x640);
            }
            *(undefined4 *)(unaff_RBP + -0x640) = uVar22;
            goto switchD_006f555e_default;
          }
          if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f8093:
            puVar46 = (undefined1 *)((long)register0x00000020 + -0x120);
            *(undefined8 *)((long)register0x00000020 + -8) =
                 *(undefined8 *)((long)register0x00000020 + -8);
            lVar44 = 1;
            uVar23 = *(undefined8 *)(unaff_RBP + -0x6d0);
            *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x118) = uVar23;
            *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120)
            ;
            lVar39 = 0;
          }
          else {
            lVar39 = **(long **)(unaff_RBP + -0x6d0);
            lVar44 = lVar39 + 1;
            puVar46 = (undefined1 *)register0x00000020;
            if (lVar39 == 0x20) goto LAB_006f8093;
          }
          plVar36 = *(long **)(unaff_RBP + -0x6d0);
          lVar29 = *(long *)(unaff_RBP + -0x670);
          *(undefined8 *)(unaff_RBP + -0x698) = 100;
          *plVar36 = lVar44;
          plVar36[lVar39 + 2] = lVar29;
          register0x00000020 = (BADSPACEBASE *)puVar46;
        }
      }
      if (uVar20 != 0xffffffff) {
        pbVar41 = *(byte **)(unaff_R15 + 2);
        if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
          *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
          unaff_R13 = (ulong)*pbVar41;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f85c8;
          uVar21 = FUN_007067b0(unaff_R15);
          unaff_R13 = (ulong)uVar21;
          if (uVar21 == 0xffffffff) goto LAB_006f6272;
        }
        unaff_R14 = unaff_R14 + 1;
        *(undefined8 *)(unaff_RBP + -0x540) = 0;
        *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
        if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                      (long)(int)unaff_R13 * 2) & 0x20) == 0) {
          *(uint *)(unaff_RBP + -0x620) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
          do {
            uVar23 = 0;
            if (*(int *)(unaff_RBP + -0x610) == 0) {
              uVar23 = *(undefined8 *)(unaff_RBP + -0x6b8);
            }
            while( true ) {
              *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5a8f;
              lVar44 = FUN_007569f0(uVar23,unaff_RBP + -0x50,1);
              if (lVar44 != -2) break;
              pbVar41 = *(byte **)(unaff_R15 + 2);
              if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
                *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
                unaff_R13 = (ulong)*pbVar41;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5aab;
                uVar21 = FUN_007067b0(unaff_R15);
                unaff_R13 = (ulong)uVar21;
                if (uVar21 == 0xffffffff) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                  goto switchD_006f555e_default;
                }
              }
              unaff_R14 = unaff_R14 + 1;
            }
            if (lVar44 != 1) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
              goto switchD_006f555e_default;
            }
            *(long *)(unaff_RBP + -0x6b8) = *(long *)(unaff_RBP + -0x6b8) + 4;
            if ((*(int *)(unaff_RBP + -0x610) == 0) && (*(int *)(unaff_RBP + -0x620) != 0)) {
              lVar39 = **(long **)(unaff_RBP + -0x670);
              lVar44 = *(long *)(unaff_RBP + -0x698) * 4;
              if (*(long *)(unaff_RBP + -0x6b8) == lVar39 + lVar44) {
                lVar29 = *(long *)(unaff_RBP + -0x698);
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbb6b;
                lVar39 = FUN_00710840(lVar39,lVar29 * 8);
                if (lVar39 == 0) {
                  *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                  uVar23 = **(undefined8 **)(unaff_RBP + -0x670);
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbc01;
                  lVar39 = FUN_00710840(uVar23,lVar44 + 4);
                  if (lVar39 == 0) {
                    if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                      plVar36 = *(long **)(unaff_RBP + -0x670);
                      *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                      *(undefined8 *)(unaff_RBP + -0x670) = 0;
                      *(undefined4 *)(*plVar36 + -4 + lVar44) = 0;
                    }
                    else {
                      *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                    }
                    goto switchD_006f555e_default;
                  }
                  **(long **)(unaff_RBP + -0x670) = lVar39;
                  *(long *)(unaff_RBP + -0x6b8) = lVar39 + lVar44;
                }
                else {
                  **(long **)(unaff_RBP + -0x670) = lVar39;
                  *(long *)(unaff_RBP + -0x6b8) = lVar39 + lVar44;
                  *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) * 2;
                }
              }
            }
            if (0 < *(int *)(unaff_RBP + -0x638)) {
              piVar1 = (int *)(unaff_RBP + -0x638);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) goto LAB_006f7d2d;
            }
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              unaff_R13 = (ulong)*pbVar41;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9322;
              uVar21 = FUN_007067b0(unaff_R15);
              unaff_R13 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                goto LAB_006f7d2d;
              }
            }
            unaff_R14 = unaff_R14 + 1;
          } while ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                             (long)(int)unaff_R13 * 2) & 0x20) == 0);
        }
        unaff_R14 = unaff_R14 + -1;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7d2d;
        FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
LAB_006f7d2d:
        uVar38 = *(uint *)(unaff_RBP + -0x610);
        goto joined_r0x006f83c7;
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6272:
      iVar19 = -1;
      if (*(int *)(unaff_RBP + -0x640) != 0) {
        iVar19 = *(int *)(unaff_RBP + -0x640);
      }
      *(int *)(unaff_RBP + -0x640) = iVar19;
    }
    goto switchD_006f555e_default;
  case 0x75:
    *(undefined4 *)(unaff_RBP + -0x610) = 10;
    goto LAB_006f62d6;
  }
  if (uVar20 != 0xffffffff) {
LAB_006f62d6:
    pbVar41 = *(byte **)(unaff_R15 + 2);
    if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
      *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
      uVar24 = (ulong)*pbVar41;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7721;
      uVar21 = FUN_007067b0(unaff_R15);
      uVar24 = (ulong)uVar21;
      if (uVar21 == 0xffffffff) goto LAB_006f6244;
    }
    unaff_R14 = (byte *)(*(long *)(unaff_RBP + -0x620) + 1);
    if (((int)uVar24 - 0x2bU & 0xfffffffd) == 0) {
      puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
      puVar35 = *(undefined1 **)(unaff_RBP + -0x468);
      if (puVar35 == puVar46) {
        if (puVar35 != (undefined1 *)0x0) {
          lVar44 = *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f87a6;
          cVar15 = FUN_00712520(unaff_RBP + -0x460);
          if (cVar15 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            *(undefined1 **)(unaff_RBP + -0x470) =
                 puVar35 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            puVar35[*(long *)(unaff_RBP + -0x460) - lVar44] = (char)uVar24;
          }
        }
      }
      else {
        *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
        *puVar46 = (char)uVar24;
      }
      pbVar41 = *(byte **)(unaff_R15 + 2);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
        uVar24 = (ulong)*pbVar41;
LAB_006f6358:
        unaff_R14 = (byte *)(*(long *)(unaff_RBP + -0x620) + 2);
        goto LAB_006f6363;
      }
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6dff;
      uVar28 = FUN_007067b0(unaff_R15);
      uVar24 = uVar28 & 0xffffffff;
      if ((int)uVar28 != -1) goto LAB_006f6358;
      bVar50 = false;
      *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f6e1e:
      if (*(int *)(unaff_RBP + -0x610) != 0) {
LAB_006f765a:
        if (*(int *)(unaff_RBP + -0x610) == 10) goto LAB_006f6e2c;
LAB_006f641c:
        uVar21 = (uint)uVar24;
        if (bVar50 == false) {
LAB_006f813c:
          pcVar47 = *(char **)(unaff_RBP + -0x470);
        }
        else {
LAB_006f6424:
          uVar24 = (ulong)uVar21;
          iVar19 = *(int *)(unaff_RBP + -0x638);
          *(uint *)(unaff_RBP + -0x650) = *(uint *)(unaff_RBP + -0x63c) & 0x80;
          *(long *)(unaff_RBP + -0x648) = unaff_RBP + -0x460;
          do {
            uVar21 = (uint)uVar24;
            if (*(int *)(unaff_RBP + -0x610) != 0x10) {
              if ((uVar21 - 0x30 < 10) && ((int)(uVar21 - 0x2f) <= *(int *)(unaff_RBP + -0x610)))
              goto LAB_006f647d;
              if (*(int *)(unaff_RBP + -0x610) != 10) {
                *(int *)(unaff_RBP + -0x638) = iVar19;
                pcVar47 = *(char **)(unaff_RBP + -0x470);
                *(undefined4 *)(unaff_RBP + -0x610) = 8;
                goto LAB_006f651d;
              }
              if (*(int *)(unaff_RBP + -0x650) != 0) {
                pbVar41 = *(byte **)(unaff_RBP + -0x680);
                iVar48 = 0x7fffffff;
                if (0 < iVar19) {
                  iVar48 = iVar19;
                }
                if (uVar21 == *pbVar41) {
                  *(int *)(unaff_RBP + -0x630) = iVar19;
                  unaff_R13 = uVar24;
                  do {
                    uVar21 = (uint)unaff_R13;
                    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
                    uVar49 = (undefined1)unaff_R13;
                    if (puVar46 == *(undefined1 **)(unaff_RBP + -0x468)) {
                      *(undefined1 *)(unaff_RBP + -0x620) = uVar49;
                      if (puVar46 != (undefined1 *)0x0) {
                        uVar23 = *(undefined8 *)(unaff_RBP + -0x648);
                        *(long *)(unaff_RBP + -0x638) =
                             (long)puVar46 - *(long *)(unaff_RBP + -0x460);
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6be3;
                        cVar15 = FUN_00712520(uVar23);
                        uVar24 = (ulong)*(byte *)(unaff_RBP + -0x620);
                        if (cVar15 == '\0') {
                          *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                          goto LAB_006f6b5e;
                        }
                        puVar46 = (undefined1 *)
                                  (*(long *)(unaff_RBP + -0x638) + *(long *)(unaff_RBP + -0x460));
                        *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
                        *(long *)(unaff_RBP + -0x468) =
                             *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                        *puVar46 = uVar49;
                        if (pbVar41[1] != 0) goto LAB_006f6b6d;
                        goto LAB_006f6c36;
                      }
                      if (pbVar41[1] == 0) goto LAB_006f6c55;
                    }
                    else {
                      *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
                      *puVar46 = uVar49;
                      uVar24 = unaff_R13;
LAB_006f6b5e:
                      if (pbVar41[1] == 0) {
LAB_006f6c36:
                        pcVar47 = *(char **)(unaff_RBP + -0x470);
                        iVar19 = *(int *)(unaff_RBP + -0x630);
                        if (pcVar47 == (char *)0x0) goto LAB_006f6c55;
                        goto LAB_006f6cc7;
                      }
                    }
LAB_006f6b6d:
                    pbVar41 = pbVar41 + 1;
                    if (iVar48 == 0) {
                      pcVar47 = *(char **)(unaff_RBP + -0x470);
                      *(undefined4 *)(unaff_RBP + -0x638) = *(undefined4 *)(unaff_RBP + -0x630);
                      if (pcVar47 == (char *)0x0) goto LAB_006f6c55;
                      if (pbVar41 <= *(byte **)(unaff_RBP + -0x680)) goto LAB_006f6526;
                      *(long *)(unaff_RBP + -0x470) =
                           (long)pcVar47 - ((long)pbVar41 - *(long *)(unaff_RBP + -0x680));
                      uVar24 = unaff_R13;
                      goto LAB_006f8639;
                    }
                    pbVar45 = *(byte **)(unaff_R15 + 2);
                    if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
                      *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
                      uVar24 = (ulong)*pbVar45;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6c80;
                      uVar21 = FUN_007067b0(unaff_R15);
                      uVar24 = (ulong)uVar21;
                      if (uVar21 == 0xffffffff) {
                        iVar19 = *(int *)(unaff_RBP + -0x630);
                        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                        goto LAB_006f6caf;
                      }
                    }
                    unaff_R14 = unaff_R14 + 1;
                    iVar48 = iVar48 + -1;
                    unaff_R13 = uVar24;
                  } while ((uint)*pbVar41 == (uint)uVar24);
                  iVar19 = *(int *)(unaff_RBP + -0x630);
                }
LAB_006f6caf:
                uVar21 = (uint)uVar24;
                pcVar47 = *(char **)(unaff_RBP + -0x470);
                if (pcVar47 != (char *)0x0) {
                  if (*pbVar41 == 0) {
LAB_006f6cc7:
                    uVar49 = (undefined1)uVar24;
                    pcVar30 = *(char **)(unaff_RBP + -0x468);
                    pcVar32 = pcVar47 + -1;
                    *(char **)(unaff_RBP + -0x470) = pcVar32;
                    if (0 < iVar19) {
                      iVar19 = iVar48;
                    }
                    if (pcVar32 == pcVar30) goto LAB_006f6ce9;
                    goto LAB_006f649b;
                  }
                  *(int *)(unaff_RBP + -0x638) = iVar19;
                  unaff_R13 = uVar24;
                  if (*(byte **)(unaff_RBP + -0x680) < pbVar41) {
                    *(long *)(unaff_RBP + -0x470) =
                         (long)pcVar47 - ((long)pbVar41 - *(long *)(unaff_RBP + -0x680));
                    if (uVar21 != 0xffffffff) {
LAB_006f8639:
                      unaff_R14 = unaff_R14 + -1;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8649;
                      FUN_007075f0(unaff_R15,uVar24 & 0xff);
                    }
                    pbVar45 = pbVar41 + -1;
                    pbVar40 = pbVar45;
                    if (*(byte **)(unaff_RBP + -0x680) < pbVar45) {
                      do {
                        bVar14 = *pbVar40;
                        pbVar40 = pbVar40 + -1;
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8669;
                        FUN_007075f0(unaff_R15,bVar14);
                      } while (*(byte **)(unaff_RBP + -0x680) != pbVar40);
                      lVar44 = (*(long *)(unaff_RBP + -0x680) + 1) - (long)pbVar41;
                      unaff_R14 = unaff_R14 + lVar44;
                      pbVar45 = pbVar45 + lVar44;
                    }
                    uVar24 = (ulong)*pbVar45;
                    pcVar47 = *(char **)(unaff_RBP + -0x470);
                    goto LAB_006f651d;
                  }
                  goto LAB_006f6526;
                }
LAB_006f6c55:
                *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
                *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                goto switchD_006f555e_default;
              }
              break;
            }
            if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                          (long)(int)uVar21 * 2) & 0x10) == 0) break;
LAB_006f647d:
            pcVar32 = *(char **)(unaff_RBP + -0x470);
            pcVar30 = *(char **)(unaff_RBP + -0x468);
            uVar49 = (undefined1)uVar24;
            if (pcVar32 == pcVar30) {
              if (pcVar30 != (char *)0x0) {
LAB_006f6ce9:
                uVar23 = *(undefined8 *)(unaff_RBP + -0x648);
                *(undefined1 *)(unaff_RBP + -0x630) = uVar49;
                lVar44 = *(long *)(unaff_RBP + -0x460);
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6d03;
                cVar15 = FUN_00712520(uVar23);
                if (cVar15 == '\0') {
                  *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                }
                else {
                  *(char **)(unaff_RBP + -0x470) =
                       pcVar30 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
                  *(long *)(unaff_RBP + -0x468) =
                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                  pcVar30[*(long *)(unaff_RBP + -0x460) - lVar44] = *(char *)(unaff_RBP + -0x630);
                }
              }
            }
            else {
              pcVar47 = pcVar32 + 1;
LAB_006f649b:
              *(char **)(unaff_RBP + -0x470) = pcVar47;
              *pcVar32 = (char)uVar24;
            }
            iVar19 = iVar19 - (uint)(0 < iVar19);
            if (uVar21 == 0xffffffff) {
              *(int *)(unaff_RBP + -0x638) = iVar19;
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6ae6:
              pcVar47 = *(char **)(unaff_RBP + -0x470);
              uVar24 = 0xffffffff;
              goto LAB_006f651d;
            }
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              uVar24 = (ulong)*pbVar41;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6d4d;
              uVar21 = FUN_007067b0(unaff_R15);
              uVar24 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                *(int *)(unaff_RBP + -0x638) = iVar19;
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                goto LAB_006f6ae6;
              }
            }
            unaff_R14 = unaff_R14 + 1;
          } while (iVar19 != 0);
          pcVar47 = *(char **)(unaff_RBP + -0x470);
          *(int *)(unaff_RBP + -0x638) = iVar19;
        }
        goto LAB_006f651d;
      }
LAB_006f6e2c:
      *(undefined4 *)(unaff_RBP + -0x610) = 10;
      if ((*(uint *)(unaff_RBP + -0x63c) & 0x400) == 0) goto LAB_006f641c;
      *(bool *)(unaff_RBP + -0x630) = bVar50;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6e58;
      lVar44 = FUN_007712d0("to_inpunct");
      cVar15 = *(char *)(unaff_RBP + -0x630);
      *(long *)(unaff_RBP + -0x6a0) = lVar44;
      iVar19 = *(int *)(*(long *)(unaff_RBP + -0x678) + 0xd8);
      *(int *)(unaff_RBP + -0x610) = iVar19;
      *(int *)(unaff_RBP + -0x6e8) = iVar19 + -1;
      if (lVar44 != 0) {
        *(byte **)(unaff_RBP + -0x648) = unaff_R14;
        *(undefined8 *)(unaff_RBP + -0x630) = 0;
        *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x610);
        *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
        *(int *)(unaff_RBP + -0x660) = (int)uVar24;
        *(char *)(unaff_RBP + -0x668) = cVar15;
        *(uint **)(unaff_RBP + -0x688) = unaff_R15;
        do {
          lVar44 = *(long *)(unaff_RBP + -0x630);
          lVar39 = *(long *)(*(long *)(unaff_RBP + -0x678) + 0xe0 + lVar44 * 8);
          uVar23 = *(undefined8 *)(unaff_RBP + -0x6a0);
          *(long *)(*(long *)(unaff_RBP + -0x650) + lVar44 * 8) = lVar39;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa498;
          uVar22 = FUN_00771360((int)lVar44 + 0x30,uVar23);
          *(undefined8 *)(unaff_RBP + -0x5b0) = 0;
          *(undefined1 **)((long)register0x00000020 + -8) = &LAB_006fa4ac;
          lVar44 = FUN_00756c20(unaff_RBP + -0x50,uVar22,(undefined8 *)(unaff_RBP + -0x5b0));
          *(long *)(unaff_RBP + -0x620) = lVar44;
          if (lVar44 == -1) {
            unaff_R14 = *(byte **)(unaff_RBP + -0x648);
            uVar24 = (ulong)*(uint *)(unaff_RBP + -0x660);
            *(undefined8 *)(unaff_RBP + -0x6a0) = 0;
            cVar15 = *(char *)(unaff_RBP + -0x668);
            unaff_R15 = *(uint **)(unaff_RBP + -0x688);
            goto LAB_006f6e8b;
          }
          iVar19 = 0;
          lVar29 = 0;
          lVar44 = lVar39;
          if (0 < *(int *)(unaff_RBP + -0x610)) {
            do {
              iVar19 = iVar19 + 1;
              *(undefined1 **)((long)register0x00000020 + -8) = &LAB_006fa4db;
              lVar29 = thunk_FUN_007129d0(lVar44);
              lVar44 = lVar44 + 1 + lVar29;
            } while (*(int *)(unaff_RBP + -0x610) != iVar19);
            lVar29 = lVar44 - lVar39;
          }
          uVar24 = *(long *)(unaff_RBP + -0x620) + 0x18 + lVar29;
          for (puVar46 = (undefined1 *)register0x00000020;
              puVar46 != (undefined1 *)((long)register0x00000020 + -(uVar24 & 0xfffffffffffff000));
              puVar46 = puVar46 + -0x1000) {
            *(undefined8 *)(puVar46 + -8) = *(undefined8 *)(puVar46 + -8);
          }
          uVar24 = (ulong)((uint)uVar24 & 0xff0);
          lVar44 = -uVar24;
          register0x00000020 = (BADSPACEBASE *)(puVar46 + lVar44);
          if (uVar24 != 0) {
            *(undefined8 *)(puVar46 + -8) = *(undefined8 *)(puVar46 + -8);
          }
          *(long *)(unaff_RBP + -0x6f0) = (long)puVar46 + lVar44;
          *(undefined8 *)(puVar46 + lVar44 + -8) = 0x6fa557;
          uVar34 = thunk_FUN_00713820((long)puVar46 + lVar44,lVar39);
          uVar23 = *(undefined8 *)(unaff_RBP + -0x620);
          *(undefined8 *)(puVar46 + lVar44 + -8) = 0x6fa569;
          puVar35 = (undefined1 *)thunk_FUN_00713820(uVar34,unaff_RBP + -0x50,uVar23);
          uVar23 = *(undefined8 *)(unaff_RBP + -0x6f0);
          *puVar35 = 0;
          lVar39 = *(long *)(unaff_RBP + -0x630);
          *(undefined8 *)(unaff_RBP + -0x540 + lVar39 * 8) = uVar23;
          lVar39 = lVar39 + 1;
          *(long *)(unaff_RBP + -0x630) = lVar39;
        } while (lVar39 != 10);
        unaff_R14 = *(byte **)(unaff_RBP + -0x648);
        uVar24 = (ulong)*(uint *)(unaff_RBP + -0x660);
        cVar15 = *(char *)(unaff_RBP + -0x668);
        unaff_R15 = *(uint **)(unaff_RBP + -0x688);
        register0x00000020 = (BADSPACEBASE *)(puVar46 + lVar44);
      }
LAB_006f6e8b:
      *(undefined4 *)(unaff_RBP + -0x688) = 0;
      *(uint *)(unaff_RBP + -0x6f0) = *(uint *)(unaff_RBP + -0x63c) & 0x80;
      *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
      uVar28 = uVar24;
      if (cVar15 != '\0') {
LAB_006f6ec0:
        *(undefined8 *)(unaff_RBP + -0x630) = 0;
        iVar19 = 0x7fffffff;
        if (0 < *(int *)(unaff_RBP + -0x638)) {
          iVar19 = *(int *)(unaff_RBP + -0x638);
        }
        *(int *)(unaff_RBP + -0x668) = iVar19;
        *(undefined8 *)(unaff_RBP + -0x648) = *(undefined8 *)(unaff_RBP + -0x650);
LAB_006f6ef8:
        *(undefined4 *)(unaff_RBP + -0x660) = *(undefined4 *)(unaff_RBP + -0x630);
        if (*(long *)(unaff_RBP + -0x6a0) == 0) {
          pbVar41 = *(byte **)(*(long *)(unaff_RBP + -0x678) + 0xe0 +
                              *(long *)(unaff_RBP + -0x630) * 8);
        }
        else {
          pbVar41 = *(byte **)(unaff_RBP + -0x540 + *(long *)(unaff_RBP + -0x630) * 8);
        }
        plVar36 = *(long **)(unaff_RBP + -0x648);
        iVar19 = *(int *)(unaff_RBP + -0x688);
        *plVar36 = (long)pbVar41;
        if (iVar19 != 0) {
          *(byte **)(unaff_RBP + -0x610) = unaff_R14;
          *(int *)(unaff_RBP + -0x620) = (int)uVar28;
          iVar48 = 0;
          do {
            iVar48 = iVar48 + 1;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6f64;
            lVar44 = thunk_FUN_007129d0(pbVar41);
            pbVar41 = pbVar41 + lVar44 + 1;
            *plVar36 = (long)pbVar41;
          } while (iVar19 != iVar48);
          unaff_R14 = *(byte **)(unaff_RBP + -0x610);
          uVar28 = (ulong)*(uint *)(unaff_RBP + -0x620);
        }
        if ((uint)*pbVar41 == (uint)uVar28) {
          iVar19 = *(int *)(unaff_RBP + -0x668);
          *(byte **)(unaff_RBP + -0x620) = pbVar41;
          pbVar45 = pbVar41;
          do {
            pbVar40 = pbVar45 + 1;
            if (*pbVar40 == 0) goto LAB_006f7335;
            if (iVar19 == 0) {
              pbVar41 = *(byte **)(unaff_RBP + -0x620);
              pbVar25 = pbVar45;
              if (pbVar41 < pbVar40) goto LAB_006f74a3;
              goto LAB_006f7043;
            }
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              uVar28 = (ulong)*pbVar41;
              pbVar25 = pbVar45;
            }
            else {
              *(byte **)(unaff_RBP + -0x610) = pbVar45;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7002;
              uVar21 = FUN_007067b0(unaff_R15);
              pbVar25 = *(byte **)(unaff_RBP + -0x610);
              uVar28 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                pbVar41 = *(byte **)(unaff_RBP + -0x620);
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                goto LAB_006f7031;
              }
            }
            unaff_R14 = unaff_R14 + 1;
            iVar19 = iVar19 + -1;
            pbVar45 = pbVar40;
          } while ((uint)*pbVar40 == (uint)uVar28);
          pbVar41 = *(byte **)(unaff_RBP + -0x620);
LAB_006f7031:
          if (*pbVar40 == 0) goto LAB_006f7335;
          if (pbVar41 < pbVar40) {
            if ((int)uVar28 != -1) {
LAB_006f74a3:
              *(byte **)(unaff_RBP + -0x610) = pbVar25;
              unaff_R14 = unaff_R14 + -1;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f74ba;
              FUN_007075f0(unaff_R15,uVar28 & 0xff);
              pbVar25 = *(byte **)(unaff_RBP + -0x610);
            }
            pbVar45 = pbVar25;
            if (pbVar41 < pbVar25) {
              do {
                bVar14 = *pbVar45;
                pbVar45 = pbVar45 + -1;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f74e1;
                FUN_007075f0(unaff_R15,bVar14);
              } while (pbVar45 != pbVar41);
              unaff_R14 = unaff_R14 + ((long)pbVar41 - (long)pbVar25);
              pbVar25 = pbVar41;
            }
            uVar28 = (ulong)*pbVar25;
          }
LAB_006f7043:
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f704b;
          lVar44 = thunk_FUN_007129d0(pbVar41);
          plVar36 = *(long **)(unaff_RBP + -0x648);
          *(long *)(unaff_RBP + -0x630) = *(long *)(unaff_RBP + -0x630) + 1;
          *plVar36 = (long)(pbVar41 + lVar44 + 1);
          *(long **)(unaff_RBP + -0x648) = plVar36 + 1;
          if (*(long *)(unaff_RBP + -0x630) == 10) goto code_r0x006f707e;
          goto LAB_006f6ef8;
        }
        if (*pbVar41 != 0) goto LAB_006f7043;
        iVar19 = *(int *)(unaff_RBP + -0x668);
LAB_006f7335:
        pcVar32 = *(char **)(unaff_RBP + -0x468);
        if (*(int *)(unaff_RBP + -0x638) < 1) {
          iVar19 = *(int *)(unaff_RBP + -0x638);
        }
        pcVar30 = *(char **)(unaff_RBP + -0x470);
        iVar48 = *(int *)(unaff_RBP + -0x660) + 0x30;
        cVar15 = (char)iVar48;
        *(int *)(unaff_RBP + -0x638) = iVar19;
        if (pcVar32 != pcVar30) {
          pcVar47 = pcVar30 + 1;
          *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x688);
          goto LAB_006f737d;
        }
        *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x688);
        if (pcVar32 != (char *)0x0) goto LAB_006f75a9;
        if (0 < *(int *)(unaff_RBP + -0x638)) goto LAB_006f7391;
        goto LAB_006f73a2;
      }
      pcVar47 = *(char **)(unaff_RBP + -0x470);
      goto LAB_006f73db;
    }
LAB_006f6363:
    iVar19 = *(int *)(unaff_RBP + -0x638);
    bVar50 = iVar19 != 0;
    if (((int)uVar24 != 0x30) || (!bVar50)) goto LAB_006f6e1e;
    puVar46 = *(undefined1 **)(unaff_RBP + -0x468);
    *(uint *)(unaff_RBP + -0x638) = iVar19 - (uint)(0 < iVar19);
    puVar35 = *(undefined1 **)(unaff_RBP + -0x470);
    if (puVar46 == puVar35) {
      if (puVar46 != (undefined1 *)0x0) {
        lVar44 = *(long *)(unaff_RBP + -0x460);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8aef;
        cVar15 = FUN_00712520(unaff_RBP + -0x460);
        if (cVar15 == '\0') {
          *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
        }
        else {
          *(undefined1 **)(unaff_RBP + -0x470) =
               puVar46 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
          *(long *)(unaff_RBP + -0x468) =
               *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
          puVar46[*(long *)(unaff_RBP + -0x460) - lVar44] = 0x30;
        }
      }
    }
    else {
      *(undefined1 **)(unaff_RBP + -0x470) = puVar35 + 1;
      *puVar35 = 0x30;
    }
    pbVar41 = *(byte **)(unaff_R15 + 2);
    if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
      *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
      uVar24 = (ulong)*pbVar41;
LAB_006f63d0:
      unaff_R14 = unaff_R14 + 1;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7b1f;
      uVar21 = FUN_007067b0(unaff_R15);
      uVar24 = (ulong)uVar21;
      if (uVar21 != 0xffffffff) goto LAB_006f63d0;
      *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
    }
    if (*(int *)(unaff_RBP + -0x638) == 0) {
      if (*(int *)(unaff_RBP + -0x610) != 0) {
        bVar50 = false;
        goto LAB_006f765a;
      }
      *(undefined4 *)(unaff_RBP + -0x610) = 8;
      goto LAB_006f813c;
    }
    iVar19 = (int)uVar24;
    if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (uVar24 & 0xff) * 4) != 0x78) {
      bVar50 = iVar19 != -1;
      if (*(int *)(unaff_RBP + -0x610) != 0) goto LAB_006f765a;
      *(undefined4 *)(unaff_RBP + -0x610) = 8;
      goto LAB_006f641c;
    }
    bVar50 = iVar19 != -1;
    if ((*(byte *)(unaff_RBP + -0x610) & 10) != 0) goto LAB_006f765a;
    *(uint *)(unaff_RBP + -0x638) =
         *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
    if (iVar19 != -1) {
      pbVar41 = *(byte **)(unaff_R15 + 2);
      if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
        uVar24 = (ulong)*pbVar41;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa83d;
        uVar21 = FUN_007067b0(unaff_R15);
        uVar24 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) {
          pcVar47 = *(char **)(unaff_RBP + -0x470);
          uVar22 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
          *(undefined4 *)(unaff_RBP + -0x600) = uVar22;
          goto LAB_006f651d;
        }
      }
      uVar21 = (uint)uVar24;
      unaff_R14 = unaff_R14 + 1;
      *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
      if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006f813c;
      goto LAB_006f6424;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    pcVar47 = *(char **)(unaff_RBP + -0x470);
    *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
    goto LAB_006f651d;
  }
LAB_006f623a:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6244:
  iVar19 = -1;
  if (*(int *)(unaff_RBP + -0x640) != 0) {
    iVar19 = *(int *)(unaff_RBP + -0x640);
  }
  *(int *)(unaff_RBP + -0x640) = iVar19;
switchD_006f555e_default:
  if ((*unaff_R15 & 0x8000) == 0) {
    piVar1 = *(int **)(unaff_R15 + 0x22);
    iVar19 = piVar1[1];
    piVar1[1] = iVar19 + -1;
    if (iVar19 + -1 == 0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      LOCK();
      iVar19 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (1 < iVar19) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7e56;
        FUN_00709660();
      }
    }
  }
  uVar23 = *(undefined8 *)(unaff_RBP + -0x6b0);
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5612;
  FUN_00709560(uVar23);
  if (*(long *)(unaff_RBP + -0x460) != *(long *)(unaff_RBP + -0x6a8)) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5627;
    FUN_007104f0();
  }
  if (*(int *)(unaff_RBP + -0x640) == -1) {
    puVar2 = *(ulong **)(unaff_RBP + -0x6d0);
    puVar3 = *(ulong **)(unaff_RBP + -0x6d0);
    while (puVar3 != (ulong *)0x0) {
      uVar24 = 0;
      if (*puVar2 != 0) {
        do {
          uVar23 = *(undefined8 *)puVar2[uVar24 + 2];
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5e0d;
          FUN_007104f0(uVar23);
          lVar44 = uVar24 + 2;
          uVar24 = uVar24 + 1;
          *(undefined8 *)puVar2[lVar44] = 0;
        } while (uVar24 < *puVar2);
      }
      puVar2 = (ulong *)puVar2[1];
      puVar3 = puVar2;
    }
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
  }
  else if (*(long *)(unaff_RBP + -0x670) != 0) {
    puVar27 = *(undefined8 **)(unaff_RBP + -0x670);
    uVar23 = *puVar27;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5e41;
    FUN_007104f0(uVar23);
    *puVar27 = 0;
  }
  if (*(long *)(unaff_RBP + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)*(uint *)(unaff_RBP + -0x640);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbbe6;
  FUN_00771f60();
code_r0x006fb2f0:
  uVar37 = uVar37 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fb319;
  goto LAB_006fb2eb;
code_r0x006fa61d:
  uVar37 = uVar37 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fa62b;
  goto LAB_006fa618;
code_r0x006fc81b:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fc849;
  goto LAB_006fc816;
code_r0x006fb052:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fb081;
  goto LAB_006fb04d;
code_r0x006fb3ce:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fb3f7;
  goto LAB_006fb3c9;
code_r0x006fa1d4:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fa1e2;
  goto LAB_006fa1cf;
code_r0x006fb4b1:
  uVar37 = uVar37 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fb4e1;
  goto LAB_006fb4ac;
code_r0x006fb579:
  uVar37 = uVar37 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fb5a2;
  goto LAB_006fb574;
code_r0x006f950e:
  *(long *)(unaff_RBP + -0x698) = lVar39;
  unaff_R13 = 0xffffffff;
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f952c:
  if ((long)puVar46 - **(long **)(unaff_RBP + -0x670) != *(long *)(unaff_RBP + -0x698)) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f954e;
    lVar44 = FUN_00710840();
    if (lVar44 != 0) {
      **(long **)(unaff_RBP + -0x670) = lVar44;
    }
  }
LAB_006f67ef:
  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar46;
  *(undefined4 *)(unaff_RBP + -0x610) = 0;
  *(undefined8 *)(unaff_RBP + -0x670) = 0;
  goto LAB_006f510e;
code_r0x006f9e9a:
  uVar37 = uVar37 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006f9ec3;
  goto LAB_006f9e95;
code_r0x006faf9a:
  uVar37 = uVar37 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fafc3;
  goto LAB_006faf95;
code_r0x006fc9d4:
  uVar37 = uVar37 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fc9fd;
  goto LAB_006fc9cf;
LAB_006f9c20:
  *(long *)(unaff_RBP + -0x6b8) = lVar44;
  uVar38 = *(uint *)(unaff_RBP + -0x610);
  lVar44 = *(long *)(unaff_RBP + -0x650);
LAB_006f9c3a:
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9c46;
  FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
LAB_006f83af:
  if (lVar44 != 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    goto switchD_006f555e_default;
  }
  if (unaff_R14 == *(byte **)(unaff_RBP + -0x620)) goto switchD_006f555e_default;
joined_r0x006f83c7:
  if (uVar38 == 0) {
    puVar33 = *(undefined4 **)(unaff_RBP + -0x6b8);
    *puVar33 = 0;
    puVar33 = puVar33 + 1;
    if (((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) &&
       (plVar36 = *(long **)(unaff_RBP + -0x670),
       (long)puVar33 - *plVar36 >> 2 != *(long *)(unaff_RBP + -0x698))) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7d80;
      lVar44 = FUN_00710840();
      if (lVar44 != 0) {
        *plVar36 = lVar44;
      }
    }
    *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
    *(undefined4 **)(unaff_RBP + -0x6b8) = puVar33;
    *(undefined8 *)(unaff_RBP + -0x670) = 0;
  }
  goto LAB_006f6de8;
code_r0x006f707e:
  iVar19 = *(int *)(unaff_RBP + -0x688) + 1;
  *(int *)(unaff_RBP + -0x648) = iVar19;
  if (iVar19 <= *(int *)(unaff_RBP + -0x6e8)) {
    do {
      *(undefined8 *)(unaff_RBP + -0x620) = 0;
      do {
        pbVar41 = *(byte **)(*(long *)(unaff_RBP + -0x650) + *(long *)(unaff_RBP + -0x620) * 8);
        *(int *)(unaff_RBP + -0x660) = (int)*(long *)(unaff_RBP + -0x620);
        bVar14 = *pbVar41;
        *(byte **)(unaff_RBP + -0x630) = pbVar41;
        if ((uint)bVar14 == (uint)uVar28) {
          iVar19 = *(int *)(unaff_RBP + -0x668);
          do {
            pbVar45 = pbVar41;
            pbVar41 = pbVar45 + 1;
            if (*pbVar41 == 0) goto LAB_006f7329;
            if (iVar19 == 0) {
              if (*(byte **)(unaff_RBP + -0x630) < pbVar41) goto LAB_006f7403;
              goto LAB_006f718d;
            }
            pbVar40 = *(byte **)(unaff_R15 + 2);
            if (pbVar40 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar40 + 1;
              uVar28 = (ulong)*pbVar40;
            }
            else {
              *(byte **)(unaff_RBP + -0x610) = pbVar45;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7152;
              uVar21 = FUN_007067b0(unaff_R15);
              pbVar45 = *(byte **)(unaff_RBP + -0x610);
              uVar28 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) {
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                break;
              }
            }
            unaff_R14 = unaff_R14 + 1;
            iVar19 = iVar19 + -1;
          } while ((uint)*pbVar41 == (uint)uVar28);
          if (*pbVar41 == 0) {
LAB_006f7329:
            *(undefined4 *)(unaff_RBP + -0x688) = *(undefined4 *)(unaff_RBP + -0x648);
            goto LAB_006f7335;
          }
          if (*(byte **)(unaff_RBP + -0x630) < pbVar41) {
            if ((int)uVar28 != -1) {
LAB_006f7403:
              unaff_R14 = unaff_R14 + -1;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7413;
              FUN_007075f0(unaff_R15,uVar28 & 0xff);
            }
            pbVar41 = *(byte **)(unaff_RBP + -0x630);
            pbVar40 = pbVar45;
            if (pbVar41 < pbVar45) {
              do {
                bVar14 = *pbVar40;
                pbVar40 = pbVar40 + -1;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7438;
                FUN_007075f0(unaff_R15,bVar14);
              } while (pbVar41 != pbVar40);
              pbVar40 = *(byte **)(unaff_RBP + -0x630);
              unaff_R14 = unaff_R14 + ((long)pbVar40 - (long)pbVar45);
            }
            uVar28 = (ulong)*pbVar40;
          }
        }
        else if (bVar14 == 0) {
          iVar19 = *(int *)(unaff_RBP + -0x668);
          goto LAB_006f7329;
        }
LAB_006f718d:
        lVar44 = *(long *)(unaff_RBP + -0x630);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f719c;
        lVar29 = thunk_FUN_007129d0(lVar44);
        lVar39 = *(long *)(unaff_RBP + -0x620);
        *(long *)(*(long *)(unaff_RBP + -0x650) + lVar39 * 8) = lVar44 + 1 + lVar29;
        lVar39 = lVar39 + 1;
        *(long *)(unaff_RBP + -0x620) = lVar39;
      } while (lVar39 != 10);
      *(int *)(unaff_RBP + -0x648) = *(int *)(unaff_RBP + -0x648) + 1;
    } while (*(int *)(unaff_RBP + -0x648) <= *(int *)(unaff_RBP + -0x6e8));
  }
  if (*(int *)(unaff_RBP + -0x6f0) == 0) goto LAB_006f73d1;
  pbVar41 = *(byte **)(unaff_RBP + -0x680);
  iVar19 = 0x7fffffff;
  if (0 < *(int *)(unaff_RBP + -0x638)) {
    iVar19 = *(int *)(unaff_RBP + -0x638);
  }
  if ((uint)*pbVar41 == (uint)uVar28) {
    *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x460;
    uVar24 = uVar28;
    do {
      iVar48 = (int)uVar24;
      puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
      puVar35 = *(undefined1 **)(unaff_RBP + -0x468);
      uVar49 = (undefined1)uVar24;
      if (puVar35 == puVar46) {
        *(undefined1 *)(unaff_RBP + -0x620) = uVar49;
        if (puVar35 != (undefined1 *)0x0) {
          uVar23 = *(undefined8 *)(unaff_RBP + -0x630);
          *(long *)(unaff_RBP + -0x610) = (long)puVar35 - *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f72d5;
          cVar15 = FUN_00712520(uVar23);
          bVar14 = *(byte *)(unaff_RBP + -0x620);
          uVar28 = (ulong)bVar14;
          if (cVar15 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            puVar46 = (undefined1 *)(*(long *)(unaff_RBP + -0x610) + *(long *)(unaff_RBP + -0x460));
            *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            *puVar46 = uVar49;
          }
          goto LAB_006f724e;
        }
        if (pbVar41[1] == 0) goto LAB_006f86db;
      }
      else {
        *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
        *puVar46 = uVar49;
        uVar28 = uVar24;
LAB_006f724e:
        if (pbVar41[1] == 0) {
          pcVar47 = *(char **)(unaff_RBP + -0x470);
          if (pcVar47 != (char *)0x0) goto LAB_006f757b;
          goto LAB_006f86db;
        }
      }
      pbVar41 = pbVar41 + 1;
      if (iVar19 == 0) {
        pcVar47 = *(char **)(unaff_RBP + -0x470);
        if (pcVar47 == (char *)0x0) goto LAB_006f86db;
        if (pbVar41 <= *(byte **)(unaff_RBP + -0x680)) goto LAB_006f73db;
        *(long *)(unaff_RBP + -0x470) =
             (long)pcVar47 - ((long)pbVar41 - *(long *)(unaff_RBP + -0x680));
        goto LAB_006fb799;
      }
      pbVar45 = *(byte **)(unaff_R15 + 2);
      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
        uVar28 = (ulong)*pbVar45;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f753c;
        uVar21 = FUN_007067b0(unaff_R15);
        uVar28 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          break;
        }
      }
      unaff_R14 = unaff_R14 + 1;
      iVar19 = iVar19 + -1;
      uVar24 = uVar28;
    } while ((uint)*pbVar41 == (uint)uVar28);
  }
  iVar48 = (int)uVar28;
  pcVar47 = *(char **)(unaff_RBP + -0x470);
  if (pcVar47 == (char *)0x0) {
LAB_006f86db:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  if (*pbVar41 != 0) {
    uVar24 = uVar28;
    if (*(byte **)(unaff_RBP + -0x680) < pbVar41) {
      *(long *)(unaff_RBP + -0x470) =
           (long)pcVar47 - ((long)pbVar41 - *(long *)(unaff_RBP + -0x680));
      if (iVar48 != -1) {
LAB_006fb799:
        unaff_R14 = unaff_R14 + -1;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb7a9;
        FUN_007075f0(unaff_R15,uVar24 & 0xff);
      }
      pbVar45 = pbVar41 + -1;
      pbVar40 = pbVar45;
      if (*(byte **)(unaff_RBP + -0x680) < pbVar45) {
        do {
          bVar14 = *pbVar40;
          pbVar40 = pbVar40 + -1;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb6d0;
          FUN_007075f0(unaff_R15,bVar14);
        } while (*(byte **)(unaff_RBP + -0x680) != pbVar40);
        lVar44 = (*(long *)(unaff_RBP + -0x680) + 1) - (long)pbVar41;
        unaff_R14 = unaff_R14 + lVar44;
        pbVar45 = pbVar45 + lVar44;
      }
      uVar24 = (ulong)*pbVar45;
      pcVar47 = *(char **)(unaff_RBP + -0x470);
    }
    goto LAB_006f73db;
  }
LAB_006f757b:
  cVar15 = (char)uVar28;
  pcVar32 = *(char **)(unaff_RBP + -0x468);
  if (*(int *)(unaff_RBP + -0x638) < 1) {
    iVar19 = *(int *)(unaff_RBP + -0x638);
  }
  pcVar30 = pcVar47 + -1;
  *(char **)(unaff_RBP + -0x470) = pcVar30;
  *(int *)(unaff_RBP + -0x638) = iVar19;
  if (pcVar30 == pcVar32) {
LAB_006f75a9:
    *(char *)(unaff_RBP + -0x610) = cVar15;
    lVar44 = *(long *)(unaff_RBP + -0x460);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f75c3;
    cVar15 = FUN_00712520(unaff_RBP + -0x460);
    if (cVar15 == '\0') {
      *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
    }
    else {
      *(char **)(unaff_RBP + -0x470) = pcVar32 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
      *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
      pcVar32[*(long *)(unaff_RBP + -0x460) - lVar44] = *(char *)(unaff_RBP + -0x610);
    }
  }
  else {
LAB_006f737d:
    *(char **)(unaff_RBP + -0x470) = pcVar47;
    *pcVar30 = cVar15;
  }
  if (0 < *(int *)(unaff_RBP + -0x638)) {
LAB_006f7391:
    *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
  }
  if (iVar48 != -1) {
LAB_006f73a2:
    pbVar41 = *(byte **)(unaff_R15 + 2);
    if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
      *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
      uVar28 = (ulong)*pbVar41;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7690;
      uVar21 = FUN_007067b0(unaff_R15);
      uVar28 = (ulong)uVar21;
      if (uVar21 == 0xffffffff) {
        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
        goto LAB_006f7618;
      }
    }
    unaff_R14 = unaff_R14 + 1;
    if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006f73d1;
    goto LAB_006f6ec0;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f7618:
  pcVar47 = *(char **)(unaff_RBP + -0x470);
  uVar24 = 0xffffffff;
  goto LAB_006f73db;
LAB_006f73d1:
  pcVar47 = *(char **)(unaff_RBP + -0x470);
  uVar24 = uVar28;
LAB_006f73db:
  *(undefined4 *)(unaff_RBP + -0x610) = 10;
LAB_006f651d:
  unaff_R13 = uVar24;
  if (pcVar47 == (char *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
LAB_006f6526:
  pcVar32 = *(char **)(unaff_RBP + -0x460);
  iVar19 = (int)unaff_R13;
  if (pcVar32 == pcVar47) {
    if ((((*(uint *)(unaff_RBP + -0x63c) & 0x1000) != 0) && (4 < *(uint *)(unaff_RBP + -0x638))) &&
       (iVar19 == 0x28)) {
      lVar44 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
      pbVar41 = *(byte **)(unaff_R15 + 2);
      if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
        uVar24 = (ulong)*pbVar41;
        uVar21 = (uint)*pbVar41;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8b96;
        uVar21 = FUN_007067b0(unaff_R15);
        if (uVar21 == 0xffffffff) goto switchD_006f555e_default;
        uVar24 = (ulong)(uVar21 & 0xff);
      }
      if (*(int *)(lVar44 + uVar24 * 4) == 0x6e) {
        lVar44 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
        pbVar41 = *(byte **)(unaff_R15 + 2);
        if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
          *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
          uVar24 = (ulong)*pbVar41;
          uVar21 = (uint)*pbVar41;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f96db;
          uVar21 = FUN_007067b0(unaff_R15);
          if (uVar21 == 0xffffffff) {
            uVar22 = *(undefined4 *)(in_FS_OFFSET + -0x58);
            if (*(int *)(lVar44 + 0x3fc) != 0x69) goto switchD_006f555e_default;
            iVar19 = *(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + 0x3fc);
            goto joined_r0x006f9714;
          }
          uVar24 = (ulong)(uVar21 & 0xff);
        }
        if (*(int *)(lVar44 + uVar24 * 4) == 0x69) {
          lVar44 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
          pbVar41 = *(byte **)(unaff_R15 + 2);
          if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
            uVar24 = (ulong)*pbVar41;
            uVar21 = (uint)*pbVar41;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9628;
            uVar21 = FUN_007067b0(unaff_R15);
            if (uVar21 == 0xffffffff) {
              iVar19 = *(int *)(lVar44 + 0x3fc);
              uVar22 = *(undefined4 *)(in_FS_OFFSET + -0x58);
joined_r0x006f9714:
              if (iVar19 == 0x6c) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar22;
              }
              goto switchD_006f555e_default;
            }
            uVar24 = (ulong)(uVar21 & 0xff);
          }
          if (*(int *)(lVar44 + uVar24 * 4) == 0x6c) {
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              unaff_R13 = (ulong)*pbVar41;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f894f;
              uVar21 = FUN_007067b0(unaff_R15);
              unaff_R13 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) goto switchD_006f555e_default;
            }
            unaff_R14 = unaff_R14 + 4;
            uVar21 = (uint)unaff_R13;
            if (uVar21 == 0x29) {
              puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
              if (puVar46 != *(undefined1 **)(unaff_RBP + -0x468)) {
                *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
                *puVar46 = 0x30;
LAB_006f6560:
                pcVar47 = *(char **)(unaff_RBP + -0x470);
                if (pcVar47 != *(char **)(unaff_RBP + -0x468)) goto LAB_006f6574;
                if (pcVar47 == (char *)0x0) goto LAB_006f87e3;
                pcVar32 = *(char **)(unaff_RBP + -0x460);
                goto LAB_006f7b4e;
              }
              if (puVar46 == (undefined1 *)0x0) goto LAB_006f87e3;
              lVar44 = *(long *)(unaff_RBP + -0x460);
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9674;
              cVar15 = FUN_00712520(unaff_RBP + -0x460);
              if (cVar15 != '\0') {
                *(undefined1 **)(unaff_RBP + -0x470) =
                     puVar46 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
                *(long *)(unaff_RBP + -0x468) =
                     *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                puVar46[*(long *)(unaff_RBP + -0x460) - lVar44] = 0x30;
                goto LAB_006f6560;
              }
              goto LAB_006fa321;
            }
          }
        }
      }
      unaff_R13 = (ulong)uVar21;
      goto LAB_006f7c6d;
    }
  }
  else if (((long)pcVar47 - (long)pcVar32 != 1) || ((*pcVar32 - 0x2bU & 0xfd) != 0)) {
    if (iVar19 != -1) {
      unaff_R14 = unaff_R14 + -1;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6560;
      FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
      goto LAB_006f6560;
    }
    if (*(char **)(unaff_RBP + -0x468) == pcVar47) {
LAB_006f7b4e:
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7b60;
      cVar15 = FUN_00712520(unaff_RBP + -0x460);
      if (cVar15 == '\0') {
LAB_006fa321:
        *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
        goto LAB_006f87e3;
      }
      *(char **)(unaff_RBP + -0x470) = pcVar47 + (*(long *)(unaff_RBP + -0x460) - (long)pcVar32) + 1
      ;
      *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
      pcVar47[*(long *)(unaff_RBP + -0x460) - (long)pcVar32] = '\0';
    }
    else {
LAB_006f6574:
      *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
      *pcVar47 = '\0';
    }
    if (*(long *)(unaff_RBP + -0x470) == 0) {
LAB_006f87e3:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
      goto switchD_006f555e_default;
    }
    uVar23 = *(undefined8 *)(unaff_RBP + -0x460);
    uVar22 = *(undefined4 *)(unaff_RBP + -0x610);
    uVar21 = *(uint *)(unaff_RBP + -0x63c) & 0x40;
    if (uVar21 == 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f773a;
      uVar23 = FUN_006e94f0(uVar23,unaff_RBP + -0x5e8,uVar22);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f65c2;
      uVar23 = FUN_006e94b0();
    }
    if (*(long *)(unaff_RBP + -0x5e8) == *(long *)(unaff_RBP + -0x460))
    goto switchD_006f555e_default;
    uVar20 = *(uint *)(unaff_RBP + -0x63c) & 8;
    *(uint *)(unaff_RBP + -0x610) = uVar20;
    if (uVar20 != 0) goto LAB_006f6de8;
    uVar20 = *(uint *)(unaff_RBP + -0x63c) & 1;
    if (uVar21 == 0) {
      if (uVar20 != 0) {
        if (*(int *)(unaff_RBP + -0x68c) != 0) {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar4 = *puVar27;
          uVar5 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
          uVar34 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar20 = uVar21;
            do {
              if (0x2f < uVar20) {
                lVar39 = lVar44 + 8;
                if (iVar19 != 1) {
                  lVar29 = lVar44 + 0x10;
                  do {
                    lVar39 = lVar29;
                    lVar29 = lVar39 + 8;
                  } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
                }
                goto LAB_006f8a35;
              }
              uVar20 = uVar20 + 8;
              bVar50 = true;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
LAB_006f7f00:
            uVar21 = uVar20;
            *(uint *)(unaff_RBP + -0x540) = uVar21;
          }
          goto LAB_006f7f08;
        }
LAB_006f6611:
        uVar21 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
        }
        puVar27 = (undefined8 *)*puVar27;
        goto LAB_006f6635;
      }
      if ((*(byte *)(unaff_RBP + -0x63c) & 4) != 0) {
        if (*(int *)(unaff_RBP + -0x68c) != 0) {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar4 = *puVar27;
          uVar5 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
          uVar34 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar44 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar20 = uVar21;
            do {
              if (0x2f < uVar20) {
                lVar39 = lVar44 + 8;
                if (iVar19 != 1) {
                  lVar29 = lVar44 + 0x10;
                  do {
                    lVar39 = lVar29;
                    lVar29 = lVar39 + 8;
                  } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
                }
                goto LAB_006f97a6;
              }
              uVar20 = uVar20 + 8;
              bVar50 = true;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
LAB_006f97b2:
            uVar21 = uVar20;
            *(uint *)(unaff_RBP + -0x540) = uVar21;
          }
          goto LAB_006f97ba;
        }
LAB_006f881b:
        uVar21 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
        }
        puVar31 = (undefined2 *)*puVar27;
        goto LAB_006f883f;
      }
      if ((*(uint *)(unaff_RBP + -0x63c) & 0x200) == 0) {
        if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006f95f5;
        puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar4 = *puVar27;
        uVar5 = puVar27[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
        uVar34 = puVar27[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
        uVar21 = *(uint *)(unaff_RBP + -0x540);
        iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar19 != 0) {
          lVar44 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar20 = uVar21;
          do {
            if (0x2f < uVar20) {
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
              }
              goto LAB_006fa88d;
            }
            uVar20 = uVar20 + 8;
            bVar50 = true;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
LAB_006fa899:
          uVar21 = uVar20;
          *(uint *)(unaff_RBP + -0x540) = uVar21;
        }
LAB_006fa8a1:
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
        }
        *(int *)*puVar27 = (int)uVar23;
      }
      else {
        if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006fa29a;
        puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar4 = *puVar27;
        uVar5 = puVar27[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
        uVar34 = puVar27[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
        uVar21 = *(uint *)(unaff_RBP + -0x540);
        iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar19 != 0) {
          lVar44 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar20 = uVar21;
          do {
            if (0x2f < uVar20) {
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
              }
              goto LAB_006fac56;
            }
            uVar20 = uVar20 + 8;
            bVar50 = true;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
LAB_006fac62:
          uVar21 = uVar20;
          *(uint *)(unaff_RBP + -0x540) = uVar21;
        }
LAB_006fac6a:
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
        }
        *(char *)*puVar27 = (char)uVar23;
      }
    }
    else if (uVar20 == 0) {
      if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
        if ((*(uint *)(unaff_RBP + -0x63c) & 0x200) == 0) {
          if (*(int *)(unaff_RBP + -0x68c) != 0) {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar4 = *puVar27;
            uVar5 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
            uVar34 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar44 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar20 = uVar21;
LAB_006f9905:
              if (uVar20 < 0x30) goto code_r0x006f990e;
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
              }
LAB_006fa88d:
              *(long *)(unaff_RBP + -0x538) = lVar39;
              if (bVar50) goto LAB_006fa899;
            }
            goto LAB_006fa8a1;
          }
LAB_006f95f5:
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          *(int *)*puVar27 = (int)uVar23;
        }
        else {
          if (*(int *)(unaff_RBP + -0x68c) != 0) {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar4 = *puVar27;
            uVar5 = puVar27[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
            uVar34 = puVar27[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
            uVar21 = *(uint *)(unaff_RBP + -0x540);
            iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar19 != 0) {
              lVar44 = *(long *)(unaff_RBP + -0x538);
              bVar50 = false;
              uVar20 = uVar21;
LAB_006fa919:
              if (uVar20 < 0x30) goto code_r0x006fa922;
              lVar39 = lVar44 + 8;
              if (iVar19 != 1) {
                lVar29 = lVar44 + 0x10;
                do {
                  lVar39 = lVar29;
                  lVar29 = lVar39 + 8;
                } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39 + 8);
              }
LAB_006fac56:
              *(long *)(unaff_RBP + -0x538) = lVar39;
              if (bVar50) goto LAB_006fac62;
            }
            goto LAB_006fac6a;
          }
LAB_006fa29a:
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          *(char *)*puVar27 = (char)uVar23;
        }
      }
      else {
        if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006f881b;
        puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar4 = *puVar27;
        uVar5 = puVar27[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
        uVar34 = puVar27[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
        uVar21 = *(uint *)(unaff_RBP + -0x540);
        iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar19 != 0) {
          lVar44 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar20 = uVar21;
LAB_006faa21:
          if (uVar20 < 0x30) goto code_r0x006faa26;
          lVar39 = lVar44 + 8;
          if (iVar19 != 1) {
            lVar29 = lVar44 + 0x10;
            do {
              lVar39 = lVar29;
              lVar29 = lVar39 + 8;
            } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
          }
LAB_006f97a6:
          *(long *)(unaff_RBP + -0x538) = lVar39;
          if (bVar50) goto LAB_006f97b2;
        }
LAB_006f97ba:
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
        }
        puVar31 = (undefined2 *)*puVar27;
LAB_006f883f:
        *puVar31 = (short)uVar23;
      }
    }
    else {
      if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006f6611;
      puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
      uVar4 = *puVar27;
      uVar5 = puVar27[1];
      *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
      *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
      uVar34 = puVar27[2];
      *(undefined8 *)(unaff_RBP + -0x630) = uVar4;
      *(undefined8 *)(unaff_RBP + -0x628) = uVar5;
      *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
      uVar21 = *(uint *)(unaff_RBP + -0x540);
      iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
      if (iVar19 != 0) {
        lVar44 = *(long *)(unaff_RBP + -0x538);
        bVar50 = false;
        uVar20 = uVar21;
LAB_006f9d02:
        if (uVar20 < 0x30) goto code_r0x006f9d07;
        lVar39 = lVar44 + 8;
        if (iVar19 != 1) {
          lVar29 = lVar44 + 0x10;
          do {
            lVar39 = lVar29;
            lVar29 = lVar39 + 8;
          } while (lVar39 + 8 != lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8);
        }
LAB_006f8a35:
        *(long *)(unaff_RBP + -0x538) = lVar39;
        if (bVar50) goto LAB_006f7f00;
      }
LAB_006f7f08:
      if (uVar21 < 0x30) {
        puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
        *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
      }
      else {
        puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
        *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
      }
      puVar27 = (undefined8 *)*puVar27;
LAB_006f6635:
      *puVar27 = uVar23;
    }
    *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
    goto LAB_006f510e;
  }
  if (iVar19 == -1) goto switchD_006f555e_default;
LAB_006f7c6d:
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7c79;
  FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
  goto switchD_006f555e_default;
code_r0x006fa922:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fac62;
  goto LAB_006fa919;
code_r0x006f990e:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fa899;
  goto LAB_006f9905;
code_r0x006faa26:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006f97b2;
  goto LAB_006faa21;
code_r0x006f9d07:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006f7f00;
  goto LAB_006f9d02;
code_r0x006faa98:
  uVar38 = uVar38 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006faaa6;
  goto LAB_006faa93;
code_r0x006f8c7f:
  uVar38 = uVar38 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006f8c8d;
  goto LAB_006f8c7a;
code_r0x006fa067:
  uVar38 = uVar38 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fa075;
  goto LAB_006fa062;
code_r0x006f93a6:
  uVar38 = uVar38 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006f93b4;
  goto LAB_006f93a1;
code_r0x006f8cf1:
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f8d02:
  if (*(int *)(unaff_RBP + -0x610) != 0) goto LAB_006f6de8;
  if ((*(int *)(unaff_RBP + -0x63c) != 0) &&
     (plVar36 = *(long **)(unaff_RBP + -0x670),
     *(long *)(unaff_RBP + -0x6b8) - *plVar36 >> 2 != *(long *)(unaff_RBP + -0x698))) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f8d44;
    lVar44 = FUN_00710840();
    if (lVar44 != 0) {
      *plVar36 = lVar44;
    }
  }
  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
  *(undefined8 *)(unaff_RBP + -0x670) = 0;
  goto LAB_006f510e;
switchD_006f5835_caseD_2:
  if (uVar20 != 0xffffffff) {
    pbVar41 = *(byte **)(unaff_R15 + 2);
    if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
      *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
      unaff_R13 = (ulong)*pbVar41;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9280;
      uVar24 = FUN_007067b0(unaff_R15);
      unaff_R13 = uVar24 & 0xffffffff;
      if ((int)uVar24 == -1) goto LAB_006f6a7f;
    }
    pbVar41 = unaff_R14 + 1;
    *(uint *)(unaff_RBP + -0x638) =
         *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
    pcVar47 = *(char **)(unaff_RBP + -0x470);
    if (((int)unaff_R13 - 0x2bU & 0xfffffffd) == 0) {
      pcVar32 = *(char **)(unaff_RBP + -0x468);
      if (pcVar32 == pcVar47) {
        if (pcVar32 != (char *)0x0) {
          lVar44 = *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9dbb;
          cVar15 = FUN_00712520(unaff_RBP + -0x460);
          if (cVar15 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar32 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            pcVar32[*(long *)(unaff_RBP + -0x460) - lVar44] = (char)unaff_R13;
          }
        }
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
        *pcVar47 = (char)unaff_R13;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar41 = *(byte **)(unaff_R15 + 2);
      if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
        uVar24 = (ulong)*pbVar41;
        unaff_R13 = uVar24;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f95c1;
        uVar21 = FUN_007067b0(unaff_R15);
        unaff_R13 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) goto switchD_006f555e_default;
        uVar24 = (ulong)(uVar21 & 0xff);
      }
      pbVar41 = unaff_R14 + 2;
      if (*(int *)(unaff_RBP + -0x638) < 1) {
        *(undefined1 *)(unaff_RBP + -0x668) = 1;
        pcVar47 = *(char **)(unaff_RBP + -0x470);
        *(undefined8 *)(unaff_RBP + -0x620) = 1;
      }
      else {
        *(undefined1 *)(unaff_RBP + -0x668) = 1;
        *(undefined8 *)(unaff_RBP + -0x620) = 1;
        *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
        pcVar47 = *(char **)(unaff_RBP + -0x470);
      }
    }
    else {
      *(undefined8 *)(unaff_RBP + -0x620) = 0;
      uVar24 = unaff_R13 & 0xff;
      *(undefined1 *)(unaff_RBP + -0x668) = 0;
    }
    iVar19 = *(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar24 * 4);
    cVar15 = (char)unaff_R13;
    if (iVar19 == 0x6e) {
      if (*(char **)(unaff_RBP + -0x468) == pcVar47) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb923;
        FUN_006f4e40(unaff_RBP + -0x470,(int)cVar15);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
        *pcVar47 = cVar15;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar45 = *(byte **)(unaff_R15 + 2);
      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
        uVar24 = (ulong)*pbVar45;
        uVar28 = uVar24;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa71f;
        uVar24 = FUN_007067b0(unaff_R15);
        if ((int)uVar24 == -1) goto switchD_006f555e_default;
        uVar28 = uVar24 & 0xff;
      }
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar28 * 4) != 0x61)
      goto switchD_006f555e_default;
      pcVar47 = *(char **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb0fd;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar24);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
        *pcVar47 = (char)uVar24;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar45 = *(byte **)(unaff_R15 + 2);
      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
        uVar24 = (ulong)*pbVar45;
        unaff_R13 = uVar24;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa6fb;
        uVar21 = FUN_007067b0(unaff_R15);
        unaff_R13 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) goto switchD_006f555e_default;
        uVar24 = (ulong)(uVar21 & 0xff);
      }
      unaff_R14 = pbVar41 + 2;
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar24 * 4) != 0x6e)
      goto switchD_006f555e_default;
LAB_006f8920:
      pcVar47 = *(char **)(unaff_RBP + -0x470);
      if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbea7;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
        *pcVar47 = (char)unaff_R13;
      }
    }
    else {
      if (iVar19 != 0x69) {
        if ((*(int *)(unaff_RBP + -0x638) == 0) || ((int)unaff_R13 != 0x30)) {
          *(undefined1 *)(unaff_RBP + -0x610) = 0x65;
          cVar15 = '\0';
        }
        else {
          if (*(char **)(unaff_RBP + -0x468) == pcVar47) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb861;
            FUN_006f4e40(unaff_RBP + -0x470,0x30);
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
            *pcVar47 = '0';
          }
          pbVar45 = *(byte **)(unaff_R15 + 2);
          if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
            unaff_R13 = (ulong)*pbVar45;
LAB_006f8db7:
            pbVar41 = pbVar41 + 1;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa2ff;
            uVar21 = FUN_007067b0(unaff_R15);
            unaff_R13 = (ulong)uVar21;
            if (uVar21 != 0xffffffff) goto LAB_006f8db7;
            *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          }
          if (((*(int *)(unaff_RBP + -0x638) < 1) ||
              (iVar19 = *(int *)(unaff_RBP + -0x638) + -1, *(int *)(unaff_RBP + -0x638) = iVar19,
              iVar19 != 0)) &&
             (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (unaff_R13 & 0xff) * 4) ==
              0x78)) {
            pcVar47 = *(char **)(unaff_RBP + -0x470);
            if (*(char **)(unaff_RBP + -0x468) == pcVar47) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fcab0;
              FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
            }
            else {
              *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
              *pcVar47 = (char)unaff_R13;
            }
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0xffffff7f | 0x800;
            if ((int)unaff_R13 == -1) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
            }
            else {
              pbVar45 = *(byte **)(unaff_R15 + 2);
              if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
                *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
                unaff_R13 = (ulong)*pbVar45;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fca67;
                uVar21 = FUN_007067b0(unaff_R15);
                unaff_R13 = (ulong)uVar21;
                if (uVar21 == 0xffffffff) {
                  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                  goto LAB_006faba4;
                }
              }
              pbVar41 = pbVar41 + 1;
            }
LAB_006faba4:
            if (*(int *)(unaff_RBP + -0x638) < 1) {
              *(undefined1 *)(unaff_RBP + -0x610) = 0x70;
              pcVar47 = *(char **)(unaff_RBP + -0x470);
              cVar15 = '\0';
            }
            else {
              *(undefined1 *)(unaff_RBP + -0x610) = 0x70;
              pcVar47 = *(char **)(unaff_RBP + -0x470);
              cVar15 = '\0';
              *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
            }
          }
          else {
            *(undefined1 *)(unaff_RBP + -0x610) = 0x65;
            pcVar47 = *(char **)(unaff_RBP + -0x470);
            cVar15 = '\x01';
          }
        }
        if (pcVar47 != (char *)0x0) {
          *(byte **)(unaff_RBP + -0x648) = pbVar41;
          *(undefined1 *)(unaff_RBP + -0x660) = 0;
          uVar21 = *(uint *)(unaff_RBP + -0x63c) & 0x80;
          *(uint *)(unaff_RBP + -0x6a0) = uVar21;
          *(bool *)(unaff_RBP + -0x688) = uVar21 != 0;
          *(undefined1 *)(unaff_RBP + -0x630) = 0;
          iVar19 = *(int *)(unaff_RBP + -0x638);
          *(uint *)(unaff_RBP + -0x650) = *(uint *)(unaff_RBP + -0x63c) & 0x800;
          *(int *)(unaff_RBP + -0x6e8) = (int)*(char *)(unaff_RBP + -0x610);
          do {
            uVar21 = (uint)unaff_R13;
            cVar18 = (char)unaff_R13;
            if (uVar21 - 0x30 < 10) {
              if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                lVar44 = *(long *)(unaff_RBP + -0x460);
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9fdf;
                cVar15 = FUN_00712520(unaff_RBP + -0x460);
                if (cVar15 != '\0') {
                  *(char **)(unaff_RBP + -0x470) =
                       pcVar47 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
                  *(long *)(unaff_RBP + -0x468) =
                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                  pcVar47[*(long *)(unaff_RBP + -0x460) - lVar44] = cVar18;
                  goto LAB_006f8e66;
                }
                *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                if (iVar19 == 0) goto LAB_006fb8c9;
              }
              else {
                *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                *pcVar47 = cVar18;
LAB_006f8e66:
                if (iVar19 == 0) goto LAB_006fb0a8;
              }
              cVar15 = '\x01';
            }
            else {
              if (*(char *)(unaff_RBP + -0x660) == '\0') {
                if ((*(int *)(unaff_RBP + -0x650) == 0) ||
                   ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                              (long)(int)uVar21 * 2) & 0x10) == 0)) {
                  if ((cVar15 == '\0') ||
                     (*(char *)(unaff_RBP + -0x610) !=
                      *(char *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                               (unaff_R13 & 0xff) * 4))) goto LAB_006f8ed8;
                  if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                    uVar22 = *(undefined4 *)(unaff_RBP + -0x6e8);
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb434;
                    FUN_006f4e40(unaff_RBP + -0x470,uVar22);
                    *(char *)(unaff_RBP + -0x660) = cVar15;
                    *(char *)(unaff_RBP + -0x630) = cVar15;
                  }
                  else {
                    *(char *)(unaff_RBP + -0x660) = cVar15;
                    *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                    *(char *)(unaff_RBP + -0x630) = cVar15;
                    *pcVar47 = *(char *)(unaff_RBP + -0x610);
                  }
                }
                else if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                  cVar15 = '\x01';
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc7a4;
                  FUN_006f4e40(unaff_RBP + -0x470,(int)cVar18);
                }
                else {
                  cVar15 = '\x01';
                  *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                  *pcVar47 = cVar18;
                }
              }
              else if ((pcVar47[-1] == *(char *)(unaff_RBP + -0x610)) &&
                      ((uVar21 - 0x2b & 0xfffffffd) == 0)) {
                if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc7b9;
                  FUN_006f4e40(unaff_RBP + -0x470,(int)cVar18);
                }
                else {
                  *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                  *pcVar47 = cVar18;
                }
              }
              else {
LAB_006f8ed8:
                iVar48 = 0x7fffffff;
                if (0 < iVar19) {
                  iVar48 = iVar19;
                }
                if (*(char *)(unaff_RBP + -0x630) == '\0') {
                  pbVar41 = *(byte **)(unaff_RBP + -0x6d8);
                  if (uVar21 == **(byte **)(unaff_RBP + -0x6d8)) {
                    *(char *)(unaff_RBP + -0x638) = cVar15;
                    do {
                      pbVar41 = pbVar41 + 1;
                      if (*pbVar41 == 0) {
                        cVar15 = *(char *)(unaff_RBP + -0x638);
                        cVar18 = **(char **)(unaff_RBP + -0x6d8);
                        goto LAB_006f91fc;
                      }
                      if (iVar48 == 0) {
                        cVar15 = *(char *)(unaff_RBP + -0x638);
                        goto LAB_006fa73b;
                      }
                      pbVar45 = *(byte **)(unaff_R15 + 2);
                      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
                        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
                        unaff_R13 = (ulong)*pbVar45;
                      }
                      else {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f91c6;
                        uVar21 = FUN_007067b0(unaff_R15);
                        unaff_R13 = (ulong)uVar21;
                        if (uVar21 == 0xffffffff) {
                          cVar15 = *(char *)(unaff_RBP + -0x638);
                          *(undefined4 *)(unaff_RBP + -0x600) =
                               *(undefined4 *)(in_FS_OFFSET + -0x58);
                          goto LAB_006f91e9;
                        }
                      }
                      bVar14 = *pbVar41;
                      *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
                      iVar48 = iVar48 + -1;
                    } while ((uint)bVar14 == (uint)unaff_R13);
                    cVar15 = *(char *)(unaff_RBP + -0x638);
                  }
LAB_006f91e9:
                  if (*pbVar41 != 0) {
LAB_006fa73b:
                    if (*(int *)(unaff_RBP + -0x6a0) == 0) {
LAB_006f8f03:
                      pbVar45 = *(byte **)(unaff_RBP + -0x680);
                      if (pbVar45 != (byte *)0x0) goto LAB_006f8f16;
                    }
                    else {
                      lVar44 = (long)pbVar41 - (long)*(byte **)(unaff_RBP + -0x6d8);
                      lVar39 = 0;
                      pbVar45 = *(byte **)(unaff_RBP + -0x680);
                      if (lVar44 < 1) {
                        if (pbVar41 == *(byte **)(unaff_RBP + -0x6d8)) goto LAB_006fa792;
                        goto LAB_006f8f03;
                      }
                      do {
                        if (*pbVar45 != *(byte *)(*(long *)(unaff_RBP + -0x6d8) + lVar39))
                        goto LAB_006f8f16;
                        pbVar45 = pbVar45 + 1;
                        lVar39 = (long)pbVar45 - *(long *)(unaff_RBP + -0x680);
                      } while (lVar39 < lVar44);
                      if (lVar39 == lVar44) {
LAB_006fa792:
                        if ((uint)*pbVar45 == (uint)unaff_R13) {
                          *(char *)(unaff_RBP + -0x638) = cVar15;
                          do {
                            pbVar45 = pbVar45 + 1;
                            if (*pbVar45 == 0) {
                              cVar15 = *(char *)(unaff_RBP + -0x638);
                              goto LAB_006f8f1f;
                            }
                            if (iVar48 == 0) {
                              *(int *)(unaff_RBP + -0x638) = iVar19;
                              unaff_R14 = *(byte **)(unaff_RBP + -0x648);
                              bVar14 = *(byte *)(unaff_RBP + -0x630);
                              goto LAB_006fb1ff;
                            }
                            pbVar41 = *(byte **)(unaff_R15 + 2);
                            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
                              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
                              unaff_R13 = (ulong)*pbVar41;
                            }
                            else {
                              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa7f6;
                              uVar21 = FUN_007067b0(unaff_R15);
                              unaff_R13 = (ulong)uVar21;
                              if (uVar21 == 0xffffffff) {
                                cVar15 = *(char *)(unaff_RBP + -0x638);
                                *(undefined4 *)(unaff_RBP + -0x600) =
                                     *(undefined4 *)(in_FS_OFFSET + -0x58);
                                goto LAB_006f8f16;
                              }
                            }
                            bVar14 = *pbVar45;
                            *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
                            iVar48 = iVar48 + -1;
                          } while ((uint)bVar14 == (uint)unaff_R13);
                          cVar15 = *(char *)(unaff_RBP + -0x638);
                        }
                      }
LAB_006f8f16:
                      if (*pbVar45 == 0) {
LAB_006f8f1f:
                        pcVar47 = *(char **)(unaff_RBP + -0x680);
                        lVar44 = unaff_RBP + -0x460;
                        cVar18 = *pcVar47;
                        if (cVar18 != '\0') {
                          *(uint **)(unaff_RBP + -0x6f0) = unaff_R15;
                          do {
                            pcVar32 = *(char **)(unaff_RBP + -0x470);
                            if (pcVar32 == *(char **)(unaff_RBP + -0x468)) {
                              if (pcVar32 != (char *)0x0) {
                                *(int *)(unaff_RBP + -0x6fc) = iVar48;
                                *(long *)(unaff_RBP + -0x6f8) = lVar44;
                                *(long *)(unaff_RBP + -0x638) =
                                     (long)pcVar32 - *(long *)(unaff_RBP + -0x460);
                                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9a0c;
                                cVar16 = FUN_00712520();
                                lVar44 = *(long *)(unaff_RBP + -0x6f8);
                                iVar48 = *(int *)(unaff_RBP + -0x6fc);
                                if (cVar16 == '\0') {
                                  *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0
                                  ;
                                }
                                else {
                                  pcVar32 = (char *)(*(long *)(unaff_RBP + -0x638) +
                                                    *(long *)(unaff_RBP + -0x460));
                                  *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
                                  *(long *)(unaff_RBP + -0x468) =
                                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458)
                                  ;
                                  *pcVar32 = cVar18;
                                }
                              }
                            }
                            else {
                              *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
                              *pcVar32 = cVar18;
                            }
                            cVar18 = pcVar47[1];
                            pcVar47 = pcVar47 + 1;
                          } while (cVar18 != '\0');
                          unaff_R15 = *(uint **)(unaff_RBP + -0x6f0);
                        }
                        if (0 < iVar19) {
                          iVar19 = iVar48;
                        }
                        goto LAB_006f8f93;
                      }
                    }
                    *(int *)(unaff_RBP + -0x638) = iVar19;
                    unaff_R14 = *(byte **)(unaff_RBP + -0x648);
                    bVar14 = *(byte *)(unaff_RBP + -0x630);
                    if ((int)unaff_R13 != -1) {
LAB_006fb1ff:
                      unaff_R14 = unaff_R14 + -1;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb20f;
                      FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
                    }
                    goto LAB_006f8fcd;
                  }
                  cVar18 = **(char **)(unaff_RBP + -0x6d8);
LAB_006f91fc:
                  if (cVar18 != '\0') {
                    lVar39 = *(long *)(unaff_RBP + -0x6d8);
                    *(uint **)(unaff_RBP + -0x638) = unaff_R15;
                    lVar44 = unaff_RBP + -0x460;
                    do {
                      pcVar47 = *(char **)(unaff_RBP + -0x470);
                      if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                        if (pcVar47 != (char *)0x0) {
                          *(int *)(unaff_RBP + -0x6f8) = iVar48;
                          *(long *)(unaff_RBP + -0x6f0) = lVar44;
                          *(long *)(unaff_RBP + -0x630) =
                               (long)pcVar47 - *(long *)(unaff_RBP + -0x460);
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9a83;
                          cVar16 = FUN_00712520();
                          lVar44 = *(long *)(unaff_RBP + -0x6f0);
                          iVar48 = *(int *)(unaff_RBP + -0x6f8);
                          if (cVar16 == '\0') {
                            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                          }
                          else {
                            pcVar47 = (char *)(*(long *)(unaff_RBP + -0x630) +
                                              *(long *)(unaff_RBP + -0x460));
                            *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                            *(long *)(unaff_RBP + -0x468) =
                                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                            *pcVar47 = cVar18;
                          }
                        }
                      }
                      else {
                        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                        *pcVar47 = cVar18;
                      }
                      cVar18 = *(char *)(lVar39 + 1);
                      lVar39 = lVar39 + 1;
                    } while (cVar18 != '\0');
                    unaff_R15 = *(uint **)(unaff_RBP + -0x638);
                  }
                }
                else if (**(byte **)(unaff_RBP + -0x6d8) != 0) goto LAB_006f8f03;
                *(undefined1 *)(unaff_RBP + -0x630) = 1;
                if (0 < iVar19) {
                  iVar19 = iVar48;
                }
              }
LAB_006f8f93:
              if (iVar19 == 0) {
LAB_006fb0a8:
                *(int *)(unaff_RBP + -0x638) = iVar19;
                unaff_R14 = *(byte **)(unaff_RBP + -0x648);
                bVar14 = *(byte *)(unaff_RBP + -0x630);
                goto LAB_006f8fcd;
              }
              if ((int)unaff_R13 == -1) {
                *(int *)(unaff_RBP + -0x638) = iVar19;
                unaff_R14 = *(byte **)(unaff_RBP + -0x648);
                bVar14 = *(byte *)(unaff_RBP + -0x630);
                *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
                goto LAB_006f8fcd;
              }
            }
            pbVar41 = *(byte **)(unaff_R15 + 2);
            if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
              unaff_R13 = (ulong)*pbVar41;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f9088;
              uVar21 = FUN_007067b0(unaff_R15);
              unaff_R13 = (ulong)uVar21;
              if (uVar21 == 0xffffffff) goto code_r0x006f9094;
            }
            *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
            pcVar47 = *(char **)(unaff_RBP + -0x470);
            iVar19 = iVar19 - (uint)(0 < iVar19);
            if (pcVar47 == (char *)0x0) break;
          } while( true );
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        goto switchD_006f555e_default;
      }
      if (*(char **)(unaff_RBP + -0x468) == pcVar47) {
        if (pcVar47 != (char *)0x0) {
          lVar44 = *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fcb5f;
          cVar18 = FUN_00712520(unaff_RBP + -0x460);
          if (cVar18 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar47 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            pcVar47[*(long *)(unaff_RBP + -0x460) - lVar44] = cVar15;
          }
        }
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
        *pcVar47 = cVar15;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar45 = *(byte **)(unaff_R15 + 2);
      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
        uVar24 = (ulong)*pbVar45;
        uVar28 = uVar24;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa247;
        uVar24 = FUN_007067b0(unaff_R15);
        if ((int)uVar24 == -1) goto switchD_006f555e_default;
        uVar28 = uVar24 & 0xff;
      }
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar28 * 4) != 0x6e)
      goto switchD_006f555e_default;
      pcVar47 = *(char **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fb843;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar24);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
        *pcVar47 = (char)uVar24;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006f555e_default;
      pbVar45 = *(byte **)(unaff_R15 + 2);
      if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
        uVar24 = (ulong)*pbVar45;
        unaff_R13 = uVar24;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa260;
        uVar21 = FUN_007067b0(unaff_R15);
        unaff_R13 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) goto switchD_006f555e_default;
        uVar24 = (ulong)(uVar21 & 0xff);
      }
      unaff_R14 = pbVar41 + 2;
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar24 * 4) != 0x66)
      goto switchD_006f555e_default;
      pcVar47 = *(char **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6faf47;
        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
        *pcVar47 = (char)unaff_R13;
      }
      if (*(int *)(unaff_RBP + -0x638) != 0) {
        pbVar45 = *(byte **)(unaff_R15 + 2);
        if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
          *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
          uVar24 = (ulong)*pbVar45;
          unaff_R13 = uVar24;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6faee7;
          uVar21 = FUN_007067b0(unaff_R15);
          unaff_R13 = (ulong)uVar21;
          if (uVar21 == 0xffffffff) {
            *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
            goto LAB_006f611e;
          }
          uVar24 = (ulong)(uVar21 & 0xff);
        }
        if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar24 * 4) == 0x69) {
          pcVar47 = *(char **)(unaff_RBP + -0x470);
          *(uint *)(unaff_RBP + -0x638) =
               *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
          if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbe56;
            FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
            *pcVar47 = (char)unaff_R13;
          }
          if (*(int *)(unaff_RBP + -0x638) != 0) {
            pbVar45 = *(byte **)(unaff_R15 + 2);
            if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
              *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
              uVar24 = (ulong)*pbVar45;
              uVar28 = uVar24;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbe31;
              uVar24 = FUN_007067b0(unaff_R15);
              if ((int)uVar24 == -1) goto switchD_006f555e_default;
              uVar28 = uVar24 & 0xff;
            }
            if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar28 * 4) == 0x6e) {
              pcVar47 = *(char **)(unaff_RBP + -0x470);
              *(uint *)(unaff_RBP + -0x638) =
                   *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
              if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbe1c;
                FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar24);
              }
              else {
                *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                *pcVar47 = (char)uVar24;
              }
              if (*(int *)(unaff_RBP + -0x638) != 0) {
                pbVar45 = *(byte **)(unaff_R15 + 2);
                if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
                  *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
                  uVar24 = (ulong)*pbVar45;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbdf4;
                  uVar24 = FUN_007067b0(unaff_R15);
                  if ((int)uVar24 == -1) goto switchD_006f555e_default;
                }
                if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (uVar24 & 0xff) * 4)
                    == 0x69) {
                  pcVar47 = *(char **)(unaff_RBP + -0x470);
                  *(uint *)(unaff_RBP + -0x638) =
                       *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                  if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbddf;
                    FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar24);
                  }
                  else {
                    *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                    *pcVar47 = (char)uVar24;
                  }
                  if (*(int *)(unaff_RBP + -0x638) != 0) {
                    pbVar45 = *(byte **)(unaff_R15 + 2);
                    if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
                      *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
                      uVar24 = (ulong)*pbVar45;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbdb7;
                      uVar24 = FUN_007067b0(unaff_R15);
                      if ((int)uVar24 == -1) goto switchD_006f555e_default;
                    }
                    if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                                (uVar24 & 0xff) * 4) == 0x74) {
                      pcVar47 = *(char **)(unaff_RBP + -0x470);
                      *(uint *)(unaff_RBP + -0x638) =
                           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                      if (pcVar47 == *(char **)(unaff_RBP + -0x468)) {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbda2;
                        FUN_006f4e40(unaff_RBP + -0x470,(int)(char)uVar24);
                      }
                      else {
                        *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                        *pcVar47 = (char)uVar24;
                      }
                      if (*(int *)(unaff_RBP + -0x638) != 0) {
                        pbVar45 = *(byte **)(unaff_R15 + 2);
                        if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
                          *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
                          unaff_R13 = (ulong)*pbVar45;
                        }
                        else {
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbd77;
                          uVar21 = FUN_007067b0(unaff_R15);
                          unaff_R13 = (ulong)uVar21;
                          if (uVar21 == 0xffffffff) goto switchD_006f555e_default;
                        }
                        unaff_R14 = pbVar41 + 7;
                        if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                                    (unaff_R13 & 0xff) * 4) == 0x79) goto LAB_006f8920;
                      }
                    }
                  }
                }
              }
            }
          }
          goto switchD_006f555e_default;
        }
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fac44;
        FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
      }
    }
LAB_006f611e:
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    if (puVar46 != *(undefined1 **)(unaff_RBP + -0x468)) goto LAB_006f6132;
    if (puVar46 != (undefined1 *)0x0) goto LAB_006f9029;
    goto LAB_006fa36e;
  }
LAB_006f6a75:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f6a7f:
  iVar19 = -1;
  if (*(int *)(unaff_RBP + -0x640) != 0) {
    iVar19 = *(int *)(unaff_RBP + -0x640);
  }
  *(int *)(unaff_RBP + -0x640) = iVar19;
  goto switchD_006f555e_default;
code_r0x006f9094:
  *(int *)(unaff_RBP + -0x638) = iVar19;
  unaff_R14 = *(byte **)(unaff_RBP + -0x648);
  bVar14 = *(byte *)(unaff_RBP + -0x630);
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f8fcd:
  puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
  if (puVar46 == (undefined1 *)0x0) {
LAB_006fb8c9:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  if ((*(uint *)(unaff_RBP + -0x63c) & 0x400) != 0) {
    if (*(int *)(unaff_RBP + -0x650) != 0) {
      lVar44 = (long)puVar46 - *(long *)(unaff_RBP + -0x460);
      if (lVar44 == *(long *)(unaff_RBP + -0x620)) goto switchD_006f555e_default;
      goto LAB_006fbebf;
    }
    if (((long)puVar46 - *(long *)(unaff_RBP + -0x460) != *(long *)(unaff_RBP + -0x620)) &&
       ((bVar14 & 1) == 0)) goto LAB_006f9019;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbf0d;
    lVar44 = FUN_007712d0("to_inpunct");
    *(long *)(unaff_RBP + -0x668) = lVar44;
    if (lVar44 == 0) goto LAB_006fc008;
    if ((int)unaff_R13 == -1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    }
    else {
      pbVar41 = *(byte **)(unaff_R15 + 2);
      if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
        unaff_R13 = (ulong)*pbVar41;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc705;
        uVar21 = FUN_007067b0(unaff_R15);
        unaff_R13 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          goto LAB_006fbf45;
        }
      }
      unaff_R14 = unaff_R14 + 1;
    }
LAB_006fbf45:
    uVar23 = *(undefined8 *)(unaff_RBP + -0x668);
    puVar27 = (undefined8 *)(unaff_RBP + -0x5b0);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbf5d;
    uVar22 = FUN_00771360(0x2e,uVar23);
    *(undefined8 *)(unaff_RBP + -0x5b0) = 0;
    *(undefined4 *)(unaff_RBP + -0x564) = uVar22;
    *(bool *)(unaff_RBP + -0x630) =
         *(long *)(unaff_RBP + -0x470) - *(long *)(unaff_RBP + -0x460) ==
         *(long *)(unaff_RBP + -0x620);
    *(long *)(unaff_RBP + -0x648) = unaff_RBP + -0x485;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbfa5;
    lVar44 = FUN_00756c20(unaff_RBP + -0x485,uVar22,puVar27);
    if (lVar44 != -1) {
      uVar23 = *(undefined8 *)(unaff_RBP + -0x6d8);
      *(undefined1 *)(unaff_RBP + -0x485 + lVar44) = 0;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbfc3;
      lVar44 = thunk_FUN_007129d0(uVar23);
      bVar50 = false;
      if (lVar44 + *(long *)(unaff_RBP + -0x620) ==
          *(long *)(unaff_RBP + -0x470) - *(long *)(unaff_RBP + -0x460)) {
        uVar23 = *(undefined8 *)(unaff_RBP + -0x648);
        uVar34 = *(undefined8 *)(unaff_RBP + -0x6d8);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fbff6;
        iVar19 = thunk_FUN_00712780(uVar34,uVar23);
        bVar50 = iVar19 == 0;
      }
      bVar17 = bVar50 | (byte)*(undefined4 *)(unaff_RBP + -0x630);
LAB_006fc004:
      if (bVar17 != 0) {
        lVar44 = 0;
        *(undefined1 *)(unaff_RBP + -0x648) = *(undefined1 *)(unaff_RBP + -0x688);
        *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
        *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
        *(long *)(unaff_RBP + -0x6e8) = unaff_RBP + -0x496;
        do {
          *(int *)(unaff_RBP + -0x6a0) = (int)lVar44;
          *(long *)(unaff_RBP + -0x6f8) = lVar44 * 0x11 + *(long *)(unaff_RBP + -0x630);
          if (lVar44 == 10) {
            uVar23 = *(undefined8 *)(unaff_RBP + -0x668);
            *(undefined8 *)(unaff_RBP + -0x6f0) = 10;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc2a2;
            iVar19 = FUN_00771360(0x2c,uVar23);
            *puVar27 = 0;
            uVar23 = *(undefined8 *)(unaff_RBP + -0x6f8);
            *(int *)(unaff_RBP + -0x568) = iVar19;
            *(byte *)(unaff_RBP + -0x648) = *(byte *)(unaff_RBP + -0x648) & iVar19 != 0;
            uVar22 = *(undefined4 *)(*(long *)(unaff_RBP + -0x650) + 0x28);
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc2d3;
            lVar39 = FUN_00756c20(uVar23,uVar22,puVar27);
            lVar44 = *(long *)(unaff_RBP + -0x6f0);
            if (lVar39 != -1) goto LAB_006fc0e7;
            if (*(char *)(unaff_RBP + -0x648) != '\0') {
              uVar23 = *(undefined8 *)(unaff_RBP + -0x680);
              *(long *)(unaff_RBP + -0x6a0) = lVar44;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc304;
              uVar24 = thunk_FUN_007129d0(uVar23);
              lVar44 = *(long *)(unaff_RBP + -0x6a0);
              if (uVar24 < 0x11) {
                puVar46 = *(undefined1 **)(unaff_RBP + -0x680);
                puVar35 = *(undefined1 **)(unaff_RBP + -0x6e8);
                for (uVar24 = (ulong)((int)uVar24 + 1); uVar24 != 0; uVar24 = uVar24 - 1) {
                  *puVar35 = *puVar46;
                  puVar46 = puVar46 + (ulong)bVar51 * -2 + 1;
                  puVar35 = puVar35 + (ulong)bVar51 * -2 + 1;
                }
              }
              else {
                *(undefined1 *)(unaff_RBP + -0x648) = 0;
              }
            }
          }
          else {
            uVar23 = *(undefined8 *)(unaff_RBP + -0x668);
            *(long *)(unaff_RBP + -0x6f0) = lVar44;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc0ac;
            uVar22 = FUN_00771360((int)lVar44 + 0x30,uVar23);
            *puVar27 = 0;
            uVar23 = *(undefined8 *)(unaff_RBP + -0x6f8);
            *(undefined4 *)(*(long *)(unaff_RBP + -0x650) + *(long *)(unaff_RBP + -0x6f0) * 4) =
                 uVar22;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc0d6;
            lVar39 = FUN_00756c20(uVar23,uVar22,puVar27);
            lVar44 = *(long *)(unaff_RBP + -0x6f0);
            if (lVar39 == -1) goto LAB_006fc008;
LAB_006fc0e7:
            *(undefined1 *)(lVar39 + (long)*(int *)(unaff_RBP + -0x6a0) * 0x11 + -0x540 + unaff_RBP)
                 = 0;
          }
          lVar44 = lVar44 + 1;
        } while (lVar44 != 0xb);
        *(int *)(unaff_RBP + -0x6f0) = (int)*(char *)(unaff_RBP + -0x610);
LAB_006fc11d:
        pcVar47 = *(char **)(unaff_RBP + -0x470);
        if (pcVar47 != (char *)0x0) {
          if (*(char *)(unaff_RBP + -0x660) == '\0') {
            if ((*(ulong *)(unaff_RBP + -0x620) <
                 (ulong)((long)pcVar47 - *(long *)(unaff_RBP + -0x460))) &&
               (*(char *)(unaff_RBP + -0x610) ==
                *(char *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (unaff_R13 & 0xff) * 4))
               ) {
              if (*(char **)(unaff_RBP + -0x468) == pcVar47) {
                uVar22 = *(undefined4 *)(unaff_RBP + -0x6f0);
                bVar14 = 1;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc686;
                FUN_006f4e40(unaff_RBP + -0x470,uVar22);
                *(undefined1 *)(unaff_RBP + -0x660) = 1;
              }
              else {
                *(undefined1 *)(unaff_RBP + -0x660) = 1;
                bVar14 = 1;
                *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
                *pcVar47 = *(char *)(unaff_RBP + -0x610);
              }
              goto LAB_006fc3c9;
            }
LAB_006fc14a:
            pbVar41 = *(byte **)(unaff_RBP + -0x630);
            *(byte *)(unaff_RBP + -0x668) = bVar14;
            iVar19 = 0x7fffffff;
            if (0 < *(int *)(unaff_RBP + -0x638)) {
              iVar19 = *(int *)(unaff_RBP + -0x638);
            }
            *(undefined4 *)(unaff_RBP + -0x648) = 0;
            *(int *)(unaff_RBP + -0x6a0) = iVar19;
            do {
              *(byte **)(unaff_RBP + -0x650) = pbVar41;
              iVar19 = *(int *)(unaff_RBP + -0x6a0);
              *(long *)(unaff_RBP + -0x6e8) = (long)unaff_R14 - (long)pbVar41;
              while (unaff_R14 = pbVar41 + *(long *)(unaff_RBP + -0x6e8),
                    (uint)*pbVar41 == (uint)unaff_R13) {
                pbVar41 = pbVar41 + 1;
                if (*pbVar41 == 0) {
                  iVar48 = *(int *)(unaff_RBP + -0x648);
                  bVar14 = *(byte *)(unaff_RBP + -0x668);
                  goto LAB_006fc38b;
                }
                if (iVar19 == 0) {
                  pbVar45 = *(byte **)(unaff_RBP + -0x650);
                  if (pbVar45 < pbVar41) goto LAB_006fc426;
                  goto LAB_006fc225;
                }
                pbVar45 = *(byte **)(unaff_R15 + 2);
                if (pbVar45 < *(byte **)(unaff_R15 + 4)) {
                  *(byte **)(unaff_R15 + 2) = pbVar45 + 1;
                  unaff_R13 = (ulong)*pbVar45;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc1f0;
                  uVar21 = FUN_007067b0(unaff_R15);
                  unaff_R13 = (ulong)uVar21;
                  if (uVar21 == 0xffffffff) {
                    pbVar45 = *(byte **)(unaff_RBP + -0x650);
                    *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    goto LAB_006fc212;
                  }
                }
                iVar19 = iVar19 + -1;
              }
              pbVar45 = *(byte **)(unaff_RBP + -0x650);
LAB_006fc212:
              if (*pbVar41 == 0) goto LAB_006fc374;
              if (pbVar45 < pbVar41) {
                pbVar40 = pbVar41;
                if ((int)unaff_R13 != -1) {
LAB_006fc426:
                  *(uint **)(unaff_RBP + -0x650) = unaff_R15;
                  unaff_R14 = unaff_R14 + -1;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc43d;
                  FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
                  unaff_R15 = *(uint **)(unaff_RBP + -0x650);
                  pbVar40 = pbVar41;
                }
                while (pbVar41 = pbVar41 + -1, pbVar45 != pbVar41) {
                  bVar14 = *pbVar41;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc354;
                  FUN_007075f0(unaff_R15,bVar14);
                }
                unaff_R13 = (ulong)*pbVar45;
                unaff_R14 = pbVar45 + (long)(unaff_R14 + (1 - (long)pbVar40));
              }
LAB_006fc225:
              *(int *)(unaff_RBP + -0x648) = *(int *)(unaff_RBP + -0x648) + 1;
              pbVar41 = pbVar45 + 0x11;
            } while (*(int *)(unaff_RBP + -0x648) != 0xc);
            goto LAB_006fc245;
          }
          if ((pcVar47[-1] != *(char *)(unaff_RBP + -0x610)) ||
             (((int)unaff_R13 - 0x2bU & 0xfffffffd) != 0)) goto LAB_006fc14a;
          if (*(char **)(unaff_RBP + -0x468) == pcVar47) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc669;
            FUN_006f4e40(unaff_RBP + -0x470,(int)(char)unaff_R13);
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar47 + 1;
            *pcVar47 = (char)unaff_R13;
          }
          goto LAB_006fc3c9;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        goto switchD_006f555e_default;
      }
      goto LAB_006fc008;
    }
    uVar23 = *(undefined8 *)(unaff_RBP + -0x6d8);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc6b4;
    uVar24 = thunk_FUN_007129d0(uVar23);
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    if (uVar24 < 0x11) {
      lVar44 = *(long *)(unaff_RBP + -0x620);
      lVar39 = *(long *)(unaff_RBP + -0x460);
      puVar35 = *(undefined1 **)(unaff_RBP + -0x6d8);
      puVar43 = *(undefined1 **)(unaff_RBP + -0x648);
      for (uVar28 = (ulong)((int)uVar24 + 1); uVar28 != 0; uVar28 = uVar28 - 1) {
        *puVar43 = *puVar35;
        puVar35 = puVar35 + (ulong)bVar51 * -2 + 1;
        puVar43 = puVar43 + (ulong)bVar51 * -2 + 1;
      }
      bVar17 = (long)puVar46 - lVar39 == lVar44 + uVar24 | (byte)*(undefined4 *)(unaff_RBP + -0x630)
      ;
      goto LAB_006fc004;
    }
    goto LAB_006fc00f;
  }
  lVar44 = (long)puVar46 - *(long *)(unaff_RBP + -0x460);
  if (lVar44 == *(long *)(unaff_RBP + -0x620)) goto switchD_006f555e_default;
  if (*(int *)(unaff_RBP + -0x650) != 0) {
LAB_006fbebf:
    if ((char)(*(char *)(unaff_RBP + -0x668) + '\x02') == lVar44) goto switchD_006f555e_default;
  }
LAB_006f9019:
  if (*(undefined1 **)(unaff_RBP + -0x468) == puVar46) {
LAB_006f9029:
    lVar44 = *(long *)(unaff_RBP + -0x460);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f903f;
    cVar15 = FUN_00712520(unaff_RBP + -0x460);
    if (cVar15 == '\0') {
      *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
      goto LAB_006fa36e;
    }
    *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + (*(long *)(unaff_RBP + -0x460) - lVar44) + 1;
    *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
    puVar46[*(long *)(unaff_RBP + -0x460) - lVar44] = 0;
  }
  else {
LAB_006f6132:
    *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
    *puVar46 = 0;
  }
  if (*(long *)(unaff_RBP + -0x470) == 0) {
LAB_006fa36e:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  uVar21 = *(uint *)(unaff_RBP + -0x63c);
  uVar23 = *(undefined8 *)(unaff_RBP + -0x460);
  uVar20 = uVar21 & 8;
  if ((uVar21 & 2) == 0) {
LAB_006f92a3:
    if ((*(byte *)(unaff_RBP + -0x63c) & 3) == 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa390;
      uVar22 = FUN_00791dc0(uVar23,unaff_RBP + -0x5e8);
      Var7 = in_ST0;
      Var8 = in_ST1;
      Var9 = in_ST2;
      Var10 = in_ST3;
      Var11 = in_ST4;
      Var12 = in_ST5;
      Var13 = in_ST6;
      if (uVar20 == 0) {
        lVar44 = *(long *)(unaff_RBP + -0x5e8);
        if (lVar44 == *(long *)(unaff_RBP + -0x460)) goto switchD_006f555e_default;
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          puVar33 = (undefined4 *)*puVar27;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar34 = *puVar27;
          uVar4 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
          uVar23 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
          *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar39 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar20 = uVar21;
LAB_006fbc64:
            if (uVar20 < 0x30) goto code_r0x006fbc69;
            lVar29 = lVar39 + 8;
            if (iVar19 != 1) {
              lVar42 = lVar39 + 0x10;
              do {
                lVar29 = lVar42;
                lVar42 = lVar29 + 8;
              } while (lVar29 + 8 != lVar39 + 0x18 + (ulong)(iVar19 - 2) * 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar29;
            if (bVar50) {
LAB_006fbc99:
              uVar21 = uVar20;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
          }
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          puVar33 = (undefined4 *)*puVar27;
        }
        lVar39 = *(long *)(unaff_RBP + -0x460);
        *puVar33 = uVar22;
        goto LAB_006f61f0;
      }
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f92bc;
      uVar23 = FUN_00791e00();
      Var7 = in_ST0;
      Var8 = in_ST1;
      Var9 = in_ST2;
      Var10 = in_ST3;
      Var11 = in_ST4;
      Var12 = in_ST5;
      Var13 = in_ST6;
      if (uVar20 == 0) {
        lVar44 = *(long *)(unaff_RBP + -0x5e8);
        if (lVar44 == *(long *)(unaff_RBP + -0x460)) goto switchD_006f555e_default;
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar21 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
          }
          puVar27 = (undefined8 *)*puVar27;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar4 = *puVar27;
          uVar5 = puVar27[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
          uVar34 = puVar27[2];
          *(undefined8 *)(unaff_RBP + -0x610) = uVar4;
          *(undefined8 *)(unaff_RBP + -0x608) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
          uVar21 = *(uint *)(unaff_RBP + -0x540);
          iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar19 != 0) {
            lVar39 = *(long *)(unaff_RBP + -0x538);
            bVar50 = false;
            uVar20 = uVar21;
LAB_006fbafe:
            if (uVar20 < 0x30) goto code_r0x006fbb03;
            lVar29 = lVar39 + 8;
            if (iVar19 != 1) {
              lVar42 = lVar39 + 0x10;
              do {
                lVar29 = lVar42;
                lVar42 = lVar29 + 8;
              } while (lVar29 + 8 != lVar39 + 0x18 + (ulong)(iVar19 - 2) * 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar29;
            if (bVar50) {
LAB_006fbb2c:
              uVar21 = uVar20;
              *(uint *)(unaff_RBP + -0x540) = uVar21;
            }
          }
          if (uVar21 < 0x30) {
            puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
          }
          else {
            puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
          }
          puVar27 = (undefined8 *)*puVar27;
        }
        lVar39 = *(long *)(unaff_RBP + -0x460);
        *puVar27 = uVar23;
LAB_006f61f0:
        if (lVar44 == lVar39) goto switchD_006f555e_default;
        *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
        *(undefined4 *)(unaff_RBP + -0x610) = 0;
        goto LAB_006f510e;
      }
    }
  }
  else if (*(int *)(unaff_RBP + -0x6dc) == 0) {
    if (*(int *)(unaff_RBP + -0x6e0) == 0) goto LAB_006f92a3;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f6198;
    FUN_00791e40(uVar23,unaff_RBP + -0x5e8);
    Var7 = in_ST1;
    Var8 = in_ST2;
    Var9 = in_ST3;
    Var10 = in_ST4;
    Var11 = in_ST5;
    Var12 = in_ST6;
    Var13 = in_ST7;
    if (uVar20 == 0) {
      lVar39 = *(long *)(unaff_RBP + -0x460);
      lVar44 = *(long *)(unaff_RBP + -0x5e8);
      if (lVar44 == lVar39) goto switchD_006f555e_default;
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar21 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar27 + 1;
        }
        pVar26 = (unkbyte10 *)*puVar27;
      }
      else {
        puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar34 = *puVar27;
        uVar4 = puVar27[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar4;
        uVar23 = puVar27[2];
        *(undefined8 *)(unaff_RBP + -0x610) = uVar34;
        *(undefined8 *)(unaff_RBP + -0x608) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar23;
        uVar21 = *(uint *)(unaff_RBP + -0x540);
        iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar19 != 0) {
          lVar29 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar20 = uVar21;
LAB_006fc8e1:
          if (uVar20 < 0x30) goto code_r0x006fc8e6;
          lVar42 = lVar29 + 8;
          if (iVar19 != 1) {
            lVar6 = lVar29 + 0x10;
            do {
              lVar42 = lVar6;
              lVar6 = lVar42 + 8;
            } while (lVar42 + 8 != lVar29 + 0x18 + (ulong)(iVar19 - 2) * 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar42;
          if (bVar50) {
LAB_006fc90f:
            uVar21 = uVar20;
            *(uint *)(unaff_RBP + -0x540) = uVar21;
          }
        }
        if (uVar21 < 0x30) {
          puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
        }
        else {
          puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
        }
        pVar26 = (unkbyte10 *)*puVar27;
      }
      *pVar26 = in_ST0;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      goto LAB_006f61f0;
    }
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fa968;
    uVar23 = FUN_007920d0(uVar23,unaff_RBP + -0x5e8,uVar21 & 0x80);
    Var7 = in_ST0;
    Var8 = in_ST1;
    Var9 = in_ST2;
    Var10 = in_ST3;
    Var11 = in_ST4;
    Var12 = in_ST5;
    Var13 = in_ST6;
    if (uVar20 == 0) {
      lVar44 = *(long *)(unaff_RBP + -0x5e8);
      if (lVar44 == *(long *)(unaff_RBP + -0x460)) goto switchD_006f555e_default;
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar21 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar21 < 0x30) {
          plVar36 = (long *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
        }
        else {
          plVar36 = *(long **)(unaff_RBP + -0x5a0);
          *(long **)(unaff_RBP + -0x5a0) = plVar36 + 1;
        }
        puVar27 = (undefined8 *)*plVar36;
      }
      else {
        puVar27 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar4 = *puVar27;
        uVar5 = puVar27[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar5;
        uVar34 = puVar27[2];
        *(undefined8 *)(unaff_RBP + -0x610) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x608) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar34;
        uVar21 = *(uint *)(unaff_RBP + -0x540);
        iVar19 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar19 != 0) {
          lVar39 = *(long *)(unaff_RBP + -0x538);
          bVar50 = false;
          uVar20 = uVar21;
LAB_006fba25:
          if (uVar20 < 0x30) goto code_r0x006fba2a;
          lVar29 = lVar39 + 8;
          if (iVar19 != 1) {
            lVar42 = lVar39 + 0x10;
            do {
              lVar29 = lVar42;
              lVar42 = lVar29 + 8;
            } while (lVar29 + 8 != lVar39 + 0x18 + (ulong)(iVar19 - 2) * 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar29;
          if (!bVar50) goto LAB_006fba40;
LAB_006fba38:
          uVar21 = uVar20;
          *(uint *)(unaff_RBP + -0x540) = uVar21;
        }
LAB_006fba40:
        if (uVar21 < 0x30) {
          plVar36 = (long *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
        }
        else {
          plVar36 = *(long **)(unaff_RBP + -0x538);
          *(long **)(unaff_RBP + -0x538) = plVar36 + 1;
        }
        puVar27 = (undefined8 *)*plVar36;
      }
      lVar39 = *(long *)(unaff_RBP + -0x460);
      *puVar27 = uVar23;
      puVar27[1] = extraout_XMM0_Qb;
      goto LAB_006f61f0;
    }
  }
  in_ST6 = Var13;
  in_ST5 = Var12;
  in_ST4 = Var11;
  in_ST3 = Var10;
  in_ST2 = Var9;
  in_ST1 = Var8;
  in_ST0 = Var7;
  if (*(long *)(unaff_RBP + -0x460) == *(long *)(unaff_RBP + -0x5e8)) goto switchD_006f555e_default;
LAB_006f6de8:
  *(undefined4 *)(unaff_RBP + -0x610) = 0;
LAB_006f510e:
  bVar14 = **(byte **)(unaff_RBP + -0x618);
  if (bVar14 == 0) {
    uVar24 = unaff_R13 & 0xffffffff;
    if (*(int *)(unaff_RBP + -0x610) != 0) {
      lVar44 = *(long *)(unaff_RBP + -0x658);
      uVar22 = *(undefined4 *)(unaff_RBP + -0x600);
      do {
        if ((int)uVar24 == -1) {
          lVar39 = -2;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar22;
        }
        else {
          pbVar41 = *(byte **)(unaff_R15 + 2);
          if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
            uVar24 = (ulong)*pbVar41;
            lVar39 = uVar24 * 2;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f76e8;
            uVar21 = FUN_007067b0(unaff_R15);
            uVar24 = (ulong)uVar21;
            if (uVar21 == 0xffffffff) {
              lVar39 = -2;
              uVar22 = *(undefined4 *)(in_FS_OFFSET + -0x58);
            }
            else {
              lVar39 = (long)(int)uVar21 * 2;
            }
          }
        }
      } while ((*(ushort *)(*(long *)(lVar44 + 0x68) + lVar39) & 0x2000) != 0);
      if ((int)uVar24 != -1) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7c46;
        FUN_007075f0(unaff_R15,uVar24 & 0xff);
      }
    }
    goto switchD_006f555e_default;
  }
  if ((bVar14 & 0x80) == 0) {
    lVar44 = *(long *)(unaff_RBP + -0x618);
    pbVar45 = (byte *)(lVar44 + 1);
    if (bVar14 == 0x25) goto LAB_006f51d0;
LAB_006f50a0:
    if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 + (ulong)bVar14 * 2) & 0x20)
        == 0) {
      if ((int)unaff_R13 == -1) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f56a3:
        iVar19 = -1;
        if (*(int *)(unaff_RBP + -0x640) != 0) {
          iVar19 = *(int *)(unaff_RBP + -0x640);
        }
        *(int *)(unaff_RBP + -0x640) = iVar19;
        goto switchD_006f555e_default;
      }
      pbVar41 = *(byte **)(unaff_R15 + 2);
      if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
        unaff_R13 = (ulong)*pbVar41;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f57e0;
        uVar21 = FUN_007067b0(unaff_R15);
        unaff_R13 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) goto LAB_006f56a3;
      }
      unaff_R14 = unaff_R14 + 1;
      if (*(int *)(unaff_RBP + -0x610) != 0) {
        lVar44 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x68);
        bVar17 = *(byte *)(lVar44 + 1 + (long)(int)unaff_R13 * 2);
        while ((bVar17 & 0x20) != 0) {
          pbVar41 = *(byte **)(unaff_R15 + 2);
          if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
            *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
            unaff_R13 = (ulong)*pbVar41;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5780;
            uVar21 = FUN_007067b0(unaff_R15);
            unaff_R13 = (ulong)uVar21;
            if (uVar21 == 0xffffffff) {
              iVar19 = -1;
              if (*(int *)(unaff_RBP + -0x640) != 0) {
                iVar19 = *(int *)(unaff_RBP + -0x640);
              }
              *(int *)(unaff_RBP + -0x640) = iVar19;
              goto switchD_006f555e_default;
            }
            lVar44 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x68);
          }
          unaff_R14 = unaff_R14 + 1;
          bVar17 = *(byte *)(lVar44 + 1 + (long)(int)unaff_R13 * 2);
        }
      }
      if ((uint)bVar14 != (uint)unaff_R13) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5e64;
        FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
        goto switchD_006f555e_default;
      }
      *(byte **)(unaff_RBP + -0x618) = pbVar45;
      *(undefined4 *)(unaff_RBP + -0x610) = 0;
    }
    else {
      *(byte **)(unaff_RBP + -0x618) = pbVar45;
      *(undefined4 *)(unaff_RBP + -0x610) = 1;
    }
    goto LAB_006f510e;
  }
  pbVar41 = *(byte **)(unaff_RBP + -0x618);
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f519f;
  uVar23 = thunk_FUN_007129d0(pbVar41);
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f51b1;
  iVar19 = FUN_007569c0(pbVar41,uVar23,unaff_RBP + -0x5b8);
  if (0 < iVar19) {
    pbVar45 = *(byte **)(unaff_RBP + -0x618);
    pbVar41 = pbVar45 + (ulong)(iVar19 - 1) + 1;
    pbVar40 = pbVar45;
    do {
      if ((int)unaff_R13 == -1) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f57bd:
        iVar19 = -1;
        if (*(int *)(unaff_RBP + -0x640) != 0) {
          iVar19 = *(int *)(unaff_RBP + -0x640);
        }
        *(int *)(unaff_RBP + -0x640) = iVar19;
        goto switchD_006f555e_default;
      }
      pbVar25 = *(byte **)(unaff_R15 + 2);
      if (pbVar25 < *(byte **)(unaff_R15 + 4)) {
        *(byte **)(unaff_R15 + 2) = pbVar25 + 1;
        unaff_R13 = (ulong)*pbVar25;
      }
      else {
        *(byte **)(unaff_RBP + -0x618) = pbVar41;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f5d28;
        uVar21 = FUN_007067b0(unaff_R15);
        pbVar41 = *(byte **)(unaff_RBP + -0x618);
        unaff_R13 = (ulong)uVar21;
        if (uVar21 == 0xffffffff) goto LAB_006f57bd;
      }
      pbVar25 = pbVar40 + (long)(unaff_R14 + (1 - (long)pbVar45));
      bVar14 = *pbVar40;
      pbVar40 = pbVar40 + 1;
      if ((uint)bVar14 != (uint)unaff_R13) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f7e4c;
        FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
        goto switchD_006f555e_default;
      }
    } while (pbVar40 != pbVar41);
    *(byte **)(unaff_RBP + -0x618) = pbVar40;
    unaff_R14 = pbVar25;
    goto LAB_006f510e;
  }
  lVar44 = *(long *)(unaff_RBP + -0x618);
  bVar14 = *pbVar41;
  pbVar45 = (byte *)(lVar44 + 1);
  if (bVar14 != 0x25) goto LAB_006f50a0;
LAB_006f51d0:
  uVar21 = (uint)*(byte *)(lVar44 + 1);
  uVar20 = uVar21 - 0x30;
  *(undefined8 *)(unaff_RBP + -0x470) = *(undefined8 *)(unaff_RBP + -0x460);
  *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
  if (uVar20 < 10) {
    bVar14 = *(byte *)(lVar44 + 2);
    *(uint *)(unaff_RBP + -0x638) = uVar20;
    pbVar41 = (byte *)(lVar44 + 2);
    uVar21 = (uint)bVar14;
    uVar38 = uVar21 - 0x30;
    if (uVar38 < 10) {
      do {
        pbVar45 = pbVar41 + 1;
        uVar21 = (uint)pbVar41[1];
        uVar37 = uVar21 - 0x30;
        if ((int)uVar20 < 0) {
          *(uint *)(unaff_RBP + -0x638) = uVar20;
          pbVar40 = pbVar45;
          pbVar45 = pbVar41;
          while (pbVar41 = pbVar40, uVar37 < 10) {
            uVar21 = (uint)pbVar41[1];
            pbVar40 = pbVar41 + 1;
            pbVar45 = pbVar41;
            uVar37 = uVar21 - 0x30;
          }
          goto LAB_006f5285;
        }
        if (((int)uVar20 < 0xccccccd) && ((int)(uVar20 * 10) <= (int)(0x7fffffff - uVar38))) {
          uVar20 = uVar20 * 10 + uVar38;
          pbVar45 = pbVar41;
          goto LAB_006f526a;
        }
        if (9 < uVar37) {
          if (pbVar41[1] != 0x24) {
            *(undefined4 *)(unaff_RBP + -0x63c) = 0;
            *(undefined4 *)(unaff_RBP + -0x68c) = 0;
            *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
            goto LAB_006f53b7;
          }
          *(undefined4 *)(unaff_RBP + -0x68c) = 0xffffffff;
          goto LAB_006f5803;
        }
        uVar20 = 0xffffffff;
LAB_006f526a:
        pbVar41 = pbVar45 + 1;
        uVar21 = (uint)pbVar45[1];
        uVar38 = uVar21 - 0x30;
      } while (uVar38 < 10);
      *(uint *)(unaff_RBP + -0x638) = uVar20;
    }
LAB_006f5285:
    *(undefined4 *)(unaff_RBP + -0x63c) = 0;
    *(undefined4 *)(unaff_RBP + -0x68c) = 0;
    if ((char)uVar21 != '$') goto LAB_006f52a2;
    *(undefined4 *)(unaff_RBP + -0x68c) = *(undefined4 *)(unaff_RBP + -0x638);
    pbVar41 = pbVar45;
LAB_006f5803:
    uVar21 = (uint)pbVar41[2];
    pbVar45 = pbVar41 + 2;
  }
  else {
    *(undefined4 *)(unaff_RBP + -0x68c) = 0;
  }
  *(undefined4 *)(unaff_RBP + -0x63c) = 0;
  if (((byte)(uVar21 - 0x27) < 0x23) &&
     ((0xfffffffbfffffff6U >> ((ulong)(uVar21 - 0x27) & 0x3f) & 1) == 0)) {
    uVar38 = 0;
    uVar20 = 0;
    if (*(long *)(unaff_RBP + -0x680) == 0) {
      pbVar45 = pbVar45 + 1;
      if ((char)uVar21 == '*') goto LAB_006f540e;
      do {
        uVar20 = uVar38;
        if ((char)uVar21 == 'I') {
          uVar20 = uVar38 | 0x400;
        }
        while( true ) {
          bVar14 = *pbVar45;
          uVar21 = (uint)bVar14;
          if ((0x22 < (byte)(bVar14 - 0x27)) ||
             ((0xfffffffbfffffff6U >> ((ulong)(bVar14 - 0x27) & 0x3f) & 1) != 0)) goto LAB_006f5398;
          pbVar45 = pbVar45 + 1;
          uVar38 = uVar20;
          if (bVar14 != 0x2a) break;
LAB_006f540e:
          uVar20 = uVar20 | 8;
        }
      } while( true );
    }
    do {
      pbVar45 = pbVar45 + 1;
      cVar15 = (char)uVar21;
      if (cVar15 == '*') {
        uVar20 = uVar38 | 8;
      }
      else if (cVar15 == 'I') {
        uVar20 = uVar38 | 0x400;
      }
      else {
        uVar20 = uVar38;
        if (cVar15 == '\'') {
          uVar20 = uVar38 | 0x80;
        }
      }
      uVar21 = (uint)*pbVar45;
      uVar37 = *pbVar45 - 0x27;
    } while (((byte)uVar37 < 0x23) &&
            (uVar38 = uVar20, (0xfffffffbfffffff6U >> ((ulong)uVar37 & 0x3f) & 1) == 0));
LAB_006f5398:
    *(uint *)(unaff_RBP + -0x63c) = uVar20;
  }
  *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
  uVar20 = uVar21 - 0x30;
  if (9 < uVar20) goto LAB_006f53b7;
  *(uint *)(unaff_RBP + -0x638) = uVar20;
  pbVar41 = pbVar45 + 1;
  uVar21 = (uint)pbVar45[1];
  uVar38 = uVar21 - 0x30;
  if (uVar38 < 10) {
    do {
      pbVar45 = pbVar41 + 1;
      uVar21 = (uint)pbVar41[1];
      uVar37 = uVar21 - 0x30;
      if ((int)uVar20 < 0) {
        *(uint *)(unaff_RBP + -0x638) = uVar20;
        if (uVar37 < 10) {
          uVar24 = FUN_00404bad();
          return uVar24;
        }
        goto LAB_006f53b7;
      }
      if ((int)uVar20 < 0xccccccd) {
        if ((int)(0x7fffffff - uVar38) < (int)(uVar20 * 10)) {
          if (uVar37 < 10) goto LAB_006f5d79;
          *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
          goto LAB_006f53b7;
        }
        uVar20 = uVar20 * 10 + uVar38;
      }
      else {
        if (9 < uVar37) {
          *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
          goto LAB_006f53b7;
        }
LAB_006f5d79:
        uVar20 = 0xffffffff;
        pbVar41 = pbVar45;
      }
      pbVar45 = pbVar41 + 1;
      pbVar41 = pbVar41 + 1;
      uVar21 = (uint)*pbVar45;
      uVar38 = uVar21 - 0x30;
    } while (uVar38 < 10);
    *(uint *)(unaff_RBP + -0x638) = uVar20;
  }
LAB_006f52a2:
  pbVar45 = pbVar41;
  if (*(int *)(unaff_RBP + -0x638) == 0) {
    *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
  }
  goto LAB_006f53b7;
LAB_006fc374:
  iVar48 = *(int *)(unaff_RBP + -0x648);
  bVar14 = *(byte *)(unaff_RBP + -0x668);
LAB_006fc38b:
  if (*(int *)(unaff_RBP + -0x638) < 1) {
    iVar19 = *(int *)(unaff_RBP + -0x638);
  }
  *(int *)(unaff_RBP + -0x638) = iVar19;
  if (iVar48 < 10) {
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    if (puVar46 == *(undefined1 **)(unaff_RBP + -0x468)) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc4b7;
      FUN_006f4e40(unaff_RBP + -0x470,iVar48 + 0x30U & 0xff);
    }
    else {
      *(undefined1 **)(unaff_RBP + -0x470) = puVar46 + 1;
      *puVar46 = (char)(iVar48 + 0x30U);
    }
  }
  else if ((iVar48 == 0xb) && ((bVar14 & 1) == 0)) {
    for (pcVar47 = *(char **)(unaff_RBP + -0x6d8); cVar15 = *pcVar47, cVar15 != '\0';
        pcVar47 = pcVar47 + 1) {
      pcVar32 = *(char **)(unaff_RBP + -0x470);
      if (pcVar32 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc595;
        FUN_006f4e40(unaff_RBP + -0x470,(int)cVar15);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
        *pcVar32 = cVar15;
      }
    }
    bVar14 = 1;
  }
  else {
    if (((*(byte *)(unaff_RBP + -0x688) & (bVar14 ^ 1)) == 0) || (iVar48 != 10)) {
LAB_006fc245:
      if ((int)unaff_R13 == -1) goto LAB_006fc008;
      unaff_R14 = unaff_R14 + -1;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc25f;
      FUN_007075f0(unaff_R15,unaff_R13 & 0xff);
      puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
      goto LAB_006fc00f;
    }
    *(uint **)(unaff_RBP + -0x648) = unaff_R15;
    for (pcVar47 = *(char **)(unaff_RBP + -0x680); cVar15 = *pcVar47, cVar15 != '\0';
        pcVar47 = pcVar47 + 1) {
      pcVar32 = *(char **)(unaff_RBP + -0x470);
      if (pcVar32 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc588;
        FUN_006f4e40(unaff_RBP + -0x470,(int)cVar15);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar32 + 1;
        *pcVar32 = cVar15;
      }
    }
    unaff_R15 = *(uint **)(unaff_RBP + -0x648);
    bVar14 = 0;
  }
LAB_006fc3c9:
  if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006fc008;
  if ((int)unaff_R13 == -1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
    goto LAB_006fc00f;
  }
  pbVar41 = *(byte **)(unaff_R15 + 2);
  if (pbVar41 < *(byte **)(unaff_R15 + 4)) {
    *(byte **)(unaff_R15 + 2) = pbVar41 + 1;
    unaff_R13 = (ulong)*pbVar41;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6fc46d;
    uVar21 = FUN_007067b0(unaff_R15);
    unaff_R13 = (ulong)uVar21;
    if (uVar21 == 0xffffffff) goto code_r0x006fc475;
  }
  unaff_R14 = unaff_R14 + 1;
  if (0 < *(int *)(unaff_RBP + -0x638)) {
    *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
  }
  goto LAB_006fc11d;
code_r0x006fc475:
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006fc008:
  puVar46 = *(undefined1 **)(unaff_RBP + -0x470);
LAB_006fc00f:
  if (puVar46 == (undefined1 *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006f555e_default;
  }
  if ((long)puVar46 - *(long *)(unaff_RBP + -0x460) == *(long *)(unaff_RBP + -0x620))
  goto switchD_006f555e_default;
  goto LAB_006f9019;
code_r0x006fba2a:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fba38;
  goto LAB_006fba25;
code_r0x006fc8e6:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fc90f;
  goto LAB_006fc8e1;
code_r0x006fbc69:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fbc99;
  goto LAB_006fbc64;
code_r0x006fbb03:
  uVar20 = uVar20 + 8;
  bVar50 = true;
  iVar19 = iVar19 + -1;
  if (iVar19 == 0) goto LAB_006fbb2c;
  goto LAB_006fbafe;
  while( true ) {
    uVar20 = uVar20 + 8;
    bVar50 = true;
    iVar19 = iVar19 + -1;
    if (iVar19 == 0) break;
LAB_006fa12a:
    if (0x2f < uVar20) {
      if (iVar19 != 1) {
        lVar39 = lVar44 + 0x10;
        do {
          lVar29 = lVar39;
          lVar39 = lVar29 + 8;
        } while (lVar44 + 0x18 + (ulong)(iVar19 - 2) * 8 != lVar39);
        uVar24 = FUN_006fa14d(lVar29);
        return uVar24;
      }
      *(long *)(unaff_RBP + -0x538) = lVar44 + 8;
      if (!bVar50) goto LAB_006fa161;
      break;
    }
  }
  uVar21 = uVar20;
  *(uint *)(unaff_RBP + -0x540) = uVar21;
LAB_006fa161:
  if (uVar21 < 0x30) {
    puVar27 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
  }
  else {
    puVar27 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar27 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x670) = *puVar27;
  uVar24 = FUN_006f7f81();
  return uVar24;
}

