
undefined8 * FUN_004ef460(undefined8 param_1,long param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_3 == (byte *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x23,"ossl_ec_group_new_ex");
    FUN_0051f8f0(0x10,0x6c,0);
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_3 + 8) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x27,"ossl_ec_group_new_ex");
    FUN_0051f8f0(0x10,0xc0101,0);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_0041aec0(0xb8,"../crypto/ec/ec_lib.c",0x2b);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x2d,"ossl_ec_group_new_ex");
    FUN_0051f8f0(0x10,0xc0100,0);
    return (undefined8 *)0x0;
  }
  puVar2[0x15] = param_1;
  if (param_2 != 0) {
    lVar3 = FUN_0041c2c0(param_2,"../crypto/ec/ec_lib.c",0x33);
    puVar2[0x16] = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x35,"ossl_ec_group_new_ex");
      FUN_0051f8f0(0x10,0xc0100,0);
      lVar3 = puVar2[2];
      goto LAB_004ef53d;
    }
  }
  *puVar2 = param_3;
  if ((*param_3 & 2) == 0) {
    lVar3 = FUN_004b7690();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_004ef53d;
    lVar3 = FUN_004b7690(lVar3);
    puVar2[3] = lVar3;
    if (lVar3 != 0) goto LAB_004ef4e5;
  }
  else {
LAB_004ef4e5:
    *(undefined4 *)((long)puVar2 + 0x24) = 0;
    *(undefined4 *)((long)puVar2 + 0x2c) = 4;
    iVar1 = (**(code **)(param_3 + 8))(puVar2);
    if (iVar1 != 0) {
      return puVar2;
    }
  }
  lVar3 = puVar2[2];
LAB_004ef53d:
  FUN_004b7fa0(lVar3);
  FUN_004b7fa0(puVar2[3]);
  FUN_0041ad60(puVar2[0x16],"../crypto/ec/ec_lib.c",0x4b);
  FUN_0041ad60(puVar2,"../crypto/ec/ec_lib.c",0x4c);
  return (undefined8 *)0x0;
}

