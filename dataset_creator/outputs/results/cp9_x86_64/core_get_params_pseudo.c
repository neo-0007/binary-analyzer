
undefined8 core_get_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar2 = OSSL_PARAM_locate(param_2,"openssl-version");
  if (lVar2 != 0) {
    OSSL_PARAM_set_utf8_ptr(lVar2,"3.0.2");
  }
  lVar2 = OSSL_PARAM_locate(param_2,"provider-name");
  if (lVar2 != 0) {
    OSSL_PARAM_set_utf8_ptr(lVar2,*(undefined8 *)(param_1 + 0x28));
  }
  lVar2 = OSSL_PARAM_locate(param_2,"module-filename");
  if (lVar2 != 0) {
    uVar3 = ossl_provider_module_path(param_1);
    OSSL_PARAM_set_utf8_ptr(lVar2,uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  iVar5 = 0;
  if (lVar2 != 0) {
    for (; iVar1 = OPENSSL_sk_num(lVar2), iVar5 < iVar1; iVar5 = iVar5 + 1) {
      puVar4 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x48),iVar5);
      lVar2 = OSSL_PARAM_locate(param_2,*puVar4);
      if (lVar2 != 0) {
        OSSL_PARAM_set_utf8_ptr(lVar2,puVar4[1]);
      }
      lVar2 = *(long *)(param_1 + 0x48);
    }
  }
  return 1;
}

