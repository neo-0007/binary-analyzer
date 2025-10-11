
long sm2_gen_init(void)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  
  lVar1 = ec_gen_init();
  lVar3 = lVar1;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) == 0)) {
    pcVar2 = CRYPTO_strdup("sm2","../providers/implementations/keymgmt/ec_kmgmt.c",0x3f0);
    *(char **)(lVar1 + 8) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/ec_kmgmt.c",0x3f2,"sm2_gen_init");
      ERR_set_error(0x39,0xc0100,0);
      lVar3 = 0;
      ec_gen_cleanup_part_0(lVar1);
    }
  }
  return lVar3;
}

