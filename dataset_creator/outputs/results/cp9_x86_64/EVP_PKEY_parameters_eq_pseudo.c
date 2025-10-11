
undefined8 EVP_PKEY_parameters_eq(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) || (*(long *)(param_2 + 0x18) != 0)) {
    uVar1 = evp_pkey_cmp_any(param_1,param_2,4);
    return uVar1;
  }
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(long *)(param_1 + 2) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 2) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00531b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}

