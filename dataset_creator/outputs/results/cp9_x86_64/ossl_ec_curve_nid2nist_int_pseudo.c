
undefined8 ossl_ec_curve_nid2nist_int(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(nist_curves + 0x18);
  iVar2 = 0x2d3;
  lVar1 = 0;
  while( true ) {
    if (iVar2 == param_1) {
      return *(undefined8 *)(nist_curves + lVar1 * 0x10);
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0xf) break;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 4;
  }
  return 0;
}

