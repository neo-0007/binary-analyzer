
undefined8 check_dane_issuer(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0xf0) == 0) || ((*(byte *)(*(long *)(param_1 + 0xf0) + 0x28) & 5) == 0))
  {
    return 3;
  }
  if ((param_2 != 0) && (lVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98)), lVar1 != 0)) {
    uVar2 = dane_match_isra_0(*(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0xf0),lVar1,
                              param_2);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 != 0) {
      *(int *)(param_1 + 0x94) = param_2 + -1;
      return 1;
    }
  }
  return 3;
}

