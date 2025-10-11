
long FUN_00472070(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_004714c0();
  lVar3 = lVar1;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) == 0)) {
    lVar2 = FUN_0041c2c0(&DAT_007d50b2,"../providers/implementations/keymgmt/ec_kmgmt.c",0x3f0);
    *(long *)(lVar1 + 8) = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/ec_kmgmt.c",0x3f2,"sm2_gen_init");
      FUN_0051f8f0(0x39,0xc0100,0);
      lVar3 = 0;
      FUN_00471f80(lVar1);
    }
  }
  return lVar3;
}

