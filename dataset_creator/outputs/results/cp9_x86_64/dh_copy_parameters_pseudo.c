
undefined8 dh_copy_parameters(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  DH *pDVar4;
  
  pDVar4 = *(DH **)(param_1 + 0x20);
  if (pDVar4 == (DH *)0x0) {
    pDVar4 = DH_new();
    *(DH **)(param_1 + 0x20) = pDVar4;
    if (pDVar4 == (DH *)0x0) {
      return 0;
    }
  }
  puVar1 = *(undefined1 **)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  iVar3 = ossl_ffc_params_copy(&pDVar4->p,lVar2 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  if (puVar1 != ossl_dhx_asn1_meth) {
    pDVar4->references = *(int *)(lVar2 + 0x68);
  }
  pDVar4[1].method_mont_p = (BN_MONT_CTX *)((long)&(pDVar4[1].method_mont_p)->ri + 1);
  return 1;
}

