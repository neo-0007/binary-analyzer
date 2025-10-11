
undefined8 RAND_priv_bytes(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    uVar1 = RAND_priv_bytes_ex(0,param_1,(long)param_2,0);
    return uVar1;
  }
  return 0;
}

