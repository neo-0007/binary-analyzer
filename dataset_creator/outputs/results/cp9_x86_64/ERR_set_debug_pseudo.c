
void ERR_set_debug(char *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  
  lVar3 = ossl_err_get_state_int();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x380);
    lVar1 = lVar3 + (long)iVar2 * 8;
    CRYPTO_free(*(void **)(lVar1 + 0x240));
    if (param_1 != (char *)0x0) {
      if (*param_1 == '\0') {
        param_1 = (char *)0x0;
      }
      else {
        param_1 = CRYPTO_strdup(param_1,"../crypto/err/err_local.h",0x3c);
      }
    }
    *(char **)(lVar1 + 0x240) = param_1;
    *(undefined4 *)(lVar3 + 0x2c0 + (long)iVar2 * 4) = param_2;
    CRYPTO_free(*(void **)(lVar1 + 0x300));
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      pcVar4 = CRYPTO_strdup(param_3,"../crypto/err/err_local.h",0x42);
      *(char **)(lVar1 + 0x300) = pcVar4;
      return;
    }
    *(undefined8 *)(lVar1 + 0x300) = 0;
  }
  return;
}

