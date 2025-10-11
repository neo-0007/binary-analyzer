
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0077c0b0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *param_4,long param_5,
            long param_6,int *param_7,int *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined8 *local_5e0;
  undefined1 local_5c8 [16];
  undefined8 local_5b8;
  long *local_5b0;
  int local_5a4;
  long *local_5a0;
  long local_598;
  long lStack_590;
  undefined1 *local_588;
  undefined1 local_580 [136];
  long local_4f8;
  long lStack_4f0;
  undefined1 *local_4e8;
  undefined1 local_4e0 [136];
  undefined1 *local_458;
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 0xfffffff7) != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("af == AF_INET || af == AF_INET6","nss_files/files-hosts.c",0x7b,
                 "gethostbyname3_multi");
  }
  local_598 = _DAT_0082eb70;
  lStack_590 = _UNK_0082eb78;
  plVar8 = (long *)param_4[3];
  local_4f8 = _DAT_0082eb70;
  lStack_4f0 = _UNK_0082eb78;
  local_450 = 0x400;
  lVar6 = *plVar8;
  local_588 = local_580;
  local_4e8 = local_4e0;
  local_458 = local_448;
  if (lVar6 != 0) {
    lVar11 = 8;
    lVar13 = 0x10;
    do {
      if (lVar13 != -1) {
        if (local_598 == lVar13) {
          cVar3 = FUN_007a2e50(&local_598,local_580,8);
          if (cVar3 == '\0') {
            if (local_588 != local_580) {
              FUN_007104f0();
            }
            lStack_590 = _UNK_0082eb88;
            local_598 = _DAT_0082eb80;
            plVar8 = (long *)param_4[3];
            local_588 = local_580;
          }
          else {
            *(long *)(local_588 + local_598 * 8) = lVar6;
            plVar8 = (long *)param_4[3];
            local_598 = local_598 + 1;
          }
        }
        else {
          *(long *)(local_588 + local_598 * 8) = lVar6;
          local_598 = local_598 + 1;
        }
      }
      lVar6 = *(long *)((long)plVar8 + lVar11);
      lVar11 = lVar11 + 8;
      lVar13 = lStack_590;
    } while (lVar6 != 0);
  }
  plVar8 = (long *)param_4[1];
  lVar6 = *plVar8;
  if (lVar6 != 0) {
    lVar13 = 0;
    do {
      if (lStack_4f0 == -1) break;
      if (lStack_4f0 == local_4f8) {
        cVar3 = FUN_007a2e50(&local_4f8,local_4e0,8);
        if (cVar3 == '\0') {
          if (local_4e8 != local_4e0) {
            FUN_007104f0();
          }
          lStack_4f0 = _UNK_0082eb88;
          local_4f8 = _DAT_0082eb80;
          plVar8 = (long *)param_4[1];
          local_4e8 = local_4e0;
        }
        else {
          *(long *)(local_4e8 + local_4f8 * 8) = lVar6;
          plVar8 = (long *)param_4[1];
          local_4f8 = local_4f8 + 1;
        }
      }
      else {
        *(long *)(local_4e8 + local_4f8 * 8) = lVar6;
        local_4f8 = local_4f8 + 1;
      }
      lVar13 = lVar13 + 1;
      lVar6 = plVar8[lVar13];
    } while (lVar6 != 0);
  }
  uVar9 = (param_5 + param_6) - (long)plVar8;
  if (CARRY8((ulong)plVar8,uVar9)) {
    FUN_007a3000();
  }
  local_5e0 = &local_5b8;
  local_5c8._8_8_ = (long)plVar8 + uVar9;
  local_5c8._0_8_ = plVar8;
