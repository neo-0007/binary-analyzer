
undefined8 * FUN_00511460(undefined8 param_1,uint param_2,byte param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x70,"../crypto/ec/ecx_key.c",0x11);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  *(byte *)(puVar1 + 2) = param_3 & 1 | *(byte *)(puVar1 + 2) & 0xfe;
  if (param_2 == 2) {
    puVar1[0xb] = 0x20;
  }
  else if (param_2 < 3) {
    puVar1[0xb] = (-(ulong)(param_2 == 0) & 0xffffffffffffffe8) + 0x38;
  }
  else if (param_2 == 3) {
    puVar1[0xb] = 0x39;
  }
  *(uint *)(puVar1 + 0xc) = param_2;
  LOCK();
  *(undefined4 *)((long)puVar1 + 100) = 1;
  UNLOCK();
  if (param_4 != 0) {
    lVar2 = FUN_0041c2c0(param_4,"../crypto/ec/ecx_key.c",0x2a);
    puVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_00511540;
  }
  lVar2 = FUN_00422240();
  puVar1[0xd] = lVar2;
  if (lVar2 != 0) {
    return puVar1;
  }
LAB_00511540:
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecx_key.c",0x34,"ossl_ecx_key_new");
  FUN_0051f8f0(0x10,0xc0100,0);
  FUN_0041ad60(puVar1,"../crypto/ec/ecx_key.c",0x35);
  return (undefined8 *)0x0;
}

