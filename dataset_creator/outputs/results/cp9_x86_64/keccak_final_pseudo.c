
undefined8 keccak_final(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    if (param_4 != 0) {
      uVar1 = (**(code **)(param_1 + 0x198))(param_2,param_1);
    }
    *param_3 = *(undefined8 *)(param_1 + 0xd0);
  }
  return uVar1;
}

