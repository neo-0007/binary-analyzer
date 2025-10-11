
undefined8 OSSL_trace_get_category_name(int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(trace_categories + 0x18);
  iVar2 = 0;
  lVar1 = 0;
  while( true ) {
    if (iVar2 == param_1) {
      return *(undefined8 *)(trace_categories + lVar1 * 0x10);
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0x12) break;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 4;
  }
  return 0;
}

