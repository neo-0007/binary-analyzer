
undefined8 EVP_PKEY_eq(int *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == param_2) {
    return 1;
  }
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_2 + 0x18) == 0)) {
      if (*param_1 != *param_2) {
        return 0xffffffff;
      }
      lVar1 = *(long *)(param_1 + 2);
      if (lVar1 != 0) {
        if (*(code **)(lVar1 + 0x90) != (code *)0x0) {
          uVar2 = (**(code **)(lVar1 + 0x90))();
          if (0 < (int)uVar2) {
            if (*(code **)(*(long *)(param_1 + 2) + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00531bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x30))(param_1,param_2);
              return uVar2;
            }
            uVar2 = 0xfffffffe;
          }
          return uVar2;
        }
        if (*(code **)(lVar1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00531be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(lVar1 + 0x30))();
          return uVar2;
        }
      }
      return 0xfffffffe;
    }
    uVar2 = evp_pkey_cmp_any(param_1,param_2,7);
    return uVar2;
  }
  return 0;
}

