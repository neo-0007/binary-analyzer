
undefined8 kdf_sshkdf_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 == 0) {
LAB_00469018:
    uVar2 = 1;
  }
  else {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 1,param_2,uVar2);
    if (iVar1 != 0) {
      lVar3 = OSSL_PARAM_locate_const(param_2,"key");
      if (lVar3 != 0) {
        CRYPTO_clear_free(param_1[4],param_1[5],"../providers/implementations/kdfs/sshkdf.c",0x5c);
        param_1[4] = 0;
        param_1[5] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 4,0,param_1 + 5);
        if (iVar1 == 0) goto LAB_00468e96;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"xcghash");
      if (lVar3 != 0) {
        CRYPTO_clear_free(param_1[6],param_1[7],"../providers/implementations/kdfs/sshkdf.c",0x5c);
        param_1[6] = 0;
        param_1[7] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 6,0,param_1 + 7);
        if (iVar1 == 0) goto LAB_00468e96;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"session_id");
      if (lVar3 != 0) {
        CRYPTO_clear_free(param_1[9],param_1[10],"../providers/implementations/kdfs/sshkdf.c",0x5c);
        param_1[9] = 0;
        param_1[10] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 9,0,param_1 + 10);
        if (iVar1 == 0) goto LAB_00468e96;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"type");
      if (lVar3 == 0) goto LAB_00469018;
      iVar1 = OSSL_PARAM_get_utf8_string_ptr(lVar3,&local_28);
      if (((iVar1 != 0) && (local_28 != (char *)0x0)) && (*(long *)(lVar3 + 0x18) == 1)) {
        if ((byte)(*local_28 + 0xbfU) < 6) {
          *(char *)(param_1 + 8) = *local_28;
          goto LAB_00469018;
        }
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/sshkdf.c",0xaa,"kdf_sshkdf_set_ctx_params")
        ;
        ERR_set_error(0x39,0x8a,0);
      }
    }
LAB_00468e96:
    uVar2 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

