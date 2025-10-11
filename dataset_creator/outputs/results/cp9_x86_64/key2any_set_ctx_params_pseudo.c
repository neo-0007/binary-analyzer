
bool key2any_set_ctx_params(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  lVar3 = OSSL_PARAM_locate_const(param_2,"cipher");
  lVar4 = OSSL_PARAM_locate_const(param_2,"properties");
  lVar5 = OSSL_PARAM_locate_const(param_2,"save-parameters");
  if (lVar3 != 0) {
    local_40 = 0;
    local_38 = 0;
    iVar1 = OSSL_PARAM_get_utf8_string_ptr(lVar3,&local_40);
    if ((iVar1 == 0) ||
       ((lVar4 != 0 && (iVar1 = OSSL_PARAM_get_utf8_string_ptr(lVar4,&local_38), iVar1 == 0)))) {
LAB_004544e8:
      bVar6 = false;
      goto LAB_004544c6;
    }
    EVP_CIPHER_free(param_1[2]);
    param_1[2] = 0;
    *(uint *)((long)param_1 + 0xc) = (uint)(local_40 != 0);
    if (local_40 != 0) {
      lVar3 = EVP_CIPHER_fetch(uVar2,local_40,local_38);
      param_1[2] = lVar3;
      if (lVar3 == 0) goto LAB_004544e8;
    }
  }
  bVar6 = true;
  if (lVar5 != 0) {
    iVar1 = OSSL_PARAM_get_int(lVar5,param_1 + 1);
    bVar6 = iVar1 != 0;
  }
LAB_004544c6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar6;
}

