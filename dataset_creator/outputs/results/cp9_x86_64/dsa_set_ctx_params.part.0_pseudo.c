
undefined8 dsa_set_ctx_params_part_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined2 local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
  uVar3 = 1;
  if (lVar2 == 0) goto LAB_0047aa98;
  local_148 = 0;
  local_178 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_188 = local_178;
  local_180 = local_138;
  lVar4 = OSSL_PARAM_locate_const(param_2,"properties");
  iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_188,0x32);
  if (iVar1 != 0) {
    if (lVar4 != 0) {
      iVar1 = OSSL_PARAM_get_utf8_string(lVar4,&local_180,0x100);
      if (iVar1 == 0) goto LAB_0047aac0;
    }
    iVar1 = dsa_setup_md(param_1,local_178,local_138);
    if (iVar1 != 0) {
      uVar3 = 1;
      goto LAB_0047aa98;
    }
  }
LAB_0047aac0:
  uVar3 = 0;
LAB_0047aa98:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

