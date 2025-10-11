
EVP_PKEY_CTX *
int_ctx_new(undefined8 param_1,int *param_2,ENGINE *param_3,char *param_4,char *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_METHOD *pEVar3;
  char *pcVar4;
  ENGINE *e;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *pEVar5;
  long in_FS_OFFSET;
  long local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == -1) {
    if (param_2 != (int *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        param_4 = (char *)EVP_KEYMGMT_get0_name();
        goto LAB_00411afa;
      }
      iVar1 = *param_2;
LAB_00411b15:
      param_6 = iVar1;
      if (iVar1 != -1) goto LAB_00411a2d;
      if (param_3 != (ENGINE *)0x0) {
LAB_00411db0:
        ERR_new();
        pEVar5 = (EVP_PKEY_CTX *)0x0;
        ERR_set_debug("../crypto/evp/pmeth_lib.c",0xd6,"int_ctx_new");
        ERR_set_error(6,0x9c,0);
        goto LAB_00411ab8;
      }
LAB_00411b27:
      if (param_4 != (char *)0x0) goto LAB_00411b30;
LAB_00411cb9:
      e = (ENGINE *)0x0;
LAB_00411a5f:
      ERR_new();
      ERR_set_debug("../crypto/evp/pmeth_lib.c",0x13c,"int_ctx_new");
      ERR_set_error(6,0x9c,0);
      local_58 = 0;
      goto LAB_00411a98;
    }
LAB_00411afa:
    if (param_4 == (char *)0x0) {
      if (param_3 != (ENGINE *)0x0) goto LAB_00411db0;
      goto LAB_00411cb9;
    }
    iVar1 = evp_pkey_name2type(param_4);
    if (iVar1 != 0) goto LAB_00411b15;
    iVar1 = -1;
    if (param_3 != (ENGINE *)0x0) goto LAB_00411db0;
LAB_00411b30:
    pEVar3 = (EVP_PKEY_METHOD *)0x0;
    if (param_2 == (int *)0x0) {
LAB_00411d80:
      local_58 = EVP_KEYMGMT_fetch(param_1,param_4,param_5);
    }
    else {
LAB_00411b3c:
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_00411d80;
      iVar2 = EVP_KEYMGMT_up_ref();
      if (iVar2 == 0) {
        ERR_new();
        pEVar5 = (EVP_PKEY_CTX *)0x0;
        ERR_set_debug("../crypto/evp/pmeth_lib.c",0x114,"int_ctx_new");
        ERR_set_error(6,0x86,0);
        goto LAB_00411ab8;
      }
      local_58 = *(long *)(param_2 + 0x18);
    }
    if (local_58 != 0) {
      local_44 = 0;
      EVP_KEYMGMT_names_do_all(local_58,help_get_legacy_alg_type_from_keymgmt,&local_44);
      param_6 = iVar1;
      if (((local_44 != 0) && (param_6 = local_44, iVar1 != -1)) &&
         (param_6 = iVar1, local_44 != iVar1)) {
        ERR_new();
        pEVar5 = (EVP_PKEY_CTX *)0x0;
        ERR_set_debug("../crypto/evp/pmeth_lib.c",0x131,"int_ctx_new");
        ERR_set_error(6,0xc0103,0);
        EVP_KEYMGMT_free(local_58);
        goto LAB_00411ab8;
      }
      ctx = (EVP_PKEY_CTX *)CRYPTO_zalloc(0xb0,"../crypto/evp/pmeth_lib.c",0x13e);
      e = (ENGINE *)ctx;
      if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00411d41;
      param_3 = (ENGINE *)0x0;
      goto LAB_00411bd1;
    }
  }
  else {
LAB_00411a2d:
    if (param_3 == (ENGINE *)0x0) {
      iVar1 = param_6;
      if (param_2 != (int *)0x0) {
        if ((*(byte *)(param_2 + 0x13) & 1) == 0) {
          param_4 = OBJ_nid2sn(param_6);
        }
        e = *(ENGINE **)(param_2 + 6);
        if ((e != (ENGINE *)0x0) || (e = *(ENGINE **)(param_2 + 4), e != (ENGINE *)0x0))
        goto LAB_00411a39;
        e = ENGINE_get_pkey_meth_engine(param_6);
        if (e != (ENGINE *)0x0) goto LAB_00411a49;
        if ((*(byte *)(param_2 + 0x13) & 1) == 0) goto LAB_00411cf3;
        e = (ENGINE *)0x0;
        pEVar3 = EVP_PKEY_meth_find(param_6);
        if (param_4 == (char *)0x0) goto LAB_00411a56;
        goto LAB_00411b3c;
      }
      param_4 = OBJ_nid2sn(param_6);
      e = ENGINE_get_pkey_meth_engine(param_6);
      if (e != (ENGINE *)0x0) goto LAB_00411a49;
LAB_00411cf3:
      pEVar3 = (EVP_PKEY_METHOD *)evp_pkey_meth_find_added_by_application(param_6);
      if (pEVar3 == (EVP_PKEY_METHOD *)0x0) goto LAB_00411b27;
    }
    else {
      param_4 = (char *)0x0;
      e = param_3;
LAB_00411a39:
      iVar1 = ENGINE_init(e);
      if (iVar1 == 0) {
        ERR_new();
        pEVar5 = (EVP_PKEY_CTX *)0x0;
        ERR_set_debug("../crypto/evp/pmeth_lib.c",0xf1,"int_ctx_new");
        ERR_set_error(6,0x80026,0);
        goto LAB_00411ab8;
      }
LAB_00411a49:
      pEVar3 = ENGINE_get_pkey_meth(e,param_6);
LAB_00411a56:
      param_3 = e;
      if (pEVar3 == (EVP_PKEY_METHOD *)0x0) goto LAB_00411a5f;
    }
    ctx = (EVP_PKEY_CTX *)CRYPTO_zalloc(0xb0,"../crypto/evp/pmeth_lib.c",0x13e);
    local_58 = 0;
    e = param_3;
    if (ctx != (EVP_PKEY_CTX *)0x0) {
LAB_00411bd1:
      if (param_5 != (char *)0x0) {
        pcVar4 = CRYPTO_strdup(param_5,"../crypto/evp/pmeth_lib.c",0x14d);
        *(char **)(ctx + 0x10) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          CRYPTO_free(ctx);
          goto LAB_00411aa5;
        }
      }
      *(char **)(ctx + 0x18) = param_4;
      *(int *)(ctx + 0x74) = param_6;
      *(undefined8 *)(ctx + 8) = param_1;
      *(ENGINE **)(ctx + 0x80) = param_3;
      *(long *)(ctx + 0x20) = local_58;
      *(EVP_PKEY_METHOD **)(ctx + 0x78) = pEVar3;
      *(undefined4 *)ctx = 0;
      *(int **)(ctx + 0x88) = param_2;
      if (param_2 != (int *)0x0) {
        EVP_PKEY_up_ref(param_2);
      }
      pEVar5 = ctx;
      if (((pEVar3 != (EVP_PKEY_METHOD *)0x0) && (*(code **)(pEVar3 + 8) != (code *)0x0)) &&
         (iVar1 = (**(code **)(pEVar3 + 8))(ctx), iVar1 < 1)) {
        *(undefined8 *)(ctx + 0x78) = 0;
        pEVar5 = (EVP_PKEY_CTX *)0x0;
        EVP_PKEY_CTX_free(ctx);
      }
      goto LAB_00411ab8;
    }
LAB_00411d41:
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_lib.c",0x140,"int_ctx_new");
    ERR_set_error(6,0xc0100,0);
LAB_00411a98:
    if (e != (ENGINE *)0x0) {
      ENGINE_finish(e);
    }
LAB_00411aa5:
    EVP_KEYMGMT_free(local_58);
  }
  pEVar5 = (EVP_PKEY_CTX *)0x0;
LAB_00411ab8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pEVar5;
}

