
undefined8 evp_pkey_cmp_any(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_40;
  long local_38;
  long local_30;
  
  lVar2 = *(long *)(param_1 + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_2 + 0x18);
  local_40 = 0;
  local_38 = 0;
  if (lVar2 == 0) {
    if (lVar4 != 0) {
      if (*param_1 != 0) {
        pcVar5 = OBJ_nid2sn(*param_1);
        iVar1 = EVP_KEYMGMT_is_a(*(undefined8 *)(param_2 + 0x18),pcVar5);
        if (iVar1 == 0) goto LAB_00531ab8;
        iVar1 = *param_2;
        lVar4 = *(long *)(param_2 + 0x18);
        if (iVar1 == 0) {
          lVar2 = *(long *)(param_1 + 0x18);
          goto LAB_00531a4a;
        }
        if (lVar4 == 0) goto LAB_00531a28;
        lVar2 = *(long *)(param_1 + 0x18);
      }
      lVar6 = *(long *)(param_1 + 0x1a);
      lVar7 = *(long *)(param_2 + 0x1a);
LAB_005319e9:
      local_40 = lVar2;
      local_38 = lVar4;
      if ((*(long *)(lVar4 + 0xb0) != 0) &&
         (lVar4 = evp_pkey_export_to_provider(param_1,0,&local_38,0), lVar4 != 0)) {
        local_40 = local_38;
        bVar8 = false;
        goto LAB_00531998;
      }
LAB_00531a68:
      lVar4 = lVar6;
      if (local_40 != 0) goto LAB_00531928;
    }
  }
  else {
    if (lVar4 != 0) {
      uVar3 = evp_keymgmt_util_match(param_1);
      goto LAB_00531968;
    }
    iVar1 = *param_2;
    if (iVar1 != 0) {
LAB_00531a28:
      pcVar5 = OBJ_nid2sn(iVar1);
      iVar1 = EVP_KEYMGMT_is_a(*(undefined8 *)(param_1 + 0x18),pcVar5);
      if (iVar1 == 0) {
LAB_00531ab8:
        uVar3 = 0xffffffff;
        goto LAB_00531968;
      }
      lVar2 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(param_2 + 0x18);
LAB_00531a4a:
      lVar6 = *(long *)(param_1 + 0x1a);
      lVar7 = *(long *)(param_2 + 0x1a);
      local_40 = lVar2;
      local_38 = lVar4;
      if (lVar4 != 0) goto LAB_005319e9;
      goto LAB_00531a68;
    }
    lVar4 = *(long *)(param_1 + 0x1a);
    lVar7 = *(long *)(param_2 + 0x1a);
    local_40 = lVar2;
LAB_00531928:
    if ((*(long *)(local_40 + 0xb0) == 0) ||
       (lVar2 = evp_pkey_export_to_provider(param_2,0,&local_40,0), lVar2 == 0)) {
      bVar8 = local_38 != local_40;
    }
    else {
      local_38 = local_40;
      bVar8 = false;
      lVar7 = lVar2;
    }
LAB_00531998:
    if ((local_40 != 0) && (!bVar8)) {
      uVar3 = evp_keymgmt_match(local_40,lVar4,lVar7,param_3);
      goto LAB_00531968;
    }
  }
  uVar3 = 0xfffffffe;
LAB_00531968:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

