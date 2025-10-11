
bool FUN_004d6950(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x58,"../crypto/dh/dh_pmeth.c",0x3a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_pmeth.c",0x3b,"pkey_dh_init");
    FUN_0051f8f0(5,0xc0100,0);
  }
  else {
    *(undefined4 *)((long)puVar1 + 0xc) = 0xffffffff;
    *puVar1 = 0x200000800;
    *(undefined1 *)((long)puVar1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x70) = 2;
    *(undefined8 **)(param_1 + 0x98) = puVar1;
    *(long *)(param_1 + 0x68) = (long)puVar1 + 0x24;
  }
  return puVar1 != (undefined8 *)0x0;
}

