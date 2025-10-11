
undefined8
rsa_verify_recover(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    if (param_2 != 0) {
      uVar2 = rsa_verify_recover_part_0(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar2;
    }
    iVar1 = RSA_size(*(RSA **)(param_1 + 0x10));
    *param_3 = (long)iVar1;
    uVar2 = 1;
  }
  return uVar2;
}

