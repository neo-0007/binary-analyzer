
undefined8 chacha20_poly1305_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2,param_3,0,0);
    if (0 < iVar2) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}

