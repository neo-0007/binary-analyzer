
size_t EC_get_builtin_curves(EC_builtin_curve *r,size_t nitems)

{
  undefined **ppuVar1;
  int iVar2;
  char *pcVar3;
  EC_builtin_curve *pEVar4;
  
  if ((r != (EC_builtin_curve *)0x0) && (nitems != 0)) {
    ppuVar1 = &PTR_s_SECG_curve_over_a_112_bit_prime_f_0091e6b8;
    iVar2 = 0x2c0;
    if (0x52 < nitems) {
      nitems = 0x52;
    }
    pcVar3 = "SECG/WTLS curve over a 112 bit prime field";
    pEVar4 = r;
    while( true ) {
      pEVar4->nid = iVar2;
      pEVar4->comment = pcVar3;
      if (pEVar4 + 1 == r + nitems) break;
      iVar2 = *(int *)(ppuVar1 + -3);
      pcVar3 = *ppuVar1;
      ppuVar1 = ppuVar1 + 4;
      pEVar4 = pEVar4 + 1;
    }
  }
  return 0x52;
}

