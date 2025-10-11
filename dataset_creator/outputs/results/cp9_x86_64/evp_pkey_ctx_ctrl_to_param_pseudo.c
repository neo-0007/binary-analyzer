
int evp_pkey_ctx_ctrl_to_param
              (long param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
              undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined1 auStack_154 [12];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  long local_d8;
  int local_d0;
  undefined4 local_cc;
  int local_bc;
  undefined8 local_b8;
  undefined1 *local_a8;
  void *local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  plVar4 = &local_d8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = 0;
    plVar4 = plVar4 + 1;
  }
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x74);
  }
  local_168._4_4_ = param_2;
  local_168._0_4_ = param_2;
  local_168._8_4_ = param_3;
  local_168._12_4_ = 0;
  local_168 = local_168 << 0x20;
  auStack_154 = SUB1612((undefined1  [16])0x0,4);
  local_158 = param_4;
  piVar2 = (int *)lookup_translation(local_168,evp_pkey_ctx_translations,0x48);
  if (piVar2 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x9fb,"evp_pkey_ctx_ctrl_to_param");
    iVar1 = -2;
    ERR_set_error(6,0x93,0);
    goto LAB_00516fe4;
  }
  if (((*(int **)(param_1 + 0x78) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0x78), iVar1 != piVar2[1])) && (iVar1 != piVar2[2])) {
    iVar1 = -1;
    goto LAB_00516fe4;
  }
  pcVar5 = *(code **)(piVar2 + 0xe);
  if (pcVar5 == (code *)0x0) {
    pcVar5 = default_fixup_args;
  }
  local_d0 = *piVar2;
  local_a8 = local_128;
  local_d8 = param_1;
  local_cc = param_4;
  local_bc = param_5;
  local_b8 = param_6;
  iVar1 = (*pcVar5)(1,piVar2,&local_d8);
  if (0 < iVar1) {
    if (local_d0 == 1) {
      iVar1 = evp_pkey_ctx_get_params_strict(param_1,local_a8);
LAB_00517023:
      if (iVar1 < 1) goto LAB_00516fc6;
    }
    else if (local_d0 == 2) {
      iVar1 = evp_pkey_ctx_set_params_strict(param_1,local_a8);
      goto LAB_00517023;
    }
    local_bc = iVar1;
    (*pcVar5)(2,piVar2,&local_d8);
    iVar1 = local_bc;
  }
LAB_00516fc6:
  if (local_60 != (void *)0x0) {
    CRYPTO_free(local_60);
  }
LAB_00516fe4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

