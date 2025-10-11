
undefined8 FUN_00604220(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_004a21f0();
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_004a8750();
    uVar1 = FUN_004a6000(param_2,puVar2 + 2,uVar3);
    *puVar2 = uVar1;
    uVar3 = FUN_00560c20(param_1,0xa7,0x10,puVar2);
    return uVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/pkcs7/pk7_attr.c",0x1a,"PKCS7_add_attrib_smimecap");
  FUN_0051f8f0(0x21,0xc0100,0);
  return 0;
}

