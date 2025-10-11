
undefined8
ossl_param_build_set_multi_key_bn(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = OPENSSL_sk_num(param_4);
  if (param_1 == 0) {
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        if (*(long *)(param_3 + uVar5 * 8) == 0) {
          return 1;
        }
        lVar4 = OSSL_PARAM_locate(param_2);
        if (lVar4 != 0) {
          uVar3 = OPENSSL_sk_value(param_4,uVar5 & 0xffffffff);
          iVar2 = OSSL_PARAM_set_BN(lVar4,uVar3);
          if (iVar2 == 0) {
            return 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != (long)iVar1);
    }
  }
  else if (0 < iVar1) {
    uVar5 = 0;
    do {
      if (*(long *)(param_3 + uVar5 * 8) == 0) {
        return 1;
      }
      uVar3 = OPENSSL_sk_value(param_4,uVar5 & 0xffffffff);
      iVar2 = OSSL_PARAM_BLD_push_BN(param_1,*(undefined8 *)(param_3 + uVar5 * 8),uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while ((long)iVar1 != uVar5);
  }
  return 1;
}

