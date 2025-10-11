
undefined4 FUN_005146f0(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long in_FS_OFFSET;
  char *local_80;
  undefined *local_78;
  char *local_70;
  long *local_68;
  long local_60;
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x36,"OSSL_DECODER_from_bio");
    FUN_0051f8f0(0x3c,0xc0102,0);
    goto LAB_00514925;
  }
  iVar1 = FUN_00513b40();
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x3b,"OSSL_DECODER_from_bio");
    FUN_0051f8f0(0x3c,0x66,
                 "No decoders were found. For standard decoders you need at least one of the default or base providers available. Did you forget to load them?"
                );
    uVar2 = 0;
    goto LAB_00514925;
  }
  lVar3 = FUN_0051e9f0();
  iVar1 = FUN_004abd40(param_2,0x85,0,0);
  if (iVar1 < 0) {
    uVar5 = FUN_005bf550();
    lVar6 = FUN_004ab550(uVar5);
    if (lVar6 == 0) goto LAB_00514960;
    local_60 = FUN_004ac2c0(lVar6,param_2);
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    local_68 = param_1;
    FUN_00549640(param_1 + 7);
    uVar2 = FUN_005141d0(0,&local_68);
    if ((local_48 & 2) == 0) goto LAB_00514799;
    FUN_00549320(param_1 + 7);
  }
  else {
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    local_68 = param_1;
    local_60 = param_2;
    FUN_00549640(param_1 + 7);
    uVar2 = FUN_005141d0(0,&local_68);
    if ((local_48 & 2) != 0) {
      FUN_00549320(param_1 + 7);
      goto LAB_00514925;
    }
    lVar6 = 0;
LAB_00514799:
    puVar8 = (undefined1 *)*param_1;
    puVar9 = (undefined1 *)param_1[1];
    if (puVar8 == (undefined1 *)0x0) {
      puVar7 = &DAT_0083e5c2;
      if (puVar9 == (undefined1 *)0x0) {
        local_70 = "";
        puVar8 = &DAT_0083e5c2;
        puVar9 = &DAT_0083e5c2;
        local_78 = &DAT_0083e5c2;
        local_80 = "";
      }
      else {
        local_78 = &DAT_0083e5c2;
        puVar8 = &DAT_0083e5c2;
        local_70 = "Input structure: ";
        local_80 = "";
      }
    }
    else if (puVar9 == (undefined1 *)0x0) {
      puVar7 = &DAT_0083e5c2;
      local_70 = "";
      puVar9 = &DAT_0083e5c2;
      local_78 = &DAT_0083e5c2;
      local_80 = "Input type: ";
    }
    else {
      puVar7 = &DAT_00801fb4;
      local_70 = "Input structure: ";
      local_78 = &DAT_0081d1a9;
      local_80 = "Input type: ";
    }
    lVar4 = FUN_0051e9f0();
    if (lVar4 == lVar3) {
LAB_005147f1:
      FUN_0051f420();
      FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x65,"OSSL_DECODER_from_bio");
      FUN_0051f8f0(0x3c,0x8010c,"No supported data to decode. %s%s%s%s%s%s",local_78,local_80,puVar8
                   ,puVar7,local_70,puVar9);
    }
    else {
      lVar3 = FUN_0051e920();
      if (lVar3 == 0) goto LAB_005147f1;
    }
    FUN_00549320(param_1 + 7);
    if (lVar6 == 0) {
LAB_00514960:
      uVar2 = 0;
      goto LAB_00514925;
    }
    uVar2 = 0;
  }
  FUN_004ac310(lVar6);
  FUN_004ab560(lVar6);
LAB_00514925:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

