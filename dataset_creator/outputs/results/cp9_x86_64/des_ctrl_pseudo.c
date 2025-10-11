
ulong des_ctrl(undefined8 param_1,int param_2,undefined8 param_3,DES_cblock *param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = RAND_priv_bytes(param_4,8);
  if (0 < iVar1) {
    DES_set_odd_parity(param_4);
  }
  return (ulong)(0 < iVar1);
}

