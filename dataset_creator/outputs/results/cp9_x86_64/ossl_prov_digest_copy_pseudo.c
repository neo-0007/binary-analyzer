
undefined8 ossl_prov_digest_copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ENGINE *e;
  
  if ((param_2[1] != 0) && (uVar2 = EVP_MD_up_ref(), (int)uVar2 == 0)) {
    return uVar2;
  }
  e = (ENGINE *)param_2[2];
  if (e != (ENGINE *)0x0) {
    iVar1 = ENGINE_init(e);
    if (iVar1 == 0) {
      EVP_MD_free(param_2[1]);
      return 0;
    }
    e = (ENGINE *)param_2[2];
  }
  uVar2 = *param_2;
  param_1[2] = e;
  *param_1 = uVar2;
  param_1[1] = param_2[1];
  return 1;
}

