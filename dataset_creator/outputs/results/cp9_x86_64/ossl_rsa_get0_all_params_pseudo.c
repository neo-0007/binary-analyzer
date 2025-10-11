
undefined8
ossl_rsa_get0_all_params(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != 0) {
    lVar2 = RSA_get0_p();
    if (lVar2 != 0) {
      uVar3 = RSA_get0_p(param_1);
      OPENSSL_sk_push(param_2,uVar3);
      uVar3 = RSA_get0_q(param_1);
      OPENSSL_sk_push(param_2,uVar3);
      uVar3 = RSA_get0_dmp1(param_1);
      OPENSSL_sk_push(param_3,uVar3);
      uVar3 = RSA_get0_dmq1(param_1);
      OPENSSL_sk_push(param_3,uVar3);
      uVar3 = RSA_get0_iqmp(param_1);
      OPENSSL_sk_push(param_4,uVar3);
      iVar1 = RSA_get_multi_prime_extra_count(param_1);
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          puVar4 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar5);
          OPENSSL_sk_push(param_2,*puVar4);
          OPENSSL_sk_push(param_3,puVar4[1]);
          OPENSSL_sk_push(param_4,puVar4[2]);
          iVar5 = iVar6;
        } while (iVar1 != iVar6);
      }
    }
    return 1;
  }
  return 0;
}

