
uint FUN_00466d00(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = thunk_FUN_0041cdd0(param_2,"mode");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) == 4) {
      iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_ONLY");
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 8) = 1;
        }
        else {
          iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar3 + 0x10),"EXPAND_ONLY");
          if (iVar1 != 0) {
            FUN_0051f420();
            uVar4 = 0xd1;
            goto LAB_00466ed1;
          }
          *(undefined4 *)(param_1 + 8) = 2;
        }
      }
    }
    else {
      iVar1 = thunk_FUN_0041cf60(lVar3,&local_24);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/hkdf.c",0xdd,"hkdf_common_set_ctx_params");
        FUN_0051f8f0(0x39,0x7d,0);
        uVar2 = 0;
        goto LAB_00466e20;
      }
      if (2 < local_24) {
        FUN_0051f420();
        uVar4 = 0xd8;
LAB_00466ed1:
        uVar2 = 0;
        FUN_0051f540("../providers/implementations/kdfs/hkdf.c",uVar4,"hkdf_common_set_ctx_params");
        FUN_0051f8f0(0x39,0x7d,0);
        goto LAB_00466e20;
      }
      *(uint *)(param_1 + 8) = local_24;
    }
  }
  lVar3 = thunk_FUN_0041cdd0(param_2,"key");
  if (lVar3 != 0) {
    FUN_0041aef0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 "../providers/implementations/kdfs/hkdf.c",0xe3);
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar2 = FUN_0041e150(lVar3,param_1 + 0x38,0,param_1 + 0x40);
    if (uVar2 == 0) goto LAB_00466e20;
  }
  uVar2 = 1;
  lVar3 = thunk_FUN_0041cdd0(param_2,"salt");
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),"../providers/implementations/kdfs/hkdf.c",0xec);
    *(undefined8 *)(param_1 + 0x28) = 0;
    iVar1 = FUN_0041e150(lVar3,param_1 + 0x28,0,param_1 + 0x30);
    uVar2 = (uint)(iVar1 != 0);
  }
LAB_00466e20:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

