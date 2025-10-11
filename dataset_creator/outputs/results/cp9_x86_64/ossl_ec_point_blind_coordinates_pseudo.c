
undefined8 ossl_ec_point_blind_coordinates(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x198) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e5283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x198))();
    return uVar1;
  }
  return 1;
}

