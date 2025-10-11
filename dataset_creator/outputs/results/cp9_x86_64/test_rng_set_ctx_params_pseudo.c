
bool test_rng_set_ctx_params(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if (param_2 != 0) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"strength");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_uint(lVar3,param_1 + 0xc);
      if (iVar2 != 0) goto LAB_004794df;
LAB_0047950b:
      bVar4 = false;
      goto LAB_0047950d;
    }
LAB_004794df:
    lVar3 = OSSL_PARAM_locate_const(param_2,"test_entropy");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_octet_string(lVar3,&local_30,0,&local_28);
      if (iVar2 == 0) goto LAB_0047950b;
      CRYPTO_free(*(void **)(param_1 + 0x18));
      uVar1 = local_30;
      *(undefined8 *)(param_1 + 0x30) = 0;
      local_30 = 0;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"test_nonce");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_octet_string(lVar3,&local_30,0,&local_28);
      if (iVar2 == 0) goto LAB_0047950b;
      CRYPTO_free(*(void **)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = local_30;
      *(undefined8 *)(param_1 + 0x38) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"max_request");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x10);
      bVar4 = iVar2 != 0;
      goto LAB_0047950d;
    }
  }
  bVar4 = true;
LAB_0047950d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

