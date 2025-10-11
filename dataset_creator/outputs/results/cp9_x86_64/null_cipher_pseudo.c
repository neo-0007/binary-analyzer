
undefined8
null_cipher(int *param_1,void *param_2,ulong *param_3,ulong param_4,void *param_5,ulong param_6)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    if ((*param_1 == 0) && (uVar1 = *(ulong *)(param_1 + 2), uVar1 != 0)) {
      if (param_6 < uVar1) {
        return 0;
      }
      param_6 = param_6 - uVar1;
      *(ulong *)(param_1 + 4) = (long)param_5 + param_6;
    }
    if (param_6 <= param_4) {
      if (param_5 != param_2) {
        memcpy(param_2,param_5,param_6);
      }
      *param_3 = param_6;
      return 1;
    }
  }
  return 0;
}

