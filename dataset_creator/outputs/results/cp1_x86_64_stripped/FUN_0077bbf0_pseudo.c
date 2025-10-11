
int FUN_0077bbf0(undefined8 param_1,undefined8 *param_2,int *param_3,ulong param_4,int *param_5,
                undefined4 *param_6,int param_7)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  ushort uVar4;
  undefined4 uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  int *local_70;
  undefined8 local_48;
  long local_40;
  
  piVar3 = (int *)((long)param_3 + param_4);
  piVar1 = param_3 + 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if (param_4 < 0x22) {
    *param_5 = 0x22;
    *param_6 = 0xffffffff;
    iVar8 = -2;
  }
  else {
    do {
      iVar8 = FUN_007b0770(param_1,piVar1,(long)piVar3 - (long)piVar1,&local_48);
      if (iVar8 == 2) {
        *param_6 = 1;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar5;
        iVar8 = 0;
        goto LAB_0077bed5;
      }
      if (iVar8 != 0) break;
      local_70 = piVar1;
      if (piVar1 < piVar3) {
        lVar10 = thunk_FUN_007129d0(piVar1);
        local_70 = (int *)((long)param_3 + lVar10 + 0x21);
      }
      puVar11 = (undefined1 *)FUN_00401200(piVar1,&DAT_0082ea21);
      if (puVar11 != (undefined1 *)0x0) {
        *puVar11 = 0;
      }
      cVar7 = (char)param_3[8];
      piVar13 = piVar1;
      if (cVar7 != '\0') {
        piVar14 = piVar1;
LAB_0077bcdc:
        lVar10 = (long)cVar7;
        piVar13 = (int *)((long)piVar14 + 1);
        cVar7 = *(char *)piVar13;
        if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar10 * 2) & 0x20) == 0)
        goto LAB_0077bcd8;
        *(char *)piVar14 = '\0';
        do {
          pcVar2 = (char *)((long)piVar14 + 1);
          piVar14 = (int *)((long)piVar14 + 1);
          piVar13 = piVar14;
        } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar2 * 2) & 0x20) != 0);
      }
LAB_0077bd10:
      uVar16 = 0;
      if (param_7 == 0) {
        iVar8 = FUN_007774c0(2,piVar1,param_3);
        if (iVar8 < 1) {
          iVar9 = FUN_007774c0(10,piVar1,param_3);
          uVar12 = 0x10;
          iVar8 = 10;
          if (iVar9 < 1) goto LAB_0077be96;
        }
        else {
          iVar8 = 2;
          uVar12 = 4;
        }
LAB_0077bd55:
        param_2[2] = CONCAT44(uVar12,iVar8);
        *(int **)(param_3 + 4) = param_3;
        param_3[6] = 0;
        param_3[7] = 0;
        param_2[3] = param_3 + 4;
        *param_2 = piVar13;
        cVar7 = (char)*piVar13;
        if (cVar7 != '\0') {
LAB_0077bda8:
          lVar10 = (long)cVar7;
          cVar7 = *(char *)((long)piVar13 + 1);
          if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar10 * 2) & 0x20) == 0)
          goto LAB_0077bda0;
          *(char *)piVar13 = '\0';
          do {
            lVar10 = (long)*(char *)((long)piVar13 + 1);
            piVar13 = (int *)((long)piVar13 + 1);
          } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar10 * 2) & 0x20) != 0);
          puVar17 = (undefined8 *)((ulong)((long)local_70 + 7) & 0xfffffffffffffff8);
          puVar15 = puVar17;
          if (piVar3 < puVar17 + 2) goto LAB_0077be86;
          while ((char)lVar10 != '\0') {
            lVar6 = *(long *)(in_FS_OFFSET + -0x40);
            uVar4 = *(ushort *)(lVar6 + lVar10 * 2);
            piVar14 = piVar13;
            if ((uVar4 & 0x2000) == 0) {
LAB_0077be55:
              while ((uVar4 & 0x2000) == 0) {
                pcVar2 = (char *)((long)piVar13 + 1);
                piVar13 = (int *)((long)piVar13 + 1);
                if (*pcVar2 == '\0') {
                  if (piVar13 <= piVar14) goto LAB_0077be74;
                  goto LAB_0077bf40;
                }
                uVar4 = *(ushort *)(lVar6 + (long)*pcVar2 * 2);
              }
              if (piVar14 < piVar13) {
LAB_0077bf40:
                *puVar15 = piVar14;
                puVar15 = puVar15 + 1;
                cVar7 = (char)*piVar13;
              }
              else {
                cVar7 = (char)*piVar13;
              }
              if (cVar7 != '\0') {
                *(char *)piVar13 = '\0';
                piVar13 = (int *)((long)piVar13 + 1);
              }
            }
            else {
              do {
                pcVar2 = (char *)((long)piVar13 + 1);
                piVar13 = (int *)((long)piVar13 + 1);
                uVar4 = *(ushort *)(lVar6 + (long)*pcVar2 * 2);
              } while ((uVar4 & 0x2000) != 0);
              piVar14 = piVar13;
              if (*pcVar2 != '\0') goto LAB_0077be55;
            }
LAB_0077be74:
            if (piVar3 < puVar15 + 2) goto LAB_0077be86;
            lVar10 = (long)(char)*piVar13;
          }
          goto LAB_0077bf7a;
        }
LAB_0077bf5d:
        puVar15 = (undefined8 *)((ulong)((long)local_70 + 7) & 0xfffffffffffffff8);
        puVar17 = puVar15;
        if (piVar3 < puVar15 + 2) {
LAB_0077be86:
          uVar16 = 0xffffffff;
          *param_5 = 0x22;
        }
        else {
LAB_0077bf7a:
          *puVar15 = 0;
          if (puVar17 == (undefined8 *)0x0) {
            uVar16 = 0xffffffff;
          }
          else {
            uVar16 = 1;
            param_2[1] = puVar17;
          }
        }
      }
      else {
        iVar8 = FUN_007774c0(param_7,piVar1,param_3);
        if (0 < iVar8) {
          uVar12 = 0x10;
          iVar8 = param_7;
          if (param_7 == 2) {
            uVar12 = 4;
          }
          goto LAB_0077bd55;
        }
        if ((((param_7 == 2) && (iVar8 = FUN_007774c0(10,piVar1,param_3), 0 < iVar8)) &&
            (*param_3 == 0)) && (param_3[1] == 0)) {
          if (param_3[2] == -0x10000) {
            uVar12 = 4;
            *param_3 = param_3[3];
            iVar8 = 2;
          }
          else {
            if ((param_3[2] != 0) || (param_3[3] != 0x1000000)) goto LAB_0077be96;
            *param_3 = 0x100007f;
            iVar8 = 2;
            uVar12 = 4;
          }
          goto LAB_0077bd55;
        }
      }
LAB_0077be96:
      iVar8 = FUN_007b0940(param_1,local_48,uVar16);
      if (iVar8 == 0) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar5;
        iVar8 = 1;
        goto LAB_0077bed5;
      }
    } while (iVar8 == 0x16);
    *param_5 = iVar8;
    *param_6 = 0xffffffff;
    iVar8 = (iVar8 != 0x22) - 2;
  }
LAB_0077bed5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar8;
LAB_0077bcd8:
  piVar14 = piVar13;
  if (cVar7 == '\0') goto LAB_0077bd10;
  goto LAB_0077bcdc;
LAB_0077bda0:
  piVar13 = (int *)((long)piVar13 + 1);
  if (cVar7 == '\0') goto LAB_0077bf5d;
  goto LAB_0077bda8;
}

