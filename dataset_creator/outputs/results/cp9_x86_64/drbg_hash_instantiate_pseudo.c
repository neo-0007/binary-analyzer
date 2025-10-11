
bool drbg_hash_instantiate
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x18));
  lVar3 = EVP_MD_CTX_new();
  *(long *)(lVar1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    iVar2 = hash_df_isra_0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),
                           lVar1 + 0x28,0xff,param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar2 != 0) {
      iVar2 = hash_df_isra_0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),
                             lVar1 + 0x97,0,lVar1 + 0x28,*(undefined8 *)(param_1 + 0xe8),0,0,0,0);
      return iVar2 != 0;
    }
  }
  return false;
}

