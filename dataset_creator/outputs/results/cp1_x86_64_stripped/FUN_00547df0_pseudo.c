
undefined8 *
FUN_00547df0(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_0041aec0(0x38,"../crypto/param_build.c",0x37);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/param_build.c",0x3a,"param_push");
    FUN_0051f8f0(0xf,0xc0100,0);
  }
  else {
    *(undefined4 *)(puVar2 + 1) = param_5;
    *puVar2 = param_2;
    puVar2[2] = (long)param_3;
    lVar3 = FUN_0041e570(param_4);
    *(int *)((long)puVar2 + 0xc) = param_6;
    puVar2[3] = lVar3;
    if (param_6 == 0) {
      *param_1 = *param_1 + lVar3;
      iVar1 = FUN_00435f80(param_1[2],puVar2);
    }
    else {
      param_1[1] = param_1[1] + lVar3;
      iVar1 = FUN_00435f80(param_1[2],puVar2);
    }
    if (iVar1 < 1) {
      FUN_0041ad60(puVar2,"../crypto/param_build.c",0x46);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

