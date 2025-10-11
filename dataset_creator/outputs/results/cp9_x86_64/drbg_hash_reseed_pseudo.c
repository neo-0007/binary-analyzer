
void drbg_hash_reseed(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  void *__dest;
  void *__src;
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  __dest = (void *)(lVar1 + 0x28);
  __src = (void *)(lVar1 + 0x97);
  iVar2 = hash_df_isra_0(*(undefined8 *)(param_1 + 0xe8),lVar1,__src,1,__dest,
                         *(undefined8 *)(param_1 + 0xe8),param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    memcpy(__dest,__src,*(size_t *)(param_1 + 0xe8));
    hash_df_isra_0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),__src,0,__dest,
                   *(undefined8 *)(param_1 + 0xe8),0,0,0,0);
  }
  return;
}

