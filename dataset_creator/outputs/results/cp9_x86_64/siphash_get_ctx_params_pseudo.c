
bool siphash_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"size");
  if (lVar2 != 0) {
    uVar3 = SipHash_hash_size(param_1 + 8);
    iVar1 = OSSL_PARAM_set_size_t(lVar2,uVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"c-rounds");
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar1 = 2;
    }
    iVar1 = OSSL_PARAM_set_uint(lVar2,iVar1);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"d-rounds");
  bVar4 = true;
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar1 = 4;
    }
    iVar1 = OSSL_PARAM_set_uint(lVar2,iVar1);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

