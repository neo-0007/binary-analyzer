
undefined8 * gen_init(undefined8 param_1,ulong param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  BIGNUM *a;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  if ((param_2 & 3) == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x58,"../providers/implementations/keymgmt/rsa_kmgmt.c",0x1cd);
  if (ptr != (undefined8 *)0x0) {
    *ptr = uVar2;
    a = BN_new();
    ptr[4] = a;
    if (a != (BIGNUM *)0x0) {
      iVar1 = BN_set_word(a,0x10001);
      if (iVar1 != 0) {
        ptr[3] = 0x800;
        ptr[5] = 2;
        *(undefined4 *)(ptr + 2) = param_3;
        if (param_4 == 0) {
          return ptr;
        }
        iVar1 = rsa_gen_set_params_part_0(ptr,param_4);
        if (iVar1 != 0) {
          return ptr;
        }
      }
      a = (BIGNUM *)ptr[4];
    }
    BN_free(a);
  }
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}

