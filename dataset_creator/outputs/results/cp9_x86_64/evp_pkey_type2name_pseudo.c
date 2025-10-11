
char * evp_pkey_type2name(int param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_00903270;
  iVar3 = 6;
  lVar1 = 0;
  while( true ) {
    if (iVar3 == param_1) {
      return *(char **)(&UNK_00903268 + lVar1 * 0x10);
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0xc) break;
    iVar3 = *piVar4;
    piVar4 = piVar4 + 4;
  }
  pcVar2 = OBJ_nid2sn(param_1);
  return pcVar2;
}

