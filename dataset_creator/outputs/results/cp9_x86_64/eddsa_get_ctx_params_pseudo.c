
bool eddsa_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate(param_2,"algorithm-id");
    bVar3 = true;
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_octet_string
                        (lVar2,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118));
      bVar3 = iVar1 != 0;
    }
  }
  return bVar3;
}

