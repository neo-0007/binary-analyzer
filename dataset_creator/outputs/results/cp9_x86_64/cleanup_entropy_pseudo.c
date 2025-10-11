
void cleanup_entropy(DRBG_CTX *ctx,uchar *out,size_t olen)

{
  int iVar1;
  
  if (*(long *)(ctx + 0x30) == 0) {
    ossl_prov_cleanup_entropy(*(undefined8 *)(ctx + 8));
    return;
  }
  if (*(long *)(ctx + 0x68) != 0) {
    iVar1 = ossl_drbg_lock_parent();
    if (iVar1 != 0) {
      (**(code **)(ctx + 0x68))(ctx,out,olen);
      if ((*(long *)(ctx + 0x30) != 0) && (*(code **)(ctx + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0059f5c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(ctx + 0x48))();
        return;
      }
    }
  }
  return;
}

