
int evp_pkey_ctx_ctrl_str_to_param(int *param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  code *pcVar5;
  int **ppiVar6;
  long in_FS_OFFSET;
  undefined4 local_168;
  int local_164;
  int local_160;
  int local_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  int *local_d8;
  int local_d0;
  ulong local_c8;
  uint local_c0;
  undefined4 local_bc;
  char *local_b8;
  undefined1 *local_a8;
  void *local_60;
  long local_40;
  
  local_164 = param_1[0x1d];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158._8_8_ = 0;
  local_158._0_8_ = param_2;
  local_158 = local_158 << 0x40;
  local_148._8_8_ = 0;
  local_148._0_8_ = param_2;
  ppiVar6 = &local_d8;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *ppiVar6 = (int *)0x0;
    ppiVar6 = ppiVar6 + 1;
  }
  local_15c = *param_1;
  local_168 = 2;
  local_138 = (undefined1  [16])0x0;
  if (local_15c == 0) {
    local_15c = -1;
  }
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_160 = local_164;
  piVar2 = (int *)lookup_translation(&local_168,evp_pkey_ctx_translations,0x48);
  if (piVar2 == (int *)0x0) {
    local_d0 = 2;
    pcVar5 = default_fixup_args;
  }
  else {
    pcVar5 = *(code **)(piVar2 + 0xe);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = default_fixup_args;
    }
    local_d0 = *piVar2;
    local_c0 = (uint)(local_148._0_8_ != 0);
  }
  local_c8 = param_2;
  sVar3 = strlen(param_3);
  local_bc = (undefined4)sVar3;
  local_a8 = local_128;
  local_d8 = param_1;
  local_b8 = param_3;
  iVar1 = (*pcVar5)(4,piVar2,&local_d8);
  if ((0 < iVar1) &&
     ((local_d0 != 2 || (iVar1 = evp_pkey_ctx_set_params_strict(param_1,local_a8), 0 < iVar1)))) {
    iVar1 = (*pcVar5)(5,piVar2,&local_d8);
  }
  if (local_60 != (void *)0x0) {
    CRYPTO_free(local_60);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

