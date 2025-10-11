
bool FUN_004ec060(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  ulong local_28;
  long local_20;
  
  bVar5 = false;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_004ec0f8;
  lVar4 = thunk_FUN_0041cdd0(param_2,"use-cofactor-flag");
  if (lVar4 == 0) {
LAB_004ec0c1:
    lVar4 = thunk_FUN_0041cdd0(param_2,"include-public");
    if (lVar4 != 0) {
      local_28 = CONCAT44(local_28._4_4_,1);
      iVar2 = thunk_FUN_0041cf60(lVar4,&local_28);
      if (iVar2 == 0) {
        bVar5 = false;
        goto LAB_004ec0f8;
      }
      iVar2 = (int)local_28;
      uVar3 = FUN_004ee630(param_1);
      uVar1 = uVar3 | 2;
      if (iVar2 != 0) {
        uVar1 = uVar3 & 0xfffffffd;
      }
      FUN_004ee640(param_1,uVar1);
    }
    local_28 = CONCAT44(local_28._4_4_,0xffffffff);
    lVar4 = thunk_FUN_0041cdd0(param_2,"point-format");
    if (lVar4 != 0) {
      iVar2 = FUN_004ebfc0(lVar4,&local_28);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_backend.c",0x209,"ec_key_point_format_fromdata");
        FUN_0051f8f0(0x10,0x68,0);
        bVar5 = false;
        goto LAB_004ec0f8;
      }
      FUN_004ee660(param_1,local_28 & 0xffffffff);
    }
    bVar5 = true;
    lVar4 = thunk_FUN_0041cdd0(param_2,"group-check");
    if (lVar4 == 0) goto LAB_004ec0f8;
    local_28 = 0;
    if (*(int *)(lVar4 + 8) == 4) {
      local_28 = *(ulong *)(lVar4 + 0x10);
      if (local_28 != 0) {
LAB_004ec1ee:
        iVar2 = FUN_004eb160(param_1,local_28);
        bVar5 = iVar2 != 0;
        goto LAB_004ec0f8;
      }
    }
    else if (*(int *)(lVar4 + 8) == 6) {
      iVar2 = FUN_0041e310(lVar4,&local_28);
      if (iVar2 != 0) goto LAB_004ec1ee;
    }
  }
  else {
    iVar2 = thunk_FUN_0041cf60(lVar4,&local_28);
    if (iVar2 != 0) {
      iVar2 = FUN_004eb980(param_1,local_28 & 0xffffffff);
      if (iVar2 != 0) goto LAB_004ec0c1;
    }
  }
  bVar5 = false;
LAB_004ec0f8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

