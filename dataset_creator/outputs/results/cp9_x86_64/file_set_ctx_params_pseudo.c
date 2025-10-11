
undefined8 file_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  X509_NAME *a;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_34;
  uchar *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
LAB_00480528:
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 2) == 1) {
LAB_00480449:
      lVar2 = OSSL_PARAM_locate_const(param_2,"expect");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 8);
        if (iVar1 == 0) goto LAB_00480560;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"subject");
      if (lVar2 == 0) goto LAB_00480528;
      local_30 = (uchar *)0x0;
      local_28 = 0;
      if (*(int *)(param_1 + 2) == 1) {
        iVar1 = OSSL_PARAM_get_octet_string_ptr(lVar2,&local_30,&local_28);
        if (iVar1 != 0) {
          a = d2i_X509_NAME((X509_NAME **)0x0,&local_30,local_28);
          if (a != (X509_NAME *)0x0) {
            uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
            uVar3 = X509_NAME_hash_ex(a,uVar3,0,&local_34);
            BIO_snprintf((char *)((long)param_1 + 0x24),9,"%08lx",uVar3);
            X509_NAME_free(a);
            if (local_34 != 0) goto LAB_00480528;
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0x167,
                      "file_set_ctx_params");
        ERR_set_error(0x39,0xde,0);
      }
    }
    else {
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 == 0) {
LAB_004803ff:
        lVar2 = OSSL_PARAM_locate_const(param_2,"input-type");
        if (lVar2 != 0) {
          CRYPTO_free((void *)param_1[5]);
          param_1[5] = 0;
          iVar1 = OSSL_PARAM_get_utf8_string(lVar2,param_1 + 5,0);
          if (iVar1 == 0) goto LAB_00480560;
        }
        goto LAB_00480449;
      }
      CRYPTO_free((void *)param_1[6]);
      param_1[6] = 0;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,param_1 + 6,0);
      if (iVar1 != 0) goto LAB_004803ff;
    }
LAB_00480560:
    uVar3 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

