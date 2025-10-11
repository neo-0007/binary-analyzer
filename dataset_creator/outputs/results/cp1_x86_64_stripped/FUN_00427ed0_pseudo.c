
undefined8 * FUN_00427ed0(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 *local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_00417730(param_2,3,&DAT_008ea790);
  if (puVar2 != (undefined8 *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = param_3;
    iVar1 = FUN_004222a0(*puVar2);
    if (iVar1 == 0) {
      FUN_0051f420();
      puVar2 = (undefined8 *)0x0;
      FUN_0051f540("../crypto/property/property_string.c",199,"ossl_property_str");
      FUN_0051f8f0(0xf,0xc010f,0);
    }
    else {
      uVar3 = puVar2[2];
      if (param_1 != 0) {
        uVar3 = puVar2[1];
      }
      FUN_00545c40(uVar3,FUN_00427c20,&local_38);
      FUN_004222e0(*puVar2);
      puVar2 = local_38;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

