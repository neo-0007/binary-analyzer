
undefined8 * FUN_00510da0(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)FUN_0041aec0(0x70,"../crypto/ec/ecx_backend.c",0x6f);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecx_backend.c",0x72,"ossl_ecx_key_dup");
    FUN_0051f8f0(0x10,0xc0100,0);
    return (undefined8 *)0x0;
  }
  lVar4 = FUN_00422240();
  puVar3[0xd] = lVar4;
  if (lVar4 == 0) {
    FUN_0041ad60(puVar3,"../crypto/ec/ecx_backend.c",0x78);
    return (undefined8 *)0x0;
  }
  bVar1 = *(byte *)(param_1 + 2);
  *puVar3 = *param_1;
  *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) & 0xfe | bVar1 & 1;
  puVar3[0xb] = param_1[0xb];
  *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  LOCK();
  *(undefined4 *)((long)puVar3 + 100) = 1;
  UNLOCK();
  if (param_1[1] != 0) {
    lVar4 = FUN_0041c2c0(param_1[1],"../crypto/ec/ecx_backend.c",0x83);
    puVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_00510ec0;
  }
  if ((param_2 & 2) != 0) {
    uVar2 = *(undefined8 *)((long)param_1 + 0x19);
    *(undefined8 *)((long)puVar3 + 0x11) = *(undefined8 *)((long)param_1 + 0x11);
    *(undefined8 *)((long)puVar3 + 0x19) = uVar2;
    uVar2 = *(undefined8 *)((long)param_1 + 0x29);
    *(undefined8 *)((long)puVar3 + 0x21) = *(undefined8 *)((long)param_1 + 0x21);
    *(undefined8 *)((long)puVar3 + 0x29) = uVar2;
    uVar2 = *(undefined8 *)((long)param_1 + 0x39);
    *(undefined8 *)((long)puVar3 + 0x31) = *(undefined8 *)((long)param_1 + 0x31);
    *(undefined8 *)((long)puVar3 + 0x39) = uVar2;
    *(undefined8 *)((long)puVar3 + 0x41) = *(undefined8 *)((long)param_1 + 0x41);
    *(undefined1 *)((long)puVar3 + 0x49) = *(undefined1 *)((long)param_1 + 0x49);
  }
  if ((param_2 & 1) == 0) {
    return puVar3;
  }
  if (param_1[10] == 0) {
    return puVar3;
  }
  lVar4 = FUN_00511650(puVar3);
  if (lVar4 != 0) {
    thunk_FUN_00713a50(puVar3[10],param_1[10],puVar3[0xb]);
    return puVar3;
  }
LAB_00510ec0:
  FUN_00511590(puVar3);
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ecx_backend.c",0x96,"ossl_ecx_key_dup");
  FUN_0051f8f0(0x10,0xc0100,0);
  return (undefined8 *)0x0;
}

