
undefined8 evp_pkey_public_check_combined(long param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_check.c",0x35,"evp_pkey_public_check_combined");
    ERR_set_error(6,0x9a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = try_provided_check(param_1,2,param_2);
    if ((int)uVar2 == -1) {
      if ((*piVar1 != 0) &&
         ((UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0xe8),
          UNRECOVERED_JUMPTABLE != (code *)0x0 ||
          ((*(long *)(piVar1 + 2) != 0 &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar1 + 2) + 0xe8),
           UNRECOVERED_JUMPTABLE != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x00533656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(piVar1);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("../crypto/evp/pmeth_check.c",0x4d,"evp_pkey_public_check_combined");
      ERR_set_error(6,0x96,0);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

