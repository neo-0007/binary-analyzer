
long _IO_new_file_fopen(long param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *__dest;
  undefined1 *puVar10;
  void *pvVar11;
  long lVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x70) == -1) {
    cVar13 = *param_3;
    if (cVar13 == 'r') {
      uVar18 = 8;
      uVar15 = 0;
      uVar14 = 0;
    }
    else if (cVar13 == 'w') {
      uVar18 = 4;
      uVar15 = 1;
      uVar14 = 0x240;
    }
    else {
      if (cVar13 != 'a') {
        lVar7 = 0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
        goto LAB_006fb8b0;
      }
      uVar18 = 0x1004;
      uVar15 = 1;
      uVar14 = 0x440;
    }
    cVar13 = param_3[1];
    pcVar8 = param_3 + 1;
    if (cVar13 < 'y') {
      if ('a' < cVar13) {
        switch(cVar13) {
        case 'b':
          break;
        case 'c':
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
          pcVar8 = param_3;
          break;
        default:
          goto switchD_006fb91c_caseD_64;
        case 'e':
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
          uVar14 = uVar14 | 0x80000;
          pcVar8 = param_3;
          break;
        case 'm':
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
          pcVar8 = param_3;
          break;
        case 'x':
          uVar14 = uVar14 | 0x80;
        }
        goto switchD_006fb91c_caseD_62;
      }
      if (cVar13 != '\0') {
        if (cVar13 != '+') goto switchD_006fb91c_caseD_64;
        uVar18 = uVar18 & 0x1000;
        uVar15 = 2;
        goto switchD_006fb91c_caseD_62;
      }
    }
    else {
switchD_006fb91c_caseD_64:
      pcVar8 = param_3;
switchD_006fb91c_caseD_62:
      cVar13 = param_3[2];
      pcVar17 = param_3 + 2;
      if (cVar13 < 'y') {
        if ('a' < cVar13) {
          switch(cVar13) {
          case 'b':
            pcVar8 = pcVar17;
            break;
          case 'c':
            *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
            break;
          case 'e':
            *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
            uVar14 = uVar14 | 0x80000;
            break;
          case 'm':
            *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
            break;
          case 'x':
            uVar14 = uVar14 | 0x80;
            pcVar8 = pcVar17;
          }
          goto switchD_006fb963_caseD_64;
        }
        if (cVar13 != '\0') {
          if (cVar13 == '+') {
            uVar18 = uVar18 & 0x1000;
            uVar15 = 2;
            pcVar8 = pcVar17;
          }
          goto switchD_006fb963_caseD_64;
        }
      }
      else {
switchD_006fb963_caseD_64:
        cVar13 = param_3[3];
        pcVar17 = param_3 + 3;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            if (cVar13 == '\0') goto switchD_006fbaa8_caseD_64;
            if (cVar13 == '+') {
              uVar18 = uVar18 & 0x1000;
              uVar15 = 2;
              pcVar8 = pcVar17;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar8 = pcVar17;
              break;
            case 'c':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
              break;
            case 'e':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
              uVar14 = uVar14 | 0x80000;
              break;
            case 'm':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
              break;
            case 'x':
              uVar14 = uVar14 | 0x80;
              pcVar8 = pcVar17;
            }
          }
        }
        cVar13 = param_3[4];
        pcVar17 = param_3 + 4;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            if (cVar13 == '\0') goto switchD_006fbaa8_caseD_64;
            if (cVar13 == '+') {
              uVar18 = uVar18 & 0x1000;
              uVar15 = 2;
              pcVar8 = pcVar17;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar8 = pcVar17;
              break;
            case 'c':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
              break;
            case 'e':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
              uVar14 = uVar14 | 0x80000;
              break;
            case 'm':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
              break;
            case 'x':
              uVar14 = uVar14 | 0x80;
              pcVar8 = pcVar17;
            }
          }
        }
        cVar13 = param_3[5];
        pcVar17 = param_3 + 5;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            if (cVar13 == '\0') goto switchD_006fbaa8_caseD_64;
            if (cVar13 == '+') {
              uVar18 = uVar18 & 0x1000;
              uVar15 = 2;
              pcVar8 = pcVar17;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar8 = pcVar17;
              break;
            case 'c':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
              break;
            case 'e':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
              uVar14 = uVar14 | 0x80000;
              break;
            case 'm':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
              break;
            case 'x':
              uVar14 = uVar14 | 0x80;
              pcVar8 = pcVar17;
            }
          }
        }
        cVar13 = param_3[6];
        pcVar17 = param_3 + 6;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            param_3 = pcVar8;
            if (cVar13 == '\0') goto LAB_006fbad3;
            if (cVar13 == '+') {
              uVar18 = uVar18 & 0x1000;
              uVar15 = 2;
              pcVar8 = pcVar17;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar8 = pcVar17;
              break;
            case 'c':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
              break;
            case 'e':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
              uVar14 = uVar14 | 0x80000;
              break;
            case 'm':
              *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
              break;
            case 'x':
              uVar14 = uVar14 | 0x80;
              pcVar8 = pcVar17;
            }
          }
        }
      }
