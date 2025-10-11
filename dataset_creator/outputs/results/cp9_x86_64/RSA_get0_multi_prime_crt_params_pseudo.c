
undefined8 RSA_get0_multi_prime_crt_params(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = RSA_get_multi_prime_extra_count();
  iVar1 = (int)uVar2;
  if (iVar1 != 0) {
    if ((param_2 != 0 || param_3 != 0) && (0 < iVar1)) {
      uVar4 = 0;
      do {
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),uVar4 & 0xffffffff);
        if (param_2 == 0) {
LAB_005579d1:
          *(undefined8 *)(param_3 + uVar4 * 8) = *(undefined8 *)(lVar3 + 0x10);
        }
        else {
          *(undefined8 *)(param_2 + uVar4 * 8) = *(undefined8 *)(lVar3 + 8);
          if (param_3 != 0) goto LAB_005579d1;
        }
        uVar4 = uVar4 + 1;
      } while ((long)iVar1 != uVar4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

