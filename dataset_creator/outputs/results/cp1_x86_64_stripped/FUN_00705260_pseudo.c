
long FUN_00705260(long param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  long lVar22;
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
      uVar19 = 8;
      uVar16 = 0;
      uVar14 = 0;
    }
    else if (cVar13 == 'w') {
      uVar19 = 4;
      uVar16 = 1;
      uVar14 = 0x240;
    }
    else {
      if (cVar13 != 'a') {
        lVar8 = 0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
        goto LAB_007052c0;
      }
      uVar19 = 0x1004;
      uVar16 = 1;
      uVar14 = 0x440;
    }
    cVar13 = param_3[1];
    pcVar11 = param_3 + 1;
    if (cVar13 < 'y') {
      if ('a' < cVar13) {
        switch(cVar13) {
        case 'b':
          break;
        case 'c':
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
          pcVar11 = param_3;
          break;
        default:
          goto switchD_0070532c_caseD_64;
        case 'e':
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
          uVar14 = uVar14 | 0x80000;
          pcVar11 = param_3;
          break;
        case 'm':
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 1;
          pcVar11 = param_3;
          break;
        case 'x':
          uVar14 = uVar14 | 0x80;
        }
        goto switchD_0070532c_caseD_62;
      }
      if (cVar13 != '\0') {
        if (cVar13 != '+') goto switchD_0070532c_caseD_64;
        uVar19 = uVar19 & 0x1000;
        uVar16 = 2;
        goto switchD_0070532c_caseD_62;
      }
    }
    else {
switchD_0070532c_caseD_64:
      pcVar11 = param_3;
switchD_0070532c_caseD_62:
      cVar13 = param_3[2];
      pcVar18 = param_3 + 2;
      if (cVar13 < 'y') {
        if ('a' < cVar13) {
          switch(cVar13) {
          case 'b':
            pcVar11 = pcVar18;
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
            pcVar11 = pcVar18;
          }
          goto switchD_00705373_caseD_64;
        }
        if (cVar13 != '\0') {
          if (cVar13 == '+') {
            uVar19 = uVar19 & 0x1000;
            uVar16 = 2;
            pcVar11 = pcVar18;
          }
          goto switchD_00705373_caseD_64;
        }
      }
      else {
switchD_00705373_caseD_64:
        cVar13 = param_3[3];
        pcVar18 = param_3 + 3;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            if (cVar13 == '\0') goto switchD_007054b8_caseD_64;
            if (cVar13 == '+') {
              uVar19 = uVar19 & 0x1000;
              uVar16 = 2;
              pcVar11 = pcVar18;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar11 = pcVar18;
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
              pcVar11 = pcVar18;
            }
          }
        }
        cVar13 = param_3[4];
        pcVar18 = param_3 + 4;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            if (cVar13 == '\0') goto switchD_007054b8_caseD_64;
            if (cVar13 == '+') {
              uVar19 = uVar19 & 0x1000;
              uVar16 = 2;
              pcVar11 = pcVar18;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar11 = pcVar18;
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
              pcVar11 = pcVar18;
            }
          }
        }
        cVar13 = param_3[5];
        pcVar18 = param_3 + 5;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            if (cVar13 == '\0') goto switchD_007054b8_caseD_64;
            if (cVar13 == '+') {
              uVar19 = uVar19 & 0x1000;
              uVar16 = 2;
              pcVar11 = pcVar18;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar11 = pcVar18;
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
              pcVar11 = pcVar18;
            }
          }
        }
        cVar13 = param_3[6];
        pcVar18 = param_3 + 6;
        if (cVar13 < 'y') {
          if (cVar13 < 'b') {
            param_3 = pcVar11;
            if (cVar13 == '\0') goto LAB_007054e3;
            if (cVar13 == '+') {
              uVar19 = uVar19 & 0x1000;
              uVar16 = 2;
              pcVar11 = pcVar18;
            }
          }
          else {
            switch(cVar13) {
            case 'b':
              pcVar11 = pcVar18;
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
              pcVar11 = pcVar18;
            }
          }
        }
      }
switchD_007054b8_caseD_64:
      param_3 = pcVar11;
    }
