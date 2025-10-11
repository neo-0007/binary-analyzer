
void EC_KEY_free(EC_KEY *key)

{
  EC_KEY *pEVar1;
  int iVar2;
  code *pcVar3;
  
  if (key == (EC_KEY *)0x0) {
    return;
  }
  LOCK();
  pEVar1 = key + 0x38;
  iVar2 = *(int *)pEVar1;
  *(int *)pEVar1 = *(int *)pEVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  if ((*(long *)key != 0) && (pcVar3 = *(code **)(*(long *)key + 0x18), pcVar3 != (code *)0x0)) {
    (*pcVar3)(key);
  }
  ENGINE_finish(*(ENGINE **)(key + 8));
  if ((*(long **)(key + 0x18) != (long *)0x0) &&
     (pcVar3 = *(code **)(**(long **)(key + 0x18) + 0x168), pcVar3 != (code *)0x0)) {
    (*pcVar3)(key);
  }
  CRYPTO_free_ex_data(8,key,(CRYPTO_EX_DATA *)(key + 0x40));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(key + 0x50));
  EC_GROUP_free(*(EC_GROUP **)(key + 0x18));
  EC_POINT_free(*(EC_POINT **)(key + 0x20));
  BN_clear_free(*(BIGNUM **)(key + 0x28));
  CRYPTO_free(*(void **)(key + 0x60));
  CRYPTO_clear_free(key,0x70,"../crypto/ec/ec_key.c",0x66);
  return;
}

