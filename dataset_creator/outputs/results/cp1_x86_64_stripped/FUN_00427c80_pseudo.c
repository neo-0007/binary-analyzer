
undefined4 FUN_00427c80(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = param_4;
  iVar1 = FUN_004222a0();
  if (iVar1 == 0) {
    uVar5 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/property/property_string.c",0x92,"ossl_property_string");
    FUN_0051f8f0(0xf,0xc010f,0);
    goto LAB_00427d21;
  }
  puVar2 = (undefined8 *)FUN_00545b60(param_2,local_58);
  if ((puVar2 == (undefined8 *)0x0) && (param_3 != (int *)0x0)) {
    FUN_004222e0(param_1);
    iVar1 = FUN_004222c0(param_1);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/property/property_string.c",0x99,"ossl_property_string");
      FUN_0051f8f0(0xf,0xc0110,0);
      uVar5 = 0;
      goto LAB_00427d21;
    }
    puVar2 = (undefined8 *)FUN_00545b60(param_2,local_58);
    if (puVar2 == (undefined8 *)0x0) {
      lVar3 = thunk_FUN_007129d0(param_4);
      puVar2 = (undefined8 *)FUN_0041ad90(lVar3 + 0x10,"../crypto/property/property_string.c",0x7b);
      if (puVar2 == (undefined8 *)0x0) {
        uVar5 = 0;
        FUN_004222e0(param_1);
        goto LAB_00427d21;
      }
      uVar4 = thunk_FUN_00713a50((long)puVar2 + 0xc,param_4,lVar3 + 1);
      *puVar2 = uVar4;
      iVar1 = *param_3 + 1;
      *param_3 = iVar1;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        FUN_0041ad60(puVar2,"../crypto/property/property_string.c",0x82);
        FUN_004222e0(param_1);
        uVar5 = 0;
        goto LAB_00427d21;
      }
      FUN_005457f0(param_2,puVar2);
      iVar1 = FUN_00545d90(param_2);
      if (iVar1 != 0) {
        uVar5 = 0;
        FUN_0041ad60(puVar2,"../crypto/property/property_string.c",0x39);
        FUN_004222e0(param_1);
        goto LAB_00427d21;
      }
    }
    FUN_004222e0(param_1);
  }
  else {
    uVar5 = 0;
    FUN_004222e0(param_1);
    if (puVar2 == (undefined8 *)0x0) goto LAB_00427d21;
  }
  uVar5 = *(undefined4 *)(puVar2 + 1);
LAB_00427d21:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

