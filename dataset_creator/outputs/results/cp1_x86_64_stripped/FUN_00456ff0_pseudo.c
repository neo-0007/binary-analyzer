
long FUN_00456ff0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 code *param_5)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  lVar3 = FUN_005ae270();
  if (lVar3 != 0) {
    iVar2 = (*param_5)(param_1,&local_48);
    uVar1 = local_48;
    if (0 < iVar2) {
      uVar4 = FUN_004239c0(param_2);
      iVar2 = FUN_005af9b0(lVar3,uVar4,param_4,param_3,uVar1,iVar2);
      lVar5 = lVar3;
      if (iVar2 != 0) goto LAB_00457065;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x9d,"key_to_pubkey");
  FUN_0051f8f0(0x39,0xc0100,0);
  lVar5 = 0;
  FUN_005ae290(lVar3);
  FUN_0041ad60(local_48,"../providers/implementations/encode_decode/encode_key2any.c",0x9f);
LAB_00457065:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

