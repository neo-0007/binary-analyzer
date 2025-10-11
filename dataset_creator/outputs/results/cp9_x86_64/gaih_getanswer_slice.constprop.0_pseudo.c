
int gaih_getanswer_slice_constprop_0
              (u_char *param_1,int param_2,undefined8 *param_3,undefined8 *param_4,size_t *param_5,
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
  char *pcVar10;
  size_t sVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  ushort uVar19;
  long lVar20;
  ushort *__src;
  long in_FS_OFFSET;
  byte bVar21;
  size_t local_5c0;
  char *local_5b8;
  long *local_5a0;
  char *local_590;
  int local_558;
  u_char local_548 [248];
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  long local_40;
  
  bVar21 = 0;
  puVar16 = (ushort *)(param_1 + param_2);
  pcVar17 = (char *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c0 = *param_5;
  local_5a0 = (long *)*param_3;
  uVar1 = *(ushort *)(param_1 + 6);
  if (*(short *)(param_1 + 4) != 0x100) {
    iVar3 = -1;
    uVar4 = 3;
    goto LAB_007b73d4;
  }
  iVar3 = ns_name_unpack(param_1,(u_char *)puVar16,param_1 + 0xc,local_548,0xff);
  if (iVar3 == -1) {
LAB_007b72e8:
    iVar5 = *(int *)(in_FS_OFFSET + -0x58);
  }
  else {
    iVar5 = ns_name_ntop(local_548,pcVar17,local_5c0);
    if (iVar5 != -1) {
      if (-1 < iVar3) {
        iVar5 = res_hnok(pcVar17);
        if (iVar5 == 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4a;
          iVar3 = -1;
          *param_6 = 0x4a;
          uVar4 = 3;
          goto LAB_007b73d4;
        }
        uVar1 = uVar1 << 8 | uVar1 >> 8;
        if (uVar1 == 0) {
LAB_007b73c7:
          iVar3 = 0;
          uVar4 = 1;
        }
        else {
          local_558 = uVar1 - 1;
          __src = (ushort *)(param_1 + (long)iVar3 + 0x10);
          iVar3 = 0;
          local_590 = (char *)0x0;
          local_5b8 = (char *)0x0;
          if (__src < puVar16) {
            while (iVar5 = ns_name_unpack(param_1,(u_char *)puVar16,(u_char *)__src,local_548,0xff),
                  iVar5 != -1) {
              iVar6 = ns_name_ntop(local_548,pcVar17,local_5c0);
              if (iVar6 == -1) {
                if (*(int *)(in_FS_OFFSET + -0x58) == 0x5a) goto LAB_007b7589;
                break;
              }
              if ((iVar5 < 0) || (iVar7 = res_hnok(pcVar17), iVar7 == 0)) break;
              uVar14 = *param_9;
              pcVar10 = pcVar17;
              if ((local_5b8 == (char *)0x0) && (uVar14 != 0)) {
                local_5c0 = local_5c0 - (long)iVar6;
                pcVar10 = pcVar17 + iVar6;
                local_590 = pcVar17;
              }
              pcVar17 = pcVar10;
              puVar8 = (ushort *)((long)iVar5 + (long)__src);
              __src = puVar8 + 5;
              if (puVar16 < __src) break;
              uVar1 = *puVar8;
              uVar12 = *(uint *)(puVar8 + 2);
              uVar2 = puVar8[4] << 8 | puVar8[4] >> 8;
              uVar15 = (ulong)uVar2;
              if ((long)puVar16 - (long)__src < (long)uVar15) break;
              if (puVar8[1] == 0x100) {
                uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar19 = uVar1 << 8 | uVar1 >> 8;
                if (uVar1 != 0x500) {
                  if ((uVar19 != 1) && (uVar19 != 0x1c)) goto LAB_007b7548;
                  uVar1 = 0x10;
                  if (uVar19 == 1) {
                    uVar1 = 4;
                  }
                  if (uVar2 == uVar1) {
                    pauVar9 = (undefined1 (*) [16])*local_5a0;
                    if (pauVar9 == (undefined1 (*) [16])0x0) {
                      uVar13 = (ulong)(-(int)pcVar17 & 7);
                      pauVar9 = (undefined1 (*) [16])(pcVar17 + uVar13);
                      if ((local_5c0 <= uVar13) || (local_5c0 - uVar13 < 0x28)) goto LAB_007b7589;
                      pcVar17 = pauVar9[2] + 8;
                      *local_5a0 = (long)pauVar9;
                      local_5c0 = (local_5c0 - uVar13) - 0x28;
                    }
                    *pauVar9 = (undefined1  [16])0x0;
                    if (uVar14 == 0) {
                      lVar20 = *local_5a0;
                    }
                    else {
                      if ((param_8 != (uint *)0x0) && ((int)uVar12 < (int)*param_8)) {
                        *param_8 = uVar12;
                      }
                      pcVar10 = local_590;
                      if (local_5b8 != (char *)0x0) {
                        pcVar10 = local_5b8;
                      }
                      lVar20 = *local_5a0;
                      *(char **)(lVar20 + 8) = pcVar10;
                      *param_9 = 0;
                    }
                    *(uint *)(lVar20 + 0x10) = (uint)(uVar19 != 1) * 8 + 2;
                    memcpy((void *)(lVar20 + 0x14),__src,uVar15);
                    iVar3 = 1;
                    local_5a0 = (long *)*local_5a0;
                    __src = (ushort *)((long)__src + uVar15);
                    *(undefined4 *)((long)local_5a0 + 0x24) = 0;
                    uVar14 = 0;
                    goto LAB_007b754d;
                  }
                  break;
                }
                if ((param_8 != (uint *)0x0) && ((int)uVar12 < (int)*param_8)) {
                  *param_8 = uVar12;
                }
                iVar5 = dn_expand(param_1,puVar16,__src,&local_448,0x401);
                if ((iVar5 < 0) || (iVar7 = res_hnok(&local_448), iVar7 == 0)) {
LAB_007b77c0:
                  uVar14 = 1;
                }
                else {
                  uVar14 = *param_9;
                  __src = (ushort *)((long)__src + (long)iVar5);
                  if (uVar14 != 0) {
                    pcVar10 = pcVar17;
                    if (pcVar17 == local_590 + iVar6) {
                      local_5c0 = local_5c0 + (long)iVar6;
                      pcVar10 = local_590;
                    }
                    sVar11 = strlen((char *)&local_448);
                    uVar14 = (int)sVar11 + 1;
                    uVar15 = (ulong)uVar14;
                    if (local_5c0 < uVar15) goto LAB_007b7589;
                    pcVar17 = pcVar10;
                    if (0xff < uVar14) goto LAB_007b77c0;
                    if (uVar14 < 8) {
                      if ((uVar14 & 4) == 0) {
                        if (uVar14 != 0) {
                          *pcVar10 = (char)local_448;
                          if ((uVar14 & 2) != 0) {
                            *(undefined2 *)(pcVar10 + (uVar15 - 2)) =
                                 *(undefined2 *)((long)&uStack_450 + uVar15 + 6);
                          }
                        }
                      }
                      else {
                        *(undefined4 *)pcVar10 = local_448;
                        *(undefined4 *)(pcVar10 + (uVar15 - 4)) =
                             *(undefined4 *)((long)&uStack_450 + uVar15 + 4);
                      }
                    }
                    else {
                      *(ulong *)pcVar10 = CONCAT44(uStack_444,local_448);
                      lVar20 = (long)pcVar10 - (long)((ulong)(pcVar10 + 8) & 0xfffffffffffffff8);
                      *(undefined8 *)(pcVar10 + (uVar15 - 8)) =
                           *(undefined8 *)((long)&uStack_450 + uVar15);
                      pcVar17 = (char *)((long)&local_448 + -lVar20);
                      puVar18 = (undefined8 *)((ulong)(pcVar10 + 8) & 0xfffffffffffffff8);
                      for (uVar13 = (ulong)(uVar14 + (int)lVar20 >> 3); uVar13 != 0;
                          uVar13 = uVar13 - 1) {
                        *puVar18 = *(undefined8 *)pcVar17;
                        pcVar17 = pcVar17 + ((ulong)bVar21 * -2 + 1) * 8;
                        puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
                      }
                    }
                    uVar14 = 0;
                    pcVar17 = pcVar10 + uVar15;
                    local_5c0 = local_5c0 - uVar15;
                    local_5b8 = pcVar10;
                  }
                }
              }
              else {
LAB_007b7548:
                __src = (ushort *)((long)__src + uVar15);
                uVar14 = 0;
              }
LAB_007b754d:
              local_558 = local_558 + -1;
              if (((local_558 == -1) || (puVar16 <= __src)) || ((uVar14 & 1) != 0)) break;
            }
            if (iVar3 != 0) {
              *param_3 = local_5a0;
              *param_4 = pcVar17;
              *param_5 = local_5c0;
              uVar4 = 0;
              goto LAB_007b73d4;
            }
            if (local_5b8 != (char *)0x0) goto LAB_007b73c7;
          }
          iVar3 = -2;
          uVar4 = 0xffffffff;
        }
        goto LAB_007b73d4;
      }
      goto LAB_007b72e8;
    }
    iVar5 = *(int *)(in_FS_OFFSET + -0x58);
    if (iVar5 == 0x5a) {
LAB_007b7589:
      iVar3 = -2;
      *param_6 = 0x22;
      uVar4 = 0xffffffff;
      goto LAB_007b73d4;
    }
  }
  iVar3 = -1;
  *param_6 = iVar5;
  uVar4 = 3;
LAB_007b73d4:
  *param_7 = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

