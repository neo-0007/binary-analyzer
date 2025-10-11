
int FUN_00543e60(undefined8 param_1,long *param_2,int param_3,undefined8 param_4,ulong param_5,
                ulong param_6,undefined4 *param_7,undefined8 param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  char *pcVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long local_198;
  long local_188;
  int local_180;
  uint local_158;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [30];
  char acStack_ea [34];
  byte local_c8 [63];
  byte abStack_89 [73];
  long local_40;
  
  lVar15 = param_2[4];
  uVar16 = param_2[5];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = 0;
  local_110 = 0;
  local_10c = 0xffffffff;
  if (param_3 == 0) {
    local_158 = *(uint *)(param_2 + 8);
  }
  *param_7 = 0;
  if (param_2[9] == 0) {
    if (param_6 == 0) {
      pcVar19 = "SHA-256";
      param_6 = (-(ulong)(param_5 < 0x800) & 0xffffffffffffffa0) + 0x100;
      if (param_5 < 0x800) {
        pcVar19 = "SHA1";
      }
    }
    else if (param_6 == 0xa0) {
      pcVar19 = "SHA1";
    }
    else {
      pcVar19 = "SHA-224";
      if (param_6 != 0xe0) {
        if (param_6 != 0x100) {
          lVar6 = 0;
          iVar2 = 0;
          local_198 = 0;
          *param_7 = 0x20;
          lVar15 = 0;
          goto LAB_00544020;
        }
        pcVar19 = "SHA-256";
      }
    }
    lVar6 = FUN_004069d0(param_1,pcVar19,param_2[10]);
    if (lVar6 == 0) goto LAB_00543fe4;
  }
  else {
    lVar6 = FUN_004069d0(param_1,param_2[9],param_2[10]);
    if (lVar6 == 0) {
LAB_00543fe4:
      local_198 = 0;
      lVar6 = 0;
      lVar15 = 0;
      iVar2 = 0;
      goto LAB_00544020;
    }
    if (param_6 == 0) {
      iVar2 = FUN_0040ac10(lVar6);
      param_6 = (ulong)(iVar2 * 8);
    }
  }
  if (param_5 < 0x200) {
    lVar15 = 0;
    iVar2 = 0;
    local_198 = 0;
    *param_7 = 0x80;
    goto LAB_00544020;
  }
  param_6 = param_6 >> 3;
  if (((param_6 & 0xfffffffffffffff7) != 0x14) && (param_6 != 0x20)) {
    lVar15 = 0;
    iVar2 = 0;
    local_198 = 0;
    *param_7 = 0x20;
    goto LAB_00544020;
  }
  if (lVar15 != 0) {
    if (uVar16 < param_6) {
      lVar15 = 0;
      iVar2 = 0;
      local_198 = 0;
      *param_7 = 0x100;
      goto LAB_00544020;
    }
    FUN_00771fb0(local_108,lVar15,param_6,0x20);
  }
  local_198 = FUN_004b2a70(param_1);
  if (local_198 == 0) {
    lVar15 = 0;
    iVar2 = 0;
    goto LAB_00544020;
  }
  FUN_004b2c00(local_198);
  uVar7 = FUN_004b2df0(local_198);
  lVar8 = FUN_004b2df0(local_198);
  local_188 = FUN_004b2df0(local_198);
  lVar9 = FUN_004b2df0(local_198);
  uVar10 = FUN_004b2df0(local_198);
  lVar11 = FUN_004b2df0(local_198);
  if (lVar11 == 0) {
LAB_005443b5:
    lVar15 = 0;
    iVar2 = 0;
  }
  else {
    uVar16 = param_5 + 0x3f & 0xffffffffffffffc0;
    uVar12 = FUN_004b75a0();
    iVar2 = (int)uVar16;
    iVar3 = FUN_004bc220(lVar11,uVar12,iVar2 + -1);
    if (iVar3 == 0) goto LAB_005443b5;
    if (param_3 == 0) {
      if (((local_158 & 1) == 0) || ((lVar15 != 0 && (-1 < (int)param_2[6])))) {
        if (((local_158 & 2) == 0) || (param_2[2] != 0)) {
          lVar20 = *param_2;
          goto LAB_005441cf;
        }
        iVar2 = 0;
        *param_7 = 0x400;
        lVar15 = 0;
      }
      else {
        iVar2 = 0;
        lVar15 = 0;
        *param_7 = 0x200;
      }
    }
    else {
      lVar20 = *param_2;
      if ((lVar20 != 0) == (param_2[1] != 0)) {
LAB_005441cf:
        if ((lVar20 == 0) || ((local_158 & 1) != 0)) {
          bVar21 = lVar15 == 0;
          local_180 = 0;
          iVar2 = iVar2 * 4 + -1;
          iVar3 = (int)param_6;
LAB_00544230:
          uVar12 = FUN_004b2fd0(local_198);
          do {
            iVar4 = FUN_005c3bd0(param_8,0,local_180);
            if ((iVar4 == 0) ||
               ((bVar21 && (iVar4 = FUN_00429580(uVar12,local_108,param_6,0), iVar4 < 1))))
            goto LAB_005443b5;
            pcVar19 = acStack_ea + 2;
            pbVar17 = local_c8;
            FUN_00771fb0(pcVar19,local_108,param_6,0x20);
            FUN_00771fb0(pbVar17,local_108,param_6,0x40);
            uVar18 = iVar3 - 1;
            if (-1 < (int)uVar18) {
              pcVar13 = pcVar19 + (int)uVar18;
              do {
                *pcVar13 = *pcVar13 + '\x01';
                if (*pcVar13 != '\0') break;
                pcVar13 = pcVar13 + -1;
              } while (acStack_ea + ((long)iVar3 - (ulong)uVar18) != pcVar13);
            }
            pbVar1 = abStack_89 + 1;
            iVar4 = FUN_00407440(local_108,param_6,pbVar1,0,lVar6,0);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_00407440(pcVar19,param_6,pbVar17,0,lVar6,0), iVar4 == 0))
            goto LAB_005443b5;
            pbVar14 = pbVar1;
            if (0 < iVar3) {
              do {
                *pbVar14 = *pbVar14 ^ *pbVar17;
                pbVar14 = pbVar14 + 1;
                pbVar17 = pbVar17 + 1;
              } while (pbVar14 != abStack_89 + (ulong)uVar18 + 2);
            }
            abStack_89[1] = abStack_89[1] | 0x80;
            abStack_89[param_6] = abStack_89[param_6] | 1;
            lVar15 = FUN_004b84d0(pbVar1,iVar3,local_188);
            if (lVar15 == 0) goto LAB_005443b5;
            iVar4 = FUN_005c4db0(local_188,local_198,param_8);
            if (0 < iVar4) goto LAB_00544440;
            bVar21 = true;
            local_180 = local_180 + 1;
            if (iVar4 != 0) goto LAB_005443b5;
          } while( true );
        }
        local_188 = param_2[1];
LAB_00544504:
        lVar15 = FUN_004b9790();
        if (lVar15 == 0) goto LAB_005443b5;
        iVar2 = FUN_004b9860(lVar15,lVar20,local_198);
        if (iVar2 != 0) {
          if (param_3 == 0) {
            if (((local_158 & 2) == 0) ||
               (iVar2 = FUN_00544910(local_198,lVar15,lVar20,local_188,param_2[2],uVar10,param_7),
               iVar2 != 0)) {
              iVar2 = FUN_005c3bd0(param_8,3,1);
              if (iVar2 != 0) {
LAB_00544579:
                iVar2 = 2 - (uint)((local_158 & 2) == 0);
              }
            }
            else {
              iVar2 = 0;
            }
          }
          else {
            uVar12 = FUN_004b75a0();
            iVar2 = FUN_004b18d0(lVar11,lVar20,uVar12);
            if ((((iVar2 != 0) &&
                 (iVar2 = FUN_004b34a0(uVar7,0,lVar11,local_188,local_198), iVar2 != 0)) &&
                (iVar2 = FUN_00542b20(local_198,lVar15,lVar8,uVar10,lVar20,uVar7,lVar11,&local_10c),
                iVar2 != 0)) && (iVar2 = FUN_005c3bd0(param_8,3,1,lVar11), iVar2 != 0)) {
              if (*param_2 != lVar20) {
                FUN_004b7fa0();
                lVar9 = FUN_004b82e0(lVar20);
                *param_2 = lVar9;
              }
              if (param_2[1] != local_188) {
                FUN_004b7fa0();
                lVar9 = FUN_004b82e0(local_188);
                param_2[1] = lVar9;
              }
              if (param_2[2] != lVar8) {
                FUN_004b7fa0();
                lVar8 = FUN_004b82e0(lVar8);
                param_2[2] = lVar8;
              }
              if (((*param_2 == 0) || (param_2[1] == 0)) || (param_2[2] == 0)) {
                iVar2 = 0;
              }
              else {
                iVar2 = FUN_005421b0(param_2,local_108,param_6,local_110);
                if (iVar2 != 0) {
                  *(undefined4 *)((long)param_2 + 0x3c) = local_10c;
                  goto LAB_00544579;
                }
              }
            }
          }
        }
      }
      else {
        lVar15 = 0;
        iVar2 = 0;
        *param_7 = 0x800;
      }
    }
  }
