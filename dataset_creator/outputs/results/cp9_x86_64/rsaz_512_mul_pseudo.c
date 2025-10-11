
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    uVar1 = __rsaz_512_mulx(param_1,param_2,*param_3);
    __rsaz_512_reducex(uVar1,param_2,param_5);
  }
  else {
    uVar1 = __rsaz_512_mul(param_1,param_4);
    __rsaz_512_reduce(uVar1);
  }
  __rsaz_512_subtract();
  return;
}

