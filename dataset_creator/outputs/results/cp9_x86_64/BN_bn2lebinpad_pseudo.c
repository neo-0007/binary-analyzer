
undefined8 BN_bn2lebinpad(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = bn2binpad();
    return uVar1;
  }
  return 0xffffffff;
}

