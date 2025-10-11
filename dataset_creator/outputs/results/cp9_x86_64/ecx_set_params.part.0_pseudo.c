
undefined8 ecx_set_params_part_0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
  if (lVar2 == 0) {
LAB_00471398:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      uVar4 = 0;
      if (*(int *)(lVar2 + 8) != 4) goto LAB_0047133c;
      pcVar3 = *(char **)(lVar2 + 0x10);
      CRYPTO_free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      if (pcVar3 != (char *)0x0) {
        pcVar3 = CRYPTO_strdup(pcVar3,"../providers/implementations/keymgmt/ecx_kmgmt.c",0x17f);
        *(char **)(param_1 + 8) = pcVar3;
        if (pcVar3 == (char *)0x0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/keymgmt/ecx_kmgmt.c",0x181,
                        "set_property_query");
          ERR_set_error(0x39,0xc0100,0);
          goto LAB_0047133c;
        }
      }
    }
    uVar4 = 1;
  }
  else {
    local_38 = param_1 + 0x11;
    if (*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x58)) {
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,0x39,0);
      if (iVar1 != 0) {
        CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                          "../providers/implementations/keymgmt/ecx_kmgmt.c",0x198);
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
        *(undefined8 *)(param_1 + 0x50) = 0;
        goto LAB_00471398;
      }
    }
    uVar4 = 0;
  }
LAB_0047133c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

