
char dh_cb(int param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  DH *pDVar3;
  
  if (param_1 == 0) {
    pDVar3 = DH_new();
    *param_2 = (long)pDVar3;
    return (pDVar3 != (DH *)0x0) * '\x02';
  }
  if (param_1 == 2) {
    DH_free((DH *)*param_2);
    *param_2 = 0;
    cVar2 = '\x02';
  }
  else {
    cVar2 = '\x01';
    if (param_1 == 5) {
      lVar1 = *param_2;
      DH_clear_flags(lVar1,0xf000);
      DH_set_flags(lVar1,0);
      ossl_dh_cache_named_group(lVar1);
      *(long *)(lVar1 + 200) = *(long *)(lVar1 + 200) + 1;
      return '\x01';
    }
  }
  return cVar2;
}

