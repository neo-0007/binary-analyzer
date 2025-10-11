
ulong FUN_006cae60(byte *param_1,byte *param_2,long param_3,ulong param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *local_240;
  ulong local_238 [65];
  
  local_238[0] = param_4;
  if (param_2 <= param_1) {
    return param_4;
  }
  iVar11 = 1;
LAB_006caea0:
  bVar8 = *param_1;
  pbVar12 = param_1 + 1;
  if (bVar8 < 0x18) {
    if (bVar8 < 3) {
                    /* WARNING: Subroutine does not return */
      switchD_006caed7::caseD_4();
    }
    switch(bVar8) {
    case 3:
    case 0xe:
    case 0xf:
      pbVar12 = param_1 + 9;
      puVar13 = *(uint **)(param_1 + 1);
      break;
    default:
      goto code_r0x00404679;
    case 6:
switchD_006caed7_caseD_6:
      if (iVar11 == 0) goto LAB_0040467e;
      iVar11 = iVar11 + -1;
      puVar13 = (uint *)local_238[iVar11];
      if (bVar8 < 0x24) {
        if (bVar8 < 6) goto code_r0x00404679;
        switch(bVar8) {
        case 6:
          goto switchD_006cb102_caseD_6;
        default:
          goto code_r0x00404679;
        case 0x19:
          if ((long)puVar13 < 1) {
            puVar13 = (uint *)-(long)puVar13;
          }
          break;
        case 0x1f:
          puVar13 = (uint *)-(long)puVar13;
          break;
        case 0x20:
          puVar13 = (uint *)~(ulong)puVar13;
          break;
        case 0x23:
          uVar6 = 0;
          bVar8 = 0;
          do {
            bVar7 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            bVar3 = bVar8 & 0x3f;
            bVar8 = bVar8 + 7;
            uVar6 = uVar6 | (ulong)(bVar7 & 0x7f) << bVar3;
          } while ((char)bVar7 < '\0');
          puVar13 = (uint *)((long)puVar13 + uVar6);
        }
      }
      else {
        if (bVar8 != 0x94) {
                    /* WARNING: Subroutine does not return */
          switchD_006caed7::caseD_4();
        }
        bVar8 = param_1[1];
        pbVar12 = param_1 + 2;
        if (bVar8 == 4) {
          puVar13 = (uint *)(ulong)*puVar13;
        }
        else {
          if (4 < bVar8) {
            if (bVar8 != 8) {
                    /* WARNING: Subroutine does not return */
              switchD_006caed7::caseD_4();
            }
            goto switchD_006cb102_caseD_6;
          }
          if (bVar8 == 1) {
            puVar13 = (uint *)(ulong)(byte)*puVar13;
          }
          else {
            if (bVar8 != 2) {
                    /* WARNING: Subroutine does not return */
              switchD_006caed7::caseD_4();
            }
            puVar13 = (uint *)(ulong)(ushort)*puVar13;
          }
        }
      }
      break;
    case 8:
      pbVar12 = param_1 + 2;
      puVar13 = (uint *)(ulong)param_1[1];
      break;
    case 9:
      pbVar12 = param_1 + 2;
      puVar13 = (uint *)(long)(char)param_1[1];
      break;
    case 10:
      pbVar12 = param_1 + 3;
      puVar13 = (uint *)(ulong)*(ushort *)(param_1 + 1);
      break;
    case 0xb:
      pbVar12 = param_1 + 3;
      puVar13 = (uint *)(long)*(short *)(param_1 + 1);
      break;
    case 0xc:
      pbVar12 = param_1 + 5;
      puVar13 = (uint *)(ulong)*(uint *)(param_1 + 1);
      break;
    case 0xd:
      pbVar12 = param_1 + 5;
      puVar13 = (uint *)(long)*(int *)(param_1 + 1);
      break;
    case 0x10:
      puVar13 = (uint *)0x0;
      bVar8 = 0;
      do {
        bVar7 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        bVar3 = bVar8 & 0x3f;
        bVar8 = bVar8 + 7;
        puVar13 = (uint *)((ulong)puVar13 | (ulong)(bVar7 & 0x7f) << bVar3);
      } while ((char)bVar7 < '\0');
      break;
    case 0x11:
      puVar13 = (uint *)0x0;
      uVar10 = 0;
      do {
        bVar8 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        bVar7 = (byte)uVar10;
        uVar10 = uVar10 + 7;
        puVar13 = (uint *)((ulong)puVar13 | (ulong)(bVar8 & 0x7f) << (bVar7 & 0x3f));
      } while ((char)bVar8 < '\0');
      if ((uVar10 < 0x40) && ((bVar8 & 0x40) != 0)) {
        puVar13 = (uint *)((ulong)puVar13 | -1L << ((byte)uVar10 & 0x3f));
      }
      break;
    case 0x12:
      if (iVar11 == 0) goto LAB_0040467e;
      puVar13 = (uint *)local_238[iVar11 + -1];
      break;
    case 0x13:
      if (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        goto LAB_006caf07;
      }
      goto LAB_0040467e;
    case 0x14:
      if (iVar11 < 2) goto LAB_0040467e;
      puVar13 = (uint *)local_238[iVar11 + -2];
      break;
    case 0x15:
      pbVar12 = param_1 + 2;
      if ((long)(iVar11 + -1) <= (long)(ulong)param_1[1]) goto LAB_0040467e;
      puVar13 = (uint *)local_238[(long)(iVar11 + -1) - (ulong)param_1[1]];
      break;
    case 0x16:
      if (1 < iVar11) {
        uVar6 = local_238[iVar11 + -1];
        local_238[iVar11 + -1] = local_238[iVar11 + -2];
        local_238[iVar11 + -2] = uVar6;
        goto LAB_006caf07;
      }
      goto LAB_0040467e;
    case 0x17:
      if (2 < iVar11) {
        uVar6 = local_238[iVar11 + -1];
        uVar15 = local_238[iVar11 + -3];
        local_238[iVar11 + -1] = local_238[iVar11 + -2];
        local_238[iVar11 + -2] = uVar15;
        local_238[iVar11 + -3] = uVar6;
        goto LAB_006caf07;
      }
      goto LAB_0040467e;
    }
  }
  else {
    uVar10 = (uint)bVar8;
    if (bVar8 < 0x70) {
      if (bVar8 < 0x50) {
        if (bVar8 < 0x29) {
          if (bVar8 == 0x18) {
                    /* WARNING: Subroutine does not return */
            switchD_006caed7::caseD_4();
          }
          uVar6 = 1L << (bVar8 & 0x3f);
          if ((uVar6 & 0xf67c000000) == 0) {
            if ((uVar6 & 0x982000000) != 0) goto switchD_006caed7_caseD_6;
            if (uVar10 != 0x28) {
                    /* WARNING: Subroutine does not return */
              switchD_006caed7::caseD_4();
            }
            if (iVar11 != 0) {
              iVar11 = iVar11 + -1;
              pbVar12 = param_1 + 3;
              if (local_238[iVar11] != 0) {
                pbVar12 = pbVar12 + *(short *)(param_1 + 1);
              }
              goto LAB_006caf07;
            }
          }
          else {
LAB_006cb04f:
            if (1 < iVar11) {
              iVar1 = iVar11 + -2;
              uVar6 = local_238[iVar1];
              uVar15 = local_238[iVar11 + -1];
              bVar7 = (byte)uVar15;
              iVar11 = iVar1;
              switch(bVar8) {
              case 0x1a:
                puVar13 = (uint *)(uVar6 & uVar15);
                break;
              case 0x1b:
                puVar13 = (uint *)((long)uVar6 / (long)uVar15);
                break;
              case 0x1c:
                puVar13 = (uint *)(uVar6 - uVar15);
                break;
              case 0x1d:
                puVar13 = (uint *)(uVar6 % uVar15);
                break;
              case 0x1e:
                puVar13 = (uint *)(uVar6 * uVar15);
                break;
              default:
code_r0x00404679:
                    /* WARNING: Subroutine does not return */
                FUN_00404713();
              case 0x21:
                puVar13 = (uint *)(uVar6 | uVar15);
                break;
              case 0x22:
                puVar13 = (uint *)(uVar6 + uVar15);
                break;
              case 0x24:
                puVar13 = (uint *)(uVar6 << (bVar7 & 0x3f));
                break;
              case 0x25:
                puVar13 = (uint *)(uVar6 >> (bVar7 & 0x3f));
                break;
              case 0x26:
                puVar13 = (uint *)((long)uVar6 >> (bVar7 & 0x3f));
                break;
              case 0x27:
                puVar13 = (uint *)(uVar6 ^ uVar15);
                break;
              case 0x29:
                puVar13 = (uint *)(ulong)(uVar6 == uVar15);
                break;
              case 0x2a:
                puVar13 = (uint *)(ulong)((long)uVar15 <= (long)uVar6);
                break;
              case 0x2b:
                puVar13 = (uint *)(ulong)((long)uVar15 < (long)uVar6);
                break;
              case 0x2c:
                puVar13 = (uint *)(ulong)((long)uVar6 <= (long)uVar15);
                break;
              case 0x2d:
                puVar13 = (uint *)(ulong)((long)uVar6 < (long)uVar15);
                break;
              case 0x2e:
                puVar13 = (uint *)(ulong)(uVar6 != uVar15);
              }
              goto LAB_006caef0;
            }
          }
          goto LAB_0040467e;
        }
        if (bVar8 != 0x2f) {
          if (0x2f < bVar8) {
            puVar13 = (uint *)(ulong)(bVar8 - 0x30);
            goto LAB_006caef0;
          }
          if (bVar8 == 0x2f) {
                    /* WARNING: Subroutine does not return */
            switchD_006caed7::caseD_4();
          }
          goto LAB_006cb04f;
        }
        pbVar12 = param_1 + (long)*(short *)(param_1 + 1) + 3;
        goto LAB_006caf07;
      }
      if (0x11 < (int)(uVar10 - 0x50)) goto LAB_0040467e;
      lVar5 = (long)(int)(uVar10 - 0x50);
      cVar4 = (&DAT_00945610)[lVar5];
      puVar13 = *(uint **)(param_3 + lVar5 * 8);
      if ((*(byte *)(param_3 + 199) & 0x40) != 0) {
        cVar2 = *(char *)(param_3 + 0xd8 + lVar5);
joined_r0x006cb450:
        if (cVar2 != '\0') goto LAB_006caef0;
      }
LAB_006cb361:
      if (cVar4 != '\b') goto LAB_0040467e;
switchD_006cb102_caseD_6:
      puVar13 = *(uint **)puVar13;
    }
    else if (bVar8 < 0x97) {
      switch(bVar8) {
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar6 = 0;
        uVar9 = 0;
        do {
          bVar8 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          bVar7 = (byte)uVar9;
          uVar9 = uVar9 + 7;
          uVar6 = uVar6 | (ulong)(bVar8 & 0x7f) << (bVar7 & 0x3f);
        } while ((char)bVar8 < '\0');
        if ((uVar9 < 0x40) && ((bVar8 & 0x40) != 0)) {
          uVar6 = uVar6 | -1L << ((byte)uVar9 & 0x3f);
        }
        if ((int)(uVar10 - 0x70) < 0x12) {
          lVar5 = (long)(int)(uVar10 - 0x70);
          puVar14 = *(undefined8 **)(param_3 + lVar5 * 8);
          if (((*(byte *)(param_3 + 199) & 0x40) == 0) ||
             (*(char *)(param_3 + 0xd8 + lVar5) == '\0')) {
            if ((&DAT_00945610)[lVar5] != '\b') goto LAB_0040467e;
            puVar14 = (undefined8 *)*puVar14;
          }
          puVar13 = (uint *)((long)puVar14 + uVar6);
          break;
        }
        goto LAB_0040467e;
      case 0x90:
        uVar6 = 0;
        bVar8 = 0;
        do {
          bVar7 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          bVar3 = bVar8 & 0x3f;
          bVar8 = bVar8 + 7;
          uVar6 = uVar6 | (ulong)(bVar7 & 0x7f) << bVar3;
        } while ((char)bVar7 < '\0');
        if ((int)uVar6 < 0x12) {
          lVar5 = (long)(int)uVar6;
          cVar4 = (&DAT_00945610)[lVar5];
          puVar13 = *(uint **)(param_3 + lVar5 * 8);
          if ((*(byte *)(param_3 + 199) & 0x40) != 0) {
            cVar2 = *(char *)(param_3 + 0xd8 + lVar5);
            goto joined_r0x006cb450;
          }
          goto LAB_006cb361;
        }
        goto LAB_0040467e;
      default:
        goto code_r0x00404679;
      case 0x92:
        uVar6 = 0;
        bVar8 = 0;
        do {
          bVar7 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          bVar3 = bVar8 & 0x3f;
          bVar8 = bVar8 + 7;
          uVar6 = uVar6 | (ulong)(bVar7 & 0x7f) << bVar3;
        } while ((char)bVar7 < '\0');
        uVar15 = 0;
        uVar10 = 0;
        do {
          bVar8 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          bVar7 = (byte)uVar10;
          uVar10 = uVar10 + 7;
          uVar15 = uVar15 | (ulong)(bVar8 & 0x7f) << (bVar7 & 0x3f);
        } while ((char)bVar8 < '\0');
        if ((uVar10 < 0x40) && ((bVar8 & 0x40) != 0)) {
          uVar15 = uVar15 | -1L << ((byte)uVar10 & 0x3f);
        }
        if (0x11 < (int)uVar6) goto LAB_0040467e;
        lVar5 = (long)(int)uVar6;
        puVar14 = *(undefined8 **)(param_3 + lVar5 * 8);
        if (((*(byte *)(param_3 + 199) & 0x40) == 0) || (*(char *)(param_3 + 0xd8 + lVar5) == '\0'))
        {
          if ((&DAT_00945610)[lVar5] != '\b') goto LAB_0040467e;
          puVar14 = (undefined8 *)*puVar14;
        }
        puVar13 = (uint *)((long)puVar14 + uVar15);
        break;
      case 0x94:
        goto switchD_006caed7_caseD_6;
      case 0x96:
        goto LAB_006caf07;
      }
    }
    else {
      if (bVar8 != 0xf1) {
                    /* WARNING: Subroutine does not return */
        switchD_006caed7::caseD_4();
      }
      pbVar12 = (byte *)FUN_006cacb0(param_3,param_1[1],param_1 + 2,&local_240);
      puVar13 = local_240;
    }
  }
LAB_006caef0:
  if (0x3f < iVar11) goto LAB_0040467e;
  lVar5 = (long)iVar11;
  iVar11 = iVar11 + 1;
  local_238[lVar5] = (ulong)puVar13;
LAB_006caf07:
  param_1 = pbVar12;
  if (param_2 <= pbVar12) {
    if (iVar11 != 0) {
      return local_238[iVar11 + -1];
    }
LAB_0040467e:
                    /* WARNING: Subroutine does not return */
    FUN_00404713();
  }
  goto LAB_006caea0;
}

