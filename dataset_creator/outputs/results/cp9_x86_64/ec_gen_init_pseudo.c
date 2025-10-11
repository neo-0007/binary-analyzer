
undefined8 * ec_gen_init(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  undefined8 *puVar3;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  puVar3 = (undefined8 *)0x0;
  if ((iVar1 != 0) && ((param_2 & 0x87) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x88,"../providers/implementations/keymgmt/ec_kmgmt.c",0x3da);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar2;
      *(uint *)(ptr + 0xf) = param_2;
      *(undefined4 *)((long)ptr + 0x7c) = 0;
    }
    iVar1 = ec_gen_set_params(ptr,param_3);
    puVar3 = ptr;
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)0x0;
      CRYPTO_free(ptr);
    }
  }
  return puVar3;
}

