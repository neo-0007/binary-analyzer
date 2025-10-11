
BIO * OSSL_HTTP_transfer(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                        undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined4 param_12,undefined8 param_13,undefined8 param_14,
                        undefined8 param_15,undefined8 param_16,undefined4 param_17,
                        undefined8 param_18,undefined4 param_19,undefined4 param_20)

{
  int iVar1;
  BIO *pBVar2;
  long lVar3;
  undefined8 uVar4;
  BIO *a;
  
  if (param_1 == (long *)0x0) {
    lVar3 = OSSL_HTTP_open(param_2,param_3,param_6,param_7,param_5,param_8,param_9,param_10,param_11
                           ,param_12,param_19);
    if (lVar3 == 0) {
      return (BIO *)0x0;
    }
LAB_005f8544:
    param_19 = 0xffffffff;
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      pBVar2 = (BIO *)0x0;
      lVar3 = OSSL_HTTP_open(param_2,param_3,param_6,param_7,param_5,param_8,param_9,param_10,
                             param_11,param_12,param_19);
      if (lVar3 == 0) goto LAB_005f84d0;
      goto LAB_005f8544;
    }
  }
  iVar1 = OSSL_HTTP_set1_request
                    (lVar3,param_4,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                     param_20);
  if ((iVar1 == 0) || (pBVar2 = (BIO *)OSSL_HTTP_exchange(lVar3,0), pBVar2 == (BIO *)0x0)) {
    uVar4 = 0;
    a = (BIO *)0x0;
LAB_005f84b9:
    iVar1 = OSSL_HTTP_close(lVar3,uVar4);
    lVar3 = 0;
    pBVar2 = a;
    if (iVar1 == 0) {
      pBVar2 = (BIO *)0x0;
      BIO_free(a);
    }
  }
  else {
    iVar1 = OSSL_HTTP_is_alive(lVar3);
    if (iVar1 == 0) {
      uVar4 = 1;
      a = pBVar2;
      goto LAB_005f84b9;
    }
  }
  if (param_1 == (long *)0x0) {
    return pBVar2;
  }
LAB_005f84d0:
  *param_1 = lVar3;
  return pBVar2;
}

