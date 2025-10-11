
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fmtfp(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
     int param_6,int param_7,uint param_8,int param_9)

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
  dVar13 = DAT_007de698;
  if (param_7 < 0) {
    param_7 = 6;
    if (0.0 <= param_1) goto LAB_004a9e60;
    if (param_9 != 2) goto LAB_004aa23e;
    local_b8 = 0x2d;
    iVar3 = param_7;
    if (param_1 < DAT_007de6a0) goto LAB_004aa338;
LAB_004aa6b0:
    do {
      dVar13 = dVar13 * DAT_007de6a8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_c4 = (uint)(dVar13 <= param_1);
LAB_004aa350:
    uVar9 = 0;
    local_c0 = 0;
    if (param_1 < DAT_007de698) {
      do {
        dVar12 = dVar12 * DAT_007de6a8;
        uVar9 = uVar9 - 1;
        local_c0 = uVar9;
      } while (dVar12 < DAT_007de698);
    }
    for (; DAT_007de6a8 < dVar12; dVar12 = dVar12 / DAT_007de6a8) {
      local_c0 = local_c0 + 1;
    }
    if (param_9 != 2) {
      if (local_c4 == 1) {
        param_1 = dVar12;
      }
      goto LAB_004a9ea4;
    }
LAB_004aa295:
    if (param_7 == 0) {
      param_7 = 1;
    }
    if (local_c4 != 0) {
      param_7 = param_7 + -1;
      param_1 = dVar12;
      goto LAB_004a9ea4;
    }
    param_7 = (param_7 - (int)local_c0) + -1;
    if (-1 < param_7) goto LAB_004a9ea4;
  }
  else {
    if (param_1 < 0.0) {
      if (param_9 == 2) {
        local_b8 = 0x2d;
LAB_004aa588:
        if (param_1 < DAT_007de6a0) {
LAB_004aa338:
          local_c4 = 1;
        }
        else {
          iVar3 = param_7;
          if (param_7 != 0) goto LAB_004aa6b0;
          local_c4 = (uint)(DAT_007de6a8 <= param_1);
        }
      }
      else {
LAB_004aa23e:
        if (param_9 == 0) {
          local_c4 = 0;
          local_b8 = 0x2d;
          local_c0 = 0;
          goto LAB_004a9ea4;
        }
        local_c4 = 1;
        local_b8 = 0x2d;
      }
      goto LAB_004aa350;
    }
LAB_004a9e60:
    local_b8 = 0x2b;
    if ((param_8 & 2) != 0) {
      if (param_9 != 2) goto LAB_004a9e84;
LAB_004aa270:
      if (param_1 != 0.0) goto LAB_004aa588;
      local_c4 = 0;
      local_c0 = 0;
      goto LAB_004aa295;
    }
    local_b8 = (param_8 & 4) << 3;
    if (param_9 == 2) goto LAB_004aa270;
LAB_004a9e84:
    if (param_9 == 0) {
      local_c4 = 0;
      local_c0 = 0;
    }
    else {
      local_c4 = 1;
      local_c0 = 0;
      if (param_1 != 0.0) goto LAB_004aa338;
    }
LAB_004a9ea4:
    if (param_1 < 0.0) {
      param_1 = (double)((ulong)param_1 ^ DAT_007de6c0);
    }
    if (param_1 < _DAT_007c57d0) {
      if (DAT_007c57c8 <= param_1) {
        uVar9 = (long)(param_1 - DAT_007c57c8) ^ 0x8000000000000000;
      }
      else {
        uVar9 = (ulong)param_1;
      }
      local_c8 = 9;
      if (param_7 < 10) {
        local_c8 = param_7;
      }
      dVar12 = DAT_007de698;
      iVar3 = local_c8;
      if (param_7 == 0) {
        uVar5 = 1;
      }
      else {
        do {
          dVar12 = dVar12 * DAT_007de6a8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar8 = (ulong)dVar12;
        dVar13 = DAT_007de698;
        iVar3 = local_c8;
        uVar5 = uVar8 + 1;
        if (dVar12 - (double)(long)uVar8 < DAT_007de6b0) {
          uVar5 = uVar8;
        }
        do {
          iVar3 = iVar3 + -1;
          dVar12 = dVar13 * DAT_007de6a8;
          dVar13 = dVar13 * DAT_007de6a8;
        } while (iVar3 != 0);
      }
      dVar12 = (param_1 - (double)uVar9) * dVar12;
      lVar10 = (long)dVar12;
      uVar8 = (lVar10 + 1) - (ulong)(dVar12 - (double)lVar10 < DAT_007de6b0);
      if (uVar5 <= uVar8) {
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 - uVar5;
      }
      lVar10 = 1;
      do {
        iVar3 = (int)lVar10;
        local_98[lVar10 + -1] = (&DAT_00816bd1)[uVar9 % 10];
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
              goto LAB_004aa075;
            }
            param_7 = 0;
          }
          else {
            param_7 = (int)lVar7 + 1;
            local_78[lVar7] = (&DAT_00816bd1)[uVar8 % 10];
            if (local_c8 <= param_7) break;
          }
          lVar7 = (long)param_7;
          uVar8 = uVar8 / 10;
        } while( true );
      }
      local_a0 = local_c8;
      local_c8 = param_7;
LAB_004aa075:
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
          local_59[lVar7] = (&DAT_00816bd1)[iVar4 % 10];
          uVar9 = (ulong)(uint)(iVar4 / 10);
          lVar7 = lVar7 + 1;
        } while (9 < iVar4 && (int)local_9c < 0x14);
        if (9 < iVar4) goto LAB_004aa2c0;
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
              iVar4 = doapr_outch(param_2,param_3,param_4,param_5,0x20);
              if (iVar4 == 0) goto LAB_004aa1d8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          goto LAB_004aa0ce;
        }
        if (iVar4 < 1) goto LAB_004aa0ce;
        if (local_b8 == 0) goto LAB_004aa422;
        while (iVar4 = doapr_outch(param_2,param_3,param_4,param_5,local_b8), iVar4 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar3 = 0;
            goto LAB_004aa0f0;
          }
