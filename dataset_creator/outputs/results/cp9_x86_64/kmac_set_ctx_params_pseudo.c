
bool kmac_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
LAB_004755f0:
    bVar3 = true;
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,&DAT_007dae2e);
    if (lVar2 == 0) {
LAB_004754f1:
      lVar2 = OSSL_PARAM_locate_const(param_2,"size");
      if (lVar2 == 0) {
LAB_00475534:
        lVar2 = OSSL_PARAM_locate_const(param_2,"key");
        if (lVar2 != 0) {
          iVar1 = kmac_setkey(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
          if (iVar1 == 0) goto LAB_004755d0;
        }
        lVar2 = OSSL_PARAM_locate_const(param_2,"custom");
        if (lVar2 == 0) goto LAB_004755f0;
        if (*(ulong *)(lVar2 + 0x18) < 0x101) {
          iVar1 = encode_string_constprop_0
                            (param_1 + 0x194,param_1 + 0x38,*(undefined8 *)(lVar2 + 0x10));
          bVar3 = iVar1 != 0;
          goto LAB_004755d2;
        }
        ERR_new();
        ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x1b3,"kmac_set_ctx_params");
        ERR_set_error(0x39,0x6f,0);
      }
      else {
        local_28 = 0;
        iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
        if (iVar1 != 0) {
          if (local_28 < 0x200000) {
            *(ulong *)(param_1 + 0x28) = local_28;
            goto LAB_00475534;
          }
          ERR_new();
          ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x1a8,"kmac_set_ctx_params")
          ;
          ERR_set_error(0x39,0xd9,0);
        }
      }
    }
    else {
      iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x40);
      if (iVar1 != 0) goto LAB_004754f1;
    }
LAB_004755d0:
    bVar3 = false;
  }
LAB_004755d2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

