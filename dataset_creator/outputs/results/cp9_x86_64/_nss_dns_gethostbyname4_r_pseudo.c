
/* WARNING: Removing unreachable block (ram,0x007b8d9f) */

uint _nss_dns_gethostbyname4_r
               (char *param_1,undefined8 param_2,void *param_3,undefined8 param_4,int *param_5,
               int *param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *pvVar9;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  puVar8 = auStack_a8;
  puVar6 = auStack_a8;
  local_98 = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = param_4;
  local_88 = param_3;
  local_80 = param_2;
  iVar1 = res_hnok();
  if (iVar1 == 0) {
    *param_6 = 1;
    uVar2 = 0;
    puVar6 = auStack_a8;
    goto LAB_007b8d49;
  }
  lVar4 = __resolv_context_get();
  if (lVar4 == 0) {
    uVar2 = 0xffffffff;
    *param_5 = *(int *)(in_FS_OFFSET + -0x58);
    *param_6 = -1;
    goto LAB_007b8d49;
  }
  pcVar5 = strchr(param_1,0x2e);
  puVar7 = auStack_a8;
  if (pcVar5 == (char *)0x0) {
    for (; puVar8 != auStack_a8; puVar8 = puVar8 + -0x1000) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    *(undefined8 *)(puVar8 + -0x418) = 0x7b9069;
    pcVar5 = (char *)__res_context_hostalias
                               (lVar4,param_1,(ulong)(puVar8 + -0x401) & 0xfffffffffffffff0,0x401);
    puVar7 = puVar8 + -0x410;
    if (pcVar5 != (char *)0x0) {
      puVar7 = puVar8 + -0x410;
      param_1 = pcVar5;
    }
  }
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  local_60 = (void *)0x0;
  local_a0 = (void *)((ulong)(puVar7 + -0x801) & 0xfffffffffffffff0);
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_a4 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  *(int **)(puVar7 + -0x820) = &local_70;
  *(int **)(puVar7 + -0x828) = &local_74;
  *(undefined4 **)(puVar7 + -0x830) = &local_78;
  *(void ***)(puVar7 + -0x838) = &local_60;
  *(void ***)(puVar7 + -0x840) = &local_68;
  *(undefined8 *)(puVar7 + -0x848) = 0x7b8e41;
  local_68 = local_a0;
  uVar2 = __res_context_search(lVar4,param_1,1,0x1a395100,local_a0,0x800);
  if ((int)uVar2 < 0) {
    iVar1 = *(int *)(in_FS_OFFSET + -0x58);
    if (iVar1 < 0x19) {
      if (iVar1 < 0x17) {
        uVar2 = 0;
        if (iVar1 != 3) goto LAB_007b8ec9;
        uVar2 = 0xfffffffe;
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
        *param_6 = 2;
        goto LAB_007b8e8b;
      }
      uVar2 = 0xffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
      *param_6 = -1;
    }
    else {
      uVar2 = -(uint)(iVar1 - 0x6eU < 2);
LAB_007b8ec9:
      iVar1 = *(int *)(in_FS_OFFSET + -0x18);
      *param_6 = iVar1;
      if (iVar1 == 2) {
LAB_007b8e8b:
        *param_5 = 0xb;
        goto joined_r0x007b8e98;
      }
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = local_a4;
  }
  else {
    local_6c = 1;
    local_58 = local_80;
    local_50 = local_88;
    local_48 = local_90;
    pvVar9 = local_60;
    iVar1 = local_74;
    if (uVar2 == 0) {
LAB_007b8f34:
      if ((pvVar9 != (void *)0x0) && (0 < iVar1)) {
        *(undefined4 **)(puVar7 + -0x820) = &local_6c;
        *(undefined8 *)(puVar7 + -0x828) = local_98;
        *(int **)(puVar7 + -0x830) = param_6;
        *(undefined8 *)(puVar7 + -0x838) = 0x7b8f70;
        uVar3 = gaih_getanswer_slice_constprop_0(pvVar9,iVar1,&local_58,&local_50,&local_48,param_5)
        ;
        if (uVar2 != 1) {
          if (uVar3 != 0) {
            uVar2 = uVar3;
          }
          if (uVar2 != 1) goto joined_r0x007b8e98;
        }
        if (((uVar3 == 0xfffffffe) && (*param_5 == 0x22)) && (*param_6 != 3)) goto LAB_007b9034;
      }
    }
    else {
      *(undefined4 **)(puVar7 + -0x820) = &local_6c;
      *(undefined8 *)(puVar7 + -0x828) = local_98;
      *(int **)(puVar7 + -0x830) = param_6;
      local_88 = local_60;
      local_80 = CONCAT44(local_80._4_4_,local_74);
      *(undefined8 *)(puVar7 + -0x838) = 0x7b8fff;
      uVar2 = gaih_getanswer_slice_constprop_0(local_68,uVar2,&local_58,&local_50,&local_48,param_5)
      ;
      pvVar9 = local_88;
      iVar1 = (int)local_80;
      if (uVar2 < 2) goto LAB_007b8f34;
      if (uVar2 != 0xfffffffe) goto joined_r0x007b8e98;
      if ((*param_5 != 0x22) || (*param_6 == 3)) goto LAB_007b8f34;
LAB_007b9034:
      uVar2 = 0xfffffffe;
    }
  }
joined_r0x007b8e98:
  if (local_70 != 0) {
    *(undefined8 *)(puVar7 + -0x818) = 0x7b8ef4;
    free(local_60);
  }
  puVar6 = puVar7 + -0x810;
  if (local_68 != local_a0) {
    *(undefined8 *)(puVar7 + -0x818) = 0x7b8eac;
    free(local_68);
  }
  *(undefined8 *)(puVar7 + -0x818) = 0x7b8eb4;
  __resolv_context_put(lVar4);
LAB_007b8d49:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_007b90bb;
    __stack_chk_fail_local();
  }
  return uVar2;
}

