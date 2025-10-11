
undefined8 dsa_copy_parameters(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  DSA *pDVar3;
  
  pDVar3 = *(DSA **)(param_1 + 0x20);
  if (pDVar3 == (DSA *)0x0) {
    pDVar3 = DSA_new();
    *(DSA **)(param_1 + 0x20) = pDVar3;
    if (pDVar3 == (DSA *)0x0) {
      return 0;
    }
  }
  iVar2 = ossl_ffc_params_copy(&pDVar3->version,*(long *)(param_2 + 0x20) + 8);
  if (iVar2 == 0) {
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0xc0);
  *plVar1 = *plVar1 + 1;
  return 1;
}

