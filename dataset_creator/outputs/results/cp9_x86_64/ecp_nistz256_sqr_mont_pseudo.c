
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_sqr_mont(undefined8 param_1,undefined8 *param_2)

{
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    __ecp_nistz256_sqr_montx(param_1,param_2 + -0x10,*param_2,0x80100,param_2[3]);
  }
  else {
    __ecp_nistz256_sqr_montq();
  }
  return;
}

