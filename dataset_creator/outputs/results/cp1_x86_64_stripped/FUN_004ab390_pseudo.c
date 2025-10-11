
undefined8 * FUN_004ab390(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)FUN_0041aec0(0x88,"../crypto/bio/bio_lib.c",0x52);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x55,"BIO_new_ex");
    FUN_0051f8f0(0x20,0xc0100,0);
    return (undefined8 *)0x0;
  }
  *puVar3 = param_1;
  puVar3[1] = param_2;
  *(undefined4 *)((long)puVar3 + 0x2c) = 1;
  LOCK();
  *(undefined4 *)(puVar3 + 0xb) = 1;
  UNLOCK();
  puVar1 = puVar3 + 0xe;
  iVar2 = FUN_004196b0(0xc,puVar3,puVar1);
  if (iVar2 != 0) {
    lVar4 = FUN_00422240();
    puVar3[0x10] = lVar4;
    if (lVar4 != 0) {
      if (*(code **)(param_2 + 0x48) != (code *)0x0) {
        iVar2 = (**(code **)(param_2 + 0x48))(puVar3);
        if (iVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/bio/bio_lib.c",0x69,"BIO_new_ex");
          FUN_0051f8f0(0x20,0xc0105,0);
          FUN_00419990(0xc,puVar3,puVar1);
          FUN_00422300(puVar3[0x10]);
          goto LAB_004ab489;
        }
        if (*(long *)(param_2 + 0x48) != 0) {
          return puVar3;
        }
      }
      *(undefined4 *)(puVar3 + 5) = 1;
      return puVar3;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",99,"BIO_new_ex");
    FUN_0051f8f0(0x20,0xc0100,0);
    FUN_00419990(0xc,puVar3,puVar1);
  }
LAB_004ab489:
  FUN_0041ad60(puVar3,"../crypto/bio/bio_lib.c",0x74);
  return (undefined8 *)0x0;
}

