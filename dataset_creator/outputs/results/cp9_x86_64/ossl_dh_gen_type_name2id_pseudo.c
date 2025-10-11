
undefined4 ossl_dh_gen_type_name2id(char *param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  iVar1 = -1;
  lVar4 = 0;
  ppuVar2 = &dhtype2id;
  if (param_2 == -1) goto LAB_00518213;
  do {
    ppuVar3 = ppuVar2;
    if (iVar1 == -1) goto LAB_00518213;
    while( true ) {
      lVar4 = lVar4 + 1;
      ppuVar2 = ppuVar3 + 2;
      if (lVar4 == 4) {
        return 0xffffffff;
      }
      iVar1 = *(int *)((long)ppuVar3 + 0x1c);
      if (param_2 != iVar1) break;
LAB_00518213:
      iVar1 = strcmp(*ppuVar2,param_1);
      ppuVar3 = ppuVar2;
      if (iVar1 == 0) {
        return (&DAT_008fcf28)[lVar4 * 4];
      }
    }
  } while( true );
}

