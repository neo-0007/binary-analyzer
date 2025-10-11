
void aes_wrap_dinit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    aes_wrap_init_part_0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

