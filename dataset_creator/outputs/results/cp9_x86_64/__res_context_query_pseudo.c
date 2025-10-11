
/* WARNING: Removing unreachable block (ram,0x007bacc7) */

ulong __res_context_query(long *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                         long param_5,uint param_6,long *param_7,long *param_8,undefined8 param_9,
                         int *param_10,undefined8 param_11)

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
  void *__ptr;
  int iVar12;
  long lVar13;
  short sVar14;
  size_t __size;
  long in_FS_OFFSET;
  ulong auStack_e0 [6];
  size_t local_b0;
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
  
  __size = 0x220;
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
    __size = 0x110;
  }
  uVar8 = (int)__size + 0x17U & 0x7f0;
  lVar2 = -(ulong)uVar8;
  if (uVar8 != 0) {
    puVar1 = (undefined8 *)((long)&local_b0 + (ulong)uVar8 + lVar2);
    *puVar1 = *puVar1;
  }
  __ptr = (void *)((long)&local_a0 + lVar2);
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
    iVar12 = (int)__size;
    local_78 = iVar12;
    if (local_60 == 0x1a395100) {
      *(size_t *)((long)&local_b0 + lVar2) = __size;
      uVar5 = local_5c;
      *(void **)((long)auStack_e0 + lVar2 + 0x28) = __ptr;
      uVar6 = local_58;
      *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = 0x7baee5;
      uVar8 = __res_context_mkquery(param_1,0,uVar6,uVar5,1,0);
      iVar3 = local_78;
      uVar10 = (ulong)uVar8;
      if ((int)uVar8 < 1) goto LAB_007bb038;
      if ((*(ulong *)(local_68 + 8) & 0x900000) != 0) {
        *(undefined8 *)((long)&local_b0 + lVar2) = 0x7bb027;
        uVar8 = __res_nopt(param_1,uVar10,__ptr,iVar3,0x4b0);
        uVar10 = (ulong)uVar8;
        if ((int)uVar8 < 0) goto LAB_007bb038;
      }
      uVar5 = local_5c;
      iVar3 = (int)uVar10;
      uVar8 = iVar3 + 3U & 0xfffffffc;
      if ((ulong)(long)iVar3 <= __size - (long)(int)(uVar8 - iVar3)) {
        *(ulong *)((long)&local_b0 + lVar2) = (ulong)(iVar12 - uVar8);
        uVar6 = local_58;
        *(long *)((long)auStack_e0 + lVar2 + 0x28) = (long)__ptr + (long)(int)uVar8;
        local_98 = (long)__ptr + (long)(int)uVar8;
        *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = 0x7bb13c;
        uVar8 = __res_context_mkquery(param_1,0,uVar6,uVar5,0x1c,0);
        iVar12 = local_78;
        lVar13 = local_98;
        local_90 = uVar8;
        if ((int)uVar8 < 1) goto LAB_007bb260;
        if ((*(ulong *)(local_68 + 8) & 0x900000) != 0) {
          *(undefined8 *)((long)&local_b0 + lVar2) = 0x7bb17d;
          uVar8 = __res_nopt(param_1,uVar8,lVar13,iVar12,0x4b0);
          local_90 = uVar8;
          goto LAB_007bad9b;
        }
        goto LAB_007bada3;
      }
      uVar10 = 0xffffffff;
      if (local_8c != 0) goto LAB_007baf3e;
      __size = 0x20000;
    }
    else {
      *(size_t *)((long)&local_b0 + lVar2) = __size;
      uVar6 = local_58;
      uVar5 = local_5c;
      iVar12 = local_60;
      *(void **)((long)auStack_e0 + lVar2 + 0x28) = __ptr;
      *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = 0x7bad65;
      uVar9 = __res_context_mkquery(param_1,0,uVar6,uVar5,iVar12,0);
      iVar12 = local_78;
      uVar8 = local_a4;
      uVar10 = (ulong)uVar9;
      if (0 < (int)uVar9) {
        if ((*(ulong *)(local_68 + 8) & 0x900000) != 0) {
          *(undefined8 *)((long)&local_b0 + lVar2) = 0x7bad98;
          uVar10 = __res_nopt(param_1,uVar10,__ptr,iVar12,uVar8);
          uVar8 = (uint)uVar10;
          uVar10 = uVar10 & 0xffffffff;
LAB_007bad9b:
          if ((int)uVar8 < 1) {
LAB_007bb260:
            uVar10 = (ulong)uVar8;
            goto LAB_007bb038;
          }
        }
LAB_007bada3:
        plVar4 = local_a0;
        if ((local_a0 != (long *)0x0) && (*local_a0 != param_5)) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)((long)&local_b0 + lVar2) = &UNK_007bb2bd;
          __assert_fail("answerp == NULL || (void *) *answerp == (void *) answer","res_query.c",0xd7
                        ,"__res_context_query");
        }
        uVar11 = (ulong)local_74;
        *(undefined8 *)((long)&local_b0 + lVar2) = local_88;
        uVar8 = local_90;
        *(int **)((long)auStack_e0 + lVar2 + 0x28) = local_70;
        lVar13 = local_98;
        *(undefined8 *)((long)auStack_e0 + lVar2 + 0x20) = local_80;
        *(long **)((long)auStack_e0 + lVar2 + 0x18) = local_50;
        *(long **)((long)auStack_e0 + lVar2 + 0x10) = plVar4;
        *(ulong *)((long)auStack_e0 + lVar2 + 8) = uVar11;
        *(undefined8 *)((long)auStack_e0 + lVar2) = 0x7baded;
        uVar8 = __res_context_send(param_1,__ptr,uVar10,lVar13,uVar8,param_5);
        uVar10 = (ulong)uVar8;
        if (local_8c != 0) {
          *(undefined8 *)((long)&local_b0 + lVar2) = 0x7bafa0;
          free(__ptr);
        }
        if ((int)uVar8 < 0) {
          *(undefined4 *)(local_68 + 0x1f0) = 2;
          *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
          goto LAB_007bae9c;
        }
        if (plVar4 == (long *)0x0) {
          lVar13 = param_5;
          if ((local_50 != (long *)0x0) && (0xb < *local_70)) goto LAB_007baffb;
        }
        else {
          param_5 = *plVar4;
          lVar13 = param_5;
          if ((local_50 != (long *)0x0) && (0xb < *local_70)) {
LAB_007baffb:
            param_5 = *local_50;
            if ((int)uVar8 < 0xc) {
              lVar13 = param_5;
            }
          }
          if ((lVar13 == 0) || (param_5 == 0)) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)&local_b0 + lVar2) = 0x7bb29e;
            __assert_fail("(hp != NULL) && (hp2 != NULL)","res_query.c",0xf7,"__res_context_query");
          }
        }
        bVar7 = *(byte *)(lVar13 + 3) & 0xf;
        if ((*(byte *)(lVar13 + 3) & 0xf) == 0) {
          if (*(short *)(lVar13 + 6) != 0) goto LAB_007bae9c;
          bVar7 = *(byte *)(param_5 + 3) & 0xf;
          if ((*(byte *)(param_5 + 3) & 0xf) == 0) {
            if (*(short *)(param_5 + 6) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007bb1ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (*(code *)((long)&DAT_00838220 + (long)DAT_00838220))
                                 ((code *)((long)&DAT_00838220 + (long)DAT_00838220));
              return uVar10;
            }
            goto LAB_007bae9c;
          }
          sVar14 = 0;
          switch(bVar7) {
          case 1:
          case 4:
            if (bVar7 == 0) {
              sVar14 = *(short *)(param_5 + 6);
              goto switchD_007bafdd_caseD_1;
            }
            break;
          case 2:
            goto switchD_007bae78_caseD_2;
          case 3:
switchD_007bae78_caseD_3:
            if (sVar14 == 0) goto LAB_007bb1f4;
            goto LAB_007bae9c;
          }
        }
        else if ((*(byte *)(param_5 + 3) & 0xf) == 0) {
          if (*(short *)(param_5 + 6) != 0) goto LAB_007bae9c;
          sVar14 = 0;
          switch(bVar7) {
          case 0:
            goto switchD_007baf8f_caseD_0;
          case 1:
          case 4:
switchD_007bafdd_caseD_1:
            if (sVar14 != 0) goto LAB_007bae9c;
            break;
          case 2:
            goto switchD_007bae78_caseD_2;
          case 3:
            goto LAB_007bb1f4;
          }
        }
        else {
          switch(bVar7) {
          case 0:
switchD_007baf8f_caseD_0:
            if ((*(short *)(lVar13 + 6) == 0) && (*(short *)(param_5 + 6) == 0)) {
              uVar10 = 0xffffffff;
              *(undefined4 *)(local_68 + 0x1f0) = 4;
              *(undefined4 *)(in_FS_OFFSET + -0x18) = 4;
            }
            goto LAB_007bae9c;
          case 2:
switchD_007bae78_caseD_2:
            uVar10 = 0xffffffff;
            *(undefined4 *)(local_68 + 0x1f0) = 2;
            *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
            goto LAB_007bae9c;
          case 3:
            if (bVar7 == 0) {
              sVar14 = *(short *)(lVar13 + 6);
              goto switchD_007bae78_caseD_3;
            }
LAB_007bb1f4:
            uVar10 = 0xffffffff;
            *(undefined4 *)(local_68 + 0x1f0) = 1;
            *(undefined4 *)(in_FS_OFFSET + -0x18) = 1;
            goto LAB_007bae9c;
          }
        }
        uVar10 = 0xffffffff;
        *(undefined4 *)(local_68 + 0x1f0) = 3;
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
        goto LAB_007bae9c;
      }
LAB_007bb038:
      if (local_8c != 0) {
LAB_007baf3e:
        *(undefined4 *)(local_68 + 0x1f0) = 3;
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
        *(undefined8 *)((long)&local_b0 + lVar2) = 0x7baf62;
        free(__ptr);
        goto LAB_007bae9c;
      }
      __size = 0x10000;
      if (local_60 == 0x1a395100) {
        __size = 0x20000;
      }
    }
    *(undefined8 *)((long)&local_b0 + lVar2) = 0x7bb063;
    __ptr = malloc(__size);
    local_8c = 1;
  } while (__ptr != (void *)0x0);
  *(undefined4 *)(local_68 + 0x1f0) = 3;
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
LAB_007bae9c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_b0 + lVar2) = 0x7bb27f;
    __stack_chk_fail_local();
  }
  return uVar10;
}