LAB_0077c270:
  while (iVar4 = FUN_0077bbf0(param_1,local_5e0,local_458,local_450,param_7,param_8,param_3),
        uVar2 = local_5b8, iVar4 != -2) {
    if (iVar4 != 1) {
      lVar6 = local_4f8 + 1;
      lVar13 = local_4f8;
      local_5e0 = param_4;
LAB_0077c742:
      lVar11 = local_598;
      lVar5 = FUN_007a2f60(local_5c8,8,8,local_598 + 1);
      lVar6 = FUN_007a2f60(local_5c8,8,8,lVar6);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        thunk_FUN_00713a50(lVar5,local_588,lVar11 * 8);
        *(undefined8 *)(lVar5 + lVar11 * 8) = 0;
        thunk_FUN_00713a50(lVar6,local_4e8,lVar13 * 8);
        *(undefined8 *)(lVar6 + lVar13 * 8) = 0;
        uVar10 = 1;
        local_5e0[3] = lVar5;
        local_5e0[1] = lVar6;
        goto LAB_0077c626;
      }
      goto LAB_0077c4e1;
    }
    iVar4 = thunk_FUN_007a30f0(param_2,local_5b8);
    plVar8 = local_5b0;
    if (iVar4 == 0) {
      lVar13 = *local_5a0;
      iVar4 = local_5a4;
      plVar12 = local_5a0;
      while (lVar13 != 0) {
LAB_0077c3c4:
        plVar12 = plVar12 + 1;
        if (param_3 == 2) {
          if (iVar4 != 4) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("tmp_result_buf.h_length == 4","nss_files/files-hosts.c",199,
                         "gethostbyname3_multi");
          }
          uVar14 = local_5c8._0_8_ + 3 & 0xfffffffffffffffc;
          uVar9 = uVar14 + 4;
          if (((ulong)local_5c8._0_8_ <= uVar14) && (3 < uVar9)) goto LAB_0077c35d;
LAB_0077c400:
          local_5c8 = (undefined1  [16])0x0;
LAB_0077c409:
          *param_7 = 0x22;
          *param_8 = -1;
          break;
        }
        if (iVar4 != 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("tmp_result_buf.h_length == 16","nss_files/files-hosts.c",0xcc,
                       "gethostbyname3_multi");
        }
        uVar14 = local_5c8._0_8_ + 3 & 0xfffffffffffffffc;
        uVar9 = uVar14 + 0x10;
        if ((uVar14 < (ulong)local_5c8._0_8_) || (uVar9 < 0x10)) goto LAB_0077c400;
LAB_0077c35d:
        if ((ulong)local_5c8._8_8_ < uVar9) goto LAB_0077c400;
        local_5c8._0_8_ = uVar9;
        if (uVar14 == 0) goto LAB_0077c409;
        thunk_FUN_00713a50(uVar14,lVar13,(long)iVar4);
        if (lStack_590 != -1) {
          if (lStack_590 == local_598) {
            cVar3 = FUN_007a2e50(&local_598,local_580,8);
            if (cVar3 == '\0') {
              if (local_588 != local_580) {
                FUN_007104f0();
              }
              lStack_590 = _UNK_0082eb88;
              local_598 = _DAT_0082eb80;
              local_588 = local_580;
            }
            else {
              *(ulong *)(local_588 + local_598 * 8) = uVar14;
              local_598 = local_598 + 1;
            }
          }
          else {
            *(ulong *)(local_588 + local_598 * 8) = uVar14;
            local_598 = local_598 + 1;
          }
        }
        lVar13 = *plVar12;
      }
      lVar6 = *local_5b0;
      plVar8 = local_5b0;
      while (lVar6 != 0) {
LAB_0077c438:
        plVar8 = plVar8 + 1;
        uVar7 = local_5c8._0_8_;
        local_5c8 = FUN_007a2fc0(local_5c8._0_8_,local_5c8._8_8_,lVar6);
        if (local_5c8._0_8_ == 0) {
          uVar7 = 0;
        }
        if (lStack_4f0 != -1) {
          if (lStack_4f0 == local_4f8) {
            cVar3 = FUN_007a2e50(&local_4f8,local_4e0,8);
            if (cVar3 == '\0') {
              if (local_4e8 != local_4e0) {
                FUN_007104f0();
              }
              lStack_4f0 = _UNK_0082eb88;
              local_4f8 = _DAT_0082eb80;
              local_4e8 = local_4e0;
            }
            else {
              *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
              local_4f8 = local_4f8 + 1;
            }
          }
          else {
            *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
            local_4f8 = local_4f8 + 1;
          }
        }
        lVar6 = *plVar8;
      }
      iVar4 = thunk_FUN_00712780(*param_4,uVar2);
      if (iVar4 != 0) {
        uVar7 = local_5c8._0_8_;
        local_5c8 = FUN_007a2fc0(local_5c8._0_8_,local_5c8._8_8_,uVar2);
        if (local_5c8._0_8_ == 0) {
          uVar7 = 0;
        }
        if (lStack_4f0 != -1) {
          if (lStack_4f0 == local_4f8) {
            cVar3 = FUN_007a2e50(&local_4f8,local_4e0,8);
            if (cVar3 == '\0') {
              if (local_4e8 != local_4e0) {
                FUN_007104f0();
              }
              local_4f8 = _DAT_0082eb80;
              lStack_4f0 = _UNK_0082eb88;
              lVar6 = 1;
              lVar13 = 0;
              local_4e8 = local_4e0;
              goto LAB_0077c722;
            }
            *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
            local_4f8 = local_4f8 + 1;
          }
          else {
            *(undefined8 *)(local_4e8 + local_4f8 * 8) = uVar7;
            local_4f8 = local_4f8 + 1;
          }
          goto LAB_0077c4b7;
        }
        lVar6 = local_4f8 + 1;
        lVar13 = local_4f8;
LAB_0077c722:
        *param_7 = 0xc;
        *param_8 = -1;
        goto LAB_0077c742;
      }
LAB_0077c4b7:
      if ((lStack_590 == -1) || (lStack_4f0 == -1)) {
        lVar6 = local_4f8 + 1;
        lVar13 = local_4f8;
        goto LAB_0077c722;
      }
      if (local_5c8._0_8_ == 0) {
LAB_0077c4e1:
        uVar10 = 0xfffffffe;
        *param_7 = 0x22;
        *param_8 = -1;
        if (local_458 != local_448) {
          FUN_007104f0();
        }
LAB_0077c511:
        if (local_588 != local_580) {
          FUN_007104f0();
        }
        if (local_4e8 != local_4e0) {
          FUN_007104f0();
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar10;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
    }
    else {
      lVar6 = *local_5b0;
      lVar13 = lVar6;
      plVar12 = local_5b0;
      while (lVar13 != 0) {
        iVar4 = thunk_FUN_007a30f0(param_2,lVar13);
        if (iVar4 == 0) {
          lVar13 = *local_5a0;
          plVar12 = local_5a0;
          iVar4 = local_5a4;
          if (lVar13 == 0) goto LAB_0077c438;
          goto LAB_0077c3c4;
        }
        plVar1 = plVar12 + 1;
        plVar12 = plVar12 + 1;
        lVar13 = *plVar1;
      }
    }
  }
  uVar10 = 0xfffffffe;
  if ((*param_8 == -1) && (*param_7 == 0x22)) {
    cVar3 = FUN_007a2dc0(&local_458);
    if (cVar3 != '\0') goto LAB_0077c270;
    *param_7 = 0xc;
  }
LAB_0077c626:
  if (local_458 != local_448) {
    FUN_007104f0();
  }
  goto LAB_0077c511;
}

