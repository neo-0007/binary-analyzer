
undefined4 FUN_00523a50(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 0x20) = 0;
  local_48 = 0;
  iVar1 = FUN_0040e590(uVar5);
  if (iVar1 == 0x198) {
    if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 5) {
      uVar5 = thunk_FUN_00541030(uVar5);
      uVar3 = FUN_004ee2a0(uVar5);
      lVar4 = FUN_004b2a70(uVar3);
      uVar3 = FUN_004ee2d0(uVar5);
      uVar5 = FUN_004ee3f0(uVar5);
      if (lVar4 != 0) {
        uVar5 = FUN_004f4df0(uVar3,uVar5,2,&local_48,lVar4);
        *(undefined8 *)(param_3 + 0x28) = uVar5;
        *(undefined8 *)(param_3 + 0x20) = local_48;
        FUN_004b2b50(lVar4);
        goto LAB_00523b3a;
      }
    }
  }
  else {
    if (iVar1 < 0x199) {
      if (iVar1 == 0x1c) {
LAB_00523af7:
        iVar1 = *(int *)(*(long *)(param_3 + 0x30) + 8);
        if (iVar1 == 2) {
          uVar5 = thunk_FUN_00410bd0(uVar5);
          uVar5 = FUN_004d60f0(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
        }
        else {
          uVar2 = 0;
          if (iVar1 != 5) goto LAB_00523ac3;
          uVar5 = thunk_FUN_00410bd0(uVar5);
          uVar5 = FUN_004d5900(uVar5,&local_48,0,1);
          *(undefined8 *)(param_3 + 0x28) = uVar5;
          *(undefined8 *)(param_3 + 0x20) = local_48;
        }
LAB_00523b3a:
        uVar2 = FUN_00521e40(param_1,param_2,param_3);
        FUN_0041ad60(local_48,"../crypto/evp/ctrl_params_translate.c",0x667);
        goto LAB_00523ac3;
      }
      if (iVar1 == 0x74) {
        if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2) {
          uVar5 = FUN_00410c70(uVar5);
          uVar5 = FUN_004d8d60(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
          goto LAB_00523b3a;
        }
        goto LAB_00523ac1;
      }
    }
    else if (iVar1 == 0x398) goto LAB_00523af7;
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x662,"get_payload_public_key");
    FUN_0051f8f0(6,0xe0,0);
  }
LAB_00523ac1:
  uVar2 = 0;
LAB_00523ac3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

