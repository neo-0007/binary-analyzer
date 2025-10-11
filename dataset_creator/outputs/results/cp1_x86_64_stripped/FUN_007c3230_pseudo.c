
uint FUN_007c3230(long param_1,int param_2,undefined8 *param_3,long param_4,ulong param_5,
                 undefined4 *param_6,undefined4 *param_7,int param_8)

{
  ushort *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ushort uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined8 *local_1a0;
  int local_198;
  undefined8 *local_178;
  int local_150;
  undefined1 local_148 [264];
  long local_40;
  
  uVar10 = (ulong)(-(int)param_4 & 7);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < uVar10 + 0x180) {
LAB_007c36b8:
    uVar16 = 0xfffffffe;
    *param_6 = 0x22;
    *param_7 = 0xffffffff;
  }
  else {
    iVar12 = (int)(param_5 - uVar10) + -0x180;
    local_198 = 0x7fffffff;
    if ((param_5 - uVar10) + -0x180 == (long)iVar12) {
      local_198 = iVar12;
    }
    uVar15 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
    uVar16 = (uint)uVar15;
    uVar5 = *(ushort *)(param_1 + 6);
    if (uVar15 == 0) {
      if ((*(byte *)(param_1 + 2) & 4) != 0) {
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 1;
        goto LAB_007c32df;
      }
    }
    else {
      uVar14 = param_1 + 0xc;
      uVar16 = uVar15 - 1;
      uVar2 = param_1 + param_2;
      do {
        iVar12 = FUN_007c8480(uVar14,uVar2);
        if ((iVar12 < 0) || ((long)(uVar2 - (uVar14 + (long)iVar12)) < 4)) goto LAB_007c3354;
        uVar14 = uVar14 + 4 + (long)iVar12;
        bVar22 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar22);
      local_178 = (undefined8 *)(param_4 + uVar10);
      param_3[1] = local_178;
      *local_178 = 0;
      local_1a0._0_4_ = (ushort)(uVar5 << 8 | uVar5 >> 8) - 1;
      if ((uVar14 < uVar2) && ((int)local_1a0 != -1)) {
        local_150 = 0;
        puVar8 = local_178 + 0x30;
        puVar19 = puVar8;
        while (iVar12 = FUN_007c3dd0(param_1,uVar2,uVar14,local_148,0xff), iVar12 != -1) {
          iVar11 = FUN_007c3c60(local_148,puVar19,(long)local_198);
          if (iVar11 == -1) {
            if (*(int *)(in_FS_OFFSET + -0x58) == 0x5a) goto LAB_007c36b8;
            break;
          }
          if ((iVar12 < 0) || (iVar11 = FUN_007c4340(puVar19), iVar11 == 0)) break;
          puVar9 = (ushort *)((long)iVar12 + uVar14);
          if ((long)(uVar2 - (long)puVar9) < 10) goto LAB_007c3354;
          puVar1 = puVar9 + 5;
          uVar14 = (ulong)(ushort)(puVar9[4] << 8 | puVar9[4] >> 8);
          if ((long)(uVar2 - (long)puVar1) < (long)uVar14) goto LAB_007c3354;
          if (((ushort)(puVar9[1] << 8 | puVar9[1] >> 8) == 1) &&
             ((ushort)(*puVar9 << 8 | *puVar9 >> 8) == 0xc)) {
            iVar12 = FUN_007c3dd0(param_1,uVar2,puVar1,local_148,0xff);
            if (iVar12 == -1) goto LAB_007c32df;
            iVar11 = FUN_007c3c60(local_148,puVar19,(long)local_198);
            if (iVar11 == -1) {
              if (*(int *)(in_FS_OFFSET + -0x58) != 0x5a) goto LAB_007c32df;
              goto LAB_007c36b8;
            }
            if ((iVar12 < 0) || (iVar12 = FUN_007c3f90(puVar19), iVar12 == 0)) goto LAB_007c32df;
            if (local_178 + 2 < puVar8) {
              *local_178 = puVar19;
              local_178 = local_178 + 1;
              iVar12 = thunk_FUN_007129d0(puVar19);
              local_150 = local_150 + 1;
              local_198 = local_198 - (iVar12 + 1);
              puVar19 = (undefined8 *)((long)puVar19 + (long)(iVar12 + 1));
              *(undefined4 *)(param_3 + 2) = 2;
            }
          }
          uVar14 = (long)puVar1 + uVar14;
          local_1a0._0_4_ = (int)local_1a0 + -1;
          if ((uVar2 <= uVar14) || ((int)local_1a0 == -1)) break;
        }
        if (local_150 != 0) {
          *local_178 = 0;
          local_1a0 = (undefined8 *)param_3[1];
          if (param_8 != 1) {
            uVar3 = *local_1a0;
            uVar16 = 1;
            *(undefined4 *)((long)param_3 + 0x14) = 0;
            *param_3 = uVar3;
            param_3[1] = local_1a0 + 1;
            goto LAB_007c32df;
          }
          pbVar18 = (byte *)*local_1a0;
          if (pbVar18 != (byte *)0x0) {
            lVar6 = *(long *)(in_FS_OFFSET + -0x40);
            lVar7 = *(long *)(in_FS_OFFSET + -0x50);
            do {
              uVar16 = (uint)*pbVar18;
              uVar20 = 0;
              iVar12 = 0;
              do {
                bVar4 = pbVar18[1];
                uVar13 = 10;
                if (((char)uVar16 == '0') && (bVar4 != 0x2e)) {
                  if ((bVar4 & 0xdf) != 0x58) {
                    pbVar18 = pbVar18 + 1;
                    if (bVar4 != 0) {
                      uVar13 = 8;
                      goto LAB_007c347e;
                    }
                    break;
                  }
                  bVar4 = pbVar18[2];
                  uVar10 = (ulong)(char)bVar4;
                  if ((bVar4 == 0x2e) || (bVar4 == 0)) break;
                  iVar11 = 0;
                  pbVar18 = pbVar18 + 2;
                  do {
                    pbVar17 = pbVar18;
                    uVar16 = (int)(char)uVar10 - 0x30;
                    if ((uVar16 < 10) && (uVar16 < 0x10)) {
                      iVar11 = iVar11 * 0x10 + uVar16;
                    }
                    else if ((*(byte *)(lVar6 + 1 + uVar10 * 2) & 0x10) != 0) {
                      iVar11 = iVar11 * 0x10 + -0x57 + *(int *)(lVar7 + uVar10 * 4);
                    }
                    bVar4 = pbVar17[1];
                    uVar10 = (ulong)(char)bVar4;
                    pbVar18 = pbVar17 + 1;
                    if (bVar4 == 0) goto LAB_007c34b5;
                  } while (bVar4 != 0x2e);
                }
                else {
LAB_007c347e:
                  uVar10 = (ulong)(uint)(int)(char)*pbVar18;
                  iVar11 = 0;
                  do {
                    pbVar17 = pbVar18;
                    uVar16 = (int)uVar10 - 0x30;
                    if ((uVar16 < 10) && (uVar16 < uVar13)) {
                      iVar11 = iVar11 * uVar13 + uVar16;
                    }
                    bVar4 = pbVar17[1];
                    uVar10 = (ulong)(uint)(int)(char)bVar4;
                    pbVar18 = pbVar17 + 1;
                    if (bVar4 == 0x2e) goto LAB_007c34b9;
                  } while (bVar4 != 0);
LAB_007c34b5:
                  if ((char)uVar10 != '.') break;
                }
LAB_007c34b9:
                uVar16 = (uint)(char)pbVar18[1];
                pbVar18 = pbVar17 + 2;
                iVar21 = iVar12 + 8;
                uVar20 = uVar20 | iVar11 << ((byte)iVar12 & 0x1f);
                if ((9 < uVar16 - 0x30) && (iVar12 = thunk_FUN_007a30f0(pbVar18), iVar12 == 0)) {
                  uVar16 = 1;
                  *(uint *)((long)param_3 + 0x14) = uVar20;
                  goto LAB_007c32df;
                }
                iVar12 = iVar21;
              } while (iVar21 != 0x20);
              local_1a0 = local_1a0 + 1;
              pbVar18 = (byte *)*local_1a0;
            } while (pbVar18 != (byte *)0x0);
          }
        }
      }
    }
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
    uVar16 = 0xfffffffe;
  }
  goto LAB_007c32df;
LAB_007c3354:
  uVar16 = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
LAB_007c32df:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar16;
}

