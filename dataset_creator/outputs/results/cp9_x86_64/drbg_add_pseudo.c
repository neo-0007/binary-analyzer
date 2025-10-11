
undefined8 drbg_add(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = RAND_get0_primary(0);
  if ((lVar1 != 0) && (0 < param_2)) {
    uVar2 = EVP_RAND_reseed(lVar1,0,0,0,param_1,(long)param_2);
    return uVar2;
  }
  return 0;
}

