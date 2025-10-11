
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_004ace90(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,int param_7,uint param_8,int param_9)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  double dVar12;
  double dVar13;
  int local_c8;
  uint local_c4;
  ulong local_c0;
  int local_b8;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  undefined1 local_78 [31];
  undefined1 local_59 [25];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar12 = param_1;
  dVar13 = DAT_007e8fb8;
  if (param_7 < 0) {
    param_7 = 6;
    if (0.0 <= param_1) goto LAB_004acee0;
    if (param_9 != 2) goto LAB_004ad2be;
    local_b8 = 0x2d;
    iVar3 = param_7;
    if (param_1 < DAT_007e8fc0) goto LAB_004ad3b8;
LAB_004ad730:
    do {
      dVar13 = dVar13 * DAT_007e8fc8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_c4 = (uint)(dVar13 <= param_1);
LAB_004ad3d0:
    uVar9 = 0;
    local_c0 = 0;
    if (param_1 < DAT_007e8fb8) {
      do {
        dVar12 = dVar12 * DAT_007e8fc8;
        uVar9 = uVar9 - 1;
        local_c0 = uVar9;
      } while (dVar12 < DAT_007e8fb8);
    }
    for (; DAT_007e8fc8 < dVar12; dVar12 = dVar12 / DAT_007e8fc8) {
      local_c0 = local_c0 + 1;
    }
    if (param_9 != 2) {
      if (local_c4 == 1) {
        param_1 = dVar12;
      }
      goto LAB_004acf24;
    }
LAB_004ad315:
    if (param_7 == 0) {
      param_7 = 1;
    }
    if (local_c4 != 0) {
      param_7 = param_7 + -1;
      param_1 = dVar12;
      goto LAB_004acf24;
    }
    param_7 = (param_7 - (int)local_c0) + -1;
    if (-1 < param_7) goto LAB_004acf24;
  }
  else {
    if (param_1 < 0.0) {
      if (param_9 == 2) {
        local_b8 = 0x2d;
LAB_004ad608:
        if (param_1 < DAT_007e8fc0) {
LAB_004ad3b8:
          local_c4 = 1;
        }
        else {
          iVar3 = param_7;
          if (param_7 != 0) goto LAB_004ad730;
          local_c4 = (uint)(DAT_007e8fc8 <= param_1);
        }
      }
      else {
LAB_004ad2be:
        if (param_9 == 0) {
          local_c4 = 0;
          local_b8 = 0x2d;
          local_c0 = 0;
          goto LAB_004acf24;
        }
        local_c4 = 1;
        local_b8 = 0x2d;
      }
      goto LAB_004ad3d0;
    }
LAB_004acee0:
    local_b8 = 0x2b;
    if ((param_8 & 2) != 0) {
      if (param_9 != 2) goto LAB_004acf04;
LAB_004ad2f0:
      if (param_1 != 0.0) goto LAB_004ad608;
      local_c4 = 0;
      local_c0 = 0;
      goto LAB_004ad315;
    }
    local_b8 = (param_8 & 4) << 3;
    if (param_9 == 2) goto LAB_004ad2f0;
LAB_004acf04:
    if (param_9 == 0) {
      local_c4 = 0;
      local_c0 = 0;
    }
    else {
      local_c4 = 1;
      local_c0 = 0;
      if (param_1 != 0.0) goto LAB_004ad3b8;
    }
LAB_004acf24:
    if (param_1 < 0.0) {
      param_1 = (double)((ulong)param_1 ^ DAT_007e8fe0);
    }
    if (param_1 < _DAT_007cf6f0) {
      if (DAT_007cf6e8 <= param_1) {
        uVar9 = (long)(param_1 - DAT_007cf6e8) ^ 0x8000000000000000;
      }
      else {
        uVar9 = (ulong)param_1;
      }
      local_c8 = 9;
      if (param_7 < 10) {
        local_c8 = param_7;
      }
      dVar12 = DAT_007e8fb8;
      iVar3 = local_c8;
      if (param_7 == 0) {
        uVar5 = 1;
      }
      else {
        do {
          dVar12 = dVar12 * DAT_007e8fc8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar8 = (ulong)dVar12;
        dVar13 = DAT_007e8fb8;
        iVar3 = local_c8;
        uVar5 = uVar8 + 1;
        if (dVar12 - (double)(long)uVar8 < DAT_007e8fd0) {
          uVar5 = uVar8;
        }
        do {
          iVar3 = iVar3 + -1;
          dVar12 = dVar13 * DAT_007e8fc8;
          dVar13 = dVar13 * DAT_007e8fc8;
        } while (iVar3 != 0);
      }
      dVar12 = (param_1 - (double)uVar9) * dVar12;
      lVar10 = (long)dVar12;
      uVar8 = (lVar10 + 1) - (ulong)(dVar12 - (double)lVar10 < DAT_007e8fd0);
      if (uVar5 <= uVar8) {
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 - uVar5;
      }
      lVar10 = 1;
      do {
        iVar3 = (int)lVar10;
        local_98[lVar10 + -1] = (&DAT_00821d21)[uVar9 % 10];
        bVar2 = 9 < uVar9;
        lVar10 = lVar10 + 1;
        uVar9 = uVar9 / 10;
      } while (bVar2 && iVar3 < 0x14);
      if (iVar3 == 0x14) {
        iVar3 = 0x13;
      }
      lVar10 = (long)iVar3;
      local_98[lVar10] = 0;
      if (param_7 != 0) {
        lVar7 = 0;
        do {
          if ((((int)lVar7 == 0) && (param_9 == 2)) && (uVar8 % 10 == 0)) {
            local_c8 = local_c8 + -1;
            if (local_c8 == 0) {
              local_a0 = 0;
              local_c8 = 0;
              goto LAB_004ad0f5;
            }
            param_7 = 0;
          }
          else {
            param_7 = (int)lVar7 + 1;
            local_78[lVar7] = (&DAT_00821d21)[uVar8 % 10];
            if (local_c8 <= param_7) break;
          }
          lVar7 = (long)param_7;
          uVar8 = uVar8 / 10;
        } while( true );
      }
      local_a0 = local_c8;
      local_c8 = param_7;
LAB_004ad0f5:
      local_78[local_c8] = 0;
      if (local_c4 == 1) {
        lVar7 = 1;
        uVar9 = (ulong)(uint)-(int)local_c0;
        if (-1 < (long)local_c0) {
          uVar9 = local_c0 & 0xffffffff;
        }
        do {
          iVar4 = (int)uVar9;
          local_9c = (uint)lVar7;
          local_59[lVar7] = (&DAT_00821d21)[iVar4 % 10];
          uVar9 = (ulong)(uint)(iVar4 / 10);
          lVar7 = lVar7 + 1;
        } while (9 < iVar4 && (int)local_9c < 0x14);
        if (9 < iVar4) goto LAB_004ad340;
        iVar4 = local_9c + 2;
        if (local_9c == 1) {
          local_59[2] = 0x30;
          iVar4 = 4;
          local_9c = 2;
        }
        iVar4 = ((((param_6 - iVar3) - local_a0) - (uint)(0 < local_a0)) + -1 +
                (uint)(local_b8 == 0)) - iVar4;
      }
      else {
        local_9c = local_c4;
        iVar4 = (((param_6 - iVar3) - local_a0) - (uint)(0 < local_a0)) + -1 + (uint)(local_b8 == 0)
        ;
      }
      iVar3 = 0;
      if (-1 < iVar4) {
        iVar3 = iVar4;
      }
      if ((param_8 & 1) == 0) {
        if ((param_8 & 0x10) == 0) {
          if (0 < iVar4) {
            do {
              iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,0x20);
              if (iVar4 == 0) goto LAB_004ad258;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          goto LAB_004ad14e;
        }
        if (iVar4 < 1) goto LAB_004ad14e;
        if (local_b8 == 0) goto LAB_004ad4a2;
        while (iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,local_b8), iVar4 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar3 = 0;
            goto LAB_004ad170;
          }
LAB_004ad4a2:
          local_b8 = 0x30;
        }
      }
      else {
        iVar3 = -iVar3;
LAB_004ad14e:
        if ((local_b8 == 0) || (iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5), iVar4 != 0))
        {
LAB_004ad170:
          do {
            iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,(int)(char)local_98[lVar10 + -1]);
            if (iVar4 == 0) goto LAB_004ad258;
            lVar10 = lVar10 + -1;
          } while ((int)lVar10 != 0);
          if ((param_8 & 8) == 0 && local_a0 == 0) {
LAB_004ad218:
            local_a0 = local_a0 - local_c8;
            if (0 < local_a0) {
              do {
                iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,0x30);
                if (iVar4 == 0) goto LAB_004ad258;
                local_a0 = local_a0 + -1;
              } while (local_a0 != 0);
            }
            if (local_c4 != 1) {
joined_r0x004ad755:
              do {
                if (iVar3 == 0) goto LAB_004ad786;
                iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,0x20);
                if (iVar4 == 0) goto LAB_004ad258;
                iVar3 = iVar3 + 1;
              } while( true );
            }
            iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,
                                 (-((param_8 & 0x20) == 0) & 0x20U) + 0x45);
            if (iVar4 != 0) {
              uVar6 = 0x2d;
              if (-1 < (long)local_c0) {
                uVar6 = 0x2b;
              }
              iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,uVar6);
              if (iVar4 != 0) {
                puVar11 = local_59 + (long)(int)local_9c + 1;
                do {
                  if (puVar11 == local_59 + 1) goto joined_r0x004ad755;
                  pcVar1 = puVar11 + -1;
                  puVar11 = puVar11 + -1;
                  iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,(int)*pcVar1);
                } while (iVar4 != 0);
              }
            }
          }
          else {
            iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,0x2e);
            if (iVar4 != 0) {
              puVar11 = local_78 + local_c8;
              do {
                if (local_78 == puVar11) goto LAB_004ad218;
                pcVar1 = puVar11 + -1;
                puVar11 = puVar11 + -1;
                iVar4 = FUN_004accc0(param_2,param_3,param_4,param_5,(int)*pcVar1);
              } while (iVar4 != 0);
            }
          }
        }
      }
LAB_004ad258:
      uVar6 = 0;
      goto LAB_004ad25a;
    }
  }
LAB_004ad340:
  FUN_004accc0(param_2,param_3,param_4,param_5,0);
  uVar6 = 0;
LAB_004ad25a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_004ad786:
  uVar6 = 1;
  goto LAB_004ad25a;
}

