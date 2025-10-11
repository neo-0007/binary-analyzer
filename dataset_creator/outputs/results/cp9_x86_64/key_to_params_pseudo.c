
bool key_to_params(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return false;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (iVar1 = ossl_param_build_set_octet_string
                        (param_2,param_3,&DAT_007c4ad5,*(long *)(param_1 + 0x18),
                         *(undefined8 *)(param_1 + 0x20)), iVar1 == 0)) {
    return false;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = EVP_CIPHER_get0_name();
    iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"cipher",uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  bVar4 = true;
  if (*(ENGINE **)(param_1 + 0x38) != (ENGINE *)0x0) {
    pcVar3 = ENGINE_get_id(*(ENGINE **)(param_1 + 0x38));
    iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"engine",pcVar3);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

