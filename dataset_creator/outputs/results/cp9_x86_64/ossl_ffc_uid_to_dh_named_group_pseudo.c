
undefined1 * ossl_ffc_uid_to_dh_named_group(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(dh_named_groups + 0x38);
  iVar2 = 0x466;
  lVar1 = 0;
  while( true ) {
    if (param_1 == iVar2) {
      return dh_named_groups + lVar1 * 0x30;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0xe) break;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 0xc;
  }
  return (undefined1 *)0x0;
}

