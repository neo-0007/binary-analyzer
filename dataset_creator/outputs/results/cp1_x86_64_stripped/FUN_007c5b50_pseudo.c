
uint FUN_007c5b50(long param_1,short *param_2,int param_3,short *param_4,int param_5,long *param_6,
                 uint *param_7,int *param_8,undefined4 param_9,long *param_10,long *param_11,
                 uint *param_12,uint *param_13,undefined4 *param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  long lVar9;
  uint *puVar10;
  short *psVar11;
  undefined8 uVar12;
  long *plVar13;
  ushort uVar14;
  ushort *puVar15;
  uint uVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  uint *local_340;
  ushort local_2b6;
  ushort local_2b4;
  ushort local_2b2;
  uint local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a8 [32];
  ushort *local_288;
  undefined8 local_280;
  short *local_278;
  long local_270;
  ushort *local_268;
  undefined8 local_260;
  short *local_258;
  long local_250;
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  psVar8 = (short *)FUN_007c88c0(param_1,param_9);
  bVar2 = false;
LAB_007c5c19:
  if (*(int *)(param_1 + 500) < 0) {
LAB_007c5c3c:
    iVar5 = FUN_00771200(*psVar8,0x80001,0);
    *(int *)(param_1 + 500) = iVar5;
    if (iVar5 < 0) {
      *param_8 = *(int *)(in_FS_OFFSET + -0x58);
      uVar6 = 0xffffffff;
      if (param_13 != (uint *)0x0) {
        *param_13 = 0;
      }
      goto LAB_007c5f09;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
    uVar12 = 0x1c;
    if (*psVar8 == 2) {
      uVar12 = 0x10;
    }
    iVar5 = FUN_00770f00(iVar5,psVar8,uVar12);
    if (iVar5 < 0) {
      iVar5 = *(int *)(in_FS_OFFSET + -0x58);
LAB_007c5ee3:
      *param_8 = iVar5;
LAB_007c5eea:
      FUN_007ad930(param_1,0);
      if (param_13 != (uint *)0x0) {
        *param_13 = 0;
      }
      uVar6 = 0;
LAB_007c5f09:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar6;
    }
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 1;
    iVar5 = *(int *)(param_1 + 500);
  }
  else {
    if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
LAB_007c5c32:
      FUN_007ad930(param_1,0);
      goto LAB_007c5c3c;
    }
    local_2ac = 0x1c;
    iVar5 = FUN_007c82a0(*(int *)(param_1 + 500),local_2a8,&local_2ac);
    if ((iVar5 < 0) || (iVar5 = FUN_007c5aa0(local_2a8,psVar8), iVar5 == 0)) {
      FUN_007ad930(param_1,0);
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffe;
    }
    iVar5 = *(int *)(param_1 + 500);
    if (iVar5 < 0) goto LAB_007c5c3c;
    if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) goto LAB_007c5c32;
  }
  uVar12 = 2;
  local_280 = 2;
  local_288 = &local_2b6;
  local_270 = (long)param_3;
  lVar17 = (long)(param_3 + 2);
  if (param_4 != (short *)0x0) {
    uVar12 = 4;
    local_260 = 2;
    local_2b4 = (ushort)param_5 << 8 | (ushort)param_5 >> 8;
    local_268 = &local_2b4;
    local_250 = (long)param_5;
    lVar17 = lVar17 + (param_5 + 2);
    local_258 = param_4;
  }
  local_2b6 = (ushort)param_3 << 8 | (ushort)param_3 >> 8;
  local_278 = param_2;
  while ((lVar9 = FUN_0076ec40(iVar5,&local_288,uVar12), lVar9 == -1 &&
         (*(int *)(in_FS_OFFSET + -0x58) == 4))) {
    iVar5 = *(int *)(param_1 + 500);
  }
  if (lVar9 == lVar17) {
    bVar3 = false;
    bVar18 = false;
    bVar1 = param_4 == (short *)0x0;
    do {
      uVar6 = 2;
      local_2b6 = 2;
      puVar15 = &local_2b2;
      do {
        while (lVar17 = FUN_0076d9c0(*(undefined4 *)(param_1 + 500),puVar15,uVar6 & 0xffff),
              lVar17 == -1) {
          iVar5 = *(int *)(in_FS_OFFSET + -0x58);
          if (iVar5 != 4) {
LAB_007c5f4a:
            *param_8 = iVar5;
            if ((bVar2) || (iVar5 != 0x68)) goto LAB_007c5eea;
            FUN_007ad930(param_1,0);
            bVar2 = true;
            goto LAB_007c5c19;
          }
          uVar6 = (uint)local_2b6;
        }
        iVar5 = (int)lVar17;
        if (iVar5 < 1) {
          iVar5 = *(int *)(in_FS_OFFSET + -0x58);
          goto LAB_007c5f4a;
        }
        puVar15 = (ushort *)((long)puVar15 + (long)iVar5);
        uVar6 = (uint)local_2b6 - iVar5;
        local_2b6 = (ushort)uVar6;
      } while (local_2b6 != 0);
      uVar14 = local_2b2 << 8 | local_2b2 >> 8;
      uVar6 = (uint)uVar14;
      uVar16 = (uint)uVar14;
      uVar4 = uVar14;
      if ((!bVar18 && !bVar1) || (param_4 == (short *)0x0)) {
        if (param_10 != (long *)0x0) {
          local_340 = param_7;
          puVar10 = &local_2b0;
          plVar13 = param_10;
          goto LAB_007c5e4d;
        }
        if (param_11 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("anscp != NULL || ansp2 == NULL","res_send.c",0x2be,"send_vc");
        }
        local_340 = param_7;
        uVar7 = *param_7;
        psVar11 = (short *)*param_6;
        local_2b0 = uVar16;
        plVar13 = param_6;
        if ((int)uVar7 < (int)uVar16) goto LAB_007c5e71;
      }
      else {
        local_340 = param_12;
        puVar10 = param_13;
        plVar13 = param_11;
LAB_007c5e4d:
        psVar11 = (short *)*plVar13;
        *puVar10 = uVar16;
        uVar7 = *local_340;
        if ((int)uVar7 < (int)uVar16) {
          if (plVar13 == param_6) {
LAB_007c5e71:
            bVar3 = true;
            uVar4 = (ushort)uVar7;
            plVar13 = param_6;
            uVar6 = uVar7;
          }
          else {
            psVar11 = (short *)FUN_007101b0(0x10000);
            if (psVar11 == (short *)0x0) {
              *param_8 = 0xc;
              goto LAB_007c5eea;
            }
            *local_340 = 0x10000;
            *plVar13 = (long)psVar11;
            if (plVar13 == param_11) {
              *param_14 = 1;
            }
          }
        }
      }
      local_2b6 = uVar4;
      if (local_2b6 < 0xc) {
        *param_8 = 0x5a;
        goto LAB_007c5eea;
      }
      lVar17 = *plVar13;
      do {
        iVar5 = FUN_0076d9c0(*(undefined4 *)(param_1 + 500),lVar17,uVar6 & 0xffff);
        if (iVar5 < 1) goto LAB_007c5ed9;
        lVar17 = lVar17 + iVar5;
        uVar6 = (uint)local_2b6 - iVar5;
        local_2b6 = (ushort)uVar6;
      } while (local_2b6 != 0);
      if (bVar3) {
        *(byte *)(psVar11 + 1) = *(byte *)(psVar11 + 1) | 2;
        local_2b6 = uVar14 - (short)*local_340;
        uVar6 = (uint)local_2b6;
        while (local_2b6 != 0) {
          uVar4 = 0x200;
          if ((ushort)uVar6 < 0x201) {
            uVar4 = (ushort)uVar6;
          }
          iVar5 = FUN_0076d9c0(*(undefined4 *)(param_1 + 500),local_248,uVar4);
          if (iVar5 < 1) break;
          uVar6 = (uint)local_2b6 - iVar5;
          local_2b6 = (ushort)uVar6;
        }
      }
      uVar6 = local_2b0;
      if ((bVar18) || (*param_2 != *psVar11)) {
        if ((!bVar1) && (*param_4 == *psVar11)) {
          if (bVar18) goto LAB_007c5f09;
          bVar18 = *param_2 == *psVar11;
          bVar1 = !bVar18;
        }
      }
      else {
        if (bVar1) goto LAB_007c5f09;
        bVar18 = true;
      }
    } while( true );
  }
LAB_007c5ed9:
  iVar5 = *(int *)(in_FS_OFFSET + -0x58);
  goto LAB_007c5ee3;
}

