
int FUN_007c0b70(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,ulong *param_5,
                int *param_6,undefined4 *param_7,uint *param_8,uint *param_9)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ushort uVar18;
  long lVar19;
  ushort *puVar20;
  long in_FS_OFFSET;
  byte bVar21;
  ulong local_5c0;
  undefined8 *local_5b8;
  long *local_5a0;
  undefined8 *local_590;
  int local_558;
  undefined1 local_548 [248];
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  long local_40;
  
  bVar21 = 0;
  puVar15 = (ushort *)(param_2 + param_1);
  puVar16 = (undefined8 *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c0 = *param_5;
  local_5a0 = (long *)*param_3;
  uVar1 = *(ushort *)(param_1 + 6);
  if (*(short *)(param_1 + 4) != 0x100) {
    iVar3 = -1;
    uVar4 = 3;
    goto LAB_007c0d14;
  }
  iVar3 = FUN_007c3dd0(param_1,puVar15,param_1 + 0xc,local_548,0xff);
  if (iVar3 == -1) {
LAB_007c0c28:
    iVar5 = *(int *)(in_FS_OFFSET + -0x58);
  }
  else {
    iVar5 = FUN_007c3c60(local_548,puVar16,local_5c0);
    if (iVar5 != -1) {
      if (-1 < iVar3) {
        iVar5 = FUN_007c3f90(puVar16);
        if (iVar5 == 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4a;
          iVar3 = -1;
          *param_6 = 0x4a;
          uVar4 = 3;
          goto LAB_007c0d14;
        }
        uVar1 = uVar1 << 8 | uVar1 >> 8;
        if (uVar1 == 0) {
LAB_007c0d07:
          iVar3 = 0;
          uVar4 = 1;
        }
        else {
          local_558 = uVar1 - 1;
          puVar20 = (ushort *)(param_1 + 0x10 + (long)iVar3);
          iVar3 = 0;
          local_590 = (undefined8 *)0x0;
          local_5b8 = (undefined8 *)0x0;
          if (puVar20 < puVar15) {
            while (iVar5 = FUN_007c3dd0(param_1,puVar15,puVar20,local_548,0xff), iVar5 != -1) {
              iVar6 = FUN_007c3c60(local_548,puVar16,local_5c0);
              if (iVar6 == -1) {
                if (*(int *)(in_FS_OFFSET + -0x58) == 0x5a) goto LAB_007c0ec9;
                break;
              }
              if ((iVar5 < 0) || (iVar7 = FUN_007c3f90(puVar16), iVar7 == 0)) break;
              uVar13 = *param_9;
              puVar10 = puVar16;
              if ((local_5b8 == (undefined8 *)0x0) && (uVar13 != 0)) {
                local_5c0 = local_5c0 - (long)iVar6;
                puVar10 = (undefined8 *)((long)puVar16 + (long)iVar6);
                local_590 = puVar16;
              }
              puVar16 = puVar10;
              puVar8 = (ushort *)((long)iVar5 + (long)puVar20);
              puVar20 = puVar8 + 5;
              if (puVar15 < puVar20) break;
              uVar1 = *puVar8;
              uVar11 = *(uint *)(puVar8 + 2);
              uVar2 = puVar8[4] << 8 | puVar8[4] >> 8;
              uVar14 = (ulong)uVar2;
              if ((long)puVar15 - (long)puVar20 < (long)uVar14) break;
              if (puVar8[1] == 0x100) {
                uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                         uVar11 << 0x18;
                uVar18 = uVar1 << 8 | uVar1 >> 8;
                if (uVar1 != 0x500) {
                  if ((uVar18 != 1) && (uVar18 != 0x1c)) goto LAB_007c0e88;
                  uVar1 = 0x10;
                  if (uVar18 == 1) {
                    uVar1 = 4;
                  }
                  if (uVar2 == uVar1) {
                    pauVar9 = (undefined1 (*) [16])*local_5a0;
                    if (pauVar9 == (undefined1 (*) [16])0x0) {
                      uVar12 = (ulong)(-(int)puVar16 & 7);
                      pauVar9 = (undefined1 (*) [16])((long)puVar16 + uVar12);
                      if ((local_5c0 <= uVar12) || (local_5c0 - uVar12 < 0x28)) goto LAB_007c0ec9;
                      puVar16 = (undefined8 *)(pauVar9[2] + 8);
                      *local_5a0 = (long)pauVar9;
                      local_5c0 = (local_5c0 - uVar12) - 0x28;
                    }
                    *pauVar9 = (undefined1  [16])0x0;
                    if (uVar13 == 0) {
                      lVar19 = *local_5a0;
                    }
                    else {
                      if ((param_8 != (uint *)0x0) && ((int)uVar11 < (int)*param_8)) {
                        *param_8 = uVar11;
                      }
                      puVar10 = local_590;
                      if (local_5b8 != (undefined8 *)0x0) {
                        puVar10 = local_5b8;
                      }
                      lVar19 = *local_5a0;
                      *(undefined8 **)(lVar19 + 8) = puVar10;
                      *param_9 = 0;
                    }
                    *(uint *)(lVar19 + 0x10) = (uint)(uVar18 != 1) * 8 + 2;
                    thunk_FUN_00713a50(lVar19 + 0x14,puVar20);
                    iVar3 = 1;
                    local_5a0 = (long *)*local_5a0;
                    puVar20 = (ushort *)((long)puVar20 + uVar14);
                    *(undefined4 *)((long)local_5a0 + 0x24) = 0;
                    uVar13 = 0;
                    goto LAB_007c0e8d;
                  }
                  break;
                }
                if ((param_8 != (uint *)0x0) && ((int)uVar11 < (int)*param_8)) {
                  *param_8 = uVar11;
                }
                iVar5 = FUN_007c8450(param_1,puVar15,puVar20,&local_448,0x401);
                if ((iVar5 < 0) || (iVar7 = FUN_007c3f90(&local_448), iVar7 == 0)) {
LAB_007c1100:
                  uVar13 = 1;
                }
                else {
                  uVar13 = *param_9;
                  puVar20 = (ushort *)((long)puVar20 + (long)iVar5);
                  if (uVar13 != 0) {
                    puVar10 = puVar16;
                    if (puVar16 == (undefined8 *)((long)local_590 + (long)iVar6)) {
                      local_5c0 = local_5c0 + (long)iVar6;
                      puVar10 = local_590;
                    }
                    iVar5 = thunk_FUN_007129d0(&local_448);
                    uVar13 = iVar5 + 1;
                    uVar14 = (ulong)uVar13;
                    if (local_5c0 < uVar14) goto LAB_007c0ec9;
                    puVar16 = puVar10;
                    if (0xff < uVar13) goto LAB_007c1100;
                    if (uVar13 < 8) {
                      if ((uVar13 & 4) == 0) {
                        if (uVar13 != 0) {
                          *(undefined1 *)puVar10 = (undefined1)local_448;
                          if ((uVar13 & 2) != 0) {
                            *(undefined2 *)((long)puVar10 + (uVar14 - 2)) =
                                 *(undefined2 *)((long)&uStack_450 + uVar14 + 6);
                          }
                        }
                      }
                      else {
                        *(undefined4 *)puVar10 = local_448;
                        *(undefined4 *)((long)puVar10 + (uVar14 - 4)) =
                             *(undefined4 *)((long)&uStack_450 + uVar14 + 4);
                      }
                    }
                    else {
                      *puVar10 = CONCAT44(uStack_444,local_448);
                      lVar19 = (long)puVar10 - (long)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
                      *(undefined8 *)((long)puVar10 + (uVar14 - 8)) =
                           *(undefined8 *)((long)&uStack_450 + uVar14);
                      puVar16 = (undefined8 *)((long)&local_448 - lVar19);
                      puVar17 = (undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
                      for (uVar12 = (ulong)(uVar13 + (int)lVar19 >> 3); uVar12 != 0;
                          uVar12 = uVar12 - 1) {
                        *puVar17 = *puVar16;
                        puVar16 = puVar16 + (ulong)bVar21 * -2 + 1;
                        puVar17 = puVar17 + (ulong)bVar21 * -2 + 1;
                      }
                    }
                    uVar13 = 0;
                    puVar16 = (undefined8 *)((long)puVar10 + uVar14);
                    local_5c0 = local_5c0 - uVar14;
                    local_5b8 = puVar10;
                  }
                }
              }
              else {
LAB_007c0e88:
                puVar20 = (ushort *)((long)puVar20 + uVar14);
                uVar13 = 0;
              }
LAB_007c0e8d:
              local_558 = local_558 + -1;
              if (((local_558 == -1) || (puVar15 <= puVar20)) || ((uVar13 & 1) != 0)) break;
            }
            if (iVar3 != 0) {
              *param_3 = local_5a0;
              *param_4 = puVar16;
              *param_5 = local_5c0;
              uVar4 = 0;
              goto LAB_007c0d14;
            }
            if (local_5b8 != (undefined8 *)0x0) goto LAB_007c0d07;
          }
          iVar3 = -2;
          uVar4 = 0xffffffff;
        }
        goto LAB_007c0d14;
      }
      goto LAB_007c0c28;
    }
    iVar5 = *(int *)(in_FS_OFFSET + -0x58);
    if (iVar5 == 0x5a) {
LAB_007c0ec9:
      iVar3 = -2;
      *param_6 = 0x22;
      uVar4 = 0xffffffff;
      goto LAB_007c0d14;
    }
  }
  iVar3 = -1;
  *param_6 = iVar5;
  uVar4 = 3;
LAB_007c0d14:
  *param_7 = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

