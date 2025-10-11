
undefined8 * dsa_gen_init(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  ptr = (undefined8 *)0x0;
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && ((param_2 & 7) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x68,"../providers/implementations/keymgmt/dsa_kmgmt.c",0x19a)
    ;
    if (ptr == (undefined8 *)0x0) {
LAB_0046e470:
      CRYPTO_free(ptr);
      return (undefined8 *)0x0;
    }
    *(uint *)(ptr + 2) = param_2;
    *ptr = uVar2;
    ptr[3] = 0x800;
    ptr[4] = 0xe0;
    ptr[7] = 0x2ffffffff;
    ptr[8] = 0xffffffff;
    if (param_3 != 0) {
      iVar1 = dsa_gen_set_params_part_0(ptr,param_3);
      if (iVar1 == 0) goto LAB_0046e470;
    }
  }
  return ptr;
}

