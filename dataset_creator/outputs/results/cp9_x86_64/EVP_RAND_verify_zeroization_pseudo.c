
undefined4 EVP_RAND_verify_zeroization(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x78) != (code *)0x0) {
    iVar1 = (**(code **)(lVar3 + 0x78))(param_1[1]);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = *param_1;
  }
  uVar2 = 0;
  if (*(code **)(lVar3 + 0xb8) != (code *)0x0) {
    uVar2 = (**(code **)(lVar3 + 0xb8))(param_1[1]);
    lVar3 = *param_1;
  }
  if (*(code **)(lVar3 + 0x80) != (code *)0x0) {
    (**(code **)(lVar3 + 0x80))(param_1[1]);
  }
  return uVar2;
}

