
undefined8 * FUN_00436100(int *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_0041ad90(0x20,"../crypto/stack/stack.c",0x30);
  if (puVar2 == (undefined8 *)0x0) {
LAB_004361c0:
    FUN_0051f420();
    FUN_0051f540("../crypto/stack/stack.c",0x4a,"OPENSSL_sk_dup");
    FUN_0051f8f0(0xf,0xc0100,0);
    FUN_004360b0(puVar2);
    return (undefined8 *)0x0;
  }
  if (param_1 == (int *)0x0) {
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
    *puVar2 = *(undefined8 *)param_1;
    puVar2[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 6);
    puVar2[2] = *(undefined8 *)(param_1 + 4);
    puVar2[3] = uVar1;
    if (*param_1 != 0) {
      lVar3 = FUN_0041ad90((long)param_1[5] << 3,"../crypto/stack/stack.c",0x44);
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        thunk_FUN_00713a50(lVar3,*(undefined8 *)(param_1 + 2),(long)*param_1 << 3);
        return puVar2;
      }
      goto LAB_004361c0;
    }
  }
  puVar2[1] = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  return puVar2;
}

