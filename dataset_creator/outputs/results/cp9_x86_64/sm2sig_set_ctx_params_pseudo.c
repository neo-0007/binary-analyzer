
undefined8 sm2sig_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_30;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_0047fb7b;
  uVar2 = 1;
  if (param_2 == 0) goto LAB_0047fb7d;
  lVar3 = OSSL_PARAM_locate_const(param_2,"distid");
  if (lVar3 == 0) {
LAB_0047fbd0:
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest-size");
    if (lVar3 != 0) {
      uVar2 = OSSL_PARAM_get_size_t(lVar3,&local_30);
      if (((int)uVar2 == 0) || (uVar2 = 0, *(long *)(param_1 + 0x170) != local_30))
      goto LAB_0047fb7d;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 != 0) {
      local_28 = (void *)0x0;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_28,0);
      if (iVar1 == 0) goto LAB_0047fb7b;
      iVar1 = sm2sig_set_mdname(param_1,local_28);
      if (iVar1 == 0) {
        CRYPTO_free(local_28);
        uVar2 = 0;
        goto LAB_0047fb7d;
      }
      CRYPTO_free(local_28);
    }
    uVar2 = 1;
  }
  else {
    local_30 = 0;
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,&local_30,0,&local_28);
      if (iVar1 != 0) {
        CRYPTO_free(*(void **)(param_1 + 0x178));
        *(long *)(param_1 + 0x178) = local_30;
        *(void **)(param_1 + 0x180) = local_28;
        goto LAB_0047fbd0;
      }
    }
LAB_0047fb7b:
    uVar2 = 0;
  }
LAB_0047fb7d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

