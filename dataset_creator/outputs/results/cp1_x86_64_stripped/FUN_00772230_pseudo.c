
int FUN_00772230(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 *param_6,int *param_7)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  long *in_FS_OFFSET;
  bool bVar8;
  undefined1 auVar9 [16];
  int *piVar10;
  long local_68;
  undefined8 local_60;
  uint local_54;
  long local_50;
  code *local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  local_54 = 0xffffffff;
  local_60 = param_4;
  lVar5 = FUN_00778500();
  if (lVar5 == 0) {
    *param_7 = -1;
    *param_6 = 0;
    iVar4 = (int)in_FS_OFFSET[-0xb];
    goto LAB_007724b4;
  }
  iVar4 = FUN_00778db0(param_1,param_3,&local_60,0,param_5,param_6,&local_54,param_2,param_7);
  if (iVar4 == -1) {
    FUN_00778a10(lVar5);
    iVar4 = (int)in_FS_OFFSET[-0xb];
    goto LAB_007724b4;
  }
  if (iVar4 == 1) {
    if (local_54 != 1) {
      *param_6 = 0;
      goto LAB_0077245b;
    }
LAB_0077251c:
    *param_6 = param_3;
    FUN_00777e90(param_3);
  }
  else {
    if (DAT_0094ad30 < 1) {
      if (DAT_0094ad30 == 0) goto LAB_007722ec;
    }
    else {
      DAT_0094ad30 = DAT_0094ad30 + 1;
      if (100 < DAT_0094ad30) {
        DAT_0094ad30 = 0;
LAB_007722ec:
        if ((DAT_0094ac55 == '\0') &&
           (iVar4 = FUN_007810e0(param_1,param_2,param_3,local_60,param_5,param_6,param_7),
           -1 < iVar4)) {
          FUN_00778a10(lVar5);
          goto LAB_007724b4;
        }
      }
    }
    iVar4 = FUN_00779700(&local_50,"gethostbyname2_r",0);
    if (iVar4 == 0) {
      bVar2 = false;
      lVar1 = *in_FS_OFFSET;
      local_68 = 0;
      do {
        FUN_0078e430(local_48);
        piVar10 = param_7;
        auVar9 = (*local_48)(param_1,param_2,param_3,local_60,param_5,lVar1 + -0x58);
        local_54 = auVar9._0_4_;
        uVar7 = auVar9._0_8_ & 0xffffffff;
        if (local_54 == 0xfffffffe) {
          if ((*param_7 == -1) && ((int)in_FS_OFFSET[-0xb] == 0x22)) {
            FUN_007104f0(local_68,0x7723b9,auVar9._8_8_,piVar10,uVar7);
            *param_6 = 0;
            goto LAB_0077245b;
          }
          if (bVar2) {
LAB_00772401:
            bVar8 = true;
            bVar6 = 6;
            uVar7 = 1;
            *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
            local_54 = 1;
            bVar2 = true;
LAB_00772376:
            if (((*(uint *)(local_50 + 8) >> (bVar6 & 0x1f) & 3) == 2) && (bVar8)) {
              if ((local_68 == 0) && (local_68 = FUN_007101b0(param_5), local_68 == 0)) {
                *(undefined4 *)(in_FS_OFFSET + -0xb) = 0xc;
                local_54 = 0xffffffff;
                *param_6 = 0;
                goto LAB_0077245b;
              }
              uVar7 = 0xffffffff;
              *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
              local_54 = 0xffffffff;
              bVar2 = true;
            }
          }
        }
        else {
          if (!bVar2) {
            bVar8 = local_54 == 1;
            bVar6 = auVar9[0] * '\x02' + 4;
            goto LAB_00772376;
          }
          if (local_54 != 1) goto LAB_00772401;
          uVar7 = 0xffffffff;
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
          local_54 = 0xffffffff;
          bVar2 = false;
        }
        iVar4 = FUN_00778c10(&local_50,"gethostbyname2_r",0,&local_48,uVar7,0);
      } while (iVar4 == 0);
      bVar2 = true;
    }
    else {
      bVar2 = false;
      local_68 = 0;
    }
    uVar3 = local_54;
    FUN_007104f0(local_68);
    if (uVar3 == 1) goto LAB_0077251c;
    *param_6 = 0;
    if (uVar3 == 0xffffffff) {
      if (!bVar2) {
        if ((int)in_FS_OFFSET[-0xb] == 2) goto LAB_00772689;
        *param_7 = -1;
      }
    }
    else if (!bVar2) {
LAB_00772689:
      *param_7 = 3;
    }
  }
LAB_0077245b:
  FUN_00778a10(lVar5);
  if (local_54 < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)in_FS_OFFSET[-0xb];
    if (iVar4 == 0x22) {
      if (local_54 != 0xfffffffe) {
        iVar4 = 0x16;
        goto LAB_00772496;
      }
    }
    else if (local_54 != 0xfffffffe) goto LAB_007724b4;
    if (*param_7 == -1) goto LAB_007724b4;
    iVar4 = 0xb;
  }
LAB_00772496:
  *(int *)(in_FS_OFFSET + -0xb) = iVar4;
LAB_007724b4:
  if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

