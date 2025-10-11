
long * FUN_0042d420(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0041aec0(0x28,"../crypto/rsa/rsa_mp.c",0x24);
  if (plVar1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_mp.c",0x25,"ossl_rsa_multip_info_new");
    FUN_0051f8f0(4,0xc0100,0);
    return (long *)0x0;
  }
  lVar2 = FUN_004b7700();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_004b7700(lVar2);
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_004b7700();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_004b7700();
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
    }
    lVar2 = *plVar1;
  }
  FUN_004b7fa0(lVar2);
  FUN_004b7fa0(plVar1[1]);
  FUN_004b7fa0(plVar1[2]);
  FUN_004b7fa0(plVar1[3]);
  FUN_0041ad60(plVar1,"../crypto/rsa/rsa_mp.c",0x38);
  return (long *)0x0;
}

