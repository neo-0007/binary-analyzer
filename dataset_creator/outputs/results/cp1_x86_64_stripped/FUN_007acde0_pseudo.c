
int FUN_007acde0(long *param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 *param_7,int *param_8)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  long *in_FS_OFFSET;
  undefined8 *puVar6;
  int *piVar7;
  long local_78;
  int local_6c;
  long local_50;
  code *local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  lVar5 = FUN_00778500();
  if (lVar5 == 0) {
    *param_8 = -1;
    *param_7 = 0;
    local_6c = (int)in_FS_OFFSET[-0xb];
    goto LAB_007ad0e0;
  }
  if ((param_2 == 0x10) && (DAT_00823318 == param_1[1] && DAT_00823310 == *param_1)) {
    local_6c = 2;
    *param_8 = 1;
    *param_7 = 0;
    goto LAB_007ad0e0;
  }
  if (DAT_0094ad30 < 1) {
    if (DAT_0094ad30 == 0) goto joined_r0x007acfcd;
  }
  else {
    DAT_0094ad30 = DAT_0094ad30 + 1;
    if (100 < DAT_0094ad30) {
      DAT_0094ad30 = 0;
joined_r0x007acfcd:
      if ((DAT_0094ac55 == '\0') &&
         (puVar6 = param_7, piVar7 = param_8,
         local_6c = FUN_00781150(param_1,param_2,param_3,param_4,param_5,param_6), -1 < local_6c)) {
        FUN_00778a10(lVar5,piVar7,extraout_RDX,puVar6);
        goto LAB_007ad0e0;
      }
    }
  }
  iVar3 = FUN_00779700(&local_50,"gethostbyaddr_r",0,&local_48);
  if (iVar3 == 0) {
    bVar2 = false;
    local_78 = 0;
    lVar1 = *in_FS_OFFSET;
    do {
      FUN_0078e430(local_48);
      uVar4 = (*local_48)(param_1,param_2,param_3,param_4,param_5,param_6,lVar1 + -0x58,param_8);
      if (uVar4 == 0xfffffffe) {
        if ((*param_8 == -1) && ((int)in_FS_OFFSET[-0xb] == 0x22)) {
          FUN_007104f0(local_78);
          *param_7 = 0;
          FUN_00778a10(lVar5);
          local_6c = (int)in_FS_OFFSET[-0xb];
          goto LAB_007ad08b;
        }
        if (bVar2) {
LAB_007acf73:
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
          if ((*(uint *)(local_50 + 8) >> 6 & 3) != 2) {
            uVar4 = 1;
            bVar2 = true;
            goto LAB_007acf00;
          }
        }
        else {
LAB_007ad018:
          if (((*(uint *)(local_50 + 8) >> ((char)uVar4 * '\x02' + 4U & 0x1f) & 3) != 2) ||
             (uVar4 != 1)) {
            bVar2 = false;
            goto LAB_007acf00;
          }
        }
        if ((local_78 == 0) && (local_78 = FUN_007101b0(param_6), local_78 == 0)) {
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0xc;
          *param_7 = 0;
          FUN_00778a10(lVar5);
          goto LAB_007ad189;
        }
        uVar4 = 0xffffffff;
        bVar2 = true;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
      else {
        if (!bVar2) goto LAB_007ad018;
        if (uVar4 != 1) goto LAB_007acf73;
        bVar2 = false;
        uVar4 = 0xffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
      }
LAB_007acf00:
      iVar3 = FUN_00778c10(&local_50,"gethostbyaddr_r",0,&local_48,uVar4,0);
    } while (iVar3 == 0);
    FUN_007104f0(local_78);
    local_6c = 0;
    if (uVar4 == 1) {
      *param_7 = param_4;
      FUN_00777e90(param_4);
      FUN_00778270(param_4);
      FUN_00778a10(lVar5);
    }
    else {
      *param_7 = 0;
      FUN_00778a10(lVar5);
      if (1 < uVar4) {
        local_6c = (int)in_FS_OFFSET[-0xb];
        if (uVar4 != 0xfffffffe) {
          if (local_6c == 0x22) goto LAB_007ad19e;
          if (uVar4 != 0xfffffffe) goto LAB_007ad0e0;
        }
LAB_007ad08b:
        if (*param_8 == -1) goto LAB_007ad0e0;
        local_6c = 0xb;
      }
    }
  }
  else {
    *param_7 = 0;
    *param_8 = (uint)((int)in_FS_OFFSET[-0xb] == 2) * 4 + -1;
    FUN_00778a10(lVar5);
LAB_007ad189:
    local_6c = (int)in_FS_OFFSET[-0xb];
    if (local_6c != 0x22) goto LAB_007ad0e0;
LAB_007ad19e:
    local_6c = 0x16;
  }
  *(int *)(in_FS_OFFSET + -0xb) = local_6c;
LAB_007ad0e0:
  if (local_40 == in_FS_OFFSET[5]) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

