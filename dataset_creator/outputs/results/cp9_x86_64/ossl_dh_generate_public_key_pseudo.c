
bool ossl_dh_generate_public_key(BN_CTX *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  BIGNUM *a;
  BN_MONT_CTX *pBVar2;
  bool bVar3;
  
  a = BN_new();
  if (a == (BIGNUM *)0x0) {
    return false;
  }
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
    pBVar2 = (BN_MONT_CTX *)0x0;
  }
  else {
    pBVar2 = BN_MONT_CTX_set_locked
                       ((BN_MONT_CTX **)(param_2 + 0x88),(int)*(undefined8 *)(param_2 + 0xc0),
                        *(BIGNUM **)(param_2 + 8),param_1);
    if (pBVar2 == (BN_MONT_CTX *)0x0) {
      bVar3 = false;
      goto LAB_004c8bba;
    }
  }
  BN_with_flags(a,param_3,4);
  iVar1 = (**(code **)(*(long *)(param_2 + 0xb8) + 0x18))
                    (param_2,param_4,*(undefined8 *)(param_2 + 0x18),a,*(undefined8 *)(param_2 + 8),
                     param_1,pBVar2);
  bVar3 = iVar1 != 0;
LAB_004c8bba:
  BN_clear_free(a);
  return bVar3;
}

