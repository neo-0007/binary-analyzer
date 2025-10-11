
undefined8 * CTLOG_STORE_new_ex(undefined8 param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x18,"../crypto/ct/ct_log.c",0x69);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_log.c",0x6c,"CTLOG_STORE_new_ex");
    ERR_set_error(0x32,0xc0100,0);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  if (param_2 != (char *)0x0) {
    pcVar2 = CRYPTO_strdup(param_2,"../crypto/ct/ct_log.c",0x72);
    puVar1[1] = pcVar2;
    if (pcVar2 == (char *)0x0) {
      ERR_new();
      uVar4 = 0x74;
      goto LAB_00622571;
    }
  }
  lVar3 = OPENSSL_sk_new_null();
  puVar1[2] = lVar3;
  if (lVar3 != 0) {
    return puVar1;
  }
  ERR_new();
  uVar4 = 0x7b;
LAB_00622571:
  ERR_set_debug("../crypto/ct/ct_log.c",uVar4,"CTLOG_STORE_new_ex");
  ERR_set_error(0x32,0xc0100,0);
  CTLOG_STORE_free(puVar1);
  return (undefined8 *)0x0;
}

