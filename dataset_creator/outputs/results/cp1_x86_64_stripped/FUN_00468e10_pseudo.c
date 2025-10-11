
undefined8 FUN_00468e10(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_2c;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = thunk_FUN_0041cdd0(param_2,"pkcs5");
  if (lVar2 == 0) {
LAB_00468e63:
    lVar2 = thunk_FUN_0041cdd0(param_2,"pass");
    if (lVar2 != 0) {
      iVar1 = FUN_00468bd0(param_1 + 8,param_1 + 0x10,lVar2);
      if (iVar1 == 0) goto LAB_00468f50;
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"salt");
    if (lVar2 == 0) {
LAB_00468ec9:
      lVar2 = thunk_FUN_0041cdd0(param_2,"iter");
      if (lVar2 != 0) {
        iVar1 = FUN_0041d830(lVar2,&local_28);
        if (iVar1 == 0) goto LAB_00468f50;
        if (local_28 < (-(ulong)(*(int *)(param_1 + 0x48) == 0) & 0xfffffffffffffc19) + 1000) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0xd0,"kdf_pbkdf2_set_ctx_params"
                      );
          FUN_0051f8f0(0x39,0x7b,0);
          uVar3 = 0;
          goto LAB_00468f52;
        }
        *(ulong *)(param_1 + 0x28) = local_28;
      }
      uVar3 = 1;
      goto LAB_00468f52;
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (0xf < *(ulong *)(lVar2 + 0x18))) {
      iVar1 = FUN_00468bd0(param_1 + 0x18,param_1 + 0x20);
      if (iVar1 != 0) goto LAB_00468ec9;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kdfs/pbkdf2.c",0xc4,"kdf_pbkdf2_set_ctx_params");
      FUN_0051f8f0(0x39,0x70,0);
    }
  }
  else {
    iVar1 = thunk_FUN_0041cf60(lVar2,&local_2c);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x48) = (uint)(local_2c == 0);
      goto LAB_00468e63;
    }
  }
LAB_00468f50:
  uVar3 = 0;
LAB_00468f52:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

