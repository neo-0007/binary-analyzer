
long FUN_004275f0(undefined8 param_1,int *param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  long in_FS_OFFSET;
  ulong local_58;
  byte *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_58 = param_4;
  local_50 = param_3;
  if (param_2 != (int *)0x0) {
    iVar8 = *param_2;
    if ((iVar8 != 0) && (piVar11 = param_2 + (long)(iVar8 + -1) * 6 + 2, 0 < iVar8)) {
      iVar8 = 0;
      lVar6 = 0;
LAB_00427668:
      while (iVar9 = *piVar11, iVar9 == 0) {
LAB_004277d0:
        iVar8 = iVar8 + 1;
        piVar11 = piVar11 + -6;
        if (*param_2 <= iVar8) goto LAB_004277e4;
      }
      if (lVar6 == 0) {
        bVar5 = *(byte *)(piVar11 + 3);
joined_r0x004278a0:
        if ((bVar5 & 1) == 0) {
          bVar5 = bVar5 & 1;
          if (piVar11[2] == 2) {
            local_48 = local_48 + 1;
            if (local_58 == 0) {
              iVar9 = *piVar11;
            }
            else {
              if (local_58 != 1) {
                bVar5 = 0x2d;
              }
              local_58 = local_58 - 1;
              *local_50 = bVar5;
              iVar9 = *piVar11;
              local_50 = local_50 + 1;
            }
          }
          else {
            iVar9 = *piVar11;
          }
        }
        else if (local_58 == 0) {
          iVar9 = *piVar11;
LAB_00427a34:
          local_48 = local_48 + 1;
        }
        else {
          bVar5 = 0;
          if (local_58 != 1) {
            bVar5 = 0x3f;
          }
          local_48 = local_48 + 1;
          local_58 = local_58 - 1;
          *local_50 = bVar5;
          iVar9 = *piVar11;
          local_50 = local_50 + 1;
        }
      }
      else {
        local_48 = lVar6 + 1;
        if (local_58 != 0) {
          bVar5 = 0;
          if (local_58 != 1) {
            bVar5 = 0x2c;
          }
          local_58 = local_58 - 1;
          *local_50 = bVar5;
          bVar5 = *(byte *)(piVar11 + 3);
          local_50 = local_50 + 1;
          goto joined_r0x004278a0;
        }
        if ((*(byte *)(piVar11 + 3) & 1) != 0) goto LAB_00427a34;
        if (piVar11[2] == 2) {
          local_48 = lVar6 + 2;
        }
      }
      lVar6 = FUN_00428160(param_1,iVar9);
      if (lVar6 != 0) {
        FUN_004262a0(lVar6,&local_50,&local_58,&local_48);
        if (piVar11[2] != 0) {
          if (piVar11[2] == 1) {
            local_48 = local_48 + 1;
            if (local_58 != 0) {
              bVar5 = 0;
              if (local_58 != 1) {
                bVar5 = 0x21;
              }
              local_58 = local_58 - 1;
              *local_50 = bVar5;
              local_50 = local_50 + 1;
              goto joined_r0x0042771d;
            }
            goto LAB_00427755;
          }
LAB_00427812:
          iVar8 = iVar8 + 1;
          piVar11 = piVar11 + -6;
          lVar6 = local_48;
          if (*param_2 <= iVar8) goto LAB_004277e4;
          goto LAB_00427668;
        }
joined_r0x0042771d:
        if (local_58 != 0) {
          bVar5 = 0;
          if (local_58 != 1) {
            bVar5 = 0x3d;
          }
          local_58 = local_58 - 1;
          *local_50 = bVar5;
          local_50 = local_50 + 1;
        }
LAB_00427755:
        pbVar4 = local_50;
        uVar3 = local_58;
        local_48 = local_48 + 1;
        if (piVar11[1] != 0) {
          if (piVar11[1] != 1) goto LAB_00427830;
          uVar1 = *(ulong *)(piVar11 + 4);
          uVar10 = 1;
          uVar7 = uVar1;
          if ((long)uVar1 < 0) {
            uVar7 = -uVar1;
            uVar10 = 2;
          }
          if (9 < (long)uVar7) {
            do {
              uVar10 = uVar10 + 1;
              bVar2 = 99 < (long)uVar7;
              uVar7 = uVar7 / 10;
            } while (bVar2);
          }
          lVar6 = uVar10 + local_48;
          local_48 = lVar6;
          if (local_58 == 0) goto LAB_004277d0;
          FUN_004aeb30(local_50,local_58,&DAT_007dc4d8,uVar1);
          if (uVar3 < uVar10) {
            local_50 = pbVar4 + uVar3;
            iVar8 = iVar8 + 1;
            piVar11 = piVar11 + -6;
            local_58 = 0;
            if (*param_2 <= iVar8) goto LAB_004277e4;
          }
          else {
            local_50 = pbVar4 + uVar10;
            local_58 = uVar3 - uVar10;
            iVar8 = iVar8 + 1;
            piVar11 = piVar11 + -6;
            if (*param_2 <= iVar8) goto LAB_004277e4;
          }
          goto LAB_00427668;
        }
        lVar6 = FUN_004281e0(param_1,piVar11[4]);
        if (lVar6 != 0) {
          FUN_004262a0(lVar6,&local_50,&local_58,&local_48);
          goto LAB_00427812;
        }
      }
LAB_00427830:
      lVar6 = 0;
      goto LAB_00427832;
    }
    lVar6 = 1;
    goto LAB_00427925;
  }
  lVar6 = 1;
  if (param_4 == 0) goto LAB_00427832;
  goto LAB_00427936;
LAB_004277e4:
  lVar6 = lVar6 + 1;
LAB_00427925:
  if (local_58 == 0) goto LAB_00427832;
LAB_00427936:
  *local_50 = 0;
LAB_00427832:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar6;
}

