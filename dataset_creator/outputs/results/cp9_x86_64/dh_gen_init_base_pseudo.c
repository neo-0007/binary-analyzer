
undefined8 * dh_gen_init_base(undefined8 param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  undefined8 *puVar3;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  puVar3 = (undefined8 *)0x0;
  if ((iVar1 != 0) && ((param_2 & 7) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x78,"../providers/implementations/keymgmt/dh_kmgmt.c",0x1c6);
    if (ptr != (undefined8 *)0x0) {
      *(uint *)(ptr + 2) = param_2;
      *ptr = uVar2;
      ptr[3] = 0x800;
      ptr[4] = 0xe0;
      ptr[10] = 0;
      *(int *)(ptr + 0xe) = param_4;
      *(uint *)((long)ptr + 0x3c) = (uint)(param_4 == 0x1000);
      *(undefined4 *)(ptr + 7) = 0xffffffff;
      ptr[8] = 0xffffffff00000002;
      *(undefined4 *)(ptr + 9) = 0;
    }
    iVar1 = dh_gen_set_params(ptr,param_3);
    puVar3 = ptr;
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)0x0;
      CRYPTO_free(ptr);
    }
  }
  return puVar3;
}

