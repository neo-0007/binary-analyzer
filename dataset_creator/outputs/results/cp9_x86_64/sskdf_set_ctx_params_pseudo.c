
undefined8 sskdf_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 != 0) {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,uVar2);
    if ((iVar1 == 0) ||
       (iVar1 = ossl_prov_macctx_load_from_params(param_1 + 1,param_2,0,0,0,uVar2), iVar1 == 0)) {
LAB_0046994c:
      uVar2 = 0;
      goto LAB_0046994e;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"secret");
    if (((lVar3 != 0) || (lVar3 = OSSL_PARAM_locate_const(param_2,"key"), lVar3 != 0)) &&
       ((*(long *)(lVar3 + 0x10) != 0 && (*(long *)(lVar3 + 0x18) != 0)))) {
      CRYPTO_free((void *)param_1[5]);
      param_1[5] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 5,0,param_1 + 6);
      if (iVar1 == 0) goto LAB_0046994c;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"info");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      CRYPTO_free((void *)param_1[7]);
      param_1[7] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 7,0,param_1 + 8);
      if (iVar1 == 0) goto LAB_0046994c;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"salt");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      CRYPTO_free((void *)param_1[9]);
      param_1[9] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 9,0,param_1 + 10);
      if (iVar1 == 0) goto LAB_0046994c;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"maclen");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar3,&local_38);
      if ((iVar1 == 0) || (local_38 == 0)) goto LAB_0046994c;
      param_1[0xb] = local_38;
    }
  }
  uVar2 = 1;
LAB_0046994e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

