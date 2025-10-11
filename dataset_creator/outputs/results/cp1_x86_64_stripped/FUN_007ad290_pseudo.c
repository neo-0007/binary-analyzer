
int FUN_007ad290(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *in_FS_OFFSET;
  long local_70;
  int local_64;
  long local_50;
  code *local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  if (DAT_0094ad50 < 1) {
    if (DAT_0094ad50 == 0) goto LAB_007ad42a;
  }
  else {
    DAT_0094ad50 = DAT_0094ad50 + 1;
    if (100 < DAT_0094ad50) {
      DAT_0094ad50 = 0;
LAB_007ad42a:
      if ((DAT_0094ac5e == '\0') &&
         (local_64 = FUN_00782180(param_1,param_2,param_3,param_4,param_5,param_6), -1 < local_64))
      goto LAB_007ad468;
    }
  }
  iVar3 = FUN_00779680(&local_50,"getservbyport_r",0,&local_48);
  if (iVar3 == 0) {
    bVar2 = false;
    local_70 = 0;
    lVar1 = *in_FS_OFFSET;
    do {
      FUN_0078e430(local_48);
      uVar4 = (*local_48)(param_1,param_2,param_3,param_4,param_5,lVar1 + -0x58);
      if (uVar4 == 0xfffffffe) {
        if ((int)in_FS_OFFSET[-0xb] == 0x22) {
          FUN_007104f0(local_70);
          local_64 = 0x22;
          *param_6 = 0;
          goto LAB_007ad468;
        }
        if (!bVar2) goto LAB_007ad490;
LAB_007ad3d3:
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
        if ((*(uint *)(local_50 + 8) >> 6 & 3) != 2) {
          uVar4 = 1;
          bVar2 = true;
          goto LAB_007ad368;
        }
LAB_007ad3f6:
        if ((local_70 == 0) && (local_70 = FUN_007101b0(param_5), local_70 == 0)) {
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0xc;
          local_64 = 0xc;
          *param_6 = 0;
          goto LAB_007ad468;
        }
        uVar4 = 0xffffffff;
        bVar2 = true;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
      else if (bVar2) {
        if (uVar4 != 1) goto LAB_007ad3d3;
        bVar2 = false;
        uVar4 = 0xffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
      else {
LAB_007ad490:
        if (((*(uint *)(local_50 + 8) >> ((char)uVar4 * '\x02' + 4U & 0x1f) & 3) == 2) &&
           (uVar4 == 1)) goto LAB_007ad3f6;
        bVar2 = false;
      }
LAB_007ad368:
      iVar3 = FUN_00778c10(&local_50,"getservbyport_r",0,&local_48,uVar4,0);
    } while (iVar3 == 0);
    FUN_007104f0(local_70);
    local_64 = 0;
    if (uVar4 == 1) {
      *param_6 = param_3;
      *(undefined4 *)(in_FS_OFFSET + -0xb) = 0;
      goto LAB_007ad468;
    }
    *param_6 = 0;
    if (1 < uVar4) {
      local_64 = (int)in_FS_OFFSET[-0xb];
      if ((local_64 != 0x22) || (uVar4 == 0xfffffffe)) goto LAB_007ad468;
      goto LAB_007ad51b;
    }
  }
  else {
    *param_6 = 0;
    local_64 = (int)in_FS_OFFSET[-0xb];
    if (local_64 != 0x22) goto LAB_007ad468;
LAB_007ad51b:
    local_64 = 0x16;
  }
  *(int *)(in_FS_OFFSET + -0xb) = local_64;
LAB_007ad468:
  if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_64;
}

