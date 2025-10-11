
bool ecx_key_print_constprop_0(BIO *param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char *format;
  ulong uVar5;
  
  uVar5 = (ulong)param_3;
  lVar1 = *(long *)(param_2 + 0x20);
  pcVar3 = OBJ_nid2ln(**(int **)(param_2 + 8));
  if (param_4 == 1) {
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) {
      format = "%*s<INVALID PRIVATE KEY>\n";
      goto LAB_005063c1;
    }
    iVar2 = BIO_printf(param_1,"%*s%s Private-Key:\n",uVar5,&DAT_008343a2,pcVar3);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = BIO_printf(param_1,"%*spriv:\n",uVar5,&DAT_008343a2);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = **(int **)(param_2 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      cVar4 = ' ';
    }
    else {
      cVar4 = (iVar2 != 0x40b) + '8';
    }
    iVar2 = ASN1_buf_print(param_1,*(undefined8 *)(lVar1 + 0x50),cVar4,param_3 + 4);
    if (iVar2 == 0) {
      return false;
    }
  }
  else {
    if (lVar1 == 0) {
      format = "%*s<INVALID PUBLIC KEY>\n";
LAB_005063c1:
      iVar2 = BIO_printf(param_1,format,uVar5,&DAT_008343a2,pcVar3);
      return 0 < iVar2;
    }
    iVar2 = BIO_printf(param_1,"%*s%s Public-Key:\n",uVar5,&DAT_008343a2,pcVar3);
    if (iVar2 < 1) {
      return false;
    }
  }
  iVar2 = BIO_printf(param_1,"%*spub:\n",uVar5,&DAT_008343a2);
  if (iVar2 < 1) {
    return false;
  }
  iVar2 = **(int **)(param_2 + 8);
  if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
    cVar4 = ' ';
  }
  else {
    cVar4 = (iVar2 != 0x40b) + '8';
  }
  iVar2 = ASN1_buf_print(param_1,lVar1 + 0x11,cVar4,param_3 + 4);
  return iVar2 != 0;
}

