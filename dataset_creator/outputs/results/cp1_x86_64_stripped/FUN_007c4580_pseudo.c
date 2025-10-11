
/* WARNING: Removing unreachable block (ram,0x007c4607) */

ulong FUN_007c4580(long *param_1,undefined8 param_2,undefined4 param_3,int param_4,long param_5,
                  uint param_6,long *param_7,long *param_8,undefined8 param_9,int *param_10,
                  undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  short sVar14;
  long lVar15;
  long in_FS_OFFSET;
  ulong auStack_e0 [7];
  uint local_a4;
  long *local_a0;
  long local_98;
  uint local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  uint local_74;
  int *local_70;
  long local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  long *local_50;
  long local_40;
  
  lVar15 = 0x220;
  local_5c = param_3;
  local_58 = param_2;
  local_50 = param_8;
  local_74 = param_6;
  local_80 = param_9;
  local_70 = param_10;
  local_88 = param_11;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = *param_1;
  if (param_4 != 0x1a395100) {
    lVar15 = 0x110;
  }
  uVar8 = (int)lVar15 + 0x17U & 0x7f0;
  lVar2 = -(ulong)uVar8;
  if (uVar8 != 0) {
    puVar1 = (undefined8 *)((long)auStack_e0 + (ulong)uVar8 + lVar2 + 0x30);
    *puVar1 = *puVar1;
  }
  lVar12 = (long)&local_a0 + lVar2;
  local_90 = 0;
  local_a4 = 0x4b0;
  if (param_7 == (long *)0x0) {
    local_a4 = local_74;
  }
  local_98 = 0;
  local_8c = 0;
  local_a0 = param_7;
  local_60 = param_4;
  do {
    *(byte *)(param_5 + 3) = *(byte *)(param_5 + 3) & 0xf0;
    iVar13 = (int)lVar15;
    local_78 = iVar13;
    if (local_60 == 0x1a395100) {
      *(long *)((long)auStack_e0 + lVar2 + 0x30) = lVar15;
      uVar5 = local_5c;
      *(long *)((long)auStack_e0 + lVar2 + 0x28) = lVar12;
      uVar6 = local_58;
      *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = 0x7c4825;
      uVar8 = FUN_007c8920(param_1,0,uVar6,uVar5,1,0);
      iVar3 = local_78;
      uVar10 = (ulong)uVar8;
      if ((int)uVar8 < 1) goto LAB_007c4978;
      if ((*(ulong *)(local_68 + 8) & 0x900000) != 0) {
        *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c4967;
        uVar8 = FUN_007c9140(param_1,uVar10,lVar12,iVar3,0x4b0);
        uVar10 = (ulong)uVar8;
        if ((int)uVar8 < 0) goto LAB_007c4978;
      }
      uVar5 = local_5c;
      iVar3 = (int)uVar10;
      uVar8 = iVar3 + 3U & 0xfffffffc;
      if ((ulong)(long)iVar3 <= (ulong)(lVar15 - (int)(uVar8 - iVar3))) {
        *(ulong *)((long)auStack_e0 + lVar2 + 0x30) = (ulong)(iVar13 - uVar8);
        uVar6 = local_58;
        *(long *)((long)auStack_e0 + lVar2 + 0x28) = lVar12 + (int)uVar8;
        local_98 = lVar12 + (int)uVar8;
        *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = 0x7c4a7c;
        uVar8 = FUN_007c8920(param_1,0,uVar6,uVar5,0x1c,0);
        iVar13 = local_78;
        lVar15 = local_98;
        local_90 = uVar8;
        if ((int)uVar8 < 1) goto LAB_007c4ba0;
        if ((*(ulong *)(local_68 + 8) & 0x900000) != 0) {
          *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c4abd;
          uVar8 = FUN_007c9140(param_1,uVar8,lVar15,iVar13,0x4b0);
          local_90 = uVar8;
          goto LAB_007c46db;
        }
        goto LAB_007c46e3;
      }
      uVar10 = 0xffffffff;
      if (local_8c != 0) goto LAB_007c487e;
      lVar15 = 0x20000;
    }
    else {
      *(long *)((long)auStack_e0 + lVar2 + 0x30) = lVar15;
      uVar6 = local_58;
      uVar5 = local_5c;
      iVar13 = local_60;
      *(long *)((long)auStack_e0 + lVar2 + 0x28) = lVar12;
      *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = 0x7c46a5;
      uVar9 = FUN_007c8920(param_1,0,uVar6,uVar5,iVar13,0);
      iVar13 = local_78;
      uVar8 = local_a4;
      uVar10 = (ulong)uVar9;
      if (0 < (int)uVar9) {
        if ((*(ulong *)(local_68 + 8) & 0x900000) != 0) {
          *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c46d8;
          uVar10 = FUN_007c9140(param_1,uVar10,lVar12,iVar13,uVar8);
          uVar8 = (uint)uVar10;
          uVar10 = uVar10 & 0xffffffff;
LAB_007c46db:
          if ((int)uVar8 < 1) {
LAB_007c4ba0:
            uVar10 = (ulong)uVar8;
            goto LAB_007c4978;
          }
        }
LAB_007c46e3:
        plVar4 = local_a0;
        if ((local_a0 != (long *)0x0) && (*local_a0 != param_5)) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c4bfd;
          FUN_006e2220("answerp == NULL || (void *) *answerp == (void *) answer","res_query.c",0xd7,
                       "__res_context_query");
        }
        uVar11 = (ulong)local_74;
        *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = local_88;
        uVar8 = local_90;
        *(int **)((long)auStack_e0 + lVar2 + 0x28) = local_70;
        lVar15 = local_98;
        *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = local_80;
        *(long **)((long)auStack_e0 + lVar2 + 0x18) = local_50;
        *(long **)((long)auStack_e0 + lVar2 + 0x10) = plVar4;
        *(ulong *)((long)auStack_e0 + lVar2 + 8) = uVar11;
        *(undefined8 *)((long)auStack_e0 + lVar2) = 0x7c472d;
        uVar8 = FUN_007c6250(param_1,lVar12,uVar10,lVar15,uVar8,param_5);
        uVar10 = (ulong)uVar8;
        if (local_8c != 0) {
          *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c48e0;
          FUN_007104f0(lVar12);
        }
        if ((int)uVar8 < 0) {
          *(undefined4 *)(local_68 + 0x1f0) = 2;
          *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
          goto LAB_007c47dc;
        }
        if (plVar4 == (long *)0x0) {
          lVar15 = param_5;
          if ((local_50 != (long *)0x0) && (0xb < *local_70)) goto LAB_007c493b;
        }
        else {
          param_5 = *plVar4;
          lVar15 = param_5;
          if ((local_50 != (long *)0x0) && (0xb < *local_70)) {
LAB_007c493b:
            param_5 = *local_50;
            if ((int)uVar8 < 0xc) {
              lVar15 = param_5;
            }
          }
          if ((lVar15 == 0) || (param_5 == 0)) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c4bde;
            FUN_006e2220("(hp != NULL) && (hp2 != NULL)","res_query.c",0xf7,"__res_context_query");
          }
        }
        bVar7 = *(byte *)(lVar15 + 3) & 0xf;
        if ((*(byte *)(lVar15 + 3) & 0xf) == 0) {
          if (*(short *)(lVar15 + 6) != 0) goto LAB_007c47dc;
          bVar7 = *(byte *)(param_5 + 3) & 0xf;
          if ((*(byte *)(param_5 + 3) & 0xf) == 0) {
            if (*(short *)(param_5 + 6) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007c4aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (*(code *)((long)&DAT_00842440 + (long)DAT_00842440))
                                 ((code *)((long)&DAT_00842440 + (long)DAT_00842440));
              return uVar10;
            }
            goto LAB_007c47dc;
          }
          sVar14 = 0;
          switch(bVar7) {
          case 1:
          case 4:
            if (bVar7 == 0) {
              sVar14 = *(short *)(param_5 + 6);
              goto switchD_007c491d_caseD_1;
            }
            break;
          case 2:
            goto switchD_007c47b8_caseD_2;
          case 3:
switchD_007c47b8_caseD_3:
            if (sVar14 == 0) goto LAB_007c4b34;
            goto LAB_007c47dc;
          }
        }
        else if ((*(byte *)(param_5 + 3) & 0xf) == 0) {
          if (*(short *)(param_5 + 6) != 0) goto LAB_007c47dc;
          sVar14 = 0;
          switch(bVar7) {
          case 0:
            goto switchD_007c48cf_caseD_0;
          case 1:
          case 4:
switchD_007c491d_caseD_1:
            if (sVar14 != 0) goto LAB_007c47dc;
            break;
          case 2:
            goto switchD_007c47b8_caseD_2;
          case 3:
            goto LAB_007c4b34;
          }
        }
        else {
          switch(bVar7) {
          case 0:
switchD_007c48cf_caseD_0:
            if ((*(short *)(lVar15 + 6) == 0) && (*(short *)(param_5 + 6) == 0)) {
              uVar10 = 0xffffffff;
              *(undefined4 *)(local_68 + 0x1f0) = 4;
              *(undefined4 *)(in_FS_OFFSET + -0x18) = 4;
            }
            goto LAB_007c47dc;
          case 2:
switchD_007c47b8_caseD_2:
            uVar10 = 0xffffffff;
            *(undefined4 *)(local_68 + 0x1f0) = 2;
            *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
            goto LAB_007c47dc;
          case 3:
            if (bVar7 == 0) {
              sVar14 = *(short *)(lVar15 + 6);
              goto switchD_007c47b8_caseD_3;
            }
LAB_007c4b34:
            uVar10 = 0xffffffff;
            *(undefined4 *)(local_68 + 0x1f0) = 1;
            *(undefined4 *)(in_FS_OFFSET + -0x18) = 1;
            goto LAB_007c47dc;
          }
        }
        uVar10 = 0xffffffff;
        *(undefined4 *)(local_68 + 0x1f0) = 3;
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
        goto LAB_007c47dc;
      }
LAB_007c4978:
      if (local_8c != 0) {
LAB_007c487e:
        *(undefined4 *)(local_68 + 0x1f0) = 3;
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
        *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c48a2;
        FUN_007104f0(lVar12);
        goto LAB_007c47dc;
      }
      lVar15 = 0x10000;
      if (local_60 == 0x1a395100) {
        lVar15 = 0x20000;
      }
    }
    *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c49a3;
    lVar12 = FUN_007101b0(lVar15);
    local_8c = 1;
  } while (lVar12 != 0);
  *(undefined4 *)(local_68 + 0x1f0) = 3;
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
LAB_007c47dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)auStack_e0 + lVar2 + 0x30) = 0x7c4bbf;
    FUN_00771f60();
  }
  return uVar10;
}

