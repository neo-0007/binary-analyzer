
undefined8 *
ecx_gen_init(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x18,"../providers/implementations/keymgmt/ecx_kmgmt.c",0x1e1)
    ;
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar2;
      *(undefined4 *)(ptr + 2) = param_4;
      *(undefined4 *)((long)ptr + 0x14) = param_2;
      iVar1 = ecx_gen_set_params_part_0(ptr,param_3);
      if (iVar1 != 0) {
        return ptr;
      }
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}

