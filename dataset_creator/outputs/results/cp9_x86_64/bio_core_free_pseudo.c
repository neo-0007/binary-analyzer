
bool bio_core_free(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ossl_lib_ctx_get_data(*param_1,0x11,bio_core_globals_method);
  if (lVar2 != 0) {
    BIO_set_init(param_1,0);
    pcVar1 = *(code **)(lVar2 + 0x30);
    uVar3 = BIO_get_data(param_1);
    (*pcVar1)(uVar3);
  }
  return lVar2 != 0;
}

