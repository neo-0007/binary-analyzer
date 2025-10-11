
BIGNUM * BN_lebin2bn(long param_1,int param_2,BIGNUM *param_3)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  BIGNUM *a;
  
  a = (BIGNUM *)0x0;
  if ((param_3 == (BIGNUM *)0x0) && (param_3 = BN_new(), a = param_3, param_3 == (BIGNUM *)0x0)) {
    return (BIGNUM *)0x0;
  }
  param_1 = param_1 + param_2;
  if (param_2 < 1) {
LAB_004b0bba:
    if (param_2 != 0) {
      uVar4 = param_2 - 1;
      uVar6 = uVar4 & 7;
      uVar7 = (uVar4 >> 3) + 1;
      uVar5 = (ulong)uVar7;
      lVar2 = bn_wexpand(param_3,uVar5);
      if (lVar2 == 0) {
        BN_free(a);
        return (BIGNUM *)0x0;
      }
      param_3->top = uVar7;
      uVar3 = 0;
      param_3->neg = 0;
      lVar2 = param_1 + ~(ulong)uVar4;
      do {
        while( true ) {
          pbVar1 = (byte *)(param_1 + -1);
          param_1 = param_1 + -1;
          uVar3 = uVar3 << 8 | (ulong)*pbVar1;
          if (uVar6 != 0) break;
          uVar5 = (ulong)((int)uVar5 - 1);
          uVar6 = 7;
          param_3->d[uVar5] = uVar3;
          uVar3 = 0;
          if (lVar2 == param_1) goto LAB_004b0c41;
        }
        uVar6 = uVar6 - 1;
      } while (lVar2 != param_1);
LAB_004b0c41:
      bn_correct_top(param_3);
      return param_3;
    }
  }
  else {
    do {
      if (*(char *)(param_1 + -1) != '\0') goto LAB_004b0bba;
      param_1 = param_1 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  param_3->top = 0;
  return param_3;
}

