
undefined8
evp_pkey_ctx_setget_params_to_ctrl(EVP_PKEY_CTX *param_1,undefined4 param_2,ulong *param_3)

{
  int keytype;
  ulong uVar1;
  int optype;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  EVP_PKEY_CTX **ppEVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  byte bVar8;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  EVP_PKEY_CTX *local_d8;
  undefined4 local_d0;
  int local_cc;
  int local_bc;
  void *local_b8;
  ulong *local_a8;
  void *local_60;
  long local_40;
  
  bVar8 = 0;
  keytype = *(int *)(param_1 + 0x74);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  optype = *(int *)param_1;
  if (*(int *)param_1 == 0) {
    optype = -1;
  }
  if (param_3 != (ulong *)0x0) {
    for (; uVar1 = *param_3, uVar1 != 0; param_3 = param_3 + 5) {
      pcVar7 = default_fixup_args;
      ppEVar6 = &local_d8;
      for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
        *ppEVar6 = (EVP_PKEY_CTX *)0x0;
        ppEVar6 = ppEVar6 + (ulong)bVar8 * -2 + 1;
      }
      local_f8._8_8_ = 0;
      local_f8._0_8_ = uVar1;
      local_f8 = local_f8 << 0x40;
      local_108 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_118 = param_2;
      local_114 = keytype;
      local_110 = keytype;
      local_10c = optype;
      puVar3 = (undefined4 *)lookup_translation(&local_118,evp_pkey_ctx_translations,0x48);
      if (puVar3 != (undefined4 *)0x0) {
        pcVar7 = *(code **)(puVar3 + 0xe);
        if (pcVar7 == (code *)0x0) {
          pcVar7 = default_fixup_args;
        }
        local_d0 = *puVar3;
      }
      local_d8 = param_1;
      local_a8 = param_3;
      iVar2 = (*pcVar7)(7,puVar3,&local_d8);
      if ((iVar2 < 1) ||
         (iVar2 = EVP_PKEY_CTX_ctrl(param_1,keytype,optype,local_cc,local_bc,local_b8), iVar2 < 1))
      {
        if (local_60 != (void *)0x0) goto LAB_00513bb9;
LAB_00513d10:
        uVar4 = 0;
        goto LAB_00513ce5;
      }
      local_bc = iVar2;
      (*pcVar7)(8,puVar3,&local_d8);
      iVar2 = local_bc;
      if (local_60 != (void *)0x0) {
LAB_00513bb9:
        CRYPTO_free(local_60);
      }
      if (iVar2 < 1) goto LAB_00513d10;
    }
  }
  uVar4 = 1;
LAB_00513ce5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

