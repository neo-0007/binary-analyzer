
undefined8 blake2_mac_set_ctx_params_part_0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"size");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
    if ((iVar1 == 0) || (0x1f < local_28 - 1U)) {
      ERR_new();
      ERR_set_debug("../providers/implementations/macs/blake2_mac_impl.c",0xcb,
                    "blake2_mac_set_ctx_params");
      ERR_set_error(0x39,0x71,0);
      uVar3 = 0;
      goto LAB_004739c2;
    }
    ossl_blake2s_param_set_digest_length(param_1 + 0x80);
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"key");
  if (lVar2 != 0) {
    uVar3 = blake2_setkey(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    if ((int)uVar3 == 0) goto LAB_004739c2;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"custom");
  if (lVar2 != 0) {
    if (8 < *(ulong *)(lVar2 + 0x18)) {
      ERR_new();
      ERR_set_debug("../providers/implementations/macs/blake2_mac_impl.c",0xdc,
                    "blake2_mac_set_ctx_params");
      ERR_set_error(0x39,0x6f,0);
      uVar3 = 0;
      goto LAB_004739c2;
    }
    ossl_blake2s_param_set_personal(param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10));
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"salt");
  uVar3 = 1;
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < 9) {
      ossl_blake2s_param_set_salt
                (param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10),*(ulong *)(lVar2 + 0x18));
      uVar3 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("../providers/implementations/macs/blake2_mac_impl.c",0xe8,
                    "blake2_mac_set_ctx_params");
      ERR_set_error(0x39,0x70,0);
      uVar3 = 0;
    }
  }
LAB_004739c2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

