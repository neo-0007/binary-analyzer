
int FUN_00772740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 *param_5,int *param_6)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  long *in_FS_OFFSET;
  bool bVar7;
  long local_68;
  undefined8 local_60;
  uint local_54;
  long local_50;
  code *local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  local_54 = 0xffffffff;
  local_60 = param_3;
  lVar5 = FUN_00778500();
  if (lVar5 == 0) {
    *param_6 = -1;
    *param_5 = 0;
    iVar4 = (int)in_FS_OFFSET[-0xb];
    goto LAB_007729a4;
  }
  iVar4 = FUN_00778db0(param_1,param_2,&local_60,0,param_4,param_5,&local_54,2,param_6);
  if (iVar4 == -1) {
    FUN_00778a10(lVar5);
    iVar4 = (int)in_FS_OFFSET[-0xb];
    goto LAB_007729a4;
  }
  if (iVar4 == 1) {
    if (local_54 != 1) {
      *param_5 = 0;
      goto LAB_00772943;
    }
LAB_00772a0c:
    *param_5 = param_2;
    FUN_00777e90(param_2);
  }
  else {
    if (DAT_0094ad30 < 1) {
      if (DAT_0094ad30 == 0) goto LAB_007727f4;
    }
    else {
      DAT_0094ad30 = DAT_0094ad30 + 1;
      if (100 < DAT_0094ad30) {
        DAT_0094ad30 = 0;
LAB_007727f4:
        if ((DAT_0094ac55 == '\0') &&
           (iVar4 = FUN_00781080(param_1,param_2,local_60,param_4,param_5,param_6), -1 < iVar4)) {
          FUN_00778a10(lVar5);
          goto LAB_007729a4;
        }
      }
    }
    iVar4 = FUN_00779700(&local_50,"gethostbyname_r",0,&local_48);
    if (iVar4 == 0) {
      bVar2 = false;
      local_68 = 0;
      lVar1 = *in_FS_OFFSET;
      do {
        FUN_0078e430(local_48);
        local_54 = (*local_48)(param_1,param_2,local_60,param_4,lVar1 + -0x58,param_6);
        if (local_54 == 0xfffffffe) {
          if ((*param_6 == -1) && ((int)in_FS_OFFSET[-0xb] == 0x22)) {
            FUN_007104f0(local_68);
            *param_5 = 0;
            goto LAB_00772943;
          }
          if (bVar2) {
LAB_007728e8:
            bVar7 = true;
            bVar6 = 6;
            *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
            local_54 = 1;
            bVar2 = true;
LAB_0077286e:
            if (((*(uint *)(local_50 + 8) >> (bVar6 & 0x1f) & 3) == 2) && (bVar7)) {
              if ((local_68 == 0) && (local_68 = FUN_007101b0(param_4), local_68 == 0)) {
                *(undefined4 *)(in_FS_OFFSET + -0xb) = 0xc;
                local_54 = 0xffffffff;
                *param_5 = 0;
                goto LAB_00772943;
              }
              *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
              local_54 = 0xffffffff;
              bVar2 = true;
            }
          }
        }
        else {
          if (!bVar2) {
            bVar7 = local_54 == 1;
            bVar6 = (char)local_54 * '\x02' + 4;
            goto LAB_0077286e;
          }
          if (local_54 != 1) goto LAB_007728e8;
          *(undefined4 *)(in_FS_OFFSET + -0xb) = 0x16;
          local_54 = 0xffffffff;
          bVar2 = false;
        }
        iVar4 = FUN_00778c10(&local_50,"gethostbyname_r",0,&local_48,local_54,0);
      } while (iVar4 == 0);
      bVar2 = true;
    }
    else {
      bVar2 = false;
      local_68 = 0;
    }
    uVar3 = local_54;
    FUN_007104f0(local_68);
    if (uVar3 == 1) goto LAB_00772a0c;
    *param_5 = 0;
    if (uVar3 == 0xffffffff) {
      if (!bVar2) {
        if ((int)in_FS_OFFSET[-0xb] == 2) goto LAB_00772b79;
        *param_6 = -1;
      }
    }
    else if (!bVar2) {
LAB_00772b79:
      *param_6 = 3;
    }
  }
LAB_00772943:
  FUN_00778a10(lVar5);
  if (local_54 < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)in_FS_OFFSET[-0xb];
    if (iVar4 == 0x22) {
      if (local_54 != 0xfffffffe) {
        iVar4 = 0x16;
        goto LAB_0077297e;
      }
    }
    else if (local_54 != 0xfffffffe) goto LAB_007729a4;
    if (*param_6 == -1) goto LAB_007729a4;
    iVar4 = 0xb;
  }
LAB_0077297e:
  *(int *)(in_FS_OFFSET + -0xb) = iVar4;
LAB_007729a4:
  if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

