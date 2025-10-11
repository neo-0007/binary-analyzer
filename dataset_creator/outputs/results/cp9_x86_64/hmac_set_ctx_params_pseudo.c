
ulong hmac_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  void *__dest;
  EVP_MD *md;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 == 0) {
LAB_00474ab8:
    uVar4 = 1;
  }
  else {
    iVar1 = ossl_prov_digest_load_from_params(param_1 + 2,param_2,uVar2);
    if (iVar1 != 0) {
      lVar3 = OSSL_PARAM_locate_const(param_2,"digest-noinit");
      local_34 = 0;
      if (lVar3 == 0) {
LAB_00474990:
        lVar3 = OSSL_PARAM_locate_const(param_2,"digest-oneshot");
        local_34 = 0;
        if (lVar3 != 0) {
          uVar6 = 0;
LAB_004749b7:
          local_34 = 0;
          uVar4 = OSSL_PARAM_get_int(lVar3,&local_34);
          if ((int)uVar4 == 0) goto LAB_0047490f;
          if (local_34 == 0) {
            if (uVar6 == 0) goto LAB_004749e3;
          }
          else {
            uVar6 = uVar6 | 1;
          }
          goto LAB_004749d7;
        }
      }
      else {
        uVar4 = OSSL_PARAM_get_int(lVar3,&local_34);
        if ((int)uVar4 == 0) goto LAB_0047490f;
        if (local_34 == 0) goto LAB_00474990;
        uVar6 = 0x100;
        lVar3 = OSSL_PARAM_locate_const(param_2,"digest-oneshot");
        local_34 = 0;
        if (lVar3 != 0) goto LAB_004749b7;
LAB_004749d7:
        HMAC_CTX_set_flags((HMAC_CTX *)param_1[1],(long)(int)uVar6);
      }
LAB_004749e3:
      lVar3 = OSSL_PARAM_locate_const(param_2,"key");
      if (lVar3 == 0) {
LAB_00474a85:
        lVar3 = OSSL_PARAM_locate_const(param_2,"tls-data-size");
        if (lVar3 != 0) {
          iVar1 = OSSL_PARAM_get_size_t(lVar3,param_1 + 7);
          uVar4 = (ulong)(iVar1 != 0);
          goto LAB_0047490f;
        }
        goto LAB_00474ab8;
      }
      if (*(int *)(lVar3 + 8) == 5) {
        if (param_1[6] != 0) {
          CRYPTO_secure_clear_free
                    (param_1[5],param_1[6],"../providers/implementations/macs/hmac_prov.c",0x14a);
        }
        lVar5 = *(long *)(lVar3 + 0x18);
        if (lVar5 == 0) {
          lVar5 = 1;
        }
        __dest = (void *)CRYPTO_secure_malloc
                                   (lVar5,"../providers/implementations/macs/hmac_prov.c",0x14c);
        param_1[5] = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,*(void **)(lVar3 + 0x10),*(size_t *)(lVar3 + 0x18));
          param_1[6] = *(undefined8 *)(lVar3 + 0x18);
          md = (EVP_MD *)ossl_prov_digest_md(param_1 + 2);
          iVar1 = HMAC_Init_ex((HMAC_CTX *)param_1[1],*(void **)(lVar3 + 0x10),
                               *(int *)(lVar3 + 0x18),md,(ENGINE *)0x0);
          if (iVar1 != 0) goto LAB_00474a85;
        }
      }
    }
    uVar4 = 0;
  }
LAB_0047490f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

