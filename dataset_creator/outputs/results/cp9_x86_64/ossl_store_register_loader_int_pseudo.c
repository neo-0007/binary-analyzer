
uint ossl_store_register_loader_int(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  
  pcVar5 = (char *)*param_1;
  iVar1 = ossl_ctype_check((int)*pcVar5,3);
  if (iVar1 == 0) {
    cVar6 = *pcVar5;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_00435d46;
    iVar1 = ossl_ctype_check((int)*pcVar5,3);
    if (iVar1 == 0) goto LAB_00435e6f;
    do {
      do {
        do {
          pcVar3 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          if (*pcVar3 == '\0') goto LAB_00435d46;
          iVar1 = ossl_ctype_check((int)*pcVar3,3);
        } while (iVar1 != 0);
LAB_00435e6f:
        iVar1 = ossl_isdigit((int)*pcVar5);
      } while (iVar1 != 0);
      cVar6 = *pcVar5;
      pcVar3 = strchr("+-.",(int)cVar6);
    } while (pcVar3 != (char *)0x0);
  }
  if (cVar6 != '\0') {
    ERR_new();
    ERR_set_debug("../crypto/store/store_register.c",0xb5,"ossl_store_register_loader_int");
    ERR_set_error(0x2c,0x6a,"scheme=%s",*param_1);
    return 0;
  }
LAB_00435d46:
  if ((((param_1[2] == 0) || (param_1[7] == 0)) || (param_1[8] == 0)) ||
     ((param_1[9] == 0 || (param_1[10] == 0)))) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/store/store_register.c",0xbd,"ossl_store_register_loader_int");
    ERR_set_error(0x2c,0x74,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_run_once(&registry_init,do_registry_init_ossl_);
    if ((iVar1 == 0) || (do_registry_init_ossl_ret_ == 0)) {
      ERR_new();
      ERR_set_debug("../crypto/store/store_register.c",0xc2,"ossl_store_register_loader_int");
      ERR_set_error(0x2c,0xc0100,0);
      return 0;
    }
    uVar2 = CRYPTO_THREAD_write_lock(registry_lock);
    if (uVar2 != 0) {
      if ((loader_register == 0) &&
         (loader_register = OPENSSL_LH_new(store_loader_hash,store_loader_cmp), loader_register == 0
         )) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
        lVar4 = OPENSSL_LH_insert(loader_register,param_1);
        if (lVar4 == 0) {
          iVar1 = OPENSSL_LH_error(loader_register);
          uVar2 = (uint)(iVar1 == 0);
        }
      }
      CRYPTO_THREAD_unlock(registry_lock);
    }
  }
  return uVar2;
}

