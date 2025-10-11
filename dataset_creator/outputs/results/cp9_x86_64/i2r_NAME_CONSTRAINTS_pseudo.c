
undefined8 i2r_NAME_CONSTRAINTS(undefined8 param_1,long *param_2,BIO *param_3,undefined4 param_4)

{
  long lVar1;
  
  do_i2r_name_constraints_constprop_0_isra_0(*param_2,param_3,param_4,"Permitted");
  lVar1 = param_2[1];
  if ((*param_2 != 0) && (lVar1 != 0)) {
    BIO_puts(param_3,"\n");
    lVar1 = param_2[1];
  }
  do_i2r_name_constraints_constprop_0_isra_0(lVar1,param_3,param_4,"Excluded");
  return 1;
}

