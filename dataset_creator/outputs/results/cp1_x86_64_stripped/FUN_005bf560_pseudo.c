
undefined2 * FUN_005bf560(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_0041aec0(0x70,"../crypto/bio/bio_addr.c",0x36);
  if (puVar1 == (undefined2 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_addr.c",0x39,"BIO_ADDR_new");
    FUN_0051f8f0(0x20,0xc0100,0);
  }
  else {
    *puVar1 = 0;
  }
  return puVar1;
}

