
undefined8 * FUN_00618290(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x38,"../crypto/bio/bss_conn.c",0xf3);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bss_conn.c",0xf4,"BIO_CONNECT_new");
    FUN_0051f8f0(0x20,0xc0100,0);
  }
  else {
    *puVar1 = 0x10000000001;
  }
  return puVar1;
}

