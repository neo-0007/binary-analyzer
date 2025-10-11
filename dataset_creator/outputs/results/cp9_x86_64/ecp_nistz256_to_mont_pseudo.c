
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_to_mont
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    __ecp_nistz256_mul_montx(param_1,param_2 + -0x10,_DAT_005eb020,0x80100,param_5,*param_2);
  }
  else {
    __ecp_nistz256_mul_montq();
  }
  return;
}

