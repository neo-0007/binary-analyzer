
char FUN_006c33a0(long param_1,long param_2,uint param_3,long *param_4,long *param_5,long param_6,
                 long *param_7,long *param_8)

{
  char *pcVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long in_FS_OFFSET;
  char local_7d;
  bool local_5e;
  byte local_5d;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)((long)param_8 + 0x14) & 0x10) != 0) {
    *(undefined4 *)((long)param_8 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  pcVar1 = *(char **)(param_1 + 8);
  if (param_5 == param_7) {
    if (*(char **)(param_6 + 8) == pcVar1) {
LAB_006c3958:
      local_7d = '\0';
      *(uint *)((long)param_8 + 0xc) = param_3;
      goto LAB_006c3460;
    }
    if (*pcVar1 == '*') {
      if (pcVar1 != (char *)param_4[1]) goto LAB_006c34c0;
    }
    else {
      iVar5 = thunk_FUN_00712780(pcVar1);
      if (iVar5 == 0) goto LAB_006c3958;
      if ((char *)param_4[1] != pcVar1) goto LAB_006c341f;
    }
  }
  else if ((char *)param_4[1] != pcVar1) {
    if (*pcVar1 == '*') goto LAB_006c34c0;
LAB_006c341f:
    iVar5 = thunk_FUN_00712780(pcVar1);
    if (iVar5 != 0) {
LAB_006c34c0:
      local_7d = '\0';
      local_5d = 0;
      local_5e = true;
      uVar8 = 0;
      if (-1 < param_2) {
        uVar8 = (long)param_7 - param_2;
      }
      do {
        uVar9 = (ulong)*(uint *)(param_1 + 0x14);
joined_r0x006c34f7:
        if (uVar9 != 0) {
          do {
            local_58 = 0;
            uVar2 = *(ulong *)(param_1 + 0x10 + uVar9 * 0x10);
            local_48 = (ulong)*(uint *)((long)param_8 + 0x14) << 0x20;
            local_50 = 0;
            lVar11 = (long)uVar2 >> 8;
            uVar10 = param_3;
            if ((uVar2 & 1) != 0) {
              uVar10 = param_3 | 1;
              lVar11 = *(long *)(*param_5 + lVar11);
            }
            if ((uVar8 == 0) || (local_5e != uVar8 < (ulong)(lVar11 + (long)param_5))) {
              if ((uVar2 & 2) == 0) {
                if ((param_2 == -2) && ((*(uint *)((long)param_8 + 0x14) & 3) == 0))
                goto code_r0x006c37d1;
                uVar10 = uVar10 & 0xfffffffd;
              }
              plVar3 = *(long **)(param_1 + 8 + uVar9 * 0x10);
              cVar4 = (**(code **)(*plVar3 + 0x38))
                                (plVar3,param_2,uVar10,param_4,lVar11 + (long)param_5,param_6,
                                 param_7,&local_58);
              uVar6 = (uint)local_48;
              uVar10 = *(uint *)((long)param_8 + 0xc) | local_50._4_4_;
              *(uint *)((long)param_8 + 0xc) = uVar10;
              if (((uint)local_48 & 0xfffffffb) == 2) {
                *(uint *)(param_8 + 2) = (uint)local_48;
                *param_8 = local_58;
                *(uint *)(param_8 + 1) = (uint)local_50;
                local_7d = cVar4;
                goto LAB_006c3460;
              }
              lVar11 = *param_8;
              if (local_7d == '\0') {
                if (lVar11 != 0) goto LAB_006c3511;
                *param_8 = local_58;
                *(uint *)(param_8 + 1) = (uint)local_50;
                local_7d = cVar4;
                if (((local_58 != 0) && (uVar10 != 0)) && ((*(byte *)(param_1 + 0x10) & 1) == 0))
                goto LAB_006c3460;
              }
              else if (lVar11 == 0) {
                if (local_58 == 0) goto LAB_006c359d;
                uVar7 = *(uint *)(param_8 + 2);
joined_r0x006c352a:
                if (((int)uVar10 < 4) ||
                   (((uVar10 & 1) != 0 && ((*(byte *)((long)param_8 + 0x14) & 2) != 0)))) {
                  if (0 < (int)uVar7) {
LAB_006c36ab:
                    if (0 < (int)uVar6) goto LAB_006c3551;
                    if (((int)uVar7 < 4) ||
                       (((uVar7 & 1) != 0 && ((*(byte *)(param_1 + 0x10) & 2) != 0)))) {
                      if (param_2 < 0) {
                        if (param_2 == -2) goto LAB_006c3797;
                        uVar6 = (**(code **)(*param_4 + 0x40))
                                          (param_4,param_2,local_58,param_6,param_7);
                        uVar10 = uVar6 ^ uVar7;
                        goto joined_r0x006c3714;
                      }
                      if (param_7 != (long *)(local_58 + param_2)) goto LAB_006c3797;
                      if (3 < (int)(uVar7 ^ 6)) goto LAB_006c3997;
                      uVar6 = 6;
                      goto LAB_006c3720;
                    }
LAB_006c3797:
                    uVar10 = uVar7;
                    if (3 < (int)(uVar7 ^ 1)) goto LAB_006c3878;
                    goto LAB_006c37a6;
                  }
                  if (((int)(uint)local_48 < 4) ||
                     (((local_48 & 1) != 0 && ((*(byte *)(param_1 + 0x10) & 2) != 0)))) {
                    if (param_2 < 0) {
                      if (param_2 != -2) {
                        uVar7 = (**(code **)(*param_4 + 0x40))
                                          (param_4,param_2,lVar11,param_6,param_7);
                        goto LAB_006c36ab;
                      }
                      if (0 < (int)(uint)local_48) goto LAB_006c3937;
LAB_006c3791:
                      uVar7 = 1;
                      goto LAB_006c3797;
                    }
                    if (param_7 == (long *)(lVar11 + param_2)) {
                      uVar7 = 6;
                      uVar10 = 6;
                      if (0 < (int)(uint)local_48) goto LAB_006c3551;
                      goto LAB_006c3878;
                    }
                    if (0 < (int)(uint)local_48) {
LAB_006c3937:
                      uVar7 = 1;
                      if (((uint)local_48 ^ 1) < 4) goto LAB_006c37a9;
                      goto LAB_006c3560;
                    }
                    if (param_7 != (long *)(local_58 + param_2)) goto LAB_006c3791;
LAB_006c3997:
                    uVar10 = 2;
                    uVar6 = 6;
                    goto LAB_006c3575;
                  }
                  if (3 < ((uint)local_48 ^ 1)) goto LAB_006c356f;
                }
                else {
                  if (uVar7 == 0) {
                    uVar7 = 1;
                  }
                  if ((uint)local_48 == 0) {
                    uVar6 = 1;
                  }
LAB_006c3551:
                  uVar10 = uVar6 ^ uVar7;
joined_r0x006c3714:
                  if (3 < (int)uVar10) {
LAB_006c3560:
                    uVar10 = uVar7;
                    if ((int)uVar6 < 4) {
LAB_006c3878:
                      uVar6 = uVar10;
                      uVar10 = uVar6 & 2;
                    }
                    else {
LAB_006c356f:
                      uVar10 = uVar6 & 2;
LAB_006c3575:
                      *param_8 = local_58;
                      local_7d = '\0';
                      *(uint *)(param_8 + 1) = (uint)local_50;
                    }
                    *(uint *)(param_8 + 2) = uVar6;
                    if ((uVar10 == 0) && ((uVar6 & 1) != 0)) {
                      uVar10 = *(uint *)((long)param_8 + 0xc);
                      goto LAB_006c359d;
                    }
                    local_7d = '\0';
                    goto LAB_006c3460;
                  }
LAB_006c3720:
                  if (3 < (int)(uVar6 & uVar7)) {
                    *param_8 = 0;
                    *(undefined4 *)(param_8 + 2) = 2;
                    local_7d = '\x01';
                    goto LAB_006c3460;
                  }
LAB_006c37a6:
                  uVar10 = *(uint *)((long)param_8 + 0xc);
                }
LAB_006c37a9:
                *param_8 = 0;
                *(undefined4 *)(param_8 + 2) = 1;
                local_7d = '\x01';
              }
              else {
LAB_006c3511:
                if (local_58 == lVar11) {
                  *(uint *)(param_8 + 1) = *(uint *)(param_8 + 1) | (uint)local_50;
                }
                else if ((local_58 != 0) || (cVar4 != '\0')) {
                  uVar7 = *(uint *)(param_8 + 2);
                  goto joined_r0x006c352a;
                }
              }
LAB_006c359d:
              if (uVar10 == 4) goto LAB_006c3460;
            }
            else {
              local_5d = 1;
            }
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) break;
          } while( true );
        }
        local_5d = local_5d & local_5e;
        local_5e = false;
        if (local_5d == 0) goto LAB_006c3460;
      } while( true );
    }
  }
  *param_8 = (long)param_5;
  *(uint *)(param_8 + 1) = param_3;
  if (param_2 < 0) {
    local_7d = '\0';
    if (param_2 == -2) {
      *(undefined4 *)(param_8 + 2) = 1;
    }
  }
  else {
    local_7d = '\0';
    *(uint *)(param_8 + 2) = (uint)(param_7 == (long *)((long)param_5 + param_2)) * 5 + 1;
  }
LAB_006c3460:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_7d;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x006c37d1:
  uVar9 = uVar9 - 1;
  goto joined_r0x006c34f7;
}

