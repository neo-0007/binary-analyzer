
undefined8 get_rsa_payload_e8(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    return 0;
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,7);
  return uVar2;
}

