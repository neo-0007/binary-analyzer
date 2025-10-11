
undefined8 * ossl_ec_group_new_ex(undefined8 param_1,char *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  BIGNUM *pBVar3;
  
  if (param_3 == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x23,"ossl_ec_group_new_ex");
    ERR_set_error(0x10,0x6c,0);
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_3 + 8) == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x27,"ossl_ec_group_new_ex");
    ERR_set_error(0x10,0xc0101,0);
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0xb8,"../crypto/ec/ec_lib.c",0x2b);
  if (ptr == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x2d,"ossl_ec_group_new_ex");
    ERR_set_error(0x10,0xc0100,0);
    return (undefined8 *)0x0;
  }
  ptr[0x15] = param_1;
  if (param_2 != (char *)0x0) {
    pcVar2 = CRYPTO_strdup(param_2,"../crypto/ec/ec_lib.c",0x33);
    ptr[0x16] = pcVar2;
    if (pcVar2 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x35,"ossl_ec_group_new_ex");
      ERR_set_error(0x10,0xc0100,0);
      pBVar3 = (BIGNUM *)ptr[2];
      goto LAB_004e2cfd;
    }
  }
  *ptr = param_3;
  if ((*param_3 & 2) == 0) {
    pBVar3 = BN_new();
    ptr[2] = pBVar3;
    if (pBVar3 == (BIGNUM *)0x0) goto LAB_004e2cfd;
    pBVar3 = BN_new();
    ptr[3] = pBVar3;
    if (pBVar3 != (BIGNUM *)0x0) goto LAB_004e2ca5;
  }
  else {
LAB_004e2ca5:
    *(undefined4 *)((long)ptr + 0x24) = 0;
    *(undefined4 *)((long)ptr + 0x2c) = 4;
    iVar1 = (**(code **)(param_3 + 8))(ptr);
    if (iVar1 != 0) {
      return ptr;
    }
  }
  pBVar3 = (BIGNUM *)ptr[2];
LAB_004e2cfd:
  BN_free(pBVar3);
  BN_free((BIGNUM *)ptr[3]);
  CRYPTO_free((void *)ptr[0x16]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}

