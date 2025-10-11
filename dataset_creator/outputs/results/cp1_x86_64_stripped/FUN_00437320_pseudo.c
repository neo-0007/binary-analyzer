
long * FUN_00437320(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    FUN_0051f420();
    plVar1 = (long *)0x0;
    FUN_0051f540("../crypto/store/store_register.c",0x2a,"OSSL_STORE_LOADER_new");
    FUN_0051f8f0(0x2c,0x6a,0);
  }
  else {
    plVar1 = (long *)FUN_0041aec0(0xd0,"../crypto/store/store_register.c",0x2e);
    if (plVar1 == (long *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/store/store_register.c",0x2f,"OSSL_STORE_LOADER_new");
      FUN_0051f8f0(0x2c,0xc0100,0);
    }
    else {
      plVar1[1] = param_1;
      *plVar1 = param_2;
    }
  }
  return plVar1;
}

