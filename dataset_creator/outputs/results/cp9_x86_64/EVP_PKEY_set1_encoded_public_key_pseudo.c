
ulong EVP_PKEY_set1_encoded_public_key(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar3 = EVP_PKEY_set_octet_string_param(param_1,"encoded-pub-key",param_2,param_3);
    return uVar3;
  }
  if (((param_3 < 0x80000000) && (*(long *)(param_1 + 8) != 0)) &&
     (pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,9,param_3,param_2);
    return (ulong)(0 < iVar2);
  }
  return 0;
}

