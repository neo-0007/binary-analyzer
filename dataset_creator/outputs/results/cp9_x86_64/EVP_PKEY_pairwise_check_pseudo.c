
undefined8 EVP_PKEY_pairwise_check(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_check.c",0xa6,"EVP_PKEY_pairwise_check");
    ERR_set_error(6,0x9a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = try_provided_check(param_1,3,0);
    if ((int)uVar2 == -1) {
      if ((*piVar1 != 0) &&
         ((UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0xe0),
          UNRECOVERED_JUMPTABLE != (code *)0x0 ||
          ((*(long *)(piVar1 + 2) != 0 &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(piVar1 + 2) + 0xe0),
           UNRECOVERED_JUMPTABLE != (code *)0x0)))))) {
                    /* WARNING: Could not recover jumptable at 0x005338fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(piVar1);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("../crypto/evp/pmeth_check.c",0xbe,"EVP_PKEY_pairwise_check");
      ERR_set_error(6,0x96,0);
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

