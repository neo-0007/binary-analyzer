
undefined4 FUN_00424dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((DAT_0093fd40 != 0) || (DAT_0093fd40 = FUN_00436420(FUN_00424be0), DAT_0093fd40 != 0)) &&
     ((DAT_0093fd38 != 0 || (DAT_0093fd38 = FUN_00436420(FUN_00424c30), DAT_0093fd38 != 0)))) {
    puVar3 = (undefined4 *)FUN_0041ad90(0xc,"../crypto/objects/obj_xref.c",0x6a);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/objects/obj_xref.c",0x6b,"OBJ_add_sigid");
      FUN_0051f8f0(8,0xc0100,0);
    }
    else {
      *puVar3 = param_1;
      lVar1 = DAT_0093fd40;
      puVar3[1] = param_2;
      puVar3[2] = param_3;
      iVar2 = FUN_00435f80(lVar1,puVar3);
      if (iVar2 == 0) {
        FUN_0041ad60(puVar3,"../crypto/objects/obj_xref.c",0x73);
        return 0;
      }
      iVar2 = FUN_00435f80(DAT_0093fd38,puVar3);
      if (iVar2 != 0) {
        FUN_00436510(DAT_0093fd40);
        FUN_00436510(DAT_0093fd38);
        return 1;
      }
    }
  }
  return 0;
}

