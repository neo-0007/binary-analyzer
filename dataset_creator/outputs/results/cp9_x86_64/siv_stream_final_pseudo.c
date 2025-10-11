
undefined8 siv_stream_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 8))(param_1,param_2,0,0), iVar1 != 0)) {
    if (param_3 == (undefined8 *)0x0) {
      return 1;
    }
    *param_3 = 0;
    return 1;
  }
  return 0;
}

