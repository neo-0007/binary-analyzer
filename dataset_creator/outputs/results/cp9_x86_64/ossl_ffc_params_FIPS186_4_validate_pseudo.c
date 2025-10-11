
undefined1  [16]
ossl_ffc_params_FIPS186_4_validate
          (undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar4 = 0;
    if (((BIGNUM *)*param_2 != (BIGNUM *)0x0) && (param_2[1] != 0)) {
      uVar5 = param_3 & 0xffffffff;
      iVar2 = BN_num_bits((BIGNUM *)*param_2);
      iVar3 = BN_num_bits((BIGNUM *)param_2[1]);
      param_3 = param_4;
      uVar4 = ossl_ffc_params_FIPS186_4_gen_verify
                        (param_1,param_2,0,uVar5,(long)iVar2,(long)iVar3,param_4,param_5);
    }
    auVar6._8_8_ = param_3;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}