switchD_006fbaa8_caseD_64:
      param_3 = pcVar8;
    }
LAB_006fbad3:
    lVar7 = _IO_file_open(param_1,param_2,uVar14 | uVar15,0x1b6,uVar18,param_4);
    if (lVar7 != 0) {
      pcVar8 = strstr(param_3 + 1,",ccs=");
      if (pcVar8 == (char *)0x0) goto LAB_006fb8b0;
      pcVar17 = pcVar8 + 5;
      pcVar9 = strchrnul(pcVar17,0x2c);
      __dest = (char *)malloc(((long)pcVar9 - (long)pcVar17) + 3);
      if (__dest == (char *)0x0) {
        uVar19 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        _IO_new_file_close_it(param_1);
      }
      else {
        puVar10 = (undefined1 *)mempcpy(__dest,pcVar17,(long)pcVar9 - (long)pcVar17);
        *puVar10 = 0;
        uVar4 = _nl_C_locobj._120_8_;
        uVar3 = _nl_C_locobj._104_8_;
        cVar13 = *__dest;
        if (cVar13 == '\0') {
          iVar6 = 1;
          pcVar17 = __dest;
LAB_006fbcd2:
          __n = (ulong)(2 - iVar6) + 1;
          if (2 < iVar6) {
            __n = 1;
          }
          pvVar11 = memset(pcVar17,0x2f,__n);
          pcVar17 = (char *)((long)pvVar11 + __n);
        }
        else {
          iVar20 = 0;
          pcVar9 = __dest;
          pcVar16 = __dest;
          do {
            bVar5 = (byte)(*(ushort *)(uVar3 + (long)cVar13 * 2) >> 3) & 1;
            if ((byte)(cVar13 - 0x2cU) < 0x34) {
              bVar5 = bVar5 | (byte)(-0x8000000004008 >> (cVar13 - 0x2cU & 0x3f)) & 1 ^ 1;
            }
            if (bVar5 == 0) {
              pcVar17 = pcVar16;
              if (cVar13 == '/') {
                iVar20 = iVar20 + 1;
                if (iVar20 == 3) goto LAB_006fbcfe;
                *pcVar16 = '/';
                pcVar17 = pcVar16 + 1;
              }
            }
            else {
              pcVar17 = pcVar16 + 1;
              *pcVar16 = (char)*(undefined4 *)(uVar4 + (long)cVar13 * 4);
            }
            cVar13 = pcVar9[1];
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar17;
          } while (cVar13 != '\0');
          iVar6 = iVar20 + 1;
          if (iVar20 < 2) goto LAB_006fbcd2;
        }
LAB_006fbcfe:
        *pcVar17 = '\0';
        uVar3 = _nl_C_locobj._120_8_;
        if (__dest[2] == '\0') {
          lVar12 = 0;
          do {
            cVar13 = (char)*(undefined4 *)(uVar3 + (long)pcVar8[lVar12 + 5] * 4);
            __dest[lVar12] = cVar13;
            lVar12 = lVar12 + 1;
          } while (cVar13 != '\0');
        }
        iVar6 = __wcsmbs_named_conv(&local_68,__dest);
        if (iVar6 == 0) {
          free(__dest);
          if (local_60 != 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("fcts.towc_nsteps == 1","fileops.c",0x141,"_IO_new_file_fopen");
          }
          if (local_50 != 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("fcts.tomb_nsteps == 1","fileops.c",0x142,"_IO_new_file_fopen");
          }
          puVar1 = *(undefined8 **)(param_1 + 0xa0);
          puVar1[0xb] = 0;
          *puVar1 = puVar1[1];
          puVar1[4] = puVar1[3];
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x60) = 0;
          lVar2 = *(long *)(param_1 + 0xa0);
          lVar12 = *(long *)(lVar7 + 0xa0);
          *(long *)(param_1 + 0x98) = lVar2 + 0x68;
          *(undefined8 *)(lVar2 + 0xa0) = local_58;
          uVar4 = DAT_0081efa8;
          *(undefined8 *)(lVar2 + 0x68) = local_68;
          uVar3 = DAT_0081efa0;
          *(undefined4 *)(lVar2 + 0x88) = 1;
          *(undefined8 *)(lVar2 + 0x80) = uVar3;
          lVar12 = lVar12 + 0x58;
          *(long *)(lVar2 + 0x90) = lVar12;
          *(undefined4 *)(lVar2 + 0xc0) = 1;
          *(undefined8 *)(lVar2 + 0xb8) = uVar4;
          *(long *)(lVar2 + 200) = lVar12;
          *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar2 + 0xe0);
          *(undefined4 *)(lVar7 + 0xc0) = 1;
          goto LAB_006fb8b0;
        }
        uVar19 = 0x16;
        _IO_new_file_close_it(param_1);
        free(__dest);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar19;
    }
  }
  lVar7 = 0;
LAB_006fb8b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

