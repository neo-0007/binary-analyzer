
int pkey_ecd_ctrl(undefined8 param_1,int param_2,undefined8 param_3,EVP_MD *param_4)

{
  EVP_MD *pEVar1;
  
  if (param_2 != 1) {
    return (uint)(param_2 == 7) * 3 + -2;
  }
  if (param_4 != (EVP_MD *)0x0) {
    pEVar1 = EVP_md_null();
    if (param_4 != pEVar1) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecx_meth.c",0x372,"pkey_ecd_ctrl");
      ERR_set_error(0x10,0x8a,0);
      return 0;
    }
  }
  return 1;
}