LAB_005443bb:
  FUN_004b2d50(local_198);
LAB_00544020:
  FUN_004b2b50(local_198);
  FUN_004b9810(lVar15);
  FUN_00406a50(lVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
LAB_00544440:
  iVar4 = FUN_005c3bd0(param_8,2,0);
  if ((iVar4 == 0) || (iVar4 = FUN_005c3bd0(param_8,3,0), iVar4 == 0)) goto LAB_005443b5;
  iVar4 = iVar2;
  if ((param_3 == 0) && (iVar4 = (int)param_2[6], iVar2 < (int)param_2[6])) {
    iVar2 = 0;
    lVar15 = 0;
    *param_7 = 0x1000;
    goto LAB_005443bb;
  }
  iVar5 = FUN_00542760(local_198,lVar6,iVar4,(int)((uVar16 - 1) / 0xa0),pcVar19,param_6,local_188,
                       lVar9,param_5 + 0x3f & 0xffffffc0,param_8,&local_110,param_7);
  if (0 < iVar5) {
    iVar2 = FUN_005c3bd0(param_8,2,1);
    if (iVar2 != 0) {
      if (param_3 == 0) {
        if (local_110 != iVar4) {
          iVar2 = 0;
          lVar15 = 0;
          *param_7 = 0x10000;
          goto LAB_005443bb;
        }
        iVar2 = FUN_004b7840(lVar9,*param_2);
        if (iVar2 != 0) {
          iVar2 = 0;
          lVar15 = 0;
          *param_7 = 0x2000;
          goto LAB_005443bb;
        }
      }
      lVar20 = lVar9;
      if ((local_158 & 3) != 1) goto LAB_00544504;
      lVar15 = 0;
      goto LAB_00544579;
    }
    goto LAB_005443b5;
  }
  bVar21 = true;
  local_180 = local_180 + 1;
  if (iVar5 == -1) goto LAB_005443b5;
  goto LAB_00544230;
}

