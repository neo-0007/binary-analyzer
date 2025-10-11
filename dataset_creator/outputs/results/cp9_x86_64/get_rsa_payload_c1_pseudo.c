
undefined8 get_rsa_payload_c1(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
    uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    lVar3 = RSA_get0_iqmp(uVar2);
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

