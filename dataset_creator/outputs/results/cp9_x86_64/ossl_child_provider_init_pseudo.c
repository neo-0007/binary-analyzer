
undefined8
ossl_child_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    return 0;
  }
  pcVar4 = (code *)0x0;
  do {
    if (iVar1 == 4) {
      pcVar4 = *(code **)(param_2 + 2);
    }
    iVar1 = param_2[4];
    param_2 = param_2 + 4;
  } while (iVar1 != 0);
  if (pcVar4 != (code *)0x0) {
    uVar2 = (*pcVar4)();
    lVar3 = ossl_lib_ctx_get_data(uVar2,0x12,child_prov_ossl_ctx_method);
    if (lVar3 != 0) {
      uVar2 = (**(code **)(lVar3 + 0x38))(*(undefined8 *)(lVar3 + 8));
      *param_4 = uVar2;
      uVar2 = (**(code **)(lVar3 + 0x40))(*(undefined8 *)(lVar3 + 8));
      *param_3 = uVar2;
      return 1;
    }
  }
  return 0;
}

