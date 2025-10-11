
undefined4 EVP_RAND_nonce(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((*(code **)(*param_1 + 0x78) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 0x78))(param_1[1]), iVar1 == 0)) {
    return 0;
  }
  uVar2 = evp_rand_strength_locked(param_1);
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x68) == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (**(code **)(lVar3 + 0x68))(param_1[1],param_2,uVar2,param_3,param_3);
    if (lVar3 == 0) {
      uVar2 = evp_rand_generate_locked(param_1,param_2,param_3,uVar2,0,0);
      lVar3 = *param_1;
    }
    else {
      lVar3 = *param_1;
      uVar2 = 1;
    }
  }
  if (*(code **)(lVar3 + 0x80) != (code *)0x0) {
    (**(code **)(lVar3 + 0x80))(param_1[1]);
  }
  return uVar2;
}

