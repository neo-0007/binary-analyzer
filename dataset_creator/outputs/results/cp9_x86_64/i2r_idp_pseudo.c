
undefined8 i2r_idp(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_4;
  if (*param_2 != 0) {
    print_distpoint_isra_0(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    BIO_printf(param_3,"%*sOnly User Certificates\n",uVar1,&DAT_008343a2);
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    BIO_printf(param_3,"%*sOnly CA Certificates\n",uVar1,&DAT_008343a2);
  }
  if (0 < (int)param_2[3]) {
    BIO_printf(param_3,"%*sIndirect CRL\n",uVar1,&DAT_008343a2);
  }
  if (param_2[2] != 0) {
    print_reasons_isra_0(param_3,"Only Some Reasons",param_2[2],uVar1);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    BIO_printf(param_3,"%*sOnly Attribute Certificates\n",uVar1,&DAT_008343a2);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    BIO_printf(param_3,"%*s<EMPTY>\n",uVar1,&DAT_008343a2);
  }
  return 1;
}

