
undefined1  [16]
ossl_ffc_params_FIPS186_2_validate
          (undefined8 param_1,undefined8 *param_2,ulong param_3,undefined4 *param_4,
          undefined8 param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  if (((param_2 != (undefined8 *)0x0) && ((BIGNUM *)*param_2 != (BIGNUM *)0x0)) && (param_2[1] != 0)
     ) {
    iVar2 = BN_num_bits((BIGNUM *)*param_2);
    iVar3 = BN_num_bits((BIGNUM *)param_2[1]);
    auVar4._0_8_ = ossl_ffc_params_FIPS186_2_gen_verify
                             (param_1,param_2,0,param_3 & 0xffffffff,(long)iVar2,(long)iVar3,param_4
                              ,param_5);
    auVar4._8_8_ = param_4;
    return auVar4;
  }
  *param_4 = 0x800;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}

