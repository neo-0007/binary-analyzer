
long ossl_provider_new(undefined8 param_1,char *param_2,undefined *param_3)

{
  undefined **ppuVar1;
  long lVar2;
  char *__s1;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = ossl_lib_ctx_get_data(param_1,1,provider_store_method);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    lVar5 = 0;
  }
  else {
    if (param_3 == (undefined *)0x0) {
      ppuVar7 = &ossl_predefined_providers;
      __s1 = ossl_predefined_providers;
      while (__s1 != (char *)0x0) {
        iVar4 = strcmp(__s1,param_2);
        if (iVar4 == 0) {
          param_3 = ppuVar7[2];
          puVar6 = ppuVar7[3];
          goto LAB_0041fc0b;
        }
        ppuVar1 = ppuVar7 + 5;
        ppuVar7 = ppuVar7 + 5;
        __s1 = *ppuVar1;
      }
      iVar4 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar5 + 0x20));
      if (iVar4 == 0) {
        lVar5 = 0;
        goto LAB_0041fc2c;
      }
      lVar3 = *(long *)(lVar5 + 0x38);
      puVar8 = *(undefined8 **)(lVar5 + 0x30);
      if (lVar3 != 0) {
        lVar9 = 0;
        do {
          iVar4 = strcmp((char *)*puVar8,param_2);
          if (iVar4 == 0) {
            param_3 = (undefined *)puVar8[2];
            puVar6 = (undefined *)puVar8[3];
            goto LAB_0041fd64;
          }
          puVar8 = puVar8 + 5;
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar3);
      }
      puVar6 = (undefined *)0x0;
LAB_0041fd64:
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
    }
    else {
      puVar6 = (undefined *)0x0;
    }
LAB_0041fc0b:
    lVar5 = provider_new(param_2,param_3,puVar6);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x50) = param_1;
      iVar4 = ERR_get_next_error_library();
      *(int *)(lVar5 + 0x60) = iVar4;
    }
  }
LAB_0041fc2c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

