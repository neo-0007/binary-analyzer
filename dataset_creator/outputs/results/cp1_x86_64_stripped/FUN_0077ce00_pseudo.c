
int FUN_0077ce00(undefined8 param_1,long *param_2,long *param_3,ulong param_4,int *param_5,
                undefined4 *param_6)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined8 uStack_b0;
  int local_8c;
  undefined8 local_68;
  long *local_60;
  undefined4 local_58;
  int local_54;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_b0 = 0x77ce46;
  lVar8 = FUN_007b0710("/etc/hosts");
  bVar4 = false;
  if (lVar8 == 0) {
    if (*(int *)(in_FS_OFFSET + -0x58) == 0xb) {
      local_8c = -2;
      *param_5 = 0xb;
      *param_6 = 2;
    }
    else {
      local_8c = -1;
      *param_5 = *(int *)(in_FS_OFFSET + -0x58);
      *param_6 = 1;
    }
LAB_0077d03a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_8c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
LAB_0077ce70:
  while( true ) {
    uVar10 = uStack_b0;
    uVar9 = (ulong)(-(int)param_3 & 7);
    param_3 = (long *)((long)param_3 + uVar9);
    uVar11 = param_4 - uVar9;
    bVar2 = uVar9 < param_4;
    param_4 = 0;
    if (bVar2) {
      param_4 = uVar11;
    }
    local_8c = FUN_0077bbf0(lVar8,&local_68,param_3,param_4,param_5,param_6);
    uVar5 = local_68;
    if (local_8c != 1) {
      if ((local_8c == 0) && (bVar4)) {
        if ((DAT_0094ac40 & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("(_res_hconf.flags & HCONF_FLAG_MULTI) != 0","nss_files/files-hosts.c",0x1dc,
                       "_nss_files_gethostbyname4_r");
        }
        local_8c = 1;
      }
      goto LAB_0077d030;
    }
    uStack_b0 = 0x77cedd;
    iVar7 = thunk_FUN_007a30f0(param_1,local_68,0,uVar10);
    plVar14 = local_60;
    plVar13 = local_60;
    if (iVar7 == 0) break;
    if (*local_60 != 0) {
      lVar15 = 1;
      do {
        plVar13 = plVar13 + 1;
        uStack_b0 = 0x77cf24;
        iVar7 = thunk_FUN_007a30f0(param_1);
        if (iVar7 == 0) {
          iVar7 = (int)lVar15;
          goto LAB_0077cf2e;
        }
        lVar15 = lVar15 + 1;
      } while (*plVar13 != 0);
    }
  }
  lVar15 = 0;
  iVar7 = 0;
LAB_0077cf2e:
  lVar1 = *plVar13;
  lVar6 = (long)(iVar7 + 1);
  while (lVar3 = lVar6, lVar1 != 0) {
    lVar6 = lVar3 + 1;
    lVar15 = lVar3;
    lVar1 = plVar14[lVar3];
  }
  plVar14 = plVar14 + lVar15 + 1;
  if (param_4 < (ulong)((long)plVar14 - (long)param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("buflen >= bufferend - buffer","nss_files/files-hosts.c",0x1ab,
                 "_nss_files_gethostbyname4_r");
  }
  param_4 = param_4 - ((long)plVar14 - (long)param_3);
  if (local_50[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("result.h_addr_list[1] == NULL","nss_files/files-hosts.c",0x1b4,
                 "_nss_files_gethostbyname4_r");
  }
  puVar12 = (undefined8 *)*param_2;
  if (puVar12 == (undefined8 *)0x0) {
    uVar9 = (ulong)(-(int)plVar14 & 7);
    puVar12 = (undefined8 *)((long)plVar14 + uVar9);
    if ((param_4 <= uVar9) || (param_4 - uVar9 < 0x28)) {
      local_8c = -2;
      *param_5 = 0x22;
      *param_6 = 0xffffffff;
LAB_0077d030:
      FUN_006fd190(lVar8);
      goto LAB_0077d03a;
    }
    *param_2 = (long)puVar12;
    plVar14 = puVar12 + 5;
    param_4 = (param_4 - uVar9) - 0x28;
  }
  *puVar12 = 0;
  lVar15 = *param_2;
  uVar10 = 0;
  if (!bVar4) {
    uVar10 = uVar5;
  }
  *(undefined8 *)(lVar15 + 8) = uVar10;
  uVar10 = *local_50;
  *(undefined4 *)(lVar15 + 0x10) = local_58;
  uStack_b0 = 0x77cfba;
  thunk_FUN_00713a50(lVar15 + 0x14,uVar10,(long)local_54);
  param_2 = (long *)*param_2;
  *(undefined4 *)((long)param_2 + 0x24) = 0;
  if ((DAT_0094ac40 & 0x10) == 0) goto LAB_0077d030;
  bVar4 = true;
  param_3 = plVar14;
  goto LAB_0077ce70;
}

