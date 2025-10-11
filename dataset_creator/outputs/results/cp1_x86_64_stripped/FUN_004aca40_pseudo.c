
undefined4 * FUN_004aca40(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_0041aec0(0x60,"../crypto/bio/bio_meth.c",0x26);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = FUN_0041c2c0(param_2,"../crypto/bio/bio_meth.c",0x29);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      return puVar1;
    }
  }
  FUN_0041ad60(puVar1,"../crypto/bio/bio_meth.c",0x2a);
  FUN_0051f420();
  FUN_0051f540("../crypto/bio/bio_meth.c",0x2b,"BIO_meth_new");
  FUN_0051f8f0(0x20,0xc0100,0);
  return (undefined4 *)0x0;
}