LAB_004aa422:
          local_b8 = 0x30;
        }
      }
      else {
        iVar3 = -iVar3;
LAB_004aa0ce:
        if ((local_b8 == 0) || (iVar4 = doapr_outch(param_2,param_3,param_4,param_5), iVar4 != 0)) {
LAB_004aa0f0:
          do {
            iVar4 = doapr_outch(param_2,param_3,param_4,param_5,(int)(char)local_98[lVar10 + -1]);
            if (iVar4 == 0) goto LAB_004aa1d8;
            lVar10 = lVar10 + -1;
          } while ((int)lVar10 != 0);
          if ((param_8 & 8) == 0 && local_a0 == 0) {
LAB_004aa198:
            local_a0 = local_a0 - local_c8;
            if (0 < local_a0) {
              do {
                iVar4 = doapr_outch(param_2,param_3,param_4,param_5,0x30);
                if (iVar4 == 0) goto LAB_004aa1d8;
                local_a0 = local_a0 + -1;
              } while (local_a0 != 0);
            }
            if (local_c4 != 1) {
joined_r0x004aa6d5:
              do {
                if (iVar3 == 0) goto LAB_004aa706;
                iVar4 = doapr_outch(param_2,param_3,param_4,param_5,0x20);
                if (iVar4 == 0) goto LAB_004aa1d8;
                iVar3 = iVar3 + 1;
              } while( true );
            }
            iVar4 = doapr_outch(param_2,param_3,param_4,param_5,
                                (-((param_8 & 0x20) == 0) & 0x20U) + 0x45);
            if (iVar4 != 0) {
              uVar6 = 0x2d;
              if (-1 < (long)local_c0) {
                uVar6 = 0x2b;
              }
              iVar4 = doapr_outch(param_2,param_3,param_4,param_5,uVar6);
              if (iVar4 != 0) {
                puVar11 = local_59 + (long)(int)local_9c + 1;
                do {
                  if (puVar11 == local_59 + 1) goto joined_r0x004aa6d5;
                  pcVar1 = puVar11 + -1;
                  puVar11 = puVar11 + -1;
                  iVar4 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
                } while (iVar4 != 0);
              }
            }
          }
          else {
            iVar4 = doapr_outch(param_2,param_3,param_4,param_5,0x2e);
            if (iVar4 != 0) {
              puVar11 = local_78 + local_c8;
              do {
                if (local_78 == puVar11) goto LAB_004aa198;
                pcVar1 = puVar11 + -1;
                puVar11 = puVar11 + -1;
                iVar4 = doapr_outch(param_2,param_3,param_4,param_5,(int)*pcVar1);
              } while (iVar4 != 0);
            }
          }
        }
      }
LAB_004aa1d8:
      uVar6 = 0;
      goto LAB_004aa1da;
    }
  }
LAB_004aa2c0:
  doapr_outch(param_2,param_3,param_4,param_5,0);
  uVar6 = 0;
LAB_004aa1da:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_004aa706:
  uVar6 = 1;
  goto LAB_004aa1da;
}