LAB_007054e3:
    lVar8 = FUN_00704de0(param_1,param_2,uVar14 | uVar16,0x1b6,uVar19,param_4);
    if (lVar8 != 0) {
      lVar9 = FUN_004011e0(param_3 + 1,",ccs=");
      if (lVar9 == 0) goto LAB_007052c0;
      lVar22 = lVar9 + 5;
      lVar10 = thunk_FUN_00714230(lVar22,0x2c);
      pcVar11 = (char *)FUN_007101b0((lVar10 - lVar22) + 3);
      if (pcVar11 == (char *)0x0) {
        uVar20 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        FUN_00705100(param_1);
      }
      else {
        puVar12 = (undefined1 *)thunk_FUN_00713820(pcVar11,lVar22,lVar10 - lVar22);
        *puVar12 = 0;
        puVar5 = PTR_DAT_00939cb8;
        puVar4 = PTR_DAT_00939ca8;
        cVar13 = *pcVar11;
        if (cVar13 == '\0') {
          iVar7 = 1;
          pcVar18 = pcVar11;
LAB_007056e2:
          lVar22 = (ulong)(2 - iVar7) + 1;
          if (2 < iVar7) {
            lVar22 = 1;
          }
          lVar10 = thunk_FUN_00713720(pcVar18,0x2f,lVar22);
          pcVar18 = (char *)(lVar10 + lVar22);
        }
        else {
          iVar21 = 0;
          pcVar15 = pcVar11;
          pcVar17 = pcVar11;
          do {
            bVar6 = (byte)(*(ushort *)(puVar4 + (long)cVar13 * 2) >> 3) & 1;
            if ((byte)(cVar13 - 0x2cU) < 0x34) {
              bVar6 = bVar6 | (byte)(-0x8000000004008 >> (cVar13 - 0x2cU & 0x3f)) & 1 ^ 1;
            }
            if (bVar6 == 0) {
              pcVar18 = pcVar17;
              if (cVar13 == '/') {
                iVar21 = iVar21 + 1;
                if (iVar21 == 3) goto LAB_0070570e;
                *pcVar17 = '/';
                pcVar18 = pcVar17 + 1;
              }
            }
            else {
              pcVar18 = pcVar17 + 1;
              *pcVar17 = (char)*(undefined4 *)(puVar5 + (long)cVar13 * 4);
            }
            cVar13 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pcVar17 = pcVar18;
          } while (cVar13 != '\0');
          iVar7 = iVar21 + 1;
          if (iVar21 < 2) goto LAB_007056e2;
        }
LAB_0070570e:
        *pcVar18 = '\0';
        puVar4 = PTR_DAT_00939cb8;
        if (pcVar11[2] == '\0') {
          lVar22 = 0;
          do {
            uVar20 = *(undefined4 *)(puVar4 + (long)*(char *)(lVar9 + 5 + lVar22) * 4);
            pcVar11[lVar22] = (char)uVar20;
            lVar22 = lVar22 + 1;
          } while ((char)uVar20 != '\0');
        }
        iVar7 = FUN_0075a7f0(&local_68,pcVar11);
        if (iVar7 == 0) {
          FUN_007104f0(pcVar11);
          if (local_60 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("fcts.towc_nsteps == 1","fileops.c",0x141,"_IO_new_file_fopen");
          }
          if (local_50 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("fcts.tomb_nsteps == 1","fileops.c",0x142,"_IO_new_file_fopen");
          }
          puVar1 = *(undefined8 **)(param_1 + 0xa0);
          puVar1[0xb] = 0;
          *puVar1 = puVar1[1];
          puVar1[4] = puVar1[3];
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x60) = 0;
          lVar22 = *(long *)(param_1 + 0xa0);
          lVar9 = *(long *)(lVar8 + 0xa0);
          *(long *)(param_1 + 0x98) = lVar22 + 0x68;
          *(undefined8 *)(lVar22 + 0xa0) = local_58;
          uVar3 = DAT_008291c8;
          *(undefined8 *)(lVar22 + 0x68) = local_68;
          uVar2 = DAT_008291c0;
          *(undefined4 *)(lVar22 + 0x88) = 1;
          *(undefined8 *)(lVar22 + 0x80) = uVar2;
          lVar9 = lVar9 + 0x58;
          *(long *)(lVar22 + 0x90) = lVar9;
          *(undefined4 *)(lVar22 + 0xc0) = 1;
          *(undefined8 *)(lVar22 + 0xb8) = uVar3;
          *(long *)(lVar22 + 200) = lVar9;
          *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar22 + 0xe0);
          *(undefined4 *)(lVar8 + 0xc0) = 1;
          goto LAB_007052c0;
        }
        uVar20 = 0x16;
        FUN_00705100(param_1);
        FUN_007104f0(pcVar11);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar20;
    }
  }
  lVar8 = 0;
LAB_007052c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

