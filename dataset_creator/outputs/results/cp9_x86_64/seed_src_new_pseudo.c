
undefined8 * seed_src_new(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)CRYPTO_zalloc(0x10,"../providers/implementations/rands/seed_src.c",0x37);
    if (puVar1 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/seed_src.c",0x39,"seed_src_new");
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      *puVar1 = param_1;
      *(undefined4 *)(puVar1 + 1) = 0;
    }
    return puVar1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/rands/seed_src.c",0x33,"seed_src_new");
  ERR_set_error(0x39,0xe5,0);
  return (undefined8 *)0x0;
}

