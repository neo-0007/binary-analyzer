
EC_KEY * ossl_ec_key_new_method_int(undefined8 param_1,char *param_2,ENGINE *param_3)

{
  int iVar1;
  EC_KEY *key;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  key = (EC_KEY *)CRYPTO_zalloc(0x70,"../crypto/ec/ec_kmeth.c",0x54);
  if (key == (EC_KEY *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_kmeth.c",0x57,"ossl_ec_key_new_method_int");
    ERR_set_error(0x10,0xc0100,0);
    return (EC_KEY *)0x0;
  }
  *(undefined8 *)(key + 0x58) = param_1;
  if (param_2 == (char *)0x0) {
LAB_004e2681:
    LOCK();
    *(undefined4 *)(key + 0x38) = 1;
    UNLOCK();
    lVar3 = CRYPTO_THREAD_lock_new();
    *(long *)(key + 0x50) = lVar3;
    if (lVar3 != 0) {
      uVar4 = EC_KEY_get_default_method();
      *(undefined8 *)key = uVar4;
      if (param_3 == (ENGINE *)0x0) {
        param_3 = (ENGINE *)ENGINE_get_default_EC();
        *(ENGINE **)(key + 8) = param_3;
        if (param_3 != (ENGINE *)0x0) goto LAB_004e26c5;
LAB_004e26da:
        *(undefined4 *)(key + 0x10) = 1;
        *(undefined4 *)(key + 0x34) = 4;
        iVar1 = CRYPTO_new_ex_data(8,key,(CRYPTO_EX_DATA *)(key + 0x40));
        if (iVar1 != 0) {
          if ((*(code **)(*(long *)key + 0x10) == (code *)0x0) ||
             (iVar1 = (**(code **)(*(long *)key + 0x10))(key), iVar1 != 0)) {
            return key;
          }
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_kmeth.c",0x89,"ossl_ec_key_new_method_int");
          ERR_set_error(0x10,0xc0105,0);
        }
      }
      else {
        iVar1 = ENGINE_init(param_3);
        if (iVar1 == 0) {
          ERR_new();
          uVar4 = 0x6f;
        }
        else {
          *(ENGINE **)(key + 8) = param_3;
LAB_004e26c5:
          lVar3 = ENGINE_get_EC(param_3);
          *(long *)key = lVar3;
          if (lVar3 != 0) goto LAB_004e26da;
          ERR_new();
          uVar4 = 0x78;
        }
        ERR_set_debug("../crypto/ec/ec_kmeth.c",uVar4,"ossl_ec_key_new_method_int");
        ERR_set_error(0x10,0x80026,0);
      }
      goto LAB_004e275c;
    }
    ERR_new();
    uVar4 = 0x67;
  }
  else {
    pcVar2 = CRYPTO_strdup(param_2,"../crypto/ec/ec_kmeth.c",0x5d);
    *(char **)(key + 0x60) = pcVar2;
    if (pcVar2 != (char *)0x0) goto LAB_004e2681;
    ERR_new();
    uVar4 = 0x5f;
  }
  ERR_set_debug("../crypto/ec/ec_kmeth.c",uVar4,"ossl_ec_key_new_method_int");
  ERR_set_error(0x10,0xc0100,0);
LAB_004e275c:
  EC_KEY_free(key);
  return (EC_KEY *)0x0;
}

