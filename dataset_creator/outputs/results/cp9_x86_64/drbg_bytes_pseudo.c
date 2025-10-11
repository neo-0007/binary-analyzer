
undefined8 drbg_bytes(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = RAND_get0_public(0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = EVP_RAND_generate(lVar1,param_1,(long)param_2,0,0,0,0);
  }
  return uVar2;
}

